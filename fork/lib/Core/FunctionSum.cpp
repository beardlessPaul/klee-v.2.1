#include "FunctionSum.h"

using namespace klee;

FunctionSummaries::FunctionSummaries() :
  completed(false),
  countState(1){
}

FunctionSummaries::FunctionSummaries(KFunction *kf,
                                     ExecutionState &state) :
    kf(kf),
    completed(false),
    countState(1){
  startState = new ExecutionState(state);
}

void FunctionSummaries::addConstraint(ref<Expr> e, 
                                      std::uint32_t id){
  ConstraintManager c(constraints[id]);
  c.addConstraint(e);
}

void FunctionSummaries::addState(ExecutionState &state){
  countState--;
  if (countState == 0){
    complete();
  }

  auto *newState = new ExecutionState(state);
  newState->pc = NULL;
  newState->prevPC = NULL;
  newState->stack.clear();

  newState->depth = newState->depth - startState->depth;
  newState->steppedInstructions = newState->steppedInstructions - 
                                  startState->steppedInstructions;

  ConstraintSet c(constraints[state.id]);
  newState->constraints = c;

  newState->id = state.id;

  newState->coveredNew = startState->coveredNew == true &&
                         newState->coveredNew == true ? 
                         false : newState->coveredNew;

  for (auto it = startState->coveredLines.begin();
       it != startState->coveredLines.end(); ++it){
    if (newState->coveredLines.find(it->first) != 
        newState->coveredLines.end())
        newState->coveredLines.erase(it->first);
  }

  for (auto it = startState->arrayNames.begin();
       it != startState->arrayNames.end(); ++it){
    if (newState->arrayNames.find(*it) !=
      newState->arrayNames.end())
        newState->arrayNames.erase(*it);
  }

  for (auto it1 = startState->symbolics.begin();
       it1 != startState->symbolics.end(); ++it1){
    auto it2 = newState->symbolics.begin();
    for (; it2 != newState->symbolics.end(); ++it2){
      if ((*it1).first == (*it2).first)
        break;
    }
    if (it2 != newState->symbolics.end())
      newState->symbolics.erase(it2);
  }

  states.push_back(newState);
  // for future: processTree->attach(current.ptreeNode, falseState, trueState);
}

std::vector<ExecutionState *> FunctionSummaries::recoveryState
                                        (ExecutionState &state,
                                        std::unique_ptr<klee::PTree> &processTree){
  std::vector<ExecutionState *> result;

  for (auto it = states.begin(); it != states.end(); ++it){
    auto *newState = new ExecutionState(state);
    newState->depth = state.depth + (*it)->depth;
    newState->steppedInstructions = state.steppedInstructions 
                                    + (*it)->steppedInstructions;
    newState->coveredNew =  (*it)->coveredNew;
    newState->coveredLines.insert((*it)->coveredLines.begin(),
                                  (*it)->coveredLines.end());
    newState->arrayNames.insert((*it)->arrayNames.begin(),
                                  (*it)->arrayNames.end());

    for (auto itS = (*it)->symbolics.begin();
         itS != (*it)->symbolics.end(); ++itS)
      newState->symbolics.push_back(*itS);

    newState->setID();

    BranchType reason;
    processTree->attach(state.ptreeNode, newState, &state, reason);
    result.push_back(newState);
  }
  return result;
}

void FunctionSummaries::complete(){
  completed = true;
}

// Summaries
Summaries::Summaries(){
}

void Summaries::addFunction(FunctionSummaries *func){
  listFunctionSummaries.push_back(func);
}

FunctionSummaries * 
Summaries::searchFunction(KFunction *kf){
  for (auto it = listFunctionSummaries.begin();
       it != listFunctionSummaries.end(); ++it){
    if ((*it)->kf == kf)
    return *it;
  }
  return NULL;
}

std::vector<FunctionSummaries *>
Summaries::searchIntersectionFunction(stack_ty stack){
  std::vector<FunctionSummaries *> result;

  for (auto itF = listFunctionSummaries.begin();
  itF != listFunctionSummaries.end(); ++itF){
    for (auto itS = stack.begin(); itS != stack.end(); ++itS)
      if ((*itF)->kf == (*itS).kf){
        result.push_back(*itF);
        break;
      }
  }
  return result;
}

void Summaries::fork(std::uint32_t id_true, 
                     std::uint32_t id_false,
                     stack_ty stack){
  
  std::vector<FunctionSummaries *> func_sum = 
    searchIntersectionFunction(stack);
  for (auto it = func_sum.begin(); it != func_sum.end(); ++it){
    (*it)->countState++;

    if ((*it)->constraints.find(id_true) != (*it)->constraints.end())
        {
          ConstraintSet c((*it)->constraints[id_true]);
          (*it)->constraints[id_false] = c;
        }
  }
}
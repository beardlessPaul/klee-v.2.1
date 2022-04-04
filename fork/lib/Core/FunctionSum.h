#include <vector>
#include <algorithm>

#include "ExecutionState.h"
#include "AddressSpace.h"
#include "PTree.h"
#include "klee/Expr/Constraints.h"
#include "klee/Module/KModule.h"



namespace klee {
  class ExecutionState;
  class KModule;
  class PTree;
  struct KFunction;

class FunctionSummaries{
    friend class Summaries;
public:
  FunctionSummaries();
  FunctionSummaries(KFunction *kf,
                      ExecutionState &state);

  bool completed;
private:
  KFunction *kf;
  std::map <std::uint32_t, ConstraintSet> constraints;
  std::vector<ExecutionState *> states;
  ExecutionState *startState;
  std::uint32_t countState;


public:
  void addState(ExecutionState &state);
  void complete();
  void addConstraint(ref<Expr> e, std::uint32_t id);
  std::vector<ExecutionState *> recoveryState(ExecutionState &state,
                            std::unique_ptr<klee::PTree> &processTree);
};

class Summaries{
public:
  Summaries();

private:
  std::vector<FunctionSummaries *> listFunctionSummaries;

public:
  using stack_ty = std::vector<StackFrame>;

  void addFunction(FunctionSummaries *func);
  FunctionSummaries * searchFunction(KFunction *kf);
  std::vector<FunctionSummaries *> 
        searchIntersectionFunction(stack_ty stack);
  void fork(std::uint32_t id_true, std::uint32_t id_false, stack_ty stack);
};

}
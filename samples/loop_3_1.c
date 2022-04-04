#include "klee/klee.h"

#define NULL ((void *)0)
#define VOS_ERROR 1
#define VOS_OK 0

typedef struct {
  double utility;
  double schUtility;
  float diffPcnt;
  float bwCnt;
  unsigned char utilityGtSchUtility;
} AisAutoEcnLogData;

typedef struct {
  int curState;
  int event;
  void (*eventActFun)(void *, int *);
  int nextState;
} AisDynEcnV2FsmActTable;

typedef struct {
  unsigned int kmax;
  unsigned int kmin;
  unsigned int dropProb;
} AisEcnCfgInfo;

typedef struct {
  unsigned long throughput;
  unsigned long portThroughput;
  unsigned long emaThroughput;
  unsigned int queueDepth;
  unsigned int emaQueueDepth;
  unsigned long ecnPkts;
  unsigned int ecnPps;
  double ecnPcnt;
  double emaEcnPcnt;
  AisEcnCfgInfo tlmEcnCfg;
} AisDynEcnV2NetworkData;

typedef struct {
  unsigned long preTimestamp;
  unsigned long prePortPassedBytes;
  unsigned long preQueuePassedBytes;
  float preQueueSchWeight;
} AisQueuePortBytesData;

typedef struct {
  double adjustPcnt;
  double stepPcnt;
} ECNAdjustInfo;

typedef struct {
  AisDynEcnV2FsmActTable actTable[32];
  int curStates;
  int preStates;
  int event;
  int size;
  int statesTimes;
  int preStatesTimes;
} Fsm;

typedef struct {
  unsigned int ipv4;
} IpAddr;

typedef struct {
  IpAddr ipAddr;
  unsigned int ifIndex;
  unsigned int queueId;
} AisAutoEcnDataKey;

typedef struct {
  volatile short cnt;
} rte_atomic16_t;

typedef struct {
  volatile int cnt;
} rte_atomic32_t;

typedef struct {
  volatile long cnt;
} rte_atomic64_t;

struct __flatcc_builder_buffer_frame {
  unsigned int identifier;
  int mark;
  unsigned int vs_end;
  unsigned int nest_id;
  unsigned short flags;
  unsigned short block_align;
};

struct __flatcc_builder_table_frame {
  unsigned int vs_end;
  unsigned int pl_end;
  unsigned int vt_hash;
  unsigned short id_end;
};

struct __flatcc_builder_vector_frame {
  unsigned int elem_size;
  unsigned int count;
  unsigned int max_count;
};

struct __flatcc_builder_frame {
  unsigned int ds_first;
  unsigned int type_limit;
  unsigned int ds_offset;
  unsigned short align;
  unsigned short type;
  union {
    struct __flatcc_builder_table_frame table;
    struct __flatcc_builder_vector_frame vector;
    struct __flatcc_builder_buffer_frame buffer;
  };
};

struct avl3_node {
  struct avl3_node *pstParent;
  struct avl3_node *pstLeft;
  struct avl3_node *pstRight;
  short sLHeight;
  short sRHeight;
};

typedef struct __attribute__((__packed__)) {
  AisAutoEcnDataKey key;
  struct avl3_node ipPortQueueIdNode;
  AisDynEcnV2NetworkData curData;
  AisDynEcnV2NetworkData preData;
  float portBW;
  unsigned int throughputEmaNum;
  unsigned long refThroughput;
  unsigned char isThroughputUp;
  char wetdt_padding_0[7];
  unsigned long refQueueDepth;
  unsigned int queueDepthEmaNum;
  unsigned char isLatencyUp;
  char wetdt_padding_1[3];
  double throughputChangePcnt;
  double queueDepthChangePcnt;
  unsigned int ecnEmaNum;
  char wetdt_padding_2[4];
  double refEcnPcnt;
  double ecnPcntChangePcnt;
  unsigned char isEcnPpsUp;
  unsigned char isEcnPcntUp;
  unsigned char bwOverflow;
  char wetdt_padding_3[5];
  double bwUpSensitivityPcnt;
  double bwDownSensitivityPcnt;
  double ecnPcntUpSensitivityPcnt;
  double ecnPcntDownSensitivityPcnt;
  unsigned char predictStage;
  char wetdt_padding_4[3];
  AisEcnCfgInfo preOutputEcnCfgInfo;
  AisEcnCfgInfo curOutputEcnCfgInfo;
  AisEcnCfgInfo fsmEcnDecision;
  AisEcnCfgInfo lastProbeBwEcn;
  char wetdt_padding_5[4];
  ECNAdjustInfo kmaxUpAdjustInfo;
  ECNAdjustInfo kmaxDownAdjustInfo;
  ECNAdjustInfo kminUpAdjustInfo;
  ECNAdjustInfo kminDownAdjustInfo;
  unsigned char probUpExp;
  unsigned char probDownExp;
  char wetdt_padding_6[2];
  AisEcnCfgInfo curAiOutputEcn;
  AisEcnCfgInfo preAiOutputEcn;
  unsigned int adjustStepLen;
  unsigned char isBwCompensation;
  char wetdt_padding_7[7];
  Fsm ecnFsm;
  unsigned int *dropProList;
  unsigned char fsmCon2Flag;
  unsigned char fsmCon3Flag;
  unsigned char acceCoeff;
  char wetdt_padding_8[1];
  float schWeight;
  unsigned int kmaxMinThreshold;
  unsigned char test;
  unsigned char hasTcpFlow;
  unsigned char continueFlow;
  char wetdt_padding_9[1];
  AisAutoEcnLogData logData;
  unsigned int queueBytesCounter;
  char wetdt_padding_10[4];
  AisQueuePortBytesData preQueuePortBytesData;
} AisDynEcnV2Data;

void AIS_SyncFSMECN(AisDynEcnV2Data *stateParam)
{
    (void)memcpy(&stateParam->fsmEcnDecision, 
                       &stateParam->curOutputEcnCfgInfo, sizeof(AisEcnCfgInfo));

    return;
}

unsigned int AIS_ECNOutput(AisDynEcnV2Data *stateParam)
{
    (void)memcpy(&stateParam->preOutputEcnCfgInfo, 
                       &stateParam->curOutputEcnCfgInfo, sizeof(AisEcnCfgInfo));

    (void)memcpy(&stateParam->curOutputEcnCfgInfo, 
                       &stateParam->fsmEcnDecision, sizeof(AisEcnCfgInfo));

    return VOS_OK;
}

unsigned int AIS_DynEcnV2FsmEventHandle(AisDynEcnV2Data *stateParam) {
    Fsm *pFsm = &(stateParam->ecnFsm);
    AisDynEcnV2FsmActTable *actTable = pFsm->actTable;

    void (*eventActFun)(void*, int*) = NULL;
    int curState = pFsm->curStates;
    int nextState = 0;

    AIS_SyncFSMECN(stateParam);

    int i;
    int flag = 0;
    for (i = 0; i < pFsm->size; i++) {
        if (pFsm->event == actTable[i].event && curState == actTable[i].curState) {
            flag = 1;
            eventActFun = actTable[i].eventActFun;
            nextState = actTable[i].nextState;
            break;
        }
    }
    if (flag != 1) {
        return VOS_ERROR;
    }

    return AIS_ECNOutput(stateParam);
}

int main()
{
	int r;
	AisDynEcnV2Data struct1;
	klee_make_symbolic(&struct1, sizeof(struct1), "struct1");
	r = AIS_DynEcnV2FsmEventHandle(&struct1);
	return r;
}
#include "klee/klee.h"

typedef struct __attribute__((__packed__)) {
  unsigned short type;
  unsigned short len;
  void *value;
} QosDynTlv;

struct __attribute__((__packed__)) SLL_NODE {
  struct SLL_NODE *pNext;
  unsigned long uiHandle;
};

struct __attribute__((__packed__)) SLL {
  struct SLL_NODE Head;
  struct SLL_NODE *Tail;
  unsigned int uiCount;
  char wetdt_padding_0[4];
};

struct __attribute__((__packed__)) SYS_tagSysTime {
  unsigned short usYear;
  unsigned char ucMonth;
  unsigned char ucDate;
  unsigned char ucHour;
  unsigned char ucMinute;
  unsigned char ucSecond;
  unsigned char ucWeek;
  unsigned int uiMillSec;
};

struct __attribute__((__packed__)) tagVosCpuTick {
  unsigned int uiLow;
  unsigned int uiHigh;
};

struct __attribute__((__packed__)) tagVosSystm {
  unsigned short usYear;
  unsigned char ucMonth;
  unsigned char ucDate;
  unsigned char ucHour;
  unsigned char ucMinute;
  unsigned char ucSecond;
  unsigned char ucWeek;
  unsigned int uiMillSec;
};

struct __attribute__((__packed__)) tagVrpTLVHead {
  unsigned short usTLVType;
  unsigned short usTLVLen;
};

struct __attribute__((__packed__)) tagTLV_FEII_PATH {
  struct tagVrpTLVHead stTlvHeader;
  unsigned int uiPathId;
  unsigned int uiTableNum;
};

typedef struct
{
	unsigned short usTLVType;
	unsigned short usTLVLen;
} FEII_TLV_HEADER_S;

unsigned int FEI_Blackbox(unsigned int uiMod, unsigned int uiTbl, unsigned int uiEvent, unsigned char *pucMsg, unsigned int uiMsgLen, void *pThis) {
  unsigned int FEI_Blackbox;
  klee_make_symbolic(&FEI_Blackbox, sizeof(FEI_Blackbox), "FEI_Blackbox");
  return FEI_Blackbox;
}

void *FEI_CreatePeriodTimer(unsigned int pInstance, unsigned int uiTimeValue, unsigned int uiTimerType, void *pParam, unsigned int uiflags, void *pThis) {
  void *FEI_CreatePeriodTimer;
  FEI_CreatePeriodTimer = NULL;
  return FEI_CreatePeriodTimer;
}

unsigned int FEI_DBG_GetDebugSwitch(unsigned int uiSwitchId, unsigned int uiInstanceId1, unsigned int uiInstanceId2, unsigned int uiInstanceId3, unsigned int uiInstanceId4, unsigned int uiInstanceId5, char *pCondition, void *pThis) {
  unsigned int FEI_DBG_GetDebugSwitch;
  klee_make_symbolic(&FEI_DBG_GetDebugSwitch, sizeof(FEI_DBG_GetDebugSwitch), "FEI_DBG_GetDebugSwitch");
  return FEI_DBG_GetDebugSwitch;
}

unsigned int FEI_DBG_SetDebugSwitch(unsigned int uiSwitchId, unsigned int uiSwitchStat, void *pThis) {
  unsigned int FEI_DBG_SetDebugSwitch;
  klee_make_symbolic(&FEI_DBG_SetDebugSwitch, sizeof(FEI_DBG_SetDebugSwitch), "FEI_DBG_SetDebugSwitch");
  return FEI_DBG_SetDebugSwitch;
}

unsigned int FEI_DeleteTimer(unsigned int pInstance, unsigned int uiTimerType, void *pTimer, void *pThis) {
  unsigned int FEI_DeleteTimer;
  klee_make_symbolic(&FEI_DeleteTimer, sizeof(FEI_DeleteTimer), "FEI_DeleteTimer");
  return FEI_DeleteTimer;
}

unsigned int FEI_LOG_AddInhibitNode(unsigned int uiInfoId, void *pThis) {
  unsigned int FEI_LOG_AddInhibitNode;
  klee_make_symbolic(&FEI_LOG_AddInhibitNode, sizeof(FEI_LOG_AddInhibitNode), "FEI_LOG_AddInhibitNode");
  return FEI_LOG_AddInhibitNode;
}

unsigned int FEI_LOG_IsInhibit(unsigned int uiEventLogId, void **ppNode, void *pThis) {
  unsigned int FEI_LOG_IsInhibit;
  klee_make_symbolic(&FEI_LOG_IsInhibit, sizeof(FEI_LOG_IsInhibit), "FEI_LOG_IsInhibit");
  return FEI_LOG_IsInhibit;
}

void FEI_LOG_UpdateInhibitList(void *pThis) {
  return;
}

unsigned int FEI_TREEM_FindFirstTlv(struct tagTLV_FEII_PATH *pstPath, struct tagVrpTLVHead **ppstFristTlv, void *pThis) {
  unsigned int FEI_TREEM_FindFirstTlv;
  klee_make_symbolic(&FEI_TREEM_FindFirstTlv, sizeof(FEI_TREEM_FindFirstTlv), "FEI_TREEM_FindFirstTlv");
  return FEI_TREEM_FindFirstTlv;
}

unsigned int FEI_TREEM_FindNextTlv(struct tagTLV_FEII_PATH *pstPath, struct tagVrpTLVHead *pstCurrentTlv, struct tagVrpTLVHead **ppstNextTlv, void *pThis) {
  unsigned int FEI_TREEM_FindNextTlv;
  klee_make_symbolic(&FEI_TREEM_FindNextTlv, sizeof(FEI_TREEM_FindNextTlv), "FEI_TREEM_FindNextTlv");
  return FEI_TREEM_FindNextTlv;
}

void *FEI_UTIL_MALLOC(unsigned int uiSize, unsigned int uiMid, char *pcFile, unsigned int uiLine, void *pThis) {
  void *FEI_UTIL_MALLOC;
  FEI_UTIL_MALLOC = NULL;
  return FEI_UTIL_MALLOC;
}

void *QOS_SLL_Add(struct SLL *list, const void *data, unsigned int len) {
  void *QOS_SLL_Add;
  QOS_SLL_Add = NULL;
  return QOS_SLL_Add;
}

void QOS_SLL_Del(struct SLL *list, void *userData) {
  return;
}

void QOS_SLL_Destroy(struct SLL *list) {
  return;
}

void *QOS_SLL_Find(const struct SLL *list, unsigned int cmpFunc, const void *cmdKey) {
  void *QOS_SLL_Find;
  QOS_SLL_Find = NULL;
  return QOS_SLL_Find;
}

unsigned int QOS_SLL_GetNext(const struct SLL *list, void **nodeWalk, void **userData) {
  unsigned int QOS_SLL_GetNext;
  klee_make_symbolic(&QOS_SLL_GetNext, sizeof(QOS_SLL_GetNext), "QOS_SLL_GetNext");
  return QOS_SLL_GetNext;
}

void QOS_SLL_Init(struct SLL *list) {
  return;
}

unsigned int SSP_Debug(unsigned int hAppCid, unsigned int uiSwitchId, const char *pcCondtion, unsigned int uiInfoId, const char *pcFmt) {
  unsigned int SSP_Debug;
  klee_make_symbolic(&SSP_Debug, sizeof(SSP_Debug), "SSP_Debug");
  return SSP_Debug;
}

unsigned int SSP_DiagLog(unsigned int hAppCid, unsigned int uiInfoId, const char *pcFmt) {
  unsigned int SSP_DiagLog;
  klee_make_symbolic(&SSP_DiagLog, sizeof(SSP_DiagLog), "SSP_DiagLog");
  return SSP_DiagLog;
}

unsigned int VOS_CpuTick2Ms(struct tagVosCpuTick *pstCputick, unsigned int *puiMilliSecsHigh, unsigned int *puiMilliSecsLow) {
  unsigned int VOS_CpuTick2Ms;
  klee_make_symbolic(&VOS_CpuTick2Ms, sizeof(VOS_CpuTick2Ms), "VOS_CpuTick2Ms");
  return VOS_CpuTick2Ms;
}

void VOS_GetCpuTick(unsigned int *puiLow, unsigned int *puiHigh) {
  return;
}

unsigned int VOS_StrLen(const char *pscStr) {
  unsigned int VOS_StrLen;
  klee_make_symbolic(&VOS_StrLen, sizeof(VOS_StrLen), "VOS_StrLen");
  return VOS_StrLen;
}

char *VOS_StrStr(const char *pscStr1, const char *pscStr2) {
  char *VOS_StrStr;
  VOS_StrStr = malloc(sizeof (char));
  klee_make_symbolic(VOS_StrStr, sizeof (char), "VOS_StrStr[0]");
  return VOS_StrStr;
}

unsigned int VOS_SystimeSecSince1970(struct tagVosSystm *pstSystime, unsigned int *puiRetSecHigh, unsigned int *puiRetSecLow) {
  unsigned int VOS_SystimeSecSince1970;
  klee_make_symbolic(&VOS_SystimeSecSince1970, sizeof(VOS_SystimeSecSince1970), "VOS_SystimeSecSince1970");
  return VOS_SystimeSecSince1970;
}

void VRP_Assert(const char *pFileName, unsigned int uiLine, char *pcLog) {
  return;
}

unsigned int VRP_Free_F(void *pAddr, char *pcFile, unsigned int uiLine) {
  unsigned int VRP_Free_F;
  klee_make_symbolic(&VRP_Free_F, sizeof(VRP_Free_F), "VRP_Free_F");
  return VRP_Free_F;
}

unsigned int VRP_Local_SystimeGet(struct SYS_tagSysTime *pstSysTime, unsigned int *puiIsDst) {
  unsigned int VRP_Local_SystimeGet;
  klee_make_symbolic(&VRP_Local_SystimeGet, sizeof(VRP_Local_SystimeGet), "VRP_Local_SystimeGet");
  return VRP_Local_SystimeGet;
}

int memcpy_s(void *dest, unsigned long destMax, const void *src, unsigned long count) {
  int memcpy_s;
  klee_make_symbolic(&memcpy_s, sizeof(memcpy_s), "memcpy_s");
  return memcpy_s;
}

int memset_s(void *dest, unsigned long destMax, int c, unsigned long count) {
  int memset_s;
  klee_make_symbolic(&memset_s, sizeof(memset_s), "memset_s");
  return memset_s;
}

int snprintf_truncated_s(char *strDest, unsigned long destMax, const char *format) {
  int snprintf_truncated_s;
  klee_make_symbolic(&snprintf_truncated_s, sizeof(snprintf_truncated_s), "snprintf_truncated_s");
  return snprintf_truncated_s;
}

int strcpy_s(char *strDest, unsigned long destMax, const char *strSrc) {
  int strcpy_s;
  klee_make_symbolic(&strcpy_s, sizeof(strcpy_s), "strcpy_s");
  return strcpy_s;
}

int vsnprintf_truncated_s(char *strDest, unsigned long destMax, const char *format, unsigned int argList) {
  int vsnprintf_truncated_s;
  klee_make_symbolic(&vsnprintf_truncated_s, sizeof(vsnprintf_truncated_s), "vsnprintf_truncated_s");
  return vsnprintf_truncated_s;
}

unsigned int QOS_JoinTlvs(void *buff, unsigned int buffLen, const QosDynTlv dynTlv[0], unsigned int tlvNum, unsigned int *outLen)
{
    *outLen = 0;
    for (unsigned int i = 0; i < tlvNum; i++) {
        unsigned int groupLen = sizeof(FEII_TLV_HEADER_S) + dynTlv[i].len;
        if (*outLen + groupLen > buffLen) {
            return 0;
        }
        FEII_TLV_HEADER_S *tlv = (FEII_TLV_HEADER_S *)((unsigned char *)buff + *outLen);
        if (tlv->usTLVType > dynTlv[i].type) tlv->usTLVType = dynTlv[i].type;
        if (tlv->usTLVLen > dynTlv[i].len) tlv->usTLVLen = dynTlv[i].len;
        int ret = memcpy_s(tlv + 1, buffLen - *outLen - sizeof(*tlv), dynTlv[i].value, dynTlv[i].len);
        if (ret != 1) {
            return 0;
        }
        *outLen += groupLen;
    }
	if (*outLen > 1024) {return 1;} else {return 0;};
}

int main() {
  // setup for buff {
  char buff[4096];
  klee_make_symbolic(&buff, sizeof(buff), "buff");
  // }

  // setup for buffLen {
  unsigned int buffLen;
  //buffLen = 4096;
  klee_make_symbolic(&buffLen, sizeof(buffLen), "buffLen");
  // }

  // setup for dynTlv {
  QosDynTlv dynTlv[6];
  klee_make_symbolic(&dynTlv, sizeof(dynTlv), "dynTlv");
  * (void **) &dynTlv[0].value = NULL;
  * (void **) &dynTlv[1].value = NULL;
  * (void **) &dynTlv[2].value = NULL;
  * (void **) &dynTlv[3].value = NULL;
  * (void **) &dynTlv[4].value = NULL;
  * (void **) &dynTlv[5].value = NULL;
  // }

  // setup for tlvNum {
  unsigned int tlvNum;
  //tlvNum = 6;
  klee_make_symbolic(&tlvNum, sizeof(tlvNum), "tlvNum");
  // }

  // setup for outLen {
  unsigned int *outLen;
  outLen = malloc(sizeof (unsigned int));
  klee_make_symbolic(outLen, sizeof (unsigned int), "outLen[0]");
  // }

  unsigned int res;
  res = QOS_JoinTlvs(buff, buffLen, dynTlv, tlvNum, outLen);
  unsigned int RET;
  klee_make_symbolic(&RET, sizeof(RET), "$RET");
  klee_assume(RET == res);
  return 0;
}

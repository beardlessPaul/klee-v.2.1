#include "klee/klee.h"

#define FID_AIS_AIECNSTATEDYN_QUEUEID 0x0001
#define FID_AIS_AIECNSTATEDYN_IFINDEX 0x000b
#define NULL ((void *)0)
#define VOS_ERROR 1
#define VOS_OK 0

typedef struct {
  unsigned char queueId;
  unsigned char ecnDiscPerc;
  char reserved[2];
  unsigned int ecnMin;
  unsigned int ecnMax;
  char ecnTag[16];
  char modelTime[32];
  char ifName[64];
  char modelPath[32];
  char modelVer[16];
  unsigned int ifIndex;
} CLASS_AIS_AIECNSTATEDYN_S;

struct __attribute__((__packed__)) tagVmeSmpMsgInfo {
  unsigned char *pOrigMsg;
  unsigned short usMsgType;
  unsigned short usBlockNum;
  unsigned char *pRspMsg;
  unsigned int *pCurRspMsgPos;
  unsigned int pCurBlock[1024];
  unsigned char *pCfgHeadBlock;
  unsigned int uiClassId;
  unsigned short usOpCode;
  unsigned short usOpSeq;
  unsigned int *pRecordData;
  unsigned int *pOptionData;
  unsigned int uiQueryNum;
  unsigned int bIsMyMsg;
};

typedef struct tagTlvAppCfgiTblFldCondItem {
    unsigned char  ucFieldID;       /**< 字段ID */
    unsigned char  ucFieldCond;     /**< 字段条件 */
    unsigned short usFieldLen;      /**< 字段长度 */
}TLV_APPCFGI_TBL_FLD_COND_ITEM_S;

typedef struct tagCmfCondAndValue {
    TLV_APPCFGI_TBL_FLD_COND_ITEM_S cond;
    void *pvalue;
}CmfCondAndValType;

CmfCondAndValType g_cmfStCond[1024] = {{0}};

unsigned int AIS_AppCfgQryGetQueueId(void *pOutData, TLV_APPCFGI_TBL_FLD_COND_ITEM_S *pstTblFldCondItem, struct tagVmeSmpMsgInfo *pstMsgInfo) {
    unsigned int i;
    void *pFieldValue = NULL;
    unsigned char ucCondNum;
    CLASS_AIS_AIECNSTATEDYN_S *aiEcnState = (CLASS_AIS_AIECNSTATEDYN_S*)pOutData;
    ucCondNum = *(pstMsgInfo->pCurBlock);
	
    for (i = 0; i < ucCondNum; i++) {
		pFieldValue = &(g_cmfStCond[i].pvalue);
        if ((aiEcnState->queueId == 0) || pstTblFldCondItem == NULL) {
            return VOS_ERROR;
        }

        switch (pstTblFldCondItem->ucFieldID) {
            case FID_AIS_AIECNSTATEDYN_IFINDEX: {
                aiEcnState->ifIndex = *((unsigned int *)pFieldValue);
                break;
            }
            case FID_AIS_AIECNSTATEDYN_QUEUEID: {
                aiEcnState->queueId = *((unsigned char *)pFieldValue);
                break;
            }
            default: {
                break;
            }
        }
    }
    return VOS_OK;
};

int main()
{
	TLV_APPCFGI_TBL_FLD_COND_ITEM_S struct1;
	klee_make_symbolic(&struct1, sizeof(struct1), "struct1");
	struct tagVmeSmpMsgInfo struct2;
	klee_make_symbolic(&struct2, sizeof(struct2), "struct2");
	CLASS_AIS_AIECNSTATEDYN_S struct3;
	klee_make_symbolic(&struct3, sizeof(struct3), "struct3");
	int r = AIS_AppCfgQryGetQueueId((void *)&struct3, &struct1, &struct2);
	return r;	
}

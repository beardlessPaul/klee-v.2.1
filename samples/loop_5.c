#include "klee/klee.h"
#define NULL ((void *)0)
#define VOS_ERROR 1
#define VOS_OK 0
#define AIS_ZONEM_NAME_LENGTH                          31
#define INDEX_LEN 28
#define AIS_QUERY_HOST_LIST_MAX_REC 50
#define AIS_LOCAL(thisLocal)                    ((AisLocal*)(thisLocal))
#define AIS_TBL_HANDLE(thisLocal, mid)          (AIS_LOCAL(thisLocal)->aisTblHandle[(mid)])
#define AIS_ZONEM_MGR_GET(thisLocal)            ((thisLocal) == NULL ? NULL : (AIS_LOCAL(thisLocal))->zoneMMgr)
#define TAILQ_FIRST(head) ((head)->d_pstFirst)
#define TAILQ_NEXT(elm, stField) ((elm)->stField.d_pstNext)
#define TAILQ_FOREACH(var, head, stField) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), stField))
#define VME_DB_MAIN_ENTRY_TO_NODE(punMainEntry) ((void *)(punMainEntry))
#define MAX_ZONENAME_LEN 32
#define AIS_QUERY_HOST_MAXREC   50
	
typedef unsigned long VME_DB_REC_HANDLE;

typedef enum {
    AIS_TID_QUEUE_SCHDLE,
    AIS_TID_ECN_INFO,
    AIS_TID_ZONEM_GLOBALCFG,
    AIS_TID_ZONEM_REFLECTOR,
    AIS_TID_ZONEM_HOSTCFG,   
    AIS_TID_ZONEM_ZONECFG,   
    AIS_TID_ZONEM_ZONEHOSTCFG,
    AIS_TID_ZONEM_HOSTDYN,    
    AIS_TID_ZONEM_PHYIF,      
    AIS_TID_ZONEM_DEFZONE,    
    AIS_TID_ZONEM_HARDZONE,   
    AIS_TID_ZONEM_SENDLIST,   
    AIS_TID_ZONEM_BFDIP,      
    AIS_TID_ZONEM_HARDZONESTATUS, 
    AIS_TID_MAX 
} AisTableId;

typedef enum tagAppcfgI_Return_Code {
    ENUM_APPCFGI_RETURN_CODE_OK          = 0,   
    ENUM_APPCFGI_RETURN_CODE_ERROR       = 1,    
    ENUM_APPCFGI_RETURN_CODE_PART_RECODE = 2,   
    ENUM_APPCFGI_RETURN_CODE_NOTSUPPORT  = 3,   
    ENUM_APPCFGI_RETURN_CODE_MEMORYLEAK  = 4,   
    ENUM_APPCFGI_RETURN_CODE_BUSY        = 5,   
    
    ENUM_APPCFGI_RETURN_CODE_NOCFGCHANGE = 6,   
    ENUM_APPCFGI_RETURN_CODE_CFGCHANGE   = 7,    
    
    ENUM_APPCFGI_RETURN_CODE_MAX,               
}APPCFGI_RETURN_CODE_E;

typedef struct {
  unsigned char refFlag1;
  unsigned char refFlag2;
  unsigned char rsv[2];
} AisDbSmoothFlag;

typedef struct {
  unsigned int vsId;
  char zoneName[32];
} AisDbZoneMZoneCfgKey;

typedef union {
  unsigned int addrIpv4;
  unsigned char addrIpv6[16];
} AisZoneMIp;

typedef struct {
  AisZoneMIp ipAddress;
  unsigned char addressType;
} ZoneMIpAddress;

typedef struct {
    ZoneMIpAddress localIp;
    unsigned int consistent;
} AisQueryInofHostEnp;

typedef struct {
  unsigned long hRec;
  AisDbZoneMZoneCfgKey tblKey;
} AisQueryInofZoneInfo;

typedef struct {
  unsigned int vsId;
  ZoneMIpAddress hostIp;
} AisDbZoneMHostDynKey;

typedef struct {
  unsigned int vsId;
  char zoneName[32];
  ZoneMIpAddress hostIpStart;
} AisDbZoneMZoneHostCfgKey;

typedef struct {
  unsigned long hRec;
  AisDbZoneMZoneHostCfgKey tblKey;
} AisQueryInofZoneHostInfo;

typedef struct {
  unsigned char isMatch;
  unsigned char optionType;
  AisQueryInofZoneInfo zone;
  AisQueryInofZoneHostInfo zoneHost;
} AisQueryInofZone;

typedef struct {
  volatile short cnt;
} rte_atomic16_t;

typedef struct {
  volatile int cnt;
} rte_atomic32_t;

typedef struct {
  volatile long cnt;
} rte_atomic64_t;

struct SLL_NODE {
  struct SLL_NODE *pNext;
  unsigned long uiHandle;
};

struct SLL {
  struct SLL_NODE Head;
  struct SLL_NODE *Tail;
  unsigned int uiCount;
};

typedef struct __attribute__((__packed__)) {
  struct SLL zoneSll;
  ZoneMIpAddress refIp1;
  ZoneMIpAddress refIp2;
  AisDbSmoothFlag flag;
  char wetdt_padding_0[2];
} AisDbZoneMZoneCfgData;

typedef struct {
  AisDbZoneMZoneCfgKey tblKey;
  AisDbZoneMZoneCfgData tblData;
} AisDbZoneMZoneCfgRecord;

struct avl3_node {
  struct avl3_node *pstParent;
  struct avl3_node *pstLeft;
  struct avl3_node *pstRight;
  short sLHeight;
  short sRHeight;
};

struct avl3_tree {
  struct avl3_node *pstRoot;
  struct avl3_node *pstFirst;
  struct avl3_node *pstLast;
};

struct avl3_tree_info {
  int (*pfCompare)(const void *, const void *);
  unsigned short usKeyOffset;
  unsigned short usNodeOffset;
};

struct rte_mbuf_ext_shared_info {
  void (*free_cb)(void *, void *);
  void *fcb_opaque;
  rte_atomic16_t refcnt_atomic;
};

struct rte_mbuf_sched {
  unsigned int queue_id;
  unsigned char traffic_class;
  unsigned char color;
  unsigned short reserved;
};

struct __attribute__((__packed__)) rte_mbuf {
  void *cacheline0[0];
  union {
    void *buf_addr;
    unsigned long buf_addr_align;
  };
  union {
    unsigned long buf_iova;
    unsigned long buf_physaddr;
  };
  unsigned long rearm_data[0];
  unsigned short data_off;
  union {
    rte_atomic16_t refcnt_atomic;
    unsigned short refcnt;
  };
  unsigned short nb_segs;
  unsigned short port;
  unsigned long ol_flags;
  void *rx_descriptor_fields1[0];
  union {
    unsigned int packet_type;
    struct {
      unsigned int l2_type : 4;
      unsigned int l3_type : 4;
      unsigned int l4_type : 4;
      unsigned int tun_type : 4;
      union {
        unsigned char inner_esp_next_proto;
        struct {
          unsigned char inner_l2_type : 4;
          unsigned char inner_l3_type : 4;
        };
      };
      unsigned int inner_l4_type : 4;
    };
  };
  unsigned int pkt_len;
  unsigned short data_len;
  unsigned short vlan_tci;
  union {
    union {
      unsigned int rss;
      struct {
        union {
          struct {
            unsigned short hash;
            unsigned short id;
          };
          unsigned int lo;
        };
        unsigned int hi;
      } fdir;
      struct rte_mbuf_sched sched;
      struct {
        unsigned int reserved1;
        unsigned short reserved2;
        unsigned short txq;
      } txadapter;
      unsigned int usr;
    } hash;
  };
  union {
    unsigned short vlan_tci_outer;
    unsigned char dsa_info;
    unsigned char high_pri;
  };
  unsigned short buf_len;
  unsigned int seqn;
  unsigned short tx_port;
  unsigned char reorder_flag;
  unsigned char qid;
  void *cacheline1[0];
  union {
    void *userdata;
    unsigned long udata64;
  };
  union {
    struct rte_mempool *pool;
    unsigned long pool_align;
  };
  union {
    struct rte_mbuf *next;
    unsigned long next_align;
  };
  union {
    unsigned long tx_offload;
    struct {
      unsigned long l2_len : 7;
      unsigned long l3_len : 9;
      unsigned long l4_len : 8;
      unsigned long tso_segsz : 16;
      unsigned long outer_l3_len : 9;
      unsigned long outer_l2_len : 7;
    };
  };
  unsigned short priv_size;
  union {
    unsigned short timesync;
    struct {
      unsigned char tx_mode;
      unsigned char groupid;
    };
  };
  unsigned int last_worker;
  unsigned long reorder_data;
  union {
    struct rte_mbuf *pkt_next;
    unsigned long pkt_next_align;
  };
  struct rte_mbuf_ext_shared_info *shinfo;
  unsigned long dynfield1[2];
  char wetdt_padding_0[48];
};

struct __attribute__((__packed__)) rte_mempool_cache {
  unsigned int size;
  unsigned int flushthresh;
  unsigned int len;
  char wetdt_padding_0[4];
  void *objs[1536];
  char wetdt_padding_1[48];
};

struct rte_mempool_memhdr {
  struct {
    union {
      struct rte_mempool_memhdr *stqe_next;
      unsigned long stqe_next_align;
    };
  } next;
  union {
    struct rte_mempool *mp;
    unsigned long mp_align;
  };
  union {
    void *addr;
    unsigned long addr_align;
  };
  union {
    unsigned long iova;
    unsigned long phys_addr;
  };
  union {
    unsigned long len;
    unsigned long len_align;
  };
  union {
    void (*free_cb)(struct rte_mempool_memhdr *, void *);
    unsigned long free_cb_align;
  };
  union {
    void *opaque;
    unsigned long opaque_align;
  };
};

struct __attribute__((__packed__)) rte_mempool_memhdr_list {
  union {
    struct rte_mempool_memhdr *stqh_first;
    unsigned long stqh_first_align;
    struct rte_mempool_memhdr **stqh_last;
    unsigned long stqh_last_align;
  };
};

struct rte_mempool_objhdr {
  struct {
    union {
      struct rte_mempool_objhdr *stqe_next;
      unsigned long stqe_next_align;
    };
  } next;
  union {
    struct rte_mempool *mp;
    unsigned long mp_align;
  };
  union {
    unsigned long iova;
    unsigned long physaddr;
  };
};

struct __attribute__((__packed__)) rte_mempool_objhdr_list {
  union {
    struct rte_mempool_objhdr *stqh_first;
    unsigned long stqh_first_align;
    struct rte_mempool_objhdr **stqh_last;
    unsigned long stqh_last_align;
  };
};

struct __attribute__((__packed__)) rte_mempool {
  char name[32];
  union {
    void *pool_data;
    unsigned long pool_id;
  };
  union {
    void *pool_config;
    unsigned long pool_config_align;
  };
  union {
    const struct rte_memzone *mz;
    unsigned long mz_align;
  };
  unsigned int flags;
  int socket_id;
  unsigned int size;
  unsigned int cache_size;
  unsigned int elt_size;
  unsigned int header_size;
  unsigned int trailer_size;
  unsigned int private_data_size;
  int ops_index;
  char wetdt_padding_0[4];
  union {
    struct rte_mempool_cache *local_cache;
    unsigned long local_cache_align;
  };
  unsigned int populated_size;
  char wetdt_padding_1[4];
  struct rte_mempool_objhdr_list elt_list;
  unsigned int nb_mem_chunks;
  char wetdt_padding_2[4];
  struct rte_mempool_memhdr_list mem_list;
  char wetdt_padding_3[40];
};

struct rte_memzone {
  char name[32];
  union {
    unsigned long phys_addr;
    unsigned long iova;
  };
  union {
    void *addr;
    unsigned long addr_64;
  };
  union {
    unsigned long len;
    unsigned long len_align;
  };
  unsigned long hugepage_sz;
  int socket_id;
  unsigned int flags;
};

struct tagRBT_AQ_HEAD {
  struct tagRBT_AQ_NODE *pstNext;
};

struct tagRBT_AQ_NODE {
  struct tagRBT_AQ_NODE *pstNext;
  struct tagRBT_AQ_NODE **ppstPrev;
};

struct tagRBT_NODE {
  struct tagRBT_NODE *pstParent;
  struct tagRBT_NODE *pstRight;
  struct tagRBT_NODE *pstLeft;
  int lColor;
};

struct __attribute__((__packed__)) tagRBT_TREE {
  struct tagRBT_NODE *pstRoot;
  struct tagRBT_NODE stNilT;
  struct tagRBT_AQ_HEAD stWalkHead;
  unsigned int ulNodes;
};

typedef struct __attribute__((__packed__)) tagVmeSmpMsgInfo {
  void *pOrigMsg;
  unsigned short usMsgType;
  unsigned short usBlockNum;
  void *pRspMsg;
  void *pCurRspMsgPos;
  void *pCurBlock;
  void *pCfgHeadBlock;
  unsigned int uiClassId;
  unsigned short usOpCode;
  unsigned short usOpSeq;
  void *pRecordData;
  void *pOptionData;
  unsigned int uiQueryNum;
  unsigned int bIsMyMsg;
} VmeSmpMsgInfo_S;

typedef struct __attribute__((__packed__)) {
  unsigned char ucIntf;
  char wetdt_padding_0[3];
  unsigned int (*pfIntfFunc)(unsigned int, void *, void *);
} AIS_VRP_INTF_FUNC;

typedef struct {
  void *sendQueueMutex;
  void *hardZoneMutex;
} AIS_ZoneMMutex;

typedef struct {
  void *pThis;
  unsigned long memId;
} AisInterfaceDataMgrInfo;

typedef struct __attribute__((__packed__)) {
  unsigned int subIntf;
  unsigned int (*ctlFunc)(void *, void *);
} AisIntfCtlFunc;

typedef struct {
  unsigned short type;
  unsigned short reserved;
  unsigned int success;
  unsigned int failed;
} AisZoneMAutStats;

typedef struct {
  unsigned int minTxInterval;
  unsigned int minRxInterval;
  unsigned int detectMultiplier;
} AisZoneMBfdPara;

typedef struct {
  unsigned int errFd;
  unsigned int active;
  unsigned int inactive;
} AisZoneMDebugNum;

typedef struct {
  unsigned int hmacValid;
  unsigned int hmacLen;
  char hmactext[512];
} AisZoneMHmac;

typedef struct {
  unsigned int eventReadCnt;
  unsigned int eventReadTimeoutCnt;
  unsigned int eventWriteCnt;
  unsigned int eventWriteFailCnt;
  unsigned int invalidEventCnt;
  unsigned int startEventCnt;
  unsigned int stopEventCnt;
  unsigned int connectOpenEventCnt;
  unsigned int connectOpenFailedCnt;
  unsigned int connectCloseCnt;
  unsigned int connectErrorCnt;
  unsigned int receiveOpenCnt;
  unsigned int receiveKeepAliveCnt;
  unsigned int receiveUpdateCnt;
  unsigned int receiveNotifyCnt;
} AisZoneMTaskStat;

typedef enum {
  VME_DB_CR_SMALLER = 1,
  VME_DB_CR_EQUAL = 2,
  VME_DB_CR_BIGGER = 3,
} VME_DB_CMP_RESULT_E;

typedef struct {
  unsigned int (*pfCmpKey)(void *, const void *, unsigned int, const void *, VME_DB_CMP_RESULT_E *);
  unsigned int (*pfGetKey)(void *, const void *, void *, unsigned int, unsigned int *);
  unsigned int (*pfProcBeforeRecDel)(void *, void *);
  void *pUserArg;
} VME_DB_CBFUNC_SET_S;

typedef struct {
  unsigned int (*pfCmpKey)(void *, const void *, unsigned int, const void *, VME_DB_CMP_RESULT_E *);
  unsigned int (*pfGetKey)(void *, const void *, void *, unsigned int, unsigned int *);
  void *pUserArg;
} VME_DB_CONTAINER_CBFUNC_SET_S;

typedef struct {
  void *pUserArg;
  unsigned int (*pfHash)(const void *, unsigned int, unsigned int *);
} VME_DB_HASH_PF_S;

typedef struct __attribute__((__packed__)) {
  unsigned int uiHashSize;
  VME_DB_HASH_PF_S stCbHash;
} VME_DB_EXTRA_INFO_HASH_S;

typedef struct {
  unsigned int (*pfCmpKey)(void *, const void *, unsigned int, const void *, VME_DB_CMP_RESULT_E *);
  unsigned int (*pfGetKey)(void *, const void *, void *, unsigned int, unsigned int *);
  void *pUserArg;
} VME_DB_INDEX_INFO_S;

typedef struct {
  VME_DB_INDEX_INFO_S stCreateInfo;
  struct tagVME_DB_CONTAINER_ENV *pstCtnr;
} VME_DB_INDEX_S;

typedef enum {
  VME_DB_TBL_TYPE_INVALID = 1,
  VME_DB_TBL_TYPE_HASH = 2,
  VME_DB_TBL_TYPE_RBTREE = 3,
  VME_DB_TBL_TYPE_MAX = 4,
} VME_DB_TBL_TYPE_E;

typedef struct {
  void *(*iterate)(unsigned char *, void *, unsigned int *, void *);
  unsigned short (*encode)(unsigned char *, unsigned short, void *, unsigned int, void *);
  void (*keySave)(unsigned char *, unsigned short, void *, unsigned int, void *);
} VmeHaBatchCallBack;

typedef struct {
  unsigned char resumeKey[512];
  VmeHaBatchCallBack callback;
} VmeHaBatBkupTimeShare;

typedef struct {
  AisZoneMBfdPara bfdPara;
  ZoneMIpAddress refIp;
  char refFlag;
} AisZoneMBfdRefPara;

typedef struct {
  AisZoneMBfdPara localPara;
  AisZoneMBfdPara actualPara;
  AisZoneMBfdRefPara ref1;
  AisZoneMBfdRefPara ref2;
} AisZoneMBfdAllPara;

enum tagBIMStatusEnum {
  ENUM_BIM_STATUS_OPENDB_FAILD = 1,
  ENUM_BIM_STATUS_DB_FAULT = 2,
  ENUM_BIM_STATUS_DB_READY = 3,
  ENUM_BIM_STATUS_DB_READY_ONLYREAD = 4,
  ENUM_BIM_STATUS_CREATETABLE_SUCCESS = 5,
  ENUM_BIM_STATUS_DROPTABLE_SUCCESS = 6,
  ENUM_BIM_STATUS_TABLE_FULL = 7,
  ENUM_BIM_STATUS_CACHE_READY = 8,
  ENUM_BIM_STATUS_RSM_FULL = 9,
  ENUM_BIM_STATUS_INVALID = 10,
};

enum tagRTFCompConstruct {
  RTF_COMP_CONSTRUCT_STAGE1 = 1,
  RTF_COMP_CONSTRUCT_STAGE2 = 2,
  RTF_COMP_CONSTRUCT_STAGE3 = 3,
  RTF_COMP_CONSTRUCT_STAGE_BUTT = 4,
};

enum tagVME_HA_STATE {
  VME_HA_STATE_INIT = 1,
  VME_HA_STATE_BATCHBACKUP_BEGIN = 2,
  VME_HA_STATE_BATCHBACKUP = 3,
  VME_HA_STATE_BATCHBACKUP_END = 4,
  VME_HA_STATE_NOT_BACKUPREADY = 5,
  VME_HA_STATE_REALBACKUP = 6,
  VME_HA_STATE_HA_MAX = 7,
};

struct DLL_NODE {
  struct DLL_NODE *pNext;
  struct DLL_NODE *pPrev;
  unsigned long uiHandle;
};

struct DLL {
  struct DLL_NODE Head;
  unsigned int uiCount;
};

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

struct avll_tree {
  struct avl3_tree stTree;
  struct avl3_tree_info stTreeInfo;
};

typedef struct {
  AisInterfaceDataMgrInfo mgrInfo;
  struct avll_tree ifNameTree;
  struct avll_tree ifIndexTree;
} AisInterfaceDataMgr;

struct flatcc_emitter {
  struct flatcc_emitter_page *front;
  struct flatcc_emitter_page *back;
  unsigned char *front_cursor;
  unsigned long front_left;
  unsigned char *back_cursor;
  unsigned long back_left;
  unsigned long used;
  unsigned long capacity;
  unsigned long used_average;
};

struct flatcc_emitter_page {
  unsigned char page[2944];
  struct flatcc_emitter_page *next;
  struct flatcc_emitter_page *prev;
  int page_offset;
};

struct flatcc_iovec {
  void *iov_base;
  unsigned long iov_len;
};

struct flatcc_builder {
  unsigned short *pl;
  unsigned short *vs;
  unsigned short id_end;
  unsigned int vt_hash;
  unsigned char *ds;
  unsigned int ds_offset;
  unsigned int ds_limit;
  unsigned int ds_first;
  struct __flatcc_builder_frame *frame;
  void *emit_context;
  void *alloc_context;
  int (*emit)(void *, const unsigned int *, int, int, unsigned long);
  int (*alloc)(void *, unsigned int *, unsigned long, int, int);
  struct flatcc_iovec buffers[8];
  unsigned long ht_width;
  unsigned int vb_end;
  unsigned int vd_end;
  unsigned short min_align;
  unsigned short align;
  unsigned short block_align;
  int emit_start;
  int emit_end;
  int buffer_mark;
  unsigned int nest_count;
  unsigned int nest_id;
  int level;
  int limit_level;
  unsigned short buffer_flags;
  unsigned int identifier;
  unsigned long vb_flush_limit;
  int max_level;
  int disable_vt_clustering;
  int is_default_emitter;
  struct flatcc_emitter default_emit_context;
  unsigned long user_frame_offset;
  unsigned long user_frame_end;
  struct flatcc_refmap *refmap;
};

struct flatcc_refmap_item {
  const void *src;
  int ref;
};

struct flatcc_refmap {
  unsigned long count;
  unsigned long buckets;
  struct flatcc_refmap_item *table;
  struct flatcc_refmap_item min_table[8];
};

struct tagDdmOsalLogObject {
  const char *pcModuleName;
  const char *pcSubModName;
  unsigned short usMid;
  unsigned char aucReserved[6];
};

struct tagDmsPipeDataPacket {
  unsigned int uiNum;
  void **apData;
};

struct tagHASH_CFL_TBL_HEAD {
  struct tagVME_DB_HASH_ENTRY *d_pstFirst;
  struct tagVME_DB_HASH_ENTRY **d_ppstLast;
};

typedef struct {
  struct tagHASH_CFL_TBL_HEAD stHead;
} VME_DB_HASH_CFL_TBL;

struct __attribute__((__packed__)) tagVME_DB_CONTAINER_ENV {
  VME_DB_TBL_TYPE_E enType;
  VME_DB_CONTAINER_CBFUNC_SET_S stCbFuncSet;
  union {
    struct tagVME_DB_HASH_ENV *pstHash;
    struct tagVME_DB_RBT_ENV *pstRbTree;
  } unHandle;
  unsigned int uiRecSum;
};

struct tagVME_DB_HASH_ENTRY {
  struct {
    struct tagVME_DB_HASH_ENTRY *d_pstNext;
    struct tagVME_DB_HASH_ENTRY **d_ppstPrev;
  } stField;
  unsigned int uiHashPos;
};

struct __attribute__((__packed__)) tagVME_DB_HASH_ENV {
  VME_DB_EXTRA_INFO_HASH_S stHashExtraInfo;
  VME_DB_HASH_CFL_TBL astHashBucket[];
};

struct __attribute__((__packed__)) tagVME_DB_RBT_ENV {
  struct tagRBT_TREE stTree;
};

struct __attribute__((__packed__)) tagVME_DB_TBL_ENV {
  unsigned long hMem;
  VME_DB_CBFUNC_SET_S stCbFuncSet;
  struct tagVME_DB_CONTAINER_ENV pstMainCtnr[16];
  unsigned int uiIndexCount;
  VME_DB_INDEX_S *pstIndexArray;
};

struct __attribute__((__packed__)) tagVmeAckTimer {
  unsigned int uiSendTimes;
  void *pTimerHandle;
};

struct tagVmeCompAdp {
  void *pVmeLocal;
  unsigned short usIId;
  unsigned char ucIntf;
  unsigned char ucSubIntf;
  unsigned char ucSlaveWork;
  unsigned char aucResv[3];
  struct tagRBT_TREE stCompInstTbl;
};

struct tagVmeCompMng {
  struct tagVmeCompAdp *apstCompAdpTbl[14];
  void *pLocal;
  void *pScanParam;
};

struct tagVmeIfmSubInfoKey {
  unsigned short usKeyTag;
  unsigned char ucInfoNum;
  unsigned char ucReserve;
  unsigned int uiInstanceId;
  unsigned int uiAreaId;
  unsigned short ausInfoTag[10];
};

struct __attribute__((__packed__)) tagVmeModeInnerData {
  char acModeName[49];
  char acReserve[3];
  void *pParam;
  unsigned int (*pfGetInnerData)(unsigned int *, void **, void *);
};

struct __attribute__((__packed__)) tagVmeMsgProc {
  unsigned int uiIID;
  void (*pfProc)(void *, void *);
  void *pParam;
  void (*pfFlush)(void *);
};

struct __attribute__((__packed__)) tagVmeSmpProcGrp {
  unsigned short usCBCurNum;
  unsigned short usCBMaxNum;
  struct tagVmeSmpProcInfo *pstCallBack;
};

struct tagVmeSmp {
  void *pVmeLocal;
  unsigned long hMemHandle;
  unsigned int uiRspNoRegCfg : 1;
  unsigned int uiCfgForceRes : 1;
  unsigned int uiCfgForceNoRsp : 1;
  unsigned int uiResv : 29;
  struct tagVmeSmpProcGrp stCfgProcGrp;
  struct tagVmeSmpProcGrp stQryProcGrp;
  struct tagVmeSmpProcGrp stActProcGrp;
  unsigned int uiLastDBSelectErr;
  unsigned int uiLastDBFetchErr;
  unsigned short ausErrStat[15];
};

struct tagVmeSmpProcInfo {
  unsigned int uiClassId;
  unsigned short usOpCode;
  unsigned short usRecLen;
  void *pfProc;
  void *pfProcEx;
  void *pParam;
};

struct tagVmeSspCallBack {
  unsigned int (*pfStartWork)(void *, void *);
  unsigned int (*pfStopWork)(void *, void *);
  unsigned int (*pfPromptPrimary)(void *, void *);
  unsigned int (*pfStopPrimary)(void *, void *);
  unsigned int (*pfNewBackup)(void *, void *);
  unsigned int (*pfBackupReady)(void *, void *);
  unsigned int (*pfBackupGone)(void *, void *);
  unsigned int (*pfPartnerStatus)(void *, void *);
  unsigned int (*pfOverload)(void *, void *);
};

struct tagVmeSyncManage {
  unsigned long hDumClltHld;
  unsigned long hDumJoinHld;
  struct avll_tree stSyncSTree;
  struct avll_tree stSyncRTree;
  unsigned int *pstBdEnv;
};

struct __attribute__((__packed__)) tagVmeTimeEvent {
  int iNowSec;
  int iNowMSec;
  unsigned int uiEvent;
  void *pValue;
};

struct tagVmeTimeStat {
  struct tagVmeTimeEvent *pstEvent;
  unsigned short usNum;
  unsigned short usPos;
  unsigned short usSize;
  unsigned short usResv;
};

struct __attribute__((__packed__)) tagVmeTmrCb {
  unsigned int hTmrHandle;
  void *pTimerLib;
  void *pTmrInst;
  void *pResndAlarmHandle;
  unsigned int uiRunning;
  unsigned int tmrHndInitBySelf : 1;
  unsigned int rsv : 31;
};

struct tagVmehaCallBack {
  void (*pfFlowCtrlBegin)(unsigned int, void *);
  void (*pfFlowCtrlEnd)(unsigned int, void *);
};

struct tagVosListHead {
  struct tagVosListHead *next;
  struct tagVosListHead *prev;
};

typedef struct __attribute__((__packed__)) {
  void *pThis;
  struct avll_tree stPartnerTbl;
  unsigned int uiPartnerNum;
  struct tagVosListHead stCallbackTbl;
  unsigned int auiRunStat[3];
  unsigned int auiErrStat[5];
} AisPartnerMng_S;

struct __attribute__((__packed__)) tagVmeBim {
  void *pVmeLocal;
  unsigned long hMemHandle;
  char acDbName[16];
  unsigned int uiDbID;
  unsigned char ucIsSupport;
  unsigned char ucIsPromptPrimary;
  unsigned char aucPad[2];
  unsigned int uiBimProtectTime;
  void *pstOpenDBTimer;
  void *pstResendTimer;
  enum tagBIMStatusEnum enDbStatus;
  enum tagBIMStatusEnum enLastDbStatus;
  unsigned int uiMultInstID;
  unsigned int uiBimTableNum;
  struct tagVosListHead stBimTableList;
  void (*pfSupportCallback)(unsigned char, void *);
  void (*pfDBWritableCallback)(void *);
  void (*pfLogger)(void *, unsigned char, const char *);
  unsigned short ausErrStat[16];
};

struct __attribute__((__packed__)) tagVmeHA_S {
  void *pVmeLocal;
  unsigned long hMemHandle;
  unsigned int hPeerCid;
  struct tagVmehaCallBack stCallBack;
  enum tagVME_HA_STATE enhaState;
  unsigned short usIsBatchDataReady : 1;
  unsigned short usIsSendMsgSelfPid : 1;
  unsigned short usLeftMemHndIfUninit : 1;
  unsigned short usMaxMsgLenK : 7;
  unsigned short usRezv : 6;
  unsigned short usHaiIID;
  unsigned int (*pfBatchBackup)(void *, void *);
  unsigned int (*pfBBEnd)(void *, void *);
  unsigned int (*pfSlvBBBegin)(void *, void *);
  struct tagVmeAckTimer stAckTimer;
  unsigned int uiTransNum;
  unsigned int uiSeqNum;
  struct tagVosListHead stBatchHdr;
  struct tagVosListHead stRealTypeHdr;
  void *pRealResendTimer;
  unsigned int auiMsgRecvStat[11];
  unsigned int auiMsgSendStat[11];
  unsigned short ausErrorStat[20];
  struct tagVmeTimeStat stTimeStat;
  struct tagVmeTimeStat stRealTimeStat;
  void *pVmeAlm;
  VmeHaBatBkupTimeShare *batBkupTimeShare;
};

struct tagVmeSspSubBuff {
  struct tagVosListHead stBuff;
  struct tagVosListHead stReSubBuff;
  void *pReSubTMr;
};

struct __attribute__((__packed__)) tagVmeSsp {
  void *pVmeLocal;
  unsigned long hMemHandle;
  struct tagVmeSspSubBuff stSubBuff;
  struct tagVmeSspCallBack stCallBack;
  unsigned short usWorkMode;
  unsigned short usNoRspHaStarWork : 1;
  unsigned short usNoRspHaPromptPrimary : 1;
  unsigned short usNoRspHaNewBackup : 1;
  unsigned short usNoRspHaStopPrimary : 1;
  unsigned short usNoRspHaBackupGone : 1;
  unsigned short usNoRspHaPartnerStatus : 1;
  unsigned short usNoRspHaStopWork : 1;
  unsigned short usResv : 9;
  struct tagVosListHead stCallBackList;
};

struct __attribute__((__packed__)) tagVmeLocal {
  void *pCompLocal;
  unsigned short usModuleId;
  unsigned short usFlag;
  unsigned int hMyPid;
  unsigned int hMyCid;
  unsigned long hMemHandle;
  unsigned int uiLrId;
  unsigned int uiTmrFlag;
  int iNowSec;
  int iNowMSec;
  struct tagVmeMsgProc astpProcer[64];
  struct tagVmeTmrCb stTmr;
  struct tagVmeCompMng stCompMng;
  struct tagVmeSmp stSmp;
  struct tagVmeSsp stSsp;
  struct tagVmeHA_S stHA;
  unsigned short ausErrStat[10];
  struct tagVmeModeInnerData astpGetInnerData[12];
  struct tagVmeBim stBim;
  struct tagVmeSyncManage stSyncMng;
  unsigned long hSyncMemHandle;
  unsigned int *pstHA2;
  void *pLog;
  void *apResv1;
  void *apResv2;
  void *apResv3;
  void *apResv4;
};

struct tagVosSystm {
  unsigned short usYear;
  unsigned char ucMonth;
  unsigned char ucDate;
  unsigned char ucHour;
  unsigned char ucMinute;
  unsigned char ucSecond;
  unsigned char ucWeek;
  unsigned int uiMillSec;
};

typedef struct {
  struct tagVosSystm time;
  unsigned int valid;
  unsigned int line;
  char func[64];
  char info[512];
} AisBlackBoxData;

typedef struct {
  unsigned int withFunc;
  unsigned int head;
  unsigned int tail;
  unsigned int isFull;
  AisBlackBoxData *datas;
  unsigned int size;
  unsigned long memHandle;
} AisBlackBox;

typedef struct {
  unsigned int sendPkt;
  unsigned int receivePkt;
  unsigned int sendErrPkt;
  unsigned int receiveErrPkt;
  struct tagVosSystm lastSendTime;
  struct tagVosSystm lastSendErrTime;
  struct tagVosSystm lastReceiveTime;
  struct tagVosSystm lastReceiveErrTime;
} AisHppInnerData;

typedef struct {
  unsigned int vrId;
  unsigned int sequence;
  AisZoneMDebugNum debugNum;
  AisBlackBox *blackBox;
  unsigned int zoneMMsgQueueId;
  AisZoneMTaskStat zoneMStat;
  unsigned int zoneMTaskStatu;
  unsigned int debugMode;
  void *thisLocal;
  void *socketMgr;
  void *noticeMgr;
  ZoneMIpAddress localIp;
  unsigned short portId;
  AisZoneMHmac hmac;
  unsigned char role;
  AIS_ZoneMMutex mutex;
  AisZoneMAutStats autStats[5];
  void *timerHnd[5];
  AisHppInnerData aisHppData;
  struct DLL tlvDll;
  void *bfdAgeTimer;
  void *bfdSessionTimer;
  unsigned int bfdBaseEnable;
  unsigned int bfdInofEnable;
  AisZoneMBfdAllPara bfdAllPara;
  unsigned int transNo;
  void *checkTimerHnd;
  void *hardZoneTimer;
  unsigned int hardZoneSeq;
  unsigned int hardZonePermitCnt;
  void *meshSendMgr;
  void *recoveryHandle;
} AisZoneMMgr;

typedef struct __attribute__((__packed__)) {
  unsigned int hMyPid;
  unsigned int hMyCid;
  unsigned int uiCompHaRole;
  unsigned int uiLrId;
  unsigned int vrId;
  unsigned long sendTime;
  unsigned int tail;
  unsigned int iLossLessTail;
  unsigned int zoneMTail;
  unsigned int procCount;
  char modelName[32];
  char modelVersion[16];
  struct tagVosSystm modelTime;
  unsigned long ahMemHandle[37];
  struct tagVME_DB_TBL_ENV *aisTblHandle[14];
  struct tagVmeLocal stVme;
  unsigned int *pstBdEnv;
  unsigned int *pstDiagLib;
  void *sendBuf;
  struct tagDmsPipeDataPacket recvBuf;
  void *appModelMgr;
  void *appEnv;
  AisZoneMMgr *zoneMMgr;
  AisInterfaceDataMgr *interfaceDataMgr;
  AisBlackBox *blackBox;
  void *pstSsp;
  AisPartnerMng_S *pstPartnerMng;
  void *aiServiceCfgMng;
  unsigned char pfcQueueBitMap;
  unsigned char tlmTaskFlag;
  unsigned char alarmFlag;
  char wetdt_padding_0[1];
  void *aiEcnMutex;
  void *lldp;
  void *timerLocal;
  AIS_VRP_INTF_FUNC vrpIntfFunc[255];
  AisIntfCtlFunc intfCtlFunc[1];
  struct SLL intfParam;
  char acReserveChar[128];
  void *apReserve[4];
  unsigned int auiReserve[4];
  struct tagVmeIfmSubInfoKey *ifmData;
  void *gfd;
  void *job;
} AisLocal;

typedef unsigned int (*VME_DB_CMP_KEY_PF)(void *pUserArg, const void *pKey, unsigned int uiKeyLen, const void *pRecord,
                                    VME_DB_CMP_RESULT_E *penResult);
									
typedef unsigned int (*VME_DB_GET_KEY_PF)(void *pUserArg, const void *pRecord, void *pKeyBuff, unsigned int uiKeyBuffLen,
                                    unsigned int *puiKeyLen);

typedef unsigned int (*VME_DB_PROC_BRFORE_REC_DEL_PF)(void *pUserArg, void *pRecord);									

typedef unsigned int (*VME_DB_HASH_PF)(const void *, unsigned int, unsigned int *);

typedef struct tagVME_DB_TBL_ENV *VME_DB_TBL_HANDLE;

typedef struct {
	void *pNode;
} VME_DB_REC_HANDLE_PVT_S;

typedef struct {
	struct tagRBT_NODE stRbtNode;
} VME_DB_RBT_ENTRY_S;

typedef struct {
	VME_DB_RBT_ENTRY_S stRbt;
	struct tagVME_DB_HASH_ENTRY stHash;
} VME_DB_CONTAINER_ENTRY_UN;

typedef struct {
	unsigned int uiRecordLen;
	unsigned char aucRecord[];
} VME_DB_USER_DATA_S;

struct tagVME_DB_CONTAINER_HANDLE{
	VME_DB_TBL_TYPE_E enType;
	VME_DB_CONTAINER_CBFUNC_SET_S stCbFuncSet;
	union {
		struct tagVME_DB_HASH_ENV * pstHash;
		struct tagVME_DB_RBT_ENV * pstRbTree;
	} unHandle;
	unsigned int uiRecSum;
};

typedef struct tagVME_DB_CONTAINER_HANDLE *VME_DB_CONTAINER_HANDLE;

typedef struct {
	struct {
		struct tagVME_DB_HASH_ENTRY * d_pstNext;
		struct tagVME_DB_HASH_ENTRY ** d_ppstPrev;
	} stField;
	unsigned int uiHashPos;
} VME_DB_HASH_ENTRY_S;

struct tagVME_DB_HASH_HANDLE {
	VME_DB_EXTRA_INFO_HASH_S stHashExtraInfo;
	VME_DB_HASH_CFL_TBL astHashBucket[];
};

typedef  struct tagVME_DB_HASH_HANDLE *VME_DB_HASH_HANDLE;

unsigned int DJBHash(const char *pKey, unsigned int uiKeyLen, unsigned int *uiHashValue)
{
    unsigned int hash = 5381;
 
    while (*pKey)
    {
        hash += (hash << 5) + (*pKey++);
    }
 
    *uiHashValue = hash & 0x7FFFFFFF;
	return VOS_OK;
}

VME_DB_HASH_ENTRY_S *VME_DB_HASH_GetRec(VME_DB_HASH_HANDLE pstHash, const void *pKey, unsigned int uiKeyLen,
                                        VME_DB_CMP_KEY_PF pfCmpKey, void *pUserArg)
{
    unsigned int uiRet;
    unsigned int uiHashValue;
    VME_DB_HASH_CFL_TBL *pstCflTbl = NULL;
    unsigned int uiHashPos;
    VME_DB_HASH_ENTRY_S *pstEntry = NULL;
    VME_DB_CMP_RESULT_E enResult;
	pstHash->stHashExtraInfo.stCbHash.pfHash = DJBHash;
    uiRet = pstHash->stHashExtraInfo.stCbHash.pfHash(pKey, uiKeyLen, &uiHashValue);
    if (uiRet != VOS_OK) {
        return NULL;
    }

    uiHashPos = uiHashValue % pstHash->stHashExtraInfo.uiHashSize;
    if (uiHashPos >= pstHash->stHashExtraInfo.uiHashSize) {
        return NULL;
    }

    pstCflTbl = &pstHash->astHashBucket[uiHashPos];

    TAILQ_FOREACH(pstEntry, &pstCflTbl->stHead, stField)
    {
        uiRet = pfCmpKey(pUserArg, pKey, uiKeyLen, pstEntry, &enResult);
        if (uiRet != VOS_OK) {
            return NULL;
        }

        if (enResult == VME_DB_CR_EQUAL) {
            break;
        }
    }

    return pstEntry;
}

VME_DB_CONTAINER_ENTRY_UN *VME_DB_CONTAINER_GetRec(VME_DB_CONTAINER_HANDLE pstContainer, const void *pKey,
                                                   unsigned int uiKeyLen)
{

    switch (pstContainer->enType) {
        case VME_DB_TBL_TYPE_HASH: {
            return (VME_DB_CONTAINER_ENTRY_UN *)(void *)VME_DB_HASH_GetRec(pstContainer->unHandle.pstHash, pKey,
                                                                           uiKeyLen, pstContainer->stCbFuncSet.pfCmpKey,
                                                                           pstContainer->stCbFuncSet.pUserArg);
        }
        case VME_DB_TBL_TYPE_RBTREE: {
            break;
        }
        default: {
            return NULL;
        }
    }
}

VME_DB_USER_DATA_S * VME_DB_NODE_TO_USER_DATA(pNode, uiIndexCount) {
    return (VME_DB_USER_DATA_S *)(void *)((unsigned char *)(pNode) + sizeof(VME_DB_CONTAINER_ENTRY_UN) + (uiIndexCount) * INDEX_LEN);
	}

void *VME_DB_GetRec(VME_DB_TBL_HANDLE pstTable, const void *pKey, unsigned int uiKeyLen, VME_DB_REC_HANDLE *phRec)
{
    VME_DB_REC_HANDLE_PVT_S *pstPvtHandle = (VME_DB_REC_HANDLE_PVT_S *)phRec;
    VME_DB_CONTAINER_ENTRY_UN *punMainEntry = NULL;
    VME_DB_USER_DATA_S *pstUserData = NULL;

    punMainEntry = VME_DB_CONTAINER_GetRec(pstTable->pstMainCtnr, pKey, uiKeyLen);
    if (punMainEntry == NULL) {
        return NULL;
    }

    pstPvtHandle->pNode = VME_DB_MAIN_ENTRY_TO_NODE(punMainEntry);

    pstUserData = VME_DB_NODE_TO_USER_DATA(pstPvtHandle->pNode, pstTable->uiIndexCount);

    return pstUserData->aucRecord;
}

VME_DB_HASH_ENTRY_S *VME_DB_HASH_GetFirstRec(VME_DB_HASH_HANDLE pstHash)
{
    unsigned int i;
    VME_DB_HASH_ENTRY_S *pstEntry = NULL;

    for (i = 0; i < pstHash->stHashExtraInfo.uiHashSize; i++) {
        pstEntry = TAILQ_FIRST(&pstHash->astHashBucket[i].stHead);
        if (pstEntry) {
            return pstEntry;
        }
    }

    return NULL;
}

VME_DB_CONTAINER_ENTRY_UN *VME_DB_CONTAINER_GetFirstRec(VME_DB_CONTAINER_HANDLE pstContainer)
{
    switch (pstContainer->enType) {
        case VME_DB_TBL_TYPE_HASH: {
            return (VME_DB_CONTAINER_ENTRY_UN *)(void *)VME_DB_HASH_GetFirstRec(pstContainer->unHandle.pstHash);
        }
        case VME_DB_TBL_TYPE_RBTREE: {
			break;
        }
        default: {
            return NULL;
        }
    }
}

void *VME_DB_GetFirstRec(VME_DB_TBL_HANDLE pstTable, VME_DB_REC_HANDLE *phRec)
{
    VME_DB_REC_HANDLE_PVT_S *pstPvtHandle = (VME_DB_REC_HANDLE_PVT_S *)phRec;
    VME_DB_CONTAINER_ENTRY_UN *punMainEntry = NULL;
    VME_DB_USER_DATA_S *pstUserData = NULL;

    punMainEntry = VME_DB_CONTAINER_GetFirstRec(pstTable->pstMainCtnr);
    if (punMainEntry == NULL) {
        return NULL;
    }

    pstPvtHandle->pNode = VME_DB_MAIN_ENTRY_TO_NODE(punMainEntry);

    pstUserData = VME_DB_NODE_TO_USER_DATA(pstPvtHandle->pNode, pstTable->uiIndexCount);

    return pstUserData->aucRecord;
}

#define VME_DB_NODE_TO_MAIN_ENTRY(pNode) ((VME_DB_CONTAINER_ENTRY_UN *)(pNode))

VME_DB_HASH_ENTRY_S *VME_DB_HASH_GetNextRec(VME_DB_HASH_HANDLE pstHash, VME_DB_HASH_ENTRY_S *pstCurEntry)
{
    unsigned int uiHashPos;
    VME_DB_HASH_ENTRY_S *pstNextEntry = NULL;

    pstNextEntry = TAILQ_NEXT(pstCurEntry, stField);
    if (pstNextEntry) {
        return pstNextEntry;
    }

    for (uiHashPos = (pstCurEntry->uiHashPos + 1); uiHashPos < pstHash->stHashExtraInfo.uiHashSize; uiHashPos++) {
        pstNextEntry = TAILQ_FIRST(&pstHash->astHashBucket[uiHashPos].stHead);
        if (pstNextEntry) {
            return pstNextEntry;
        }
    }

    return NULL;
}

VME_DB_CONTAINER_ENTRY_UN *VME_DB_CONTAINER_GetNextRec(VME_DB_CONTAINER_HANDLE pstContainer,
                                                       VME_DB_CONTAINER_ENTRY_UN *punCurEntry)
{
    switch (pstContainer->enType) {
        case VME_DB_TBL_TYPE_HASH: {
            return (VME_DB_CONTAINER_ENTRY_UN *)(void *)VME_DB_HASH_GetNextRec(pstContainer->unHandle.pstHash,
                                                                               &punCurEntry->stHash);
        }
        case VME_DB_TBL_TYPE_RBTREE: {
            break;
        }
        default: {
            return NULL;
        }
    }
}

void *VME_DB_GetNextRec(VME_DB_TBL_HANDLE pstTable, VME_DB_REC_HANDLE hCurRec, VME_DB_REC_HANDLE *phNextRec)
{
    const VME_DB_REC_HANDLE_PVT_S *pstCurPvtHandle = (VME_DB_REC_HANDLE_PVT_S *)&hCurRec;
    VME_DB_REC_HANDLE_PVT_S *pstNextPvtHandle = (VME_DB_REC_HANDLE_PVT_S *)phNextRec;
    VME_DB_CONTAINER_ENTRY_UN *punCurMainEntry = NULL;
    VME_DB_CONTAINER_ENTRY_UN *punNextMainEntry = NULL;
    VME_DB_USER_DATA_S *pstUserData = NULL;

    punCurMainEntry = VME_DB_NODE_TO_MAIN_ENTRY(pstCurPvtHandle->pNode);

    punNextMainEntry = VME_DB_CONTAINER_GetNextRec(pstTable->pstMainCtnr, punCurMainEntry);
    if (punNextMainEntry == NULL) {
        return NULL;
    }

    pstNextPvtHandle->pNode = VME_DB_MAIN_ENTRY_TO_NODE(punNextMainEntry);

    pstUserData = VME_DB_NODE_TO_USER_DATA(pstNextPvtHandle->pNode, pstTable->uiIndexCount);

    return pstUserData->aucRecord;
}

void AIS_ZoneMZoneHostInfoCfg(VmeSmpMsgInfo_S **msgInfo, AisQueryInofZone **aiInofZoneHostInfo,
                              AisQueryInofZone *aiInofZoneHost, AisDbZoneMZoneCfgRecord **zoneRec,
                              void *thisLocal) {
    if ((*msgInfo)->pOptionData == NULL) { 
        *aiInofZoneHostInfo = aiInofZoneHost;
        *zoneRec = (AisDbZoneMZoneCfgRecord *)VME_DB_GetFirstRec(
            AIS_TBL_HANDLE(thisLocal, AIS_TID_ZONEM_ZONECFG), &((*aiInofZoneHostInfo)->zone.hRec));
    } else {
        *aiInofZoneHostInfo = (AisQueryInofZone *)(*msgInfo)->pOptionData;
        *zoneRec = (AisDbZoneMZoneCfgRecord *)VME_DB_GetRec(AIS_TBL_HANDLE(thisLocal, AIS_TID_ZONEM_ZONECFG),
                                                            &((*aiInofZoneHostInfo)->zone.tblKey),
                                                            sizeof(AisDbZoneMZoneCfgKey),
                                                            &((*aiInofZoneHostInfo)->zone.hRec));
    }
    return;
}

unsigned int AIS_ZoneWithoutHostRec(void *thisLocal, VmeSmpMsgInfo_S *msgInfo,
                              AisDbZoneMZoneCfgRecord *zoneRec, AisQueryInofHostEnp inofHostEnp, unsigned int *count)
{
    return VOS_OK;
}

unsigned int AIS_ZoneHostSetOptionData(VmeSmpMsgInfo_S *msgInfo,
    AisQueryInofZone *aiInofZoneHostInfo, AisDbZoneMZoneCfgRecord *zoneTempRec, VME_DB_REC_HANDLE zoneHdlRec)
{
    aiInofZoneHostInfo->zone.hRec = zoneHdlRec;
    (void)memcpy(&(aiInofZoneHostInfo->zone.tblKey), 
        &(zoneTempRec->tblKey), sizeof(AisDbZoneMZoneCfgKey));
    return VOS_OK;
}

unsigned int AIS_ZoneSetOptionData(VmeSmpMsgInfo_S *msgInfo,
    AisQueryInofZone *aiInofZoneHostInfo, AisDbZoneMZoneCfgRecord *zoneTempRec, VME_DB_REC_HANDLE zoneHdlTempRec)
{
    aiInofZoneHostInfo->zone.hRec = zoneHdlTempRec;
    (void)memcpy(&(aiInofZoneHostInfo->zone.tblKey), 
        &(zoneTempRec->tblKey), sizeof(AisDbZoneMZoneCfgKey));
    aiInofZoneHostInfo->optionType = 1; 

    return VOS_OK;
}

typedef struct {
    unsigned int totalCount;
    unsigned int defZoneStaResult;
    unsigned int hostIp;
    unsigned int learnedIp1;
    unsigned int learnedIp2;
    unsigned int inconsistent;
    unsigned int isLocal;
    unsigned int key;
    unsigned int vrId;
    unsigned char zoneName[32];
} CLASS_AIS_DISINOFZONEDYN_S;

typedef struct {
	ZoneMIpAddress refIp1;
	ZoneMIpAddress refIp2;
	AisDbSmoothFlag flag;	
} AisDbZoneMZoneHostCfgData;

typedef struct {
	AisDbZoneMZoneHostCfgKey tblKey;
	AisDbZoneMZoneHostCfgData tblData;
} AisDbZoneMZoneHostCfgRecord;

int strcmp(const char* str1, const char* str2)
{
	int ret = 0;
	while(!(ret=*(unsigned char*)str1-*(unsigned char*)str2) && *str1)
	{
		str1++;
		str2++;
	}

	if (ret < 0)
	{
		return -1;
	}
	else if (ret > 0)
	{
		return 1;
	}
	return 0;
}

char * strcpy(char *dst,const char *src)
{
    char *ret = dst;

    while ((*dst++=*src++)!='\0');

    return ret;
}

void AIS_ZoneMGetHostHandle(AisQueryInofZone **aiInofZoneHostInfo, AisDbZoneMZoneHostCfgRecord **hostRec,
                            void *thisLocal, VME_DB_REC_HANDLE *hostHdlRec)
{
    if ((*aiInofZoneHostInfo)->optionType != 2) { 
        *hostRec = (AisDbZoneMZoneHostCfgRecord *)VME_DB_GetFirstRec(
            AIS_TBL_HANDLE(thisLocal, AIS_TID_ZONEM_ZONEHOSTCFG), &((*aiInofZoneHostInfo)->zoneHost.hRec));
    } else {
        *hostRec = (AisDbZoneMZoneHostCfgRecord *)VME_DB_GetRec(AIS_TBL_HANDLE(thisLocal, AIS_TID_ZONEM_ZONEHOSTCFG),
                                                                &((*aiInofZoneHostInfo)->zoneHost.tblKey),
                                                                sizeof(AisDbZoneMZoneHostCfgKey),
                                                                &((*aiInofZoneHostInfo)->zoneHost.hRec));
    }

    (*aiInofZoneHostInfo)->optionType = 0;
    *hostHdlRec = (*aiInofZoneHostInfo)->zoneHost.hRec;
    return;
}

void AIS_ZoneMQueryZone(void *thisLocal, AisQueryInofZone *aiInofZoneHostInfo, VmeSmpMsgInfo_S *msgInfo,
                        AisQueryInofHostEnp inofHostEnp, unsigned int *count)
{
    aiInofZoneHostInfo->isMatch = 0;
    CLASS_AIS_DISINOFZONEDYN_S temp = {0};
    VME_DB_REC_HANDLE hostHdlRec = { 0 };
    VME_DB_REC_HANDLE hostHdlRecTemp = { 0 };
    AisDbZoneMZoneHostCfgRecord *hostRec = NULL;
    AisDbZoneMZoneHostCfgRecord *hostRecTemp = NULL;
    AIS_ZoneMGetHostHandle(&aiInofZoneHostInfo, &hostRec, thisLocal, &hostHdlRec);
    for (; (hostRec) && ((hostRecTemp) =
         VME_DB_GetNextRec((AIS_TBL_HANDLE(thisLocal, AIS_TID_ZONEM_ZONEHOSTCFG)), (hostHdlRec), &(hostHdlRecTemp)), 1);
         (hostRec) = (hostRecTemp), (hostHdlRec) = (hostHdlRecTemp)) {
        if (strcmp(aiInofZoneHostInfo->zone.tblKey.zoneName, hostRec->tblKey.zoneName) != 0) {
            continue;
        } else {
            aiInofZoneHostInfo->isMatch = 1;
        }
        if ((inofHostEnp.consistent == 1) && (hostRec->tblData.refIp1.ipAddress.addrIpv4 != 0) &&
            (hostRec->tblData.refIp2.ipAddress.addrIpv4 != 0)) {
            continue;
        }

        temp.hostIp = hostRec->tblKey.hostIpStart.ipAddress.addrIpv4;
        unsigned int ret = memcpy(temp.zoneName, hostRec->tblKey.zoneName, MAX_ZONENAME_LEN);

        temp.learnedIp1 = hostRec->tblData.refIp1.ipAddress.addrIpv4;
        temp.learnedIp2 = hostRec->tblData.refIp2.ipAddress.addrIpv4;

        *count = (*count) + 1;
        if ((*count) > AIS_QUERY_HOST_MAXREC && hostHdlRecTemp != 0 && hostRecTemp != 0 &&
            strcmp(aiInofZoneHostInfo->zone.tblKey.zoneName, hostRecTemp->tblKey.zoneName) == 0) {
            aiInofZoneHostInfo->zoneHost.hRec = hostHdlRecTemp;
            (void)memcpy(&(aiInofZoneHostInfo->zoneHost.tblKey), 
                               &(hostRecTemp->tblKey), sizeof(AisDbZoneMZoneHostCfgKey));
            aiInofZoneHostInfo->optionType = 2; 
            break;
        }
    }

    return;
}

unsigned int AIS_ZoneMQueryZoneCfg(unsigned int consistent, void *thisLocal, VmeSmpMsgInfo_S *msgInfo) {
    unsigned int ret;
    unsigned int count = 0;
    AisQueryInofZone aiInofZoneHost = { 0 };
    AisQueryInofZone *aiInofZoneHostInfo = NULL;
    VME_DB_REC_HANDLE zoneHdlRec = { 0 };
    VME_DB_REC_HANDLE zoneHdlTempRec = { 0 };
    AisDbZoneMZoneCfgRecord *zoneRec = NULL;
    AisDbZoneMZoneCfgRecord *zoneTempRec = NULL;
    AisQueryInofHostEnp inofHostEnp = { 0 };
    AisZoneMMgr *zoneMMgr = (AisZoneMMgr *)AIS_ZONEM_MGR_GET(thisLocal);
    if (zoneMMgr == NULL) {
        return VOS_ERROR;
    }
    AIS_ZoneMZoneHostInfoCfg(&msgInfo, &aiInofZoneHostInfo, &aiInofZoneHost, &zoneRec, thisLocal);
    zoneHdlRec = aiInofZoneHostInfo->zone.hRec;
    for (; (zoneRec) && ((zoneTempRec) =
         VME_DB_GetNextRec((AIS_TBL_HANDLE(thisLocal, AIS_TID_ZONEM_ZONECFG)), (zoneHdlRec), &(zoneHdlTempRec)), 1);
         (zoneRec) = (zoneTempRec), (zoneHdlRec) = (zoneHdlTempRec)) {
        ret = strcpy(aiInofZoneHostInfo->zone.tblKey.zoneName, zoneRec->tblKey.zoneName);
        if (ret != VOS_OK) {
            return ret;
        }
        inofHostEnp.localIp = zoneMMgr->localIp;
        inofHostEnp.consistent = consistent;
        AIS_ZoneMQueryZone(thisLocal, aiInofZoneHostInfo, msgInfo, inofHostEnp, &count);
        if (aiInofZoneHostInfo->isMatch == 0) { 
            ret = AIS_ZoneWithoutHostRec(thisLocal, msgInfo, zoneRec, inofHostEnp, &count);
            if (ret != VOS_OK) {
                return ret;
            }
        } else {
            if (aiInofZoneHostInfo->optionType == 2) {
                ret = AIS_ZoneHostSetOptionData(msgInfo, aiInofZoneHostInfo, zoneRec, zoneHdlRec);
                break;
            }
        }
        if (count > AIS_QUERY_HOST_LIST_MAX_REC && zoneHdlTempRec != 0) {
            ret = AIS_ZoneSetOptionData(msgInfo, aiInofZoneHostInfo, zoneTempRec, zoneHdlTempRec);
            break;
        }
    }
    return VOS_OK;
}

int main()
{
	unsigned int int1;
	klee_make_symbolic(&int1, sizeof(int1), "int1");
	AisLocal struct1;
	klee_make_symbolic(&struct1, sizeof(struct1), "struct1");
	VmeSmpMsgInfo_S struct2;
	klee_make_symbolic(&struct2, sizeof(struct2), "struct2");
	int r = AIS_ZoneMQueryZoneCfg(int1, (void *)&struct1, &struct2);
	return r;
}
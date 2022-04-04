#define NULL ((void *)0)
#define VOS_ERROR 1
#define VOS_OK 0
#define AIS_APP_SLOT_MAX_NUM                  16
#define AIS_LAI_INTERVAL                     (100*5)
#define AIS_LAI_MAX_VERSION_REMAINED         100
#define AIS_MODEL_PATH_LEN              256
#define AIS_MODEL_NAME_LEN              256

typedef struct {
  unsigned long interval;
  unsigned long memHandle;
} AisAutoEcnDataMgrInfo;

typedef struct {
  unsigned int lowLimit;
  unsigned int highLimit;
  unsigned int discard;
} AisEcnCfg;

typedef struct {
  unsigned int ecnMin;
  unsigned int ecnMax;
  unsigned int ecnMarkPer;
} AisGaiEcnData;

typedef struct {
  char path[256];
  char name[256];
} AisModelFile;

typedef struct {
  unsigned int maxVersionRemained;
  unsigned long interval;
  unsigned long timeOffset;
  unsigned long memHandle;
} AisQueueDataMgrInfo;

typedef struct {
  unsigned int rcvData;
  unsigned int recordDataFailed;
  unsigned int prepareDataFailed;
  unsigned int infFailed;
  unsigned int outputDataFailed;
  unsigned int setTrainEcn;
  unsigned int setTrainEcnFailed;
  unsigned int errorTimeStamp;
  unsigned int errorBandwidth;
  unsigned int dropDataforTimestamp;
} AisiLossLessLocalStat;

enum EaiPolicyT {
  EAI_ENGINE_CPU_NN = 1,
  EAI_ENGINE_NPU_NN = 2,
  EAI_ENGINE_CPU_CML = 3,
};

typedef struct {
  volatile short cnt;
} rte_atomic16_t;

typedef struct {
  volatile int cnt;
} rte_atomic32_t;

typedef struct {
  volatile long cnt;
} rte_atomic64_t;

struct EaiModelCfgT {
  char *appId;
  char *appName;
  char *modelName;
  char *modelVersion;
  enum EaiPolicyT policy;
  unsigned int outLength;
  unsigned int batch;
};

struct TagAisAppInfo {
  unsigned int id;
  unsigned int (*dataSuber)(struct TagAisAppInfo *, void *);
  void (*dataCancel)(struct TagAisAppInfo *, void *);
  unsigned int (*initter)(void *, struct TagAisAppInfo *);
  void (*deInitter)(void *, struct TagAisAppInfo *);
  unsigned int (*msgHandler)(void *, struct TagAisAppInfo *, unsigned int, void *);
  AisModelFile modelFile;
  struct EaiModelCfgT modelCfg;
  void *pEaiModel;
  unsigned int dialinRpcQueueSize;
  unsigned int aisRpcQueueSize;
  unsigned int v8QueueSize;
  unsigned int outpuQueueSize;
  unsigned int appLocalSize;
  unsigned long memHandle;
  unsigned int maxEvent;
  unsigned int pid;
  unsigned int cid;
  void *thisLocal;
  unsigned int timerInterval;
};

typedef struct TagAisAppInfo AisAppInfo;

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

struct avll_tree {
  struct avl3_tree stTree;
  struct avl3_tree_info stTreeInfo;
};

typedef struct {
  AisAutoEcnDataMgrInfo info;
  struct avll_tree ipPortQueueIdTree;
} AisAutoEcnDataMgr;

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

struct tagDdmOsalLogObject {
  const char *pcModuleName;
  const char *pcSubModName;
  unsigned short usMid;
  unsigned char aucReserved[6];
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

struct tagVosListHead {
  struct tagVosListHead *next;
  struct tagVosListHead *prev;
};

typedef struct {
  struct tagVosListHead queueDataTreeListHead;
  AisQueueDataMgrInfo info;
  unsigned int versionRemained;
} AisQueueDataMgr;

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
  AisQueueDataMgr *queueDataMgr[16];
  AisAutoEcnDataMgr *ecnDataMgr;
  AisBlackBox *blackBox;
  AisEcnCfg trainEcnCfgs[12];
  unsigned int trainEcnCfgsIndex[144];
  unsigned int traningMode;
  unsigned int debugMode;
  unsigned long collectionId[16];
  unsigned char sceneFlag;
  struct tagVOS_VFS_FCB *logFile;
  AisiLossLessLocalStat stat;
  AisGaiEcnData ecn;
} AisiLossLessLocal;

struct __attribute__((__packed__)) tagVOS_VFS_FCB {
  void *pvOSALFp;
  unsigned int ulBufMode;
  unsigned int ulAccessMode;
  int lFileHandle;
  char *pcBuffer;
  unsigned int ulRemainDataSize;
  unsigned int ulOffset;
  unsigned char ucFlag;
  unsigned char ucRes1;
  unsigned short usRes2;
  unsigned int pvPrevTaskId;
  unsigned int pvCurTaskId;
  unsigned int pvOpenTaskId;
  struct tagVosSystm stPrevTime;
  struct tagVosSystm stCurTime;
};

void AIS_QueueDataMgrDestroy(AisQueueDataMgr *mgr)
{
    if (!mgr) {
        return;
    }
    free(mgr);
    mgr = NULL;
    return;
}

AisQueueDataMgr *AIS_QueueDataMgrCreate(AisQueueDataMgrInfo *mgrInfo)
{
    AisQueueDataMgr *mgr = NULL;

    mgr = (AisQueueDataMgr *)malloc(sizeof(AisQueueDataMgr));
    if (!mgr) {
        AIS_QueueDataMgrDestroy(mgr);
        return NULL;
    }

    (void)memset(mgr, 0, sizeof(AisQueueDataMgr));
    (void)memcpy(&(mgr->info), mgrInfo, sizeof(AisQueueDataMgrInfo));

    mgr->versionRemained = 0;
    return mgr;
}

AisAutoEcnDataMgr *AIS_AutoEcnDataMgrCreate(AisAutoEcnDataMgrInfo *mgrInfo)
{
    AisAutoEcnDataMgr *mgr = (AisAutoEcnDataMgr *)malloc(sizeof(AisAutoEcnDataMgr));
    if (!mgr) {
        return NULL;
    }

    (void)memset(mgr, 0, sizeof(AisAutoEcnDataMgr));
    (void)memcpy(&(mgr->info), mgrInfo, sizeof(AisAutoEcnDataMgrInfo));

    return mgr;
}

void AISiLossLessLocalDeIniter(void *appLocal, AisAppInfo *info)
{
    unsigned int slotIndex;
    AisiLossLessLocal *local = (AisiLossLessLocal *)appLocal;

    for (slotIndex = 0; slotIndex < AIS_APP_SLOT_MAX_NUM; slotIndex++) {
        if (local->queueDataMgr[slotIndex]) {
            AIS_QueueDataMgrDestroy(local->queueDataMgr[slotIndex]);
            local->queueDataMgr[slotIndex] = NULL;
        }
    }
    if (local->ecnDataMgr) {
        local->ecnDataMgr = NULL;
    }
    if (local->blackBox) {
        local->blackBox = NULL;
    }
    if (local->logFile) {
        local->logFile = NULL;
    }
    return;
}

char *strcat(char *dest, const char *src) {
	char *tmp = dest;
	while (*tmp != '\0')
		tmp++;
	while ((*tmp++ = *src++) != '\0');
	return dest;
}

unsigned int AISiLossLessLocalIniter(void *appLocal, struct TagAisAppInfo *info) {
    AisiLossLessLocal *local = (AisiLossLessLocal *)appLocal;
    AisQueueDataMgrInfo queueInfo;
    AisAutoEcnDataMgrInfo ecnInfo;
    unsigned int slotIndex;

    queueInfo.interval = AIS_LAI_INTERVAL;
    queueInfo.maxVersionRemained = AIS_LAI_MAX_VERSION_REMAINED;
    queueInfo.timeOffset = 0;
    queueInfo.memHandle = info->memHandle;

    for (slotIndex = 0; slotIndex < AIS_APP_SLOT_MAX_NUM; slotIndex++) {
        local->queueDataMgr[slotIndex] = AIS_QueueDataMgrCreate(&queueInfo);
        if (local->queueDataMgr[slotIndex] == NULL) {
            goto ERROR;
        }
    }

    ecnInfo.interval = AIS_LAI_INTERVAL;
    ecnInfo.memHandle = info->memHandle;
    local->ecnDataMgr = AIS_AutoEcnDataMgrCreate(&ecnInfo);
    if (local->ecnDataMgr == NULL) {
        goto ERROR;
    }

    char modelAbsolutePath[AIS_MODEL_PATH_LEN + AIS_MODEL_NAME_LEN] = "";
    if (VOS_OK != strcat(modelAbsolutePath, info->modelFile.path)) {
        goto ERROR;
    }
    if (VOS_OK != strcat(modelAbsolutePath, info->modelFile.name)) {
        goto ERROR;
    }

    local->traningMode = 0; 
    local->debugMode = 0; 

    return VOS_OK;
ERROR:
    AISiLossLessLocalDeIniter(appLocal, info);
    return VOS_ERROR;
}

int main()
{
	AisiLossLessLocal struct1;
	klee_make_symbolic(&struct1, sizeof(struct1), "struct1");
	struct TagAisAppInfo struct2;
	klee_make_symbolic(&struct2, sizeof(struct2), "struct2");
	int r = AISiLossLessLocalIniter(&struct1, &struct2);
	return r;
}
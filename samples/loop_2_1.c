#include "klee/klee.h"
#define NULL ((void *)0)
#define VOS_ERROR 1
#define VOS_OK 0

#define EPOLLIN 1

typedef enum {
  AIS_APP_STAT_WAITING = 1,
  AIS_APP_STAT_READY = 2,
  AIS_APP_STAT_MAS = 3,
} AIS_APP_STAT;

typedef enum {
    CTL_MSG_V8 = 1,
    CTL_MSG_DIALIN = 2,
    CTL_MSG_AIS = 3,
    CTL_MSG_MAX
} CTL_MSG_TYPE_E;

typedef struct {
  unsigned long dialinQueueWrite;
  unsigned long dialinWriteDrop1;
  unsigned long dialinWriteDrop2;
  unsigned long dialinQueueRead;
  unsigned long aisQueueWrite;
  unsigned long aisWriteDrop1;
  unsigned long aisWriteDrop2;
  unsigned long aisQueueRead;
  unsigned long unknownCtrlMsg;
  unsigned long outputCount;
  unsigned long outputDrop1;
  unsigned long outputDrop2;
  unsigned long timerMsgWrite;
  unsigned long timerMsgRead;
  unsigned long timerMsgDrop1;
  unsigned long timerMsgDrop2;
} AisAppStat;

typedef struct {
  void **buffer;
  unsigned int size;
  unsigned int in;
  unsigned int out;
} AisKfifo;

typedef struct {
  char path[256];
  char name[256];
} AisModelFile;

enum EaiPolicyT {
  EAI_ENGINE_CPU_NN = 1,
  EAI_ENGINE_NPU_NN = 2,
  EAI_ENGINE_CPU_CML = 3,
};

struct EaiModelCfgT {
  char *appId;
  char *appName;
  char *modelName;
  char *modelVersion;
  enum EaiPolicyT policy;
  unsigned int outLength;
  unsigned int batch;
};

typedef struct TagAisAppInfo AisAppInfo;

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

struct sockaddr_un {
  unsigned short sun_family;
  char sun_path[108];
};

typedef struct {
  struct TagAisAppInfo info;
  unsigned int taskId;
  AisKfifo *aisRpcQueue;
  AisKfifo v8Queue[16];
  AisKfifo *outputQueue;
  void *appLocal;
  unsigned int fromFd;
  unsigned int toFd;
  int epollFd;
  struct epoll_event *events;
  struct sockaddr_un target;
  unsigned char readBuf[1024];
  unsigned char bufLen;
  void *timer;
  AisAppStat stat;
  AIS_APP_STAT fsmStat;
  unsigned char taskFlag;
} AisAppEnv;

struct tagDdmOsalLogObject {
  const char *pcModuleName;
  const char *pcSubModName;
  unsigned short usMid;
  unsigned char aucReserved[6];
};

union epoll_data {
  void *ptr;
  int fd;
  unsigned int u32;
  unsigned long u64;
};

struct epoll_event {
  unsigned int events;
  union epoll_data data;
};

unsigned int AIS_KfifoMin(unsigned int x1, unsigned int x2)
{
    return (x1 < x2) ? x1 : x2;
}

unsigned int AIS_KfifoGet(AisKfifo *pstKFifo, void **element)
{
    unsigned int len = 1;
    unsigned int len2;

    len = AIS_KfifoMin(len, pstKFifo->in - pstKFifo->out);

    len2 = AIS_KfifoMin(len, pstKFifo->size - (pstKFifo->out & (pstKFifo->size - 1)));

    (void)memcpy(element, pstKFifo->buffer + (pstKFifo->out & (pstKFifo->size - 1)),
                   len2 * sizeof(void *));
    if (len < len2) {
        return VOS_ERROR;
    }
    (void)memcpy(element, pstKFifo->buffer,
                   (len - len2) * sizeof(void *));

    pstKFifo->out += len;

    return (len == 0) ? VOS_ERROR : VOS_OK;
}

int AISiLossLessLocalMsgHandler(void *appLocal, AisAppInfo *info, int type, void *msg)
{

	return (msg == NULL) ? VOS_ERROR : VOS_OK;
}

void AIS_AppEnvProcEvent(AisAppEnv *env, unsigned char ctrlMsg)
{
    void *message = NULL;
	env->info.msgHandler = AISiLossLessLocalMsgHandler;
    switch (ctrlMsg) {
        case CTL_MSG_V8: {
            while (AIS_KfifoGet(env->v8Queue, &message) == VOS_OK) {
                env->stat.timerMsgRead++;
                (void)env->info.msgHandler(env->appLocal, &env->info, CTL_MSG_V8, message);
                free(message);
            }
            break;
        }
        default: {
            env->stat.unknownCtrlMsg++;
            break;
        }
    }
}

void AIS_AppEnvProcEpollEvent(AisAppEnv *env, struct epoll_event *event) {
    int in = event->events & (EPOLLIN);
    int len;
    int i;

    if (!in) {
        return;
    }
    len = env->bufLen;
    do {
        for (i = 0; i < len; i++) {
            AIS_AppEnvProcEvent(env, env->readBuf[i]);
        }
		len--;
    } while (len > 0);

    return;
}
int main()
{
	AisAppEnv *struct1;
	struct1 = malloc(sizeof(AisAppEnv));
	struct epoll_event *struct2;
	struct2 = malloc(sizeof(struct epoll_event));
	klee_make_symbolic(struct1, sizeof(AisAppEnv), "struct1");
	klee_make_symbolic(struct2, sizeof(struct epoll_event), "struct2");
	AIS_AppEnvProcEpollEvent(struct1, struct2);
	return 0;
}

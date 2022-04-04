#include "klee/klee.h"

typedef enum {
  HSTM_TYPE_5815=0,
  HSTM_TYPE_5835=1,
  HSTM_TYPE_5816=2,
  HSTM_TYPE_5891=3,
  HSTM_TYPE_5892=4,
  HSTM_TYPE_8855=5,
  HSTM_TYPE_5856=6,
  HSTM_TYPE_5886=7,
  HSTM_TYPE_5896=8,
  HSTM_TYPE_5812=9,
  HSTM_TYPE_5813=10,
  HSTM_TYPE_5895=11,
  HSTM_TYPE_5887=12,
  HSTM_TYPE_UNKNOWN=13,
  HSTM_TYPE_MAX=14,
} HSTM_CHIP_TYPE_E;
typedef struct __attribute__((__packed__)) {
  uint32_t low;
  uint32_t high;
} HSTM_CPUTICK;

typedef struct __attribute__((__packed__)) {
  uint32_t tb_no;
  uint32_t cos_no;
  uint32_t slot_id;
  uint32_t src_board;
  uint32_t dst_board;
  uint32_t almTypeExt;
} HSTM_DFX_ALARM_INFO_EXT;

typedef struct __attribute__((__packed__)) {
  uint32_t alm_id;
  uint32_t fault_chip;
  uint32_t fault_type;
  HSTM_DFX_ALARM_INFO_EXT ext;
  uint32_t is_fic;
} HSTM_DFX_ALARM_INFO;

typedef enum {
  HSTM_RESET_CAUSE_NONE=0,
  HSTM_RESET_CAUSE_COMMON=1,
  HSTM_RESET_CAUSE_SDC_CLOCK=2,
  HSTM_RESET_CAUSE_DDR=3,
  HSTM_RESET_CAUSE_INT=4,
  HSTM_RESET_CAUSE_FDR=5,
  HSTM_RESET_CAUSE_RAMTBL=6,
  HSTM_RESET_CAUSE_LPFLOW=7,
  HSTM_RESET_CAUSE_ILK=8,
  HSTM_RESET_CAUSE_CLOCK=9,
  HSTM_RESET_CAUSE_PDISO=10,
  HSTM_RESET_CAUSE_IBTMJAM=11,
  HSTM_RESET_CAUSE_CQ=12,
  HSTM_RESET_CAUSE_PD_EXHAUST=13,
  HSTM_RESET_CAUSE_PCIE=14,
  HSTM_RESET_CAUSE_FQJAM=15,
  HSTM_RESET_CAUSE_CMCECC=16,
  HSTM_RESET_CAUSE_QMCECC=17,
  HSTM_RESET_CAUSE_PRCECC=18,
  HSTM_RESET_CAUSE_S3BP=19,
  HSTM_RESET_CAUSE_TMRBE=20,
  HSTM_RESET_CAUSE_EDRAM=21,
  HSTM_RESET_CAUSE_HMC=22,
  HSTM_RESET_CAUSE_MCJAM=23,
  HSTM_RESET_CAUSE_LINK=24,
  HSTM_RESET_CAUSE_SMQME=25,
  HSTM_RESET_CAUSE_PMC=26,
  HSTM_RESET_CAUSE_GQ_CREDIT=27,
  HSTM_RESET_CAUSE_FIC_QME=28,
  HSTM_RESET_CAUSE_CAL=29,
  HSTM_RESET_CAUSE_INIT_NIF_FAIL=30,
  HSTM_RESET_CAUSE_INIT_INNER_MEM_FAIL=31,
  HSTM_RESET_CAUSE_INIT_OUTER_MEM_FAIL=32,
  HSTM_RESET_CAUSE_INIT_TEST_REG_FAIL=33,
  HSTM_RESET_CAUSE_INIT_CLK_FAIL=34,
  HSTM_RESET_CAUSE_INIT_FABRIC_IF_FAIL=35,
  HSTM_RESET_CAUSE_INIT_CHIP_INNER_FAIL=36,
  HSTM_RESET_CAUSE_INIT_HIRAM_FAIL=37,
  HSTM_RESET_CAUSE_END=38,
} HSTM_RESET_CAUSE_E;

typedef struct __attribute__((__packed__)) {
  uint32_t funcId;
  unsigned int data[5];
} HstmDfxFicPatchData;

typedef enum {
  HSTM_FAULT_NOTUSE=0,
  HSTM_FAULT_SERDES=1,
  HSTM_FAULT_BP=2,
  HSTM_FAULT_ITLK_BADLANE=3,
  HSTM_FAULT_ITLK_BOARD_RST=4,
  HSTM_FAULT_ITLK_RST0=5,
} HstmFaultId;

typedef enum {
  HSTM_FWD_MODE_UNKNOWN=0,
  HSTM_FWD_MODE_7021=1,
  HSTM_FWD_MODE_NGSF=2,
} HstmFwdMode;

typedef enum {
  HSTM_ISO_TBL_CARDPORT_TBTP=0,
  HSTM_ISO_TBL_HQOS_RESERVED_SQ_ID=1,
  HSTM_ISO_TBL_HQOS_SQ_STATUS=2,
  HSTM_ISO_TBL_HQOS_SQID_OUT=3,
  HSTM_ISO_TBL_HSTM_NGSF_INTERNAL_PORT_CFG=4,
  HSTM_ISO_TBL_HSTM_NGSF_SERV_PORT_CFG=5,
  HSTM_ISO_TBL_HSTM_NGSF_TM_CFG=6,
  HSTM_ISO_TBL_MC_TM_TREE=7,
  HSTM_ISO_TBL_PHYTB=8,
  HSTM_ISO_TBL_QOS_QUEUE_STAT=9,
  HSTM_ISO_TBL_TBTP_CARDPORT=10,
  HSTM_ISO_TBL_TBTP_PORTINFO=11,
  HSTM_ISO_TBL_TM58X5_FQ_QUEUESTATQUERY=12,
  HSTM_ISO_TBL_TM7021_MEM_SHARE=13,
  HSTM_ISO_TBL_TM7021_MEM_MALLOC=14,
  HSTM_ISO_TBL_TM7021_MEM_MANAGE=15,
  HSTM_ISO_TBL_TM7021_CQ_QUEUE_ID=16,
  HSTM_ISO_TBL_HQOS_SQ_PARAM_OUT=17,
  HSTM_ISO_TBL_MAX=18,
} HstmIsoTblmId;

enum FEISW_HS_ERR_REC_TYPE {
  FEISW_HS_INIT_VALUE=0,
  FEISW_HS_LINK_LOST=1,
  FEISW_HS_LINK_CRC=2,
  FEISW_HS_LINK_HEART=3,
  FEISW_HS_LINK_UNSTABLE=4,
  FEISW_HS_LINK_ENERGY_SAVE=5,
  FEISW_HS_LINK_ENERGY_SAVE_CANCEL=6,
  FEISW_HS_LINK_TM_RST_START=7,
  FEISW_HS_LINK_TM_RST_DONE=8,
  FEISW_HS_MSG_SWF_ISO=9,
  FEISW_HS_LINK_LOST_FULLMESH=10,
  FEISW_HS_LINK_SFU_WARMBACKUP=11,
  FEISW_HS_LINK_BOARD_CHANGE=12,
  FEISW_HS_LINK_TX_OPEN_ACK=13,
  FEISW_HS_LINK_BOARD_CHANGE_LPU=14,
  FEISW_HS_LINK_BOARD_CHANGE_SFU=15,
  FEISW_HS_NG_CHIP_RST_START=16,
  FEISW_HS_NG_CHIP_RST_END=17,
  FEISW_HS_NG_VOQ_FAULT_START=18,
  FEISW_HS_NG_VOQ_FAULT_TYPE=19,
  FEISW_HS_NG_VOQ_FAULT_END=20,
  FEISW_HS_CHIP_ISOMEM_ERR=21,
  FEISW_HS_LINK_RESET=22,
  FEISW_HS_LINK_RESET_ACK=23,
  FEISW_HS_CLOSE_SFU_LINK=24,
  FEISW_HS_NG_CHIP_RST_START_ACK=25,
  FEISW_HS_NG_CLOSE_INGRESS_VOQ_PENDDING=26,
  FEISW_HS_NG_FLUSH_INGRESS_VOQ=27,
  FEISW_HS_NG_FLUSH_INGRESS_VOQ_ACK=28,
  FEISW_HS_NG_FIC_TO_LINK_ACK=29,
  FEISW_HS_NG_FIC_TO_SEND_AGAIN=30,
  FEISW_HS_NG_FIC_TO_READY_FLAG=31,
  HS_FEISW_2_FEISWAGT_INIT_UNDO_ISO=32,
  FEISW_HS_TM_CHIP_RST_MSG=33,
  FEISW_HS_LINK_SWICH_ON=34,
  FEISW_HS_LINK_SWICH_OFF=35,
  FEISW_HS_SC_CHIP_RST_START=36,
  FEISW_HS_SC_CHIP_RST_DONE=37,
  FEISW_HS_RESET_CHIP_LINK_DOWN=38,
  FEISW_HS_BOARD_AVAILABLE_CHANGE=39,
  FEISW_HS_LINK_UP_VIRTUAL=40,
  FEISW_HS_SFU_ISO_MSG=41,
  FEISW_HS_SFU_NG_BP=42,
  FEISW_HS_SC_RUT_ERR_EXIST=43,
  FEISW_HS_SC_RUT_ERR_CANCEL=44,
  FEISW_HS_SFU_DISCARD_APPEAR=45,
  FEISW_HS_SFU_DISCARD_CANCEL=46,
  FEISW_HS_SFU_TX_OPEN_OR_CLOSE=47,
  FEISW_HS_LPU_REPORT_OPEN_LINK=48,
  FEISW_HS_LINK_HEART_CANCEL=49,
  FEISW_HS_LINK_SEQ_MISORDER=50,
  FEISW_HS_CLU_OUTERLINK_CONNECT_ERR=100,
  FEISW_HS_CLU_OUTERLINK_UP_NUM_CLOSE=101,
  FEISW_HS_ERR_REC_TYPE_MAX=102,
};

enum HstmDfxAlarmState {
  HSTM_DFX_ALARM_BEGIN=1,
  HSTM_DFX_ALARM_END=2,
  HSTM_DFX_ALARM_LOG_TRAP=3,
};

enum tagHSTM_DEVM_HARDTYPE_ENUM_E {
  HSTM_EX_DEVM_HARDTYPE_CR53LPUF50A=4096,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF240A=4097,
  HSTM_EX_DEVM_HARDTYPE_CR57VSUF160=4098,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU50=4099,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU120=4100,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF50C=4101,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF100C=4102,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF120A=4103,
  HSTM_EX_DEVM_HARDTYPE_CR57VSUF80=4104,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU51L=4105,
  HSTM_EX_DEVM_HARDTYPE_CX68MNPU80G=4106,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU1TE=4107,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU1TC=4108,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU1TG=4109,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU1TCB=4110,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF480B=4111,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF480D=4112,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU200D=4113,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF200C=4114,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF240F=4115,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU240=4116,
  HSTM_EX_DEVM_HARDTYPE_CX68MNPU160G=4117,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU480=4118,
  HSTM_EX_DEVM_HARDTYPE_CX68MNPU480G=4119,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU1T6C=4120,
  HSTM_EX_DEVM_HARDTYPE_CR58LPUF480C=4121,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU1TA=4122,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU1TB=4123,
  HSTM_EX_DEVM_HARDTYPE_CR58LPUF4TA=4124,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU2TC=4125,
  HSTM_EX_DEVM_HARDTYPE_CR58LPUF2TA=4126,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU2TF=4127,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF480G=4128,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF1TH=4129,
  HSTM_EX_DEVM_HARDTYPE_CX68MNPU1T=4130,
  HSTM_EX_DEVM_HARDTYPE_CX68MNPU1TB=4131,
  HSTM_EX_DEVM_HARDTYPE_CR59LPUF1T6A=4132,
  HSTM_EX_DEVM_HARDTYPE_TPJ3CXPA=4133,
  HSTM_EX_DEVM_HARDTYPE_CX68M1A2T=4134,
  HSTM_EX_DEVM_HARDTYPE_TPJ2CXP=4135,
  HSTM_EX_DEVM_HARDTYPE_ANK2CXPA=4136,
  HSTM_EX_DEVM_HARDTYPE_ANK2CXPB=4137,
  HSTM_EX_DEVM_HARDTYPE_ANP2CXPC=4138,
  HSTM_EX_DEVM_HARDTYPE_ANP2CXPD=4139,
  HSTM_EX_DEVM_HARDTYPE_NEC3CXPL=4140,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPG=4141,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPH=4142,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPI=4143,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPJ=4144,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPK=4145,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPL=4146,
  HSTM_EX_DEVM_HARDTYPE_ANG1CXPO=4147,
  HSTM_EX_DEVM_HARDTYPE_AND3CXPA=4148,
  HSTM_EX_DEVM_HARDTYPE_ANK1CXPA=4149,
  HSTM_EX_DEVM_HARDTYPE_ANK1CXPB=4150,
  HSTM_EX_DEVM_HARDTYPE_DP21CXP160A=4151,
  HSTM_EX_DEVM_HARDTYPE_TPJ1CXP01=4152,
  HSTM_EX_DEVM_HARDTYPE_CX68F1A_8H20Q=4153,
  HSTM_EX_DEVM_HARDTYPE_CR58LPUF2TH=4154,
  HSTM_EX_DEVM_HARDTYPE_CR58LPUF1TK=4155,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU2TE=4156,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU2TK=4157,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU2TM=4158,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU1TM=4159,
  HSTM_EX_DEVM_HARDTYPE_DP51CXP2T2A=4160,
  HSTM_EX_DEVM_HARDTYPE_GPL4TA=4161,
  HSTM_EX_DEVM_HARDTYPE_CR58LPUF2TJ=4162,
  HSTM_EX_DEVM_HARDTYPE_DP31CXP1T2A=4163,
  HSTM_EX_DEVM_HARDTYPE_GPR4KQ60CQ=4164,
  HSTM_EX_DEVM_HARDTYPE_DP51CXP1T2A=4165,
  HSTM_EX_DEVM_HARDTYPE_M1C=4166,
  HSTM_EX_DEVM_HARDTYPE_LPUF1T=4167,
  HSTM_EX_DEVM_HARDTYPE_TPA1EY8=4168,
  HSTM_EX_DEVM_HARDTYPE_TPD1EY8=4169,
  HSTM_EX_DEVM_HARDTYPE_TPA1EY16=4170,
  HSTM_EX_DEVM_HARDTYPE_TPD1EY16=4171,
  HSTM_EX_DEVM_HARDTYPE_TPA1FV4=4172,
  HSTM_EX_DEVM_HARDTYPE_TPD1FV4=4173,
  HSTM_EX_DEVM_HARDTYPE_TPA1FV8=4174,
  HSTM_EX_DEVM_HARDTYPE_TPD1FV8=4175,
  HSTM_EX_DEVM_HARDTYPE_TPA2FH2=4176,
  HSTM_EX_DEVM_HARDTYPE_TPD2FH2=4177,
  HSTM_EX_DEVM_HARDTYPE_TPA1FH4=4178,
  HSTM_EX_DEVM_HARDTYPE_TPD1FH4=4179,
  HSTM_EX_DEVM_HARDTYPE_TPA1FHD2=4180,
  HSTM_EX_DEVM_HARDTYPE_TPD1FHD2=4181,
  HSTM_EX_DEVM_HARDTYPE_TPD1FHL2=4182,
  HSTM_EX_DEVM_HARDTYPE_TPD1FHD4=4183,
  HSTM_EX_DEVM_HARDTYPE_TPA2FHD1=4184,
  HSTM_EX_DEVM_HARDTYPE_TPD2FHD1=4185,
  HSTM_EX_DEVM_HARDTYPE_CR59LPU1T6D_5K=4186,
  HSTM_EX_DEVM_HARDTYPE_CR59LPU1T6D=4187,
  HSTM_EX_DEVM_HARDTYPE_CR59LPU1T6DA=4188,
  HSTM_EX_DEVM_HARDTYPE_CR59LPU1T6DA_5K_S=4189,
  HSTM_EX_DEVM_HARDTYPE_CR59LPU1T6E=4190,
  HSTM_EX_DEVM_HARDTYPE_CR59LPU1T6EA=4191,
  HSTM_EX_DEVM_HARDTYPE_CR59LPUF1T6AB=4192,
  HSTM_EX_DRIVER_BOARD_SERVICE_VSUF_80=4193,
  HSTM_EX_DRIVER_BOARD_SERVICE_VSUF_160=4194,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU400A=4195,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF1TQ=4196,
  HSTM_EX_DEVM_HARDTYPE_GPL2TA=4197,
  HSTM_EX_DEVM_HARDTYPE_CR57VSU400B=4198,
  HSTM_EX_DEVM_HARDTYPE_CR57VSU200B=4199,
  HSTM_EX_DEVM_HARDTYPE_CR57VSU400D=4200,
  HSTM_EX_DEVM_HARDTYPE_TPA2EX8S=4201,
  HSTM_EX_DEVM_HARDTYPE_TPD2EX8S=4202,
  HSTM_EX_DEVM_HARDTYPE_TPA2FH1=4203,
  HSTM_EX_DEVM_HARDTYPE_TPD2FH1=4204,
  HSTM_EX_DEVM_HARDTYPE_TPA3FH2=4205,
  HSTM_EX_DEVM_HARDTYPE_TPD3FH2=4206,
  HSTM_EX_DEVM_HARDTYPE_TPA2FH4=4207,
  HSTM_EX_DEVM_HARDTYPE_TPD2FH4=4208,
  HSTM_EX_DEVM_HARDTYPE_TPD1FH8=4209,
  HSTM_EX_DEVM_HARDTYPE_TPD3FHD4=4210,
  HSTM_EX_DEVM_HARDTYPE_TPA2FHD2=4211,
  HSTM_EX_DEVM_HARDTYPE_TPD2FHD2=4212,
  HSTM_EX_DEVM_HARDTYPE_TPA5FHD1=4213,
  HSTM_EX_DEVM_HARDTYPE_TPA1EG8=4214,
  HSTM_EX_DEVM_HARDTYPE_TPD1EG8=4215,
  HSTM_EX_DEVM_HARDTYPE_TPA1EX24S=4216,
  HSTM_EX_DEVM_HARDTYPE_TPD1EX24S=4217,
  HSTM_EX_DEVM_HARDTYPE_TPA2FV4=4218,
  HSTM_EX_DEVM_HARDTYPE_TPD2FV4=4219,
  HSTM_EX_DEVM_HARDTYPE_DP31CXP1T2B=4220,
  HSTM_EX_DEVM_HARDTYPE_DP31CXP800D=4221,
  HSTM_EX_DEVM_HARDTYPE_DP51CXP800A=4222,
  HSTM_EX_DEVM_HARDTYPE_DP21CXP800AS=4223,
  HSTM_EX_DEVM_HARDTYPE_ANG2CXPA=4224,
  HSTM_EX_DEVM_HARDTYPE_ANK3CXPA=4225,
  HSTM_EX_DEVM_HARDTYPE_TPA1MQ1=4226,
  HSTM_EX_DEVM_HARDTYPE_TPA1MPA=4227,
  HSTM_EX_DEVM_HARDTYPE_TPD1CQ1=4228,
  HSTM_EX_DEVM_HARDTYPE_TPA2EG24=4229,
  HSTM_EX_DEVM_HARDTYPE_TPD1MQ1=4230,
  HSTM_EX_DEVM_HARDTYPE_TPD1EG24=4231,
  HSTM_EX_DEVM_HARDTYPE_TPA3EG24=4232,
  HSTM_EX_DEVM_HARDTYPE_CR57LPUF480K=4233,
  HSTM_EX_DEVM_HARDTYPE_TPA2EX16S=4234,
  HSTM_EX_DEVM_HARDTYPE_TPA2EY16=4235,
  HSTM_EX_DEVM_HARDTYPE_TPA2FV8=4236,
  HSTM_EX_DEVM_HARDTYPE_TPA3FHD2=4237,
  HSTM_EX_DEVM_HARDTYPE_TPA3FHD1=4238,
  HSTM_EX_DEVM_HARDTYPE_GFRCXP08FA=4239,
  HSTM_EX_DEVM_HARDTYPE_GPLF4T8A=4240,
  HSTM_EX_DEVM_HARDTYPE_GPL14T4B=4241,
  HSTM_EX_DEVM_HARDTYPE_GPL7T2B=4242,
  HSTM_EX_DEVM_HARDTYPE_GPLF2T4A=4243,
  HSTM_EX_DEVM_HARDTYPE_DP52CXP6T4A=4244,
  HSTM_EX_DEVM_HARDTYPE_CR59LPUF3T2A=4245,
  HSTM_EX_DEVM_HARDTYPE_DP51CXP1T2A_M14=4246,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU4TB=4247,
  HSTM_EX_DEVM_HARDTYPE_CR58LPU2TN=4248,
  HSTM_EX_DEVM_HARDTYPE_TPD1GH2=4249,
  HSTM_EX_DEVM_HARDTYPE_CR57LPU200X=4250,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU1TC=4251,
  HSTM_EX_DEVM_HARDTYPE_CX68NPU480C=4252,
  HSTM_EX_DEVM_HARDTYPE_GPL14T4A=4253,
  HSTM_EX_DEVM_HARDTYPE_GPL7T2A=4254,
  HSTM_EX_DEVM_HARDTYPE_UNKNOW=4255,
};

enum tagHstmTlvFeiiNotifyEventMsgProduct {
  HSU_EX_FEII_TLV_NOTIFY_EVENT_PRODUCT_BASE=0,
  HSU_EX_FEII_TLV_NOTIFY_PWIFSQ_STAT=1,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_FIMMIBSTAT=2,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_MAC_HOP_CPULOG=3,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_COMM_MSG=4,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_LINK_ERR=5,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_INIT_CLK_STAT=6,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_UPLOAD_ERR_INFO=7,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_VOQ_STUCK=8,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_VOQ_STUCK_BACK=9,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_S3BP_REPORT=10,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_MUL_FAULT_REPORT=11,
  HSU_EX_FEII_TLV_NOTIFY_SQ_TBSPEED=12,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HQOS_CELLPACKDISABLE=13,
  HSU_EX_FEII_TLV_NOTIFY_CYCLE_DATA_COLLECT_PKT_LEN_HIS=14,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_VPW_AIB_READY=15,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_DN_FLOW=16,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_DN_EGQ=17,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_DN_PST=18,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_NGSF_PQSTAT=19,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_MIC_DYN_MSG=20,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_REPORTPQSTAT=21,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_UC_L3VPNSTAT=22,
  HSU_EX_FEII_TLV_NOTIFY_MAC_ACCOUNTING_STAT=23,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_EMDI_ALARM=24,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_PORT_DELETE=25,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_GVE_FLOWDROP=26,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_FLEXEAPS_STATE=27,
  HSU_EX_TLV_FEI_HS_MSG_HEART_INFO=28,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_LINK_CTRL=29,
  HSU_EX_TLV_FEI_CFG_HS_LINK_CTRL=30,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_INIT_CLK_SRC=31,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_CLK_SRC_VOTE=32,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_LINK_ORDER=33,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_PEER_LPUTYPE=34,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_VOQ_STUCK=35,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_VOQ_STUCK_BACK=36,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_VOQ_LPU_REACH=37,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_VOQ_LPU_REACH_BACK=38,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_VOQ_GET_RCA=39,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_VOQ_SEND_RCA_BACK=40,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_UPDATE_MDT=41,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_S3BP_PROC=42,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_OPER_CHIP=43,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_SFU_ISO_INFO=44,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_SFU_DIS_INFO=45,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_COMMON=46,
  HSU_EX_TLV_FEI_HS_MSG_LINK_SYNC=47,
  HSU_EX_TLV_FEI_HS_MSG_OPEN_TX=48,
  HSU_EX_TLV_FEI_HS_MSG_OPEN_RX=49,
  HSU_EX_TLV_FEI_HS_MSG_CLOSE_SDS=50,
  HSU_EX_TLV_FEI_CFG_HSTM_MSG_LINK_INFO=51,
  HSU_EX_TLV_FEI_HS_MSG_INIT_CLK_SRC=52,
  HSU_EX_TLV_FEI_HS_MSG_CLK_SRC_VOTE=53,
  HSU_EX_TLV_FEI_HS_MSG_SET_SPEED=54,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_VOQ_LPU_REACH=55,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_VOQ_LPU_REACH_BACK=56,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_VOQ_GET_RCA=57,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_HSTM_MSG_VOQ_GET_RCA_BACK=58,
  HSU_EX_TLV_FEI_HS_MSG_TBBP_CFG=59,
  HSU_EX_TLV_FEI_HS_MSG_FIC2LINK_CONFIG=60,
  HSU_EX_TLV_NOTIFY_EVENT_HSTM_MSG_QUERY_TABLE_INFO=61,
  HSU_EX_TLV_NOTIFY_EVENT_HSTM_MSG_QUERY_TABLE_INFO_BACK=62,
  HSU_EX_TLV_FEI_HS_MSG_LINK_STATE=63,
  HSU_EX_TLV_FEI_HS_MSG_FFA_PATCH=64,
  HSU_EX_FEII_TLV_NOTIFY_EVENT_MAX_product=4294967295,
};

typedef struct __attribute__((__packed__)) {
  HSTM_CPUTICK ts;
  unsigned long long packets;
  unsigned long long bytes;
} sdata;

typedef struct __attribute__((__packed__)) {
  sdata sdata[2];
  char wetdt_padding_0[32];
} HSTM_FLOWPROB_DATA;

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

struct __attribute__((__packed__)) stHSTM_CHECK_DATA_COMMON {
  uint32_t uiRet;
  uint32_t uiFaultId;
  HstmFaultId faultId;
  uint32_t instanceId;
  void *pcieResult;
};

struct __attribute__((__packed__)) stHSTM_CHECK_KEY_COMMON {
  uint32_t uiChipType;
  uint32_t uiChipID;
  uint32_t uiCheckId;
  void *pThis;
};

struct __attribute__((__packed__)) tagFEI_HSTM_INST_BIT_INFO {
  uint32_t uiProcMode : 2;
  uint32_t uiDir : 1;
  uint32_t uiPortType : 3;
  uint32_t uiChipId : 2;
  uint32_t uiLaneBitMap : 24;
};

struct __attribute__((__packed__)) tagTLV_FEII_TM_COMM_MSG {
  uint32_t sub_msg_type;
  uint32_t src_position;
  uint32_t dest_position;
  uint32_t seq_num;
  uint32_t sub_msg_len;
  uint32_t sub_msg_ver;
  unsigned int data[16];
  unsigned int ext_data[0];
};

union tagFEI_HSTM_INST_INFO {
  struct tagFEI_HSTM_INST_BIT_INFO stInstBitInfo;
  uint32_t uiInstId;
};

uint32_t FEI_TM_fe_operate_interlaken(uint32_t ui_fe_id, uint32_t ui_tm_id, unsigned int en_operate_type) {
  uint32_t FEI_TM_fe_operate_interlaken;
  klee_make_symbolic(&FEI_TM_fe_operate_interlaken, sizeof(FEI_TM_fe_operate_interlaken), "FEI_TM_fe_operate_interlaken");
  return FEI_TM_fe_operate_interlaken;
}

uint32_t HSTM_ISO_ClearSdsDecErrCnt(uint32_t chipId) {
  uint32_t HSTM_ISO_ClearSdsDecErrCnt;
  klee_make_symbolic(&HSTM_ISO_ClearSdsDecErrCnt, sizeof(HSTM_ISO_ClearSdsDecErrCnt), "HSTM_ISO_ClearSdsDecErrCnt");
  return HSTM_ISO_ClearSdsDecErrCnt;
}

_Bool HSTM_ISO_DisableFmeaFeatures(uint32_t disableType) {
  _Bool HSTM_ISO_DisableFmeaFeatures;
  klee_make_symbolic(&HSTM_ISO_DisableFmeaFeatures, sizeof(HSTM_ISO_DisableFmeaFeatures), "HSTM_ISO_DisableFmeaFeatures");
  return HSTM_ISO_DisableFmeaFeatures;
}

uint32_t HSTM_ISO_GetCardIdByTbTp(uint32_t uiTb, uint32_t uiTp, uint32_t *puiCardId, uint32_t *puiPortId, void *pThis) {
  uint32_t HSTM_ISO_GetCardIdByTbTp;
  klee_make_symbolic(&HSTM_ISO_GetCardIdByTbTp, sizeof(HSTM_ISO_GetCardIdByTbTp), "HSTM_ISO_GetCardIdByTbTp");
  return HSTM_ISO_GetCardIdByTbTp;
}

uint32_t HSTM_ISO_GetChassisId(void) {
  uint32_t HSTM_ISO_GetChassisId;
  klee_make_symbolic(&HSTM_ISO_GetChassisId, sizeof(HSTM_ISO_GetChassisId), "HSTM_ISO_GetChassisId");
  return HSTM_ISO_GetChassisId;
}

uint32_t HSTM_ISO_GetFeiCompCid(void) {
  uint32_t HSTM_ISO_GetFeiCompCid;
  klee_make_symbolic(&HSTM_ISO_GetFeiCompCid, sizeof(HSTM_ISO_GetFeiCompCid), "HSTM_ISO_GetFeiCompCid");
  return HSTM_ISO_GetFeiCompCid;
}

void *HSTM_ISO_GetFeiThis(void) {
  void *HSTM_ISO_GetFeiThis;
  HSTM_ISO_GetFeiThis = NULL;
  return HSTM_ISO_GetFeiThis;
}

void HSTM_ISO_GetFlowProbData(void *inData, HSTM_FLOWPROB_DATA *outData) {
  return;
}

uint32_t HSTM_ISO_GetHsBoardIngressNum(int boardType) {
  uint32_t HSTM_ISO_GetHsBoardIngressNum;
  klee_make_symbolic(&HSTM_ISO_GetHsBoardIngressNum, sizeof(HSTM_ISO_GetHsBoardIngressNum), "HSTM_ISO_GetHsBoardIngressNum");
  return HSTM_ISO_GetHsBoardIngressNum;
}

uint32_t HSTM_ISO_GetMulticastLeafInfo(uint32_t chip_id, uint32_t *mlid, void *leafinfo) {
  uint32_t HSTM_ISO_GetMulticastLeafInfo;
  klee_make_symbolic(&HSTM_ISO_GetMulticastLeafInfo, sizeof(HSTM_ISO_GetMulticastLeafInfo), "HSTM_ISO_GetMulticastLeafInfo");
  return HSTM_ISO_GetMulticastLeafInfo;
}

uint32_t HSTM_ISO_GetOutchannelByTbTp(uint32_t tb, uint32_t tp, uint32_t *outChannel, void *pThis) {
  uint32_t HSTM_ISO_GetOutchannelByTbTp;
  klee_make_symbolic(&HSTM_ISO_GetOutchannelByTbTp, sizeof(HSTM_ISO_GetOutchannelByTbTp), "HSTM_ISO_GetOutchannelByTbTp");
  return HSTM_ISO_GetOutchannelByTbTp;
}

uint32_t HSTM_ISO_GetSmCfgInfoByTbTp(void *smCfg, uint32_t tbId, uint32_t tpId) {
  uint32_t HSTM_ISO_GetSmCfgInfoByTbTp;
  klee_make_symbolic(&HSTM_ISO_GetSmCfgInfoByTbTp, sizeof(HSTM_ISO_GetSmCfgInfoByTbTp), "HSTM_ISO_GetSmCfgInfoByTbTp");
  return HSTM_ISO_GetSmCfgInfoByTbTp;
}

uint32_t HSTM_ISO_GetSqIdByTbTpFromTblm(uint32_t chipId, uint32_t chipType, uint16_t tb, uint16_t tp) {
  uint32_t HSTM_ISO_GetSqIdByTbTpFromTblm;
  klee_make_symbolic(&HSTM_ISO_GetSqIdByTbTpFromTblm, sizeof(HSTM_ISO_GetSqIdByTbTpFromTblm), "HSTM_ISO_GetSqIdByTbTpFromTblm");
  return HSTM_ISO_GetSqIdByTbTpFromTblm;
}

uint32_t HSTM_ISO_GetTmDeviceCount(void) {
  uint32_t HSTM_ISO_GetTmDeviceCount;
  klee_make_symbolic(&HSTM_ISO_GetTmDeviceCount, sizeof(HSTM_ISO_GetTmDeviceCount), "HSTM_ISO_GetTmDeviceCount");
  return HSTM_ISO_GetTmDeviceCount;
}

HSTM_CHIP_TYPE_E HSTM_ISO_GetTmTypeByChipHardType(uint32_t tmHardType) {
  HSTM_CHIP_TYPE_E HSTM_ISO_GetTmTypeByChipHardType;
  klee_make_symbolic(&HSTM_ISO_GetTmTypeByChipHardType, sizeof(HSTM_ISO_GetTmTypeByChipHardType), "HSTM_ISO_GetTmTypeByChipHardType");
  return HSTM_ISO_GetTmTypeByChipHardType;
}

_Bool HSTM_ISO_IsSr2tB(void) {
  _Bool HSTM_ISO_IsSr2tB;
  klee_make_symbolic(&HSTM_ISO_IsSr2tB, sizeof(HSTM_ISO_IsSr2tB), "HSTM_ISO_IsSr2tB");
  return HSTM_ISO_IsSr2tB;
}

_Bool HSTM_ISO_IsSr2taB(void) {
  _Bool HSTM_ISO_IsSr2taB;
  klee_make_symbolic(&HSTM_ISO_IsSr2taB, sizeof(HSTM_ISO_IsSr2taB), "HSTM_ISO_IsSr2taB");
  return HSTM_ISO_IsSr2taB;
}

_Bool HSTM_ISO_IsTmIsolateEnabled(void) {
  _Bool HSTM_ISO_IsTmIsolateEnabled;
  klee_make_symbolic(&HSTM_ISO_IsTmIsolateEnabled, sizeof(HSTM_ISO_IsTmIsolateEnabled), "HSTM_ISO_IsTmIsolateEnabled");
  return HSTM_ISO_IsTmIsolateEnabled;
}

_Bool HSTM_ISO_IsVirtualClusterMode(void) {
  _Bool HSTM_ISO_IsVirtualClusterMode;
  klee_make_symbolic(&HSTM_ISO_IsVirtualClusterMode, sizeof(HSTM_ISO_IsVirtualClusterMode), "HSTM_ISO_IsVirtualClusterMode");
  return HSTM_ISO_IsVirtualClusterMode;
}

uint32_t HSTM_ISO_IsolateMcTable(uint32_t chipId, uint32_t srvType, uint32_t srvId, uint32_t faultSts) {
  uint32_t HSTM_ISO_IsolateMcTable;
  klee_make_symbolic(&HSTM_ISO_IsolateMcTable, sizeof(HSTM_ISO_IsolateMcTable), "HSTM_ISO_IsolateMcTable");
  return HSTM_ISO_IsolateMcTable;
}

uint32_t HSTM_ISO_IsolateQosTable(uint32_t chipType, uint32_t chipId, uint32_t srvType, uint32_t srvId, uint32_t direction, uint32_t faultSts) {
  uint32_t HSTM_ISO_IsolateQosTable;
  klee_make_symbolic(&HSTM_ISO_IsolateQosTable, sizeof(HSTM_ISO_IsolateQosTable), "HSTM_ISO_IsolateQosTable");
  return HSTM_ISO_IsolateQosTable;
}

void HSTM_ISO_NotifyChipResetToNp(uint32_t chipId) {
  return;
}

_Bool HSTM_ISO_QueryServiceSq(uint32_t chipId, uint32_t sqId) {
  _Bool HSTM_ISO_QueryServiceSq;
  klee_make_symbolic(&HSTM_ISO_QueryServiceSq, sizeof(HSTM_ISO_QueryServiceSq), "HSTM_ISO_QueryServiceSq");
  return HSTM_ISO_QueryServiceSq;
}

void HSTM_ISO_ReportSaidTrafficFallInt(uint32_t devId, uint32_t intId, uint32_t intAddr, uint32_t value) {
  return;
}

uint32_t HSTM_ISO_ReportXficPatchData(HstmDfxFicPatchData *patchData) {
  uint32_t HSTM_ISO_ReportXficPatchData;
  klee_make_symbolic(&HSTM_ISO_ReportXficPatchData, sizeof(HSTM_ISO_ReportXficPatchData), "HSTM_ISO_ReportXficPatchData");
  return HSTM_ISO_ReportXficPatchData;
}

void HSTM_ISO_ResetLpu(HSTM_RESET_CAUSE_E cause) {
  return;
}

uint32_t HSTM_ISO_SendAlarmMsgToFei(uint32_t reasonId, uint32_t alarmId, unsigned int severityType, enum HstmDfxAlarmState alarmState, void *param) {
  uint32_t HSTM_ISO_SendAlarmMsgToFei;
  klee_make_symbolic(&HSTM_ISO_SendAlarmMsgToFei, sizeof(HSTM_ISO_SendAlarmMsgToFei), "HSTM_ISO_SendAlarmMsgToFei");
  return HSTM_ISO_SendAlarmMsgToFei;
}

uint32_t HSTM_ISO_SendChipIsolateEvent(uint32_t chipId, uint32_t isoType, _Bool isNpConnectMultiTm) {
  uint32_t HSTM_ISO_SendChipIsolateEvent;
  klee_make_symbolic(&HSTM_ISO_SendChipIsolateEvent, sizeof(HSTM_ISO_SendChipIsolateEvent), "HSTM_ISO_SendChipIsolateEvent");
  return HSTM_ISO_SendChipIsolateEvent;
}

uint32_t HSTM_ISO_SendCommMsgToFeisw(struct tagTLV_FEII_TM_COMM_MSG *comm_msg, _Bool flowCtrlMsg, const void *ext_data, uint32_t ext_data_len) {
  uint32_t HSTM_ISO_SendCommMsgToFeisw;
  klee_make_symbolic(&HSTM_ISO_SendCommMsgToFeisw, sizeof(HSTM_ISO_SendCommMsgToFeisw), "HSTM_ISO_SendCommMsgToFeisw");
  return HSTM_ISO_SendCommMsgToFeisw;
}

void HSTM_ISO_SendIsolateEventToNp(uint32_t tmId) {
  return;
}

uint32_t HSTM_ISO_SendLinkErrMsgToFeisw(uint32_t uiDevId, uint32_t uiLinkId, enum FEISW_HS_ERR_REC_TYPE eLinkErrType, void *pThis) {
  uint32_t HSTM_ISO_SendLinkErrMsgToFeisw;
  klee_make_symbolic(&HSTM_ISO_SendLinkErrMsgToFeisw, sizeof(HSTM_ISO_SendLinkErrMsgToFeisw), "HSTM_ISO_SendLinkErrMsgToFeisw");
  return HSTM_ISO_SendLinkErrMsgToFeisw;
}

uint32_t HSTM_ISO_SendRsqResAlarmMsgToFei(uint32_t reasonId, enum HstmDfxAlarmState alarmState, void *param) {
  uint32_t HSTM_ISO_SendRsqResAlarmMsgToFei;
  klee_make_symbolic(&HSTM_ISO_SendRsqResAlarmMsgToFei, sizeof(HSTM_ISO_SendRsqResAlarmMsgToFei), "HSTM_ISO_SendRsqResAlarmMsgToFei");
  return HSTM_ISO_SendRsqResAlarmMsgToFei;
}

uint32_t HSTM_ISO_SendSqIsoEopEvent(uint32_t chip_id, uint32_t srv_id, uint32_t fault_sts) {
  uint32_t HSTM_ISO_SendSqIsoEopEvent;
  klee_make_symbolic(&HSTM_ISO_SendSqIsoEopEvent, sizeof(HSTM_ISO_SendSqIsoEopEvent), "HSTM_ISO_SendSqIsoEopEvent");
  return HSTM_ISO_SendSqIsoEopEvent;
}

uint32_t HSTM_ISO_SendSqJamEopMsg(uint32_t chip_id, uint32_t jam_sq_id, uint32_t jam_sq_state) {
  uint32_t HSTM_ISO_SendSqJamEopMsg;
  klee_make_symbolic(&HSTM_ISO_SendSqJamEopMsg, sizeof(HSTM_ISO_SendSqJamEopMsg), "HSTM_ISO_SendSqJamEopMsg");
  return HSTM_ISO_SendSqJamEopMsg;
}

void HSTM_ISO_SetFeiThis(void *pThis) {
  return;
}

void HSTM_ISO_SetFlowProbData(const HSTM_FLOWPROB_DATA *inData, void *outData) {
  return;
}

uint32_t HSTM_ISO_SetLastSaidPingTime(void) {
  uint32_t HSTM_ISO_SetLastSaidPingTime;
  klee_make_symbolic(&HSTM_ISO_SetLastSaidPingTime, sizeof(HSTM_ISO_SetLastSaidPingTime), "HSTM_ISO_SetLastSaidPingTime");
  return HSTM_ISO_SetLastSaidPingTime;
}

uint32_t HSTM_ISO_ShowHisPeerTbLinkState(char *outBuffer, uint32_t *outLen, uint32_t maxLen, void *pThis) {
  uint32_t HSTM_ISO_ShowHisPeerTbLinkState;
  klee_make_symbolic(&HSTM_ISO_ShowHisPeerTbLinkState, sizeof(HSTM_ISO_ShowHisPeerTbLinkState), "HSTM_ISO_ShowHisPeerTbLinkState");
  return HSTM_ISO_ShowHisPeerTbLinkState;
}

uint32_t HSTM_ISO_ShowLinkSeqInfo(uint32_t tlvType, char *outBuffer, uint32_t *outLen, uint32_t maxLen, void *pThis) {
  uint32_t HSTM_ISO_ShowLinkSeqInfo;
  klee_make_symbolic(&HSTM_ISO_ShowLinkSeqInfo, sizeof(HSTM_ISO_ShowLinkSeqInfo), "HSTM_ISO_ShowLinkSeqInfo");
  return HSTM_ISO_ShowLinkSeqInfo;
}

uint32_t HSTM_ISO_ShowPeerTbLinkState(char *outBuffer, uint32_t *outLen, uint32_t maxLen, void *pThis) {
  uint32_t HSTM_ISO_ShowPeerTbLinkState;
  klee_make_symbolic(&HSTM_ISO_ShowPeerTbLinkState, sizeof(HSTM_ISO_ShowPeerTbLinkState), "HSTM_ISO_ShowPeerTbLinkState");
  return HSTM_ISO_ShowPeerTbLinkState;
}

uint32_t HSTM_ISO_SlaveExist(void) {
  uint32_t HSTM_ISO_SlaveExist;
  klee_make_symbolic(&HSTM_ISO_SlaveExist, sizeof(HSTM_ISO_SlaveExist), "HSTM_ISO_SlaveExist");
  return HSTM_ISO_SlaveExist;
}

void HSTM_ISO_StartupTimeStamp(uint32_t chipId, unsigned int action, const char *desc) {
  return;
}

uint32_t HSTM_ISO_TblmAdd(uint32_t chipId, HstmIsoTblmId tblId, void *saveKey, uint32_t keySize, void *saveData, uint32_t datasize) {
  uint32_t HSTM_ISO_TblmAdd;
  klee_make_symbolic(&HSTM_ISO_TblmAdd, sizeof(HSTM_ISO_TblmAdd), "HSTM_ISO_TblmAdd");
  return HSTM_ISO_TblmAdd;
}

uint32_t HSTM_ISO_TblmDelete(uint32_t chipId, HstmIsoTblmId tblId, void *delKey, uint32_t keySize) {
  uint32_t HSTM_ISO_TblmDelete;
  klee_make_symbolic(&HSTM_ISO_TblmDelete, sizeof(HSTM_ISO_TblmDelete), "HSTM_ISO_TblmDelete");
  return HSTM_ISO_TblmDelete;
}

uint32_t HSTM_ISO_TblmQuery(uint32_t chipId, HstmIsoTblmId tblId, void *queryKey, uint32_t keySize, void *queryData, uint32_t datasize) {
  uint32_t HSTM_ISO_TblmQuery;
  klee_make_symbolic(&HSTM_ISO_TblmQuery, sizeof(HSTM_ISO_TblmQuery), "HSTM_ISO_TblmQuery");
  return HSTM_ISO_TblmQuery;
}

uint32_t HSTM_ISO_TblmQueryWithoutChip(HstmIsoTblmId tblId, void *queryKey, uint32_t keySize, void *queryData, uint32_t dataSize) {
  uint32_t HSTM_ISO_TblmQueryWithoutChip;
  klee_make_symbolic(&HSTM_ISO_TblmQueryWithoutChip, sizeof(HSTM_ISO_TblmQueryWithoutChip), "HSTM_ISO_TblmQueryWithoutChip");
  return HSTM_ISO_TblmQueryWithoutChip;
}

uint32_t HSTM_S3BP_GetBpStatus(uint32_t chip_id) {
  uint32_t HSTM_S3BP_GetBpStatus;
  klee_make_symbolic(&HSTM_S3BP_GetBpStatus, sizeof(HSTM_S3BP_GetBpStatus), "HSTM_S3BP_GetBpStatus");
  return HSTM_S3BP_GetBpStatus;
}

_Bool HSTM_S3BP_IsSfuBpClosed(uint32_t chipId) {
  _Bool HSTM_S3BP_IsSfuBpClosed;
  klee_make_symbolic(&HSTM_S3BP_IsSfuBpClosed, sizeof(HSTM_S3BP_IsSfuBpClosed), "HSTM_S3BP_IsSfuBpClosed");
  return HSTM_S3BP_IsSfuBpClosed;
}

unsigned int SSP_DiagLog(unsigned int hAppCid, unsigned int uiInfoId, const char *pcFmt) {
  unsigned int SSP_DiagLog;
  klee_make_symbolic(&SSP_DiagLog, sizeof(SSP_DiagLog), "SSP_DiagLog");
  return SSP_DiagLog;
}

uint32_t fei_hstm_dfx_s3bp_check(struct stHSTM_CHECK_KEY_COMMON *comm_key, struct stHSTM_CHECK_DATA_COMMON *comm_data) {
  uint32_t fei_hstm_dfx_s3bp_check;
  klee_make_symbolic(&fei_hstm_dfx_s3bp_check, sizeof(fei_hstm_dfx_s3bp_check), "fei_hstm_dfx_s3bp_check");
  return fei_hstm_dfx_s3bp_check;
}

uint32_t hstm_dfx_fic_linklost_local_data_init_by_tblm(void) {
  uint32_t hstm_dfx_fic_linklost_local_data_init_by_tblm;
  klee_make_symbolic(&hstm_dfx_fic_linklost_local_data_init_by_tblm, sizeof(hstm_dfx_fic_linklost_local_data_init_by_tblm), "hstm_dfx_fic_linklost_local_data_init_by_tblm");
  return hstm_dfx_fic_linklost_local_data_init_by_tblm;
}

void hstm_dfx_fic_linklost_turn_fsm_into_array(void) {
  return;
}

uint32_t hstm_dfx_hal_heart_check(struct stHSTM_CHECK_KEY_COMMON *check_key, struct stHSTM_CHECK_DATA_COMMON *comm_data) {
  uint32_t hstm_dfx_hal_heart_check;
  klee_make_symbolic(&hstm_dfx_hal_heart_check, sizeof(hstm_dfx_hal_heart_check), "hstm_dfx_hal_heart_check");
  return hstm_dfx_hal_heart_check;
}

uint32_t hstm_dfx_s3bp_main_check_timer_proc(void *pMsg, void *pThis) {
  uint32_t hstm_dfx_s3bp_main_check_timer_proc;
  klee_make_symbolic(&hstm_dfx_s3bp_main_check_timer_proc, sizeof(hstm_dfx_s3bp_main_check_timer_proc), "hstm_dfx_s3bp_main_check_timer_proc");
  return hstm_dfx_s3bp_main_check_timer_proc;
}

uint32_t hstm_dfx_s3bp_msg_proc(void *pMsg, void *pThis) {
  uint32_t hstm_dfx_s3bp_msg_proc;
  klee_make_symbolic(&hstm_dfx_s3bp_msg_proc, sizeof(hstm_dfx_s3bp_msg_proc), "hstm_dfx_s3bp_msg_proc");
  return hstm_dfx_s3bp_msg_proc;
}

uint32_t hstm_iso_backup_board_type_get(void) {
  uint32_t hstm_iso_backup_board_type_get;
  klee_make_symbolic(&hstm_iso_backup_board_type_get, sizeof(hstm_iso_backup_board_type_get), "hstm_iso_backup_board_type_get");
  return hstm_iso_backup_board_type_get;
}

uint32_t hstm_iso_bkb_type_get(void) {
  uint32_t hstm_iso_bkb_type_get;
  klee_make_symbolic(&hstm_iso_bkb_type_get, sizeof(hstm_iso_bkb_type_get), "hstm_iso_bkb_type_get");
  return hstm_iso_bkb_type_get;
}

uint32_t hstm_iso_bkp_ver_get(void) {
  uint32_t hstm_iso_bkp_ver_get;
  klee_make_symbolic(&hstm_iso_bkp_ver_get, sizeof(hstm_iso_bkp_ver_get), "hstm_iso_bkp_ver_get");
  return hstm_iso_bkp_ver_get;
}

uint32_t hstm_iso_common_api_init(void) {
  uint32_t hstm_iso_common_api_init;
  klee_make_symbolic(&hstm_iso_common_api_init, sizeof(hstm_iso_common_api_init), "hstm_iso_common_api_init");
  return hstm_iso_common_api_init;
}

uint32_t hstm_iso_dfx_fic_serdes_check(struct stHSTM_CHECK_KEY_COMMON *check_key, struct stHSTM_CHECK_DATA_COMMON *comm_data) {
  uint32_t hstm_iso_dfx_fic_serdes_check;
  klee_make_symbolic(&hstm_iso_dfx_fic_serdes_check, sizeof(hstm_iso_dfx_fic_serdes_check), "hstm_iso_dfx_fic_serdes_check");
  return hstm_iso_dfx_fic_serdes_check;
}

HstmFwdMode hstm_iso_fei_forward_mode_get(void) {
  HstmFwdMode hstm_iso_fei_forward_mode_get;
  klee_make_symbolic(&hstm_iso_fei_forward_mode_get, sizeof(hstm_iso_fei_forward_mode_get), "hstm_iso_fei_forward_mode_get");
  return hstm_iso_fei_forward_mode_get;
}

uint32_t hstm_iso_fenode_protect_mode_get(void) {
  uint32_t hstm_iso_fenode_protect_mode_get;
  klee_make_symbolic(&hstm_iso_fenode_protect_mode_get, sizeof(hstm_iso_fenode_protect_mode_get), "hstm_iso_fenode_protect_mode_get");
  return hstm_iso_fenode_protect_mode_get;
}

HstmFwdMode hstm_iso_forward_mode_get(void) {
  HstmFwdMode hstm_iso_forward_mode_get;
  klee_make_symbolic(&hstm_iso_forward_mode_get, sizeof(hstm_iso_forward_mode_get), "hstm_iso_forward_mode_get");
  return hstm_iso_forward_mode_get;
}

uint32_t hstm_iso_hstm_low_latency_mode_env_get(uint32_t *mode) {
  uint32_t hstm_iso_hstm_low_latency_mode_env_get;
  klee_make_symbolic(&hstm_iso_hstm_low_latency_mode_env_get, sizeof(hstm_iso_hstm_low_latency_mode_env_get), "hstm_iso_hstm_low_latency_mode_env_get");
  return hstm_iso_hstm_low_latency_mode_env_get;
}

uint32_t hstm_iso_hstm_low_latency_mode_env_set(uint32_t mode, uint32_t trigger) {
  uint32_t hstm_iso_hstm_low_latency_mode_env_set;
  klee_make_symbolic(&hstm_iso_hstm_low_latency_mode_env_set, sizeof(hstm_iso_hstm_low_latency_mode_env_set), "hstm_iso_hstm_low_latency_mode_env_set");
  return hstm_iso_hstm_low_latency_mode_env_set;
}

enum tagHSTM_DEVM_HARDTYPE_ENUM_E hstm_iso_local_hardtype_get(void) {
  enum tagHSTM_DEVM_HARDTYPE_ENUM_E hstm_iso_local_hardtype_get;
  klee_make_symbolic(&hstm_iso_local_hardtype_get, sizeof(hstm_iso_local_hardtype_get), "hstm_iso_local_hardtype_get");
  return hstm_iso_local_hardtype_get;
}

uint32_t hstm_iso_msg_fei2feisw(enum tagHstmTlvFeiiNotifyEventMsgProduct hstm_msg_type, uint32_t uiMsgDataLen, void *pstLpuMsgData) {
  uint32_t hstm_iso_msg_fei2feisw;
  klee_make_symbolic(&hstm_iso_msg_fei2feisw, sizeof(hstm_iso_msg_fei2feisw), "hstm_iso_msg_fei2feisw");
  return hstm_iso_msg_fei2feisw;
}

uint32_t hstm_iso_node_role_is_backup(void) {
  uint32_t hstm_iso_node_role_is_backup;
  klee_make_symbolic(&hstm_iso_node_role_is_backup, sizeof(hstm_iso_node_role_is_backup), "hstm_iso_node_role_is_backup");
  return hstm_iso_node_role_is_backup;
}

uint32_t hstm_iso_nof_tm_get(void) {
  uint32_t hstm_iso_nof_tm_get;
  klee_make_symbolic(&hstm_iso_nof_tm_get, sizeof(hstm_iso_nof_tm_get), "hstm_iso_nof_tm_get");
  return hstm_iso_nof_tm_get;
}

_Bool hstm_iso_npu_protect_mode(void) {
  _Bool hstm_iso_npu_protect_mode;
  klee_make_symbolic(&hstm_iso_npu_protect_mode, sizeof(hstm_iso_npu_protect_mode), "hstm_iso_npu_protect_mode");
  return hstm_iso_npu_protect_mode;
}

uint32_t hstm_iso_service_type_get(void) {
  uint32_t hstm_iso_service_type_get;
  klee_make_symbolic(&hstm_iso_service_type_get, sizeof(hstm_iso_service_type_get), "hstm_iso_service_type_get");
  return hstm_iso_service_type_get;
}

uint32_t hstm_iso_slot_no_get(void) {
  uint32_t hstm_iso_slot_no_get;
  klee_make_symbolic(&hstm_iso_slot_no_get, sizeof(hstm_iso_slot_no_get), "hstm_iso_slot_no_get");
  return hstm_iso_slot_no_get;
}

uint32_t hstm_iso_xfic_state_get(uint32_t chip_id, const void *ctrl_info, void *pThis) {
  uint32_t hstm_iso_xfic_state_get;
  klee_make_symbolic(&hstm_iso_xfic_state_get, sizeof(hstm_iso_xfic_state_get), "hstm_iso_xfic_state_get");
  return hstm_iso_xfic_state_get;
}

void hstm_sll_free(struct SLL *head) {
  return;
}

uint32_t hstm_sll_node_add(struct SLL *head, const void *usr_data, uint32_t data_len) {
  uint32_t hstm_sll_node_add;
  klee_make_symbolic(&hstm_sll_node_add, sizeof(hstm_sll_node_add), "hstm_sll_node_add");
  return hstm_sll_node_add;
}

uint32_t hsu_ex_dfx_heart_status_report(uint32_t almState, uint32_t lastState, void *pThis) {
  uint32_t hsu_ex_dfx_heart_status_report;
  klee_make_symbolic(&hsu_ex_dfx_heart_status_report, sizeof(hsu_ex_dfx_heart_status_report), "hsu_ex_dfx_heart_status_report");
  return hsu_ex_dfx_heart_status_report;
}

uint32_t hsu_ex_flex_voq_cmd_probe_VR(void *p_key, void *p_data) {
  uint32_t hsu_ex_flex_voq_cmd_probe_VR;
  klee_make_symbolic(&hsu_ex_flex_voq_cmd_probe_VR, sizeof(hsu_ex_flex_voq_cmd_probe_VR), "hsu_ex_flex_voq_cmd_probe_VR");
  return hsu_ex_flex_voq_cmd_probe_VR;
}

uint32_t hsu_ex_flex_voq_vsq_on_or_off(uint32_t chip_id, uint32_t vsq_id, uint32_t dst_g_fic_id, uint32_t tm_port, uint32_t valid_flag, uint32_t wred_no) {
  uint32_t hsu_ex_flex_voq_vsq_on_or_off;
  klee_make_symbolic(&hsu_ex_flex_voq_vsq_on_or_off, sizeof(hsu_ex_flex_voq_vsq_on_or_off), "hsu_ex_flex_voq_vsq_on_or_off");
  return hsu_ex_flex_voq_vsq_on_or_off;
}

uint32_t hsu_ex_hstm_dfx_alm_report(HSTM_DFX_ALARM_INFO *almInfo, enum HstmDfxAlarmState alarmState) {
  uint32_t hsu_ex_hstm_dfx_alm_report;
  klee_make_symbolic(&hsu_ex_hstm_dfx_alm_report, sizeof(hsu_ex_hstm_dfx_alm_report), "hsu_ex_hstm_dfx_alm_report");
  return hsu_ex_hstm_dfx_alm_report;
}

uint32_t hsu_ex_hstm_dfx_fe_check_id_get(uint32_t ffa_check_id) {
  uint32_t hsu_ex_hstm_dfx_fe_check_id_get;
  klee_make_symbolic(&hsu_ex_hstm_dfx_fe_check_id_get, sizeof(hsu_ex_hstm_dfx_fe_check_id_get), "hsu_ex_hstm_dfx_fe_check_id_get");
  return hsu_ex_hstm_dfx_fe_check_id_get;
}

uint32_t hsu_ex_hstm_dfx_fic_serdes_err_report(uint32_t chipId, uint32_t linkId, uint32_t linkErrType, void *pThis) {
  uint32_t hsu_ex_hstm_dfx_fic_serdes_err_report;
  klee_make_symbolic(&hsu_ex_hstm_dfx_fic_serdes_err_report, sizeof(hsu_ex_hstm_dfx_fic_serdes_err_report), "hsu_ex_hstm_dfx_fic_serdes_err_report");
  return hsu_ex_hstm_dfx_fic_serdes_err_report;
}

uint32_t hsu_ex_hstm_sfu_start_flag(uint32_t sfu_slot) {
  uint32_t hsu_ex_hstm_sfu_start_flag;
  klee_make_symbolic(&hsu_ex_hstm_sfu_start_flag, sizeof(hsu_ex_hstm_sfu_start_flag), "hsu_ex_hstm_sfu_start_flag");
  return hsu_ex_hstm_sfu_start_flag;
}

uint32_t hsu_os_FEI_FLOWPROB_Init(void *pThis) {
  uint32_t hsu_os_FEI_FLOWPROB_Init;
  klee_make_symbolic(&hsu_os_FEI_FLOWPROB_Init, sizeof(hsu_os_FEI_FLOWPROB_Init), "hsu_os_FEI_FLOWPROB_Init");
  return hsu_os_FEI_FLOWPROB_Init;
}

uint32_t hsu_os_FLOWPROB_Start(uint32_t cid, void *probInfo, uint32_t *probId) {
  uint32_t hsu_os_FLOWPROB_Start;
  klee_make_symbolic(&hsu_os_FLOWPROB_Start, sizeof(hsu_os_FLOWPROB_Start), "hsu_os_FLOWPROB_Start");
  return hsu_os_FLOWPROB_Start;
}

void iof_bootinfo_printf(char *fmt) {
  return;
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

int snprintf_s(char *strDest, unsigned long destMax, unsigned long count, const char *format) {
  int snprintf_s;
  klee_make_symbolic(&snprintf_s, sizeof(snprintf_s), "snprintf_s");
  return snprintf_s;
}

int snprintf_truncated_s(char *strDest, unsigned long destMax, const char *format) {
  int snprintf_truncated_s;
  klee_make_symbolic(&snprintf_truncated_s, sizeof(snprintf_truncated_s), "snprintf_truncated_s");
  return snprintf_truncated_s;
}

int sprintf_s(char *strDest, unsigned long destMax, const char *format) {
  int sprintf_s;
  klee_make_symbolic(&sprintf_s, sizeof(sprintf_s), "sprintf_s");
  return sprintf_s;
}

int strcpy_s(char *strDest, unsigned long destMax, const char *strSrc) {
  int strcpy_s;
  klee_make_symbolic(&strcpy_s, sizeof(strcpy_s), "strcpy_s");
  return strcpy_s;
}

int strncpy_s(char *strDest, unsigned long destMax, const char *strSrc, unsigned long count) {
  int strncpy_s;
  klee_make_symbolic(&strncpy_s, sizeof(strncpy_s), "strncpy_s");
  return strncpy_s;
}

int vsnprintf_truncated_s(char *strDest, unsigned long destMax, const char *format, unsigned int argList) {
  int vsnprintf_truncated_s;
  klee_make_symbolic(&vsnprintf_truncated_s, sizeof(vsnprintf_truncated_s), "vsnprintf_truncated_s");
  return vsnprintf_truncated_s;
}

uint32_t fei_hstm_check_ilk_get_tmid_and_ilkid(uint32_t fe_id, uint32_t fe_ilk_id, uint32_t *tm_id, uint32_t *tm_ilk_id)
{
    if (fe_id > 32) {
        *tm_id = fe_id<<1; 
        *tm_ilk_id = fe_ilk_id<<1;
    } else if ((fe_id <= 32) && (fe_id > 16)){
        *tm_id = fe_id * 2; 
        *tm_ilk_id = fe_ilk_id;
    } else {
        *tm_id = fe_id; 
        *tm_ilk_id = fe_ilk_id * 2;
    }
    return 0;
}

void hstm_dfx_ilk_lane_isolate_health_info(union tagFEI_HSTM_INST_INFO bit_info, unsigned int lane_id, unsigned int nof_lane)
{
    unsigned int tm_id = 0;
    unsigned int core_id = 0;
    unsigned int dir = bit_info.stInstBitInfo.uiDir;
	if ((lane_id <= 32) || (nof_lane <= 16)){
		tm_id += lane_id;
		core_id += nof_lane;
		    (void)fei_hstm_check_ilk_get_tmid_and_ilkid(bit_info.stInstBitInfo.uiChipId, 
        bit_info.stInstBitInfo.uiPortType, &tm_id, &core_id);
	} else if (nof_lane > 16){
		tm_id = lane_id>>1;
		core_id = lane_id | nof_lane;
		    (void)fei_hstm_check_ilk_get_tmid_and_ilkid(bit_info.stInstBitInfo.uiChipId, 
        bit_info.stInstBitInfo.uiPortType, &tm_id, &core_id);
	}
    return;
}

int main() {
  // setup for bit_info {
  union tagFEI_HSTM_INST_INFO bit_info;
  klee_make_symbolic(&bit_info, sizeof(bit_info), "bit_info");
  // }

  // setup for lane_id {
  uint32_t lane_id;
  klee_make_symbolic(&lane_id, sizeof(lane_id), "lane_id");
  // }

  // setup for nof_lane {
  uint32_t nof_lane;
  klee_make_symbolic(&nof_lane, sizeof(nof_lane), "nof_lane");
  // }

  hstm_dfx_ilk_lane_isolate_health_info(bit_info, lane_id, nof_lane);
  return 0;
}

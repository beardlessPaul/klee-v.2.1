#include "klee/klee.h"

void klee_make_symbolic_range(void* addr, size_t offset, size_t nbytes, const char* name)
{
	if(nbytes == 0)                return;
	void* start = addr + offset;
	klee_check_memory_access(start, nbytes);
	void* symbolic_data = malloc(nbytes);
	klee_make_symbolic(symbolic_data, nbytes, name);
	memcpy(start, symbolic_data, nbytes);
	free(symbolic_data);
}

/* WORKAROUND TYPES */
typedef unsigned char bool;


/* TYPES */
typedef unsigned char bool;

typedef unsigned short uint16;

typedef unsigned char boolean;

typedef unsigned char uint8;

typedef struct 
{
    uint16 UnitDelay_DSTATE;
    boolean Switch2;
} DW_fault_confir_Faultprocess__T;

typedef struct 
{
    const uint16 Add1;
} ConstB_fault_co_Faultprocess__T;

typedef struct 
{
    boolean LogicalOperator8;
    boolean LogicalOperator9;
    boolean LogicalOperator11;
    boolean LogicalOperator;
    boolean LogicalOperator1;
    boolean LogicalOperator2;
    boolean LogicalOperator3;
    boolean LogicalOperator4;
    boolean LogicalOperator5;
    boolean LogicalOperator6;
    boolean LogicalOperator7;
} DW_BMS_FaultPro_Faultprocess__T;

typedef struct 
{
    uint8 DataTypeConversion[100];
} DW_boolconveru8_Faultprocess__T;

typedef struct 
{
    boolean Switch[100];
    boolean UnitDelay_DSTATE[100];
} DW_BMS_FaultPr_Faultprocess_h_T;

typedef struct P_Faultprocess__T_ P_Faultprocess__T;

typedef struct tag_DW_Faultprocess__T
{
    DW_boolconveru8_Faultprocess__T boolconveru8;
    DW_BMS_FaultPr_Faultprocess_h_T LockDfp;
    DW_fault_confir_Faultprocess__T Fault_Confirm1;
    DW_fault_confir_Faultprocess__T Fault_Confirm;
    DW_BMS_FaultPro_Faultprocess__T FaultCodeCal;
    uint16 UnitDelay_DSTATE;
    uint8 DataTypeConversion;
    boolean UnitDelay_DSTATE_i;
    boolean UnitDelay_DSTATE_j;
    boolean UnitDelay_DSTATE_d;
    boolean UnitDelay_DSTATE_h;
} DW_Faultprocess__T;

typedef struct 
{
    boolean PowerOff_Req;
    boolean PowerOff_Immediately;
    boolean DisChgSOP_Prohibit;
    boolean ChgSOP_Prohibit;
    boolean DisChgSOP_Limit30kw;
    boolean DisChgSOP_LimitCTkw;
    boolean ChgSOP_LimitCTkw;
    boolean DCChg_Prohibit;
    boolean ACChg_Prohibit;
    boolean Balance_Prohibit;
} FaultCode;

typedef uint8 Std_ReturnType;

typedef unsigned long uint32;

typedef struct 
{
    ConstB_fault_co_Faultprocess__T Fault_Confirm1;
    ConstB_fault_co_Faultprocess__T Fault_Confirm;
} ConstB_Faultprocess__T;

typedef signed long sint32;

/* ADDED VARS */
/* GLOBAL VARS */
struct P_Faultprocess__T_
{
    boolean FD_FA_stACChgProhibit_C[100];
    boolean FD_FA_stBalanceProhibit_C[100];
    boolean FD_FA_stChgSOPLimitCTkw_C[100];
    boolean FD_FA_stChgSOPProhibit_C[100];
    boolean FD_FA_stDCChgProhibit_C[100];
    boolean FD_FA_stDisChgSOPLimit30kwPowOff_C[100];
    boolean FD_FA_stDisChgSOPLimit30kw_C[100];
    boolean FD_FA_stDisChgSOPLimitCTkw_C[100];
    boolean FD_FA_stDisChgSOPProhibit_C[100];
    boolean FD_FA_stLock_C[100];
    boolean FD_FA_stMainRlyOff_C[100];
    boolean FD_FA_stimmeHVOff_C[100];
    uint8 FD_FA_stFaultRank_C[100];
};

P_Faultprocess__T g_BMS_Faultprocess_P = {{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1}, {0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1}, {1U, 1U, 1U, 4U, 4U, 4U, 0U, 0U, 0U, 4U, 2U, 5U, 0U, 5U, 2U, 6U, 5U, 5U, 6U, 8U, 6U, 4U, 4U, 6U, 8U, 4U, 7U, 1U, 4U, 4U, 4U, 0U, 0U, 7U, 7U, 0U, 1U, 0U, 3U, 7U, 2U, 8U, 8U, 2U, 2U, 8U, 8U, 2U, 2U, 8U, 8U, 2U, 2U, 8U, 8U, 2U, 6U, 4U, 1U, 6U, 4U, 8U, 4U, 4U, 4U, 4U, 5U, 5U, 5U, 3U, 3U, 3U, 3U, 4U, 3U, 0U, 0U, 0U, 6U, 6U, 6U, 5U, 0U, 0U, 0U, 6U, 6U, 6U, 5U, 8U, 6U, 3U, 2U, 4U, 1U, 1U, 6U, 7U, 7U, 7U}};

DW_Faultprocess__T g_BMS_Faultprocess_DW;

void BMS_FaultProcess_FaultRankCal(void);

void Faultprocess_fault_confirm(boolean rtu_Fault_soft, const ConstB_fault_co_Faultprocess__T* localC, DW_fault_confir_Faultprocess__T* localDW);

void BMS_FaultProcess_FaultCodeCal(const boolean rtu_In1[100], DW_BMS_FaultPro_Faultprocess__T* localDW);

void Faultprocess_boolconveru8(const boolean rtu_booleandata[100], DW_boolconveru8_Faultprocess__T* localDW);

void BMS_FaultProcess_LockDfp(const boolean rtu_DfpRec[100], const boolean rtu_stLock[100], DW_BMS_FaultPr_Faultprocess_h_T* localDW);

Std_ReturnType Rte_Write_swc_app_faultprocess_FaultPro_FaultAct_stFaultCode(const FaultCode* data);

uint8 Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stBcuFltRnk;

uint32 Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stFaultType;

boolean Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stFaultLamp;

const ConstB_Faultprocess__T g_BMS_Faultprocess_ConstB = {{3051U}, {30051U}};

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld;

uint8 Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr;

void Runnable_FaultAct(void);


FaultCode __igv__FaultPro_FaultAct_stFaultCode;

/* ADDED FUNCS */
/* FUNCS */

void BMS_FaultProcess_FaultRankCal(void)
{
    uint16 rtb_temp[100];
    uint16 rtb_Switch1;
    sint32 i;
    uint16 u1;
    uint32 y;
    uint16 UnitDelay_DSTATE;
    UnitDelay_DSTATE = g_BMS_Faultprocess_DW.UnitDelay_DSTATE;
    {
        {
            {
                rtb_temp[0] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[0]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[0]));
            }
        }
        {
            {
                rtb_temp[1] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[1]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[1]));
            }
        }
        {
            {
                rtb_temp[2] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[2]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[2]));
            }
        }
        {
            {
                rtb_temp[3] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[3]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[3]));
            }
        }
        {
            {
                rtb_temp[4] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[4]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[4]));
            }
        }
        {
            {
                rtb_temp[5] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[5]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[5]));
            }
        }
        {
            {
                rtb_temp[6] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[6]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[6]));
            }
        }
        {
            {
                rtb_temp[7] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[7]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[7]));
            }
        }
        {
            {
                rtb_temp[8] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[8]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[8]));
            }
        }
        {
            {
                rtb_temp[9] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[9]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[9]));
            }
        }
        {
            {
                rtb_temp[10] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[10]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[10]));
            }
        }
        {
            {
                rtb_temp[11] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[11]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[11]));
            }
        }
        {
            {
                rtb_temp[12] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[12]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[12]));
            }
        }
        {
            {
                rtb_temp[13] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[13]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[13]));
            }
        }
        {
            {
                rtb_temp[14] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[14]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[14]));
            }
        }
        {
            {
                rtb_temp[15] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[15]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[15]));
            }
        }
        {
            {
                rtb_temp[16] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[16]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[16]));
            }
        }
        {
            {
                rtb_temp[17] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[17]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[17]));
            }
        }
        {
            {
                rtb_temp[18] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[18]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[18]));
            }
        }
        {
            {
                rtb_temp[19] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[19]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[19]));
            }
        }
        {
            {
                rtb_temp[20] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[20]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[20]));
            }
        }
        {
            {
                rtb_temp[21] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[21]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[21]));
            }
        }
        {
            {
                rtb_temp[22] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[22]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[22]));
            }
        }
        {
            {
                rtb_temp[23] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[23]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[23]));
            }
        }
        {
            {
                rtb_temp[24] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[24]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[24]));
            }
        }
        {
            {
                rtb_temp[25] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[25]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[25]));
            }
        }
        {
            {
                rtb_temp[26] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[26]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[26]));
            }
        }
        {
            {
                rtb_temp[27] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[27]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[27]));
            }
        }
        {
            {
                rtb_temp[28] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[28]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[28]));
            }
        }
        {
            {
                rtb_temp[29] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[29]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[29]));
            }
        }
        {
            {
                rtb_temp[30] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[30]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[30]));
            }
        }
        {
            {
                rtb_temp[31] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[31]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[31]));
            }
        }
        {
            {
                rtb_temp[32] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[32]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[32]));
            }
        }
        {
            {
                rtb_temp[33] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[33]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[33]));
            }
        }
        {
            {
                rtb_temp[34] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[34]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[34]));
            }
        }
        {
            {
                rtb_temp[35] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[35]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[35]));
            }
        }
        {
            {
                rtb_temp[36] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[36]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[36]));
            }
        }
        {
            {
                rtb_temp[37] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[37]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[37]));
            }
        }
        {
            {
                rtb_temp[38] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[38]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[38]));
            }
        }
        {
            {
                rtb_temp[39] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[39]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[39]));
            }
        }
        {
            {
                rtb_temp[40] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[40]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[40]));
            }
        }
        {
            {
                rtb_temp[41] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[41]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[41]));
            }
        }
        {
            {
                rtb_temp[42] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[42]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[42]));
            }
        }
        {
            {
                rtb_temp[43] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[43]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[43]));
            }
        }
        {
            {
                rtb_temp[44] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[44]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[44]));
            }
        }
        {
            {
                rtb_temp[45] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[45]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[45]));
            }
        }
        {
            {
                rtb_temp[46] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[46]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[46]));
            }
        }
        {
            {
                rtb_temp[47] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[47]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[47]));
            }
        }
        {
            {
                rtb_temp[48] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[48]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[48]));
            }
        }
        {
            {
                rtb_temp[49] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[49]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[49]));
            }
        }
        {
            {
                rtb_temp[50] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[50]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[50]));
            }
        }
        {
            {
                rtb_temp[51] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[51]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[51]));
            }
        }
        {
            {
                rtb_temp[52] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[52]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[52]));
            }
        }
        {
            {
                rtb_temp[53] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[53]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[53]));
            }
        }
        {
            {
                rtb_temp[54] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[54]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[54]));
            }
        }
        {
            {
                rtb_temp[55] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[55]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[55]));
            }
        }
        {
            {
                rtb_temp[56] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[56]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[56]));
            }
        }
        {
            {
                rtb_temp[57] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[57]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[57]));
            }
        }
        {
            {
                rtb_temp[58] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[58]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[58]));
            }
        }
        {
            {
                rtb_temp[59] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[59]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[59]));
            }
        }
        {
            {
                rtb_temp[60] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[60]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[60]));
            }
        }
        {
            {
                rtb_temp[61] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[61]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[61]));
            }
        }
        {
            {
                rtb_temp[62] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[62]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[62]));
            }
        }
        {
            {
                rtb_temp[63] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[63]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[63]));
            }
        }
        {
            {
                rtb_temp[64] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[64]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[64]));
            }
        }
        {
            {
                rtb_temp[65] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[65]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[65]));
            }
        }
        {
            {
                rtb_temp[66] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[66]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[66]));
            }
        }
        {
            {
                rtb_temp[67] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[67]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[67]));
            }
        }
        {
            {
                rtb_temp[68] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[68]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[68]));
            }
        }
        {
            {
                rtb_temp[69] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[69]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[69]));
            }
        }
        {
            {
                rtb_temp[70] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[70]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[70]));
            }
        }
        {
            {
                rtb_temp[71] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[71]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[71]));
            }
        }
        {
            {
                rtb_temp[72] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[72]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[72]));
            }
        }
        {
            {
                rtb_temp[73] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[73]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[73]));
            }
        }
        {
            {
                rtb_temp[74] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[74]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[74]));
            }
        }
        {
            {
                rtb_temp[75] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[75]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[75]));
            }
        }
        {
            {
                rtb_temp[76] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[76]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[76]));
            }
        }
        {
            {
                rtb_temp[77] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[77]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[77]));
            }
        }
        {
            {
                rtb_temp[78] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[78]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[78]));
            }
        }
        {
            {
                rtb_temp[79] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[79]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[79]));
            }
        }
        {
            {
                rtb_temp[80] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[80]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[80]));
            }
        }
        {
            {
                rtb_temp[81] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[81]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[81]));
            }
        }
        {
            {
                rtb_temp[82] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[82]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[82]));
            }
        }
        {
            {
                rtb_temp[83] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[83]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[83]));
            }
        }
        {
            {
                rtb_temp[84] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[84]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[84]));
            }
        }
        {
            {
                rtb_temp[85] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[85]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[85]));
            }
        }
        {
            {
                rtb_temp[86] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[86]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[86]));
            }
        }
        {
            {
                rtb_temp[87] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[87]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[87]));
            }
        }
        {
            {
                rtb_temp[88] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[88]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[88]));
            }
        }
        {
            {
                rtb_temp[89] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[89]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[89]));
            }
        }
        {
            {
                rtb_temp[90] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[90]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[90]));
            }
        }
        {
            {
                rtb_temp[91] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[91]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[91]));
            }
        }
        {
            {
                rtb_temp[92] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[92]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[92]));
            }
        }
        {
            {
                rtb_temp[93] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[93]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[93]));
            }
        }
        {
            {
                rtb_temp[94] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[94]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[94]));
            }
        }
        {
            {
                rtb_temp[95] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[95]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[95]));
            }
        }
        {
            {
                rtb_temp[96] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[96]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[96]));
            }
        }
        {
            {
                rtb_temp[97] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[97]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[97]));
            }
        }
        {
            {
                rtb_temp[98] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[98]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[98]));
            }
        }
        {
            {
                rtb_temp[99] = (uint16)(((uint32)g_BMS_Faultprocess_P.FD_FA_stFaultRank_C[99]) * ((uint32)g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[99]));
            }
        }
    }
    rtb_Switch1 = rtb_temp[0];
    {
        {
            {
                u1 = rtb_temp[0 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[1 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[2 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[3 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[4 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[5 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[6 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[7 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[8 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[9 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[10 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[11 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[12 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[13 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[14 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[15 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[16 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[17 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[18 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[19 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[20 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[21 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[22 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[23 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[24 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[25 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[26 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[27 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[28 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[29 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[30 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[31 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[32 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[33 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[34 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[35 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[36 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[37 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[38 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[39 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[40 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[41 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[42 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[43 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[44 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[45 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[46 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[47 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[48 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[49 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[50 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[51 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[52 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[53 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[54 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[55 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[56 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[57 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[58 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[59 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[60 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[61 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[62 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[63 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[64 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[65 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[66 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[67 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[68 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[69 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[70 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[71 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[72 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[73 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[74 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[75 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[76 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[77 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[78 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[79 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[80 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[81 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[82 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[83 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[84 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[85 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[86 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[87 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[88 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[89 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[90 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[91 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[92 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[93 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[94 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[95 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[96 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[97 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
        {
            {
                u1 = rtb_temp[98 + 1];
                if (rtb_Switch1 <= u1){
                    rtb_Switch1 = u1;
                }
            }
        }
    }
    if (rtb_Switch1 > ((uint16)g_BMS_Faultprocess_DW.DataTypeConversion)){
        y = (uint32)rtb_Switch1;
    }else{
        y = (uint32)g_BMS_Faultprocess_DW.DataTypeConversion;
    }
    if (rtb_Switch1 <= ((uint16)g_BMS_Faultprocess_DW.DataTypeConversion)){
        rtb_Switch1 = (uint16)g_BMS_Faultprocess_DW.DataTypeConversion;
    }
    if (((uint16)y) > UnitDelay_DSTATE){
        UnitDelay_DSTATE = (uint16)y;
    }
    if (((sint32)UnitDelay_DSTATE) >= 4){
        rtb_Switch1 = UnitDelay_DSTATE;
    }
    g_BMS_Faultprocess_DW.DataTypeConversion = (uint8)rtb_Switch1;
    g_BMS_Faultprocess_DW.UnitDelay_DSTATE = UnitDelay_DSTATE;
}


void Faultprocess_fault_confirm(boolean rtu_Fault_soft, const ConstB_fault_co_Faultprocess__T* localC, DW_fault_confir_Faultprocess__T* localDW)
{
    uint16 UnitDelay_DSTATE;
    uint16 Add1;
    Add1 = localC->Add1;
    UnitDelay_DSTATE = localDW->UnitDelay_DSTATE;
    if (rtu_Fault_soft){
        UnitDelay_DSTATE = (uint16)(((uint32)UnitDelay_DSTATE) + 1U);
        if (UnitDelay_DSTATE >= Add1){
            UnitDelay_DSTATE = Add1;
        }
    }else{
        UnitDelay_DSTATE = 0U;
    }
    localDW->Switch2 = (UnitDelay_DSTATE >= Add1);
    localDW->UnitDelay_DSTATE = UnitDelay_DSTATE;
}


void BMS_FaultProcess_FaultCodeCal(const boolean rtu_In1[100], DW_BMS_FaultPro_Faultprocess__T* localDW)
{
    boolean rtb_BMSFault[100];
    sint32 i;
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stACChgProhibit_C[99]));
            }
        }
    }
    localDW->LogicalOperator8 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator8 = ((localDW->LogicalOperator8) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stBalanceProhibit_C[99]));
            }
        }
    }
    localDW->LogicalOperator9 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator9 = ((localDW->LogicalOperator9) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kwPowOff_C[99]));
            }
        }
    }
    localDW->LogicalOperator11 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator11 = ((localDW->LogicalOperator11) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stMainRlyOff_C[99]));
            }
        }
    }
    localDW->LogicalOperator = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator = ((localDW->LogicalOperator) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stimmeHVOff_C[99]));
            }
        }
    }
    localDW->LogicalOperator1 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator1 = ((localDW->LogicalOperator1) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPProhibit_C[99]));
            }
        }
    }
    localDW->LogicalOperator2 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator2 = ((localDW->LogicalOperator2) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPProhibit_C[99]));
            }
        }
    }
    localDW->LogicalOperator3 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator3 = ((localDW->LogicalOperator3) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimit30kw_C[99]));
            }
        }
    }
    localDW->LogicalOperator4 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator4 = ((localDW->LogicalOperator4) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stDisChgSOPLimitCTkw_C[99]));
            }
        }
    }
    localDW->LogicalOperator5 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator5 = ((localDW->LogicalOperator5) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stChgSOPLimitCTkw_C[99]));
            }
        }
    }
    localDW->LogicalOperator6 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator6 = ((localDW->LogicalOperator6) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
    {
        {
            {
                rtb_BMSFault[0] = ((rtu_In1[0]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[0]));
            }
        }
        {
            {
                rtb_BMSFault[1] = ((rtu_In1[1]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[1]));
            }
        }
        {
            {
                rtb_BMSFault[2] = ((rtu_In1[2]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[2]));
            }
        }
        {
            {
                rtb_BMSFault[3] = ((rtu_In1[3]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[3]));
            }
        }
        {
            {
                rtb_BMSFault[4] = ((rtu_In1[4]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[4]));
            }
        }
        {
            {
                rtb_BMSFault[5] = ((rtu_In1[5]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[5]));
            }
        }
        {
            {
                rtb_BMSFault[6] = ((rtu_In1[6]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[6]));
            }
        }
        {
            {
                rtb_BMSFault[7] = ((rtu_In1[7]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[7]));
            }
        }
        {
            {
                rtb_BMSFault[8] = ((rtu_In1[8]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[8]));
            }
        }
        {
            {
                rtb_BMSFault[9] = ((rtu_In1[9]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[9]));
            }
        }
        {
            {
                rtb_BMSFault[10] = ((rtu_In1[10]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[10]));
            }
        }
        {
            {
                rtb_BMSFault[11] = ((rtu_In1[11]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[11]));
            }
        }
        {
            {
                rtb_BMSFault[12] = ((rtu_In1[12]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[12]));
            }
        }
        {
            {
                rtb_BMSFault[13] = ((rtu_In1[13]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[13]));
            }
        }
        {
            {
                rtb_BMSFault[14] = ((rtu_In1[14]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[14]));
            }
        }
        {
            {
                rtb_BMSFault[15] = ((rtu_In1[15]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[15]));
            }
        }
        {
            {
                rtb_BMSFault[16] = ((rtu_In1[16]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[16]));
            }
        }
        {
            {
                rtb_BMSFault[17] = ((rtu_In1[17]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[17]));
            }
        }
        {
            {
                rtb_BMSFault[18] = ((rtu_In1[18]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[18]));
            }
        }
        {
            {
                rtb_BMSFault[19] = ((rtu_In1[19]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[19]));
            }
        }
        {
            {
                rtb_BMSFault[20] = ((rtu_In1[20]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[20]));
            }
        }
        {
            {
                rtb_BMSFault[21] = ((rtu_In1[21]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[21]));
            }
        }
        {
            {
                rtb_BMSFault[22] = ((rtu_In1[22]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[22]));
            }
        }
        {
            {
                rtb_BMSFault[23] = ((rtu_In1[23]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[23]));
            }
        }
        {
            {
                rtb_BMSFault[24] = ((rtu_In1[24]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[24]));
            }
        }
        {
            {
                rtb_BMSFault[25] = ((rtu_In1[25]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[25]));
            }
        }
        {
            {
                rtb_BMSFault[26] = ((rtu_In1[26]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[26]));
            }
        }
        {
            {
                rtb_BMSFault[27] = ((rtu_In1[27]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[27]));
            }
        }
        {
            {
                rtb_BMSFault[28] = ((rtu_In1[28]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[28]));
            }
        }
        {
            {
                rtb_BMSFault[29] = ((rtu_In1[29]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[29]));
            }
        }
        {
            {
                rtb_BMSFault[30] = ((rtu_In1[30]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[30]));
            }
        }
        {
            {
                rtb_BMSFault[31] = ((rtu_In1[31]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[31]));
            }
        }
        {
            {
                rtb_BMSFault[32] = ((rtu_In1[32]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[32]));
            }
        }
        {
            {
                rtb_BMSFault[33] = ((rtu_In1[33]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[33]));
            }
        }
        {
            {
                rtb_BMSFault[34] = ((rtu_In1[34]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[34]));
            }
        }
        {
            {
                rtb_BMSFault[35] = ((rtu_In1[35]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[35]));
            }
        }
        {
            {
                rtb_BMSFault[36] = ((rtu_In1[36]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[36]));
            }
        }
        {
            {
                rtb_BMSFault[37] = ((rtu_In1[37]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[37]));
            }
        }
        {
            {
                rtb_BMSFault[38] = ((rtu_In1[38]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[38]));
            }
        }
        {
            {
                rtb_BMSFault[39] = ((rtu_In1[39]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[39]));
            }
        }
        {
            {
                rtb_BMSFault[40] = ((rtu_In1[40]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[40]));
            }
        }
        {
            {
                rtb_BMSFault[41] = ((rtu_In1[41]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[41]));
            }
        }
        {
            {
                rtb_BMSFault[42] = ((rtu_In1[42]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[42]));
            }
        }
        {
            {
                rtb_BMSFault[43] = ((rtu_In1[43]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[43]));
            }
        }
        {
            {
                rtb_BMSFault[44] = ((rtu_In1[44]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[44]));
            }
        }
        {
            {
                rtb_BMSFault[45] = ((rtu_In1[45]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[45]));
            }
        }
        {
            {
                rtb_BMSFault[46] = ((rtu_In1[46]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[46]));
            }
        }
        {
            {
                rtb_BMSFault[47] = ((rtu_In1[47]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[47]));
            }
        }
        {
            {
                rtb_BMSFault[48] = ((rtu_In1[48]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[48]));
            }
        }
        {
            {
                rtb_BMSFault[49] = ((rtu_In1[49]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[49]));
            }
        }
        {
            {
                rtb_BMSFault[50] = ((rtu_In1[50]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[50]));
            }
        }
        {
            {
                rtb_BMSFault[51] = ((rtu_In1[51]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[51]));
            }
        }
        {
            {
                rtb_BMSFault[52] = ((rtu_In1[52]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[52]));
            }
        }
        {
            {
                rtb_BMSFault[53] = ((rtu_In1[53]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[53]));
            }
        }
        {
            {
                rtb_BMSFault[54] = ((rtu_In1[54]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[54]));
            }
        }
        {
            {
                rtb_BMSFault[55] = ((rtu_In1[55]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[55]));
            }
        }
        {
            {
                rtb_BMSFault[56] = ((rtu_In1[56]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[56]));
            }
        }
        {
            {
                rtb_BMSFault[57] = ((rtu_In1[57]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[57]));
            }
        }
        {
            {
                rtb_BMSFault[58] = ((rtu_In1[58]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[58]));
            }
        }
        {
            {
                rtb_BMSFault[59] = ((rtu_In1[59]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[59]));
            }
        }
        {
            {
                rtb_BMSFault[60] = ((rtu_In1[60]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[60]));
            }
        }
        {
            {
                rtb_BMSFault[61] = ((rtu_In1[61]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[61]));
            }
        }
        {
            {
                rtb_BMSFault[62] = ((rtu_In1[62]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[62]));
            }
        }
        {
            {
                rtb_BMSFault[63] = ((rtu_In1[63]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[63]));
            }
        }
        {
            {
                rtb_BMSFault[64] = ((rtu_In1[64]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[64]));
            }
        }
        {
            {
                rtb_BMSFault[65] = ((rtu_In1[65]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[65]));
            }
        }
        {
            {
                rtb_BMSFault[66] = ((rtu_In1[66]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[66]));
            }
        }
        {
            {
                rtb_BMSFault[67] = ((rtu_In1[67]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[67]));
            }
        }
        {
            {
                rtb_BMSFault[68] = ((rtu_In1[68]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[68]));
            }
        }
        {
            {
                rtb_BMSFault[69] = ((rtu_In1[69]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[69]));
            }
        }
        {
            {
                rtb_BMSFault[70] = ((rtu_In1[70]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[70]));
            }
        }
        {
            {
                rtb_BMSFault[71] = ((rtu_In1[71]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[71]));
            }
        }
        {
            {
                rtb_BMSFault[72] = ((rtu_In1[72]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[72]));
            }
        }
        {
            {
                rtb_BMSFault[73] = ((rtu_In1[73]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[73]));
            }
        }
        {
            {
                rtb_BMSFault[74] = ((rtu_In1[74]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[74]));
            }
        }
        {
            {
                rtb_BMSFault[75] = ((rtu_In1[75]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[75]));
            }
        }
        {
            {
                rtb_BMSFault[76] = ((rtu_In1[76]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[76]));
            }
        }
        {
            {
                rtb_BMSFault[77] = ((rtu_In1[77]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[77]));
            }
        }
        {
            {
                rtb_BMSFault[78] = ((rtu_In1[78]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[78]));
            }
        }
        {
            {
                rtb_BMSFault[79] = ((rtu_In1[79]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[79]));
            }
        }
        {
            {
                rtb_BMSFault[80] = ((rtu_In1[80]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[80]));
            }
        }
        {
            {
                rtb_BMSFault[81] = ((rtu_In1[81]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[81]));
            }
        }
        {
            {
                rtb_BMSFault[82] = ((rtu_In1[82]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[82]));
            }
        }
        {
            {
                rtb_BMSFault[83] = ((rtu_In1[83]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[83]));
            }
        }
        {
            {
                rtb_BMSFault[84] = ((rtu_In1[84]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[84]));
            }
        }
        {
            {
                rtb_BMSFault[85] = ((rtu_In1[85]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[85]));
            }
        }
        {
            {
                rtb_BMSFault[86] = ((rtu_In1[86]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[86]));
            }
        }
        {
            {
                rtb_BMSFault[87] = ((rtu_In1[87]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[87]));
            }
        }
        {
            {
                rtb_BMSFault[88] = ((rtu_In1[88]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[88]));
            }
        }
        {
            {
                rtb_BMSFault[89] = ((rtu_In1[89]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[89]));
            }
        }
        {
            {
                rtb_BMSFault[90] = ((rtu_In1[90]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[90]));
            }
        }
        {
            {
                rtb_BMSFault[91] = ((rtu_In1[91]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[91]));
            }
        }
        {
            {
                rtb_BMSFault[92] = ((rtu_In1[92]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[92]));
            }
        }
        {
            {
                rtb_BMSFault[93] = ((rtu_In1[93]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[93]));
            }
        }
        {
            {
                rtb_BMSFault[94] = ((rtu_In1[94]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[94]));
            }
        }
        {
            {
                rtb_BMSFault[95] = ((rtu_In1[95]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[95]));
            }
        }
        {
            {
                rtb_BMSFault[96] = ((rtu_In1[96]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[96]));
            }
        }
        {
            {
                rtb_BMSFault[97] = ((rtu_In1[97]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[97]));
            }
        }
        {
            {
                rtb_BMSFault[98] = ((rtu_In1[98]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[98]));
            }
        }
        {
            {
                rtb_BMSFault[99] = ((rtu_In1[99]) && (g_BMS_Faultprocess_P.FD_FA_stDCChgProhibit_C[99]));
            }
        }
    }
    localDW->LogicalOperator7 = rtb_BMSFault[0];
    {
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[0 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[1 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[2 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[3 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[4 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[5 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[6 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[7 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[8 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[9 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[10 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[11 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[12 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[13 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[14 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[15 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[16 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[17 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[18 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[19 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[20 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[21 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[22 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[23 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[24 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[25 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[26 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[27 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[28 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[29 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[30 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[31 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[32 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[33 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[34 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[35 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[36 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[37 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[38 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[39 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[40 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[41 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[42 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[43 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[44 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[45 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[46 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[47 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[48 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[49 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[50 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[51 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[52 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[53 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[54 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[55 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[56 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[57 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[58 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[59 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[60 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[61 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[62 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[63 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[64 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[65 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[66 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[67 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[68 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[69 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[70 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[71 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[72 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[73 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[74 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[75 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[76 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[77 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[78 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[79 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[80 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[81 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[82 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[83 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[84 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[85 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[86 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[87 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[88 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[89 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[90 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[91 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[92 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[93 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[94 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[95 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[96 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[97 + 1]));
            }
        }
        {
            {
                localDW->LogicalOperator7 = ((localDW->LogicalOperator7) || (rtb_BMSFault[98 + 1]));
            }
        }
    }
}


void Faultprocess_boolconveru8(const boolean rtu_booleandata[100], DW_boolconveru8_Faultprocess__T* localDW)
{
    sint32 i;
    {
        {
            {
                localDW->DataTypeConversion[0] = rtu_booleandata[0] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[1] = rtu_booleandata[1] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[2] = rtu_booleandata[2] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[3] = rtu_booleandata[3] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[4] = rtu_booleandata[4] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[5] = rtu_booleandata[5] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[6] = rtu_booleandata[6] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[7] = rtu_booleandata[7] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[8] = rtu_booleandata[8] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[9] = rtu_booleandata[9] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[10] = rtu_booleandata[10] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[11] = rtu_booleandata[11] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[12] = rtu_booleandata[12] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[13] = rtu_booleandata[13] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[14] = rtu_booleandata[14] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[15] = rtu_booleandata[15] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[16] = rtu_booleandata[16] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[17] = rtu_booleandata[17] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[18] = rtu_booleandata[18] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[19] = rtu_booleandata[19] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[20] = rtu_booleandata[20] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[21] = rtu_booleandata[21] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[22] = rtu_booleandata[22] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[23] = rtu_booleandata[23] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[24] = rtu_booleandata[24] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[25] = rtu_booleandata[25] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[26] = rtu_booleandata[26] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[27] = rtu_booleandata[27] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[28] = rtu_booleandata[28] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[29] = rtu_booleandata[29] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[30] = rtu_booleandata[30] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[31] = rtu_booleandata[31] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[32] = rtu_booleandata[32] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[33] = rtu_booleandata[33] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[34] = rtu_booleandata[34] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[35] = rtu_booleandata[35] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[36] = rtu_booleandata[36] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[37] = rtu_booleandata[37] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[38] = rtu_booleandata[38] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[39] = rtu_booleandata[39] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[40] = rtu_booleandata[40] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[41] = rtu_booleandata[41] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[42] = rtu_booleandata[42] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[43] = rtu_booleandata[43] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[44] = rtu_booleandata[44] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[45] = rtu_booleandata[45] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[46] = rtu_booleandata[46] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[47] = rtu_booleandata[47] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[48] = rtu_booleandata[48] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[49] = rtu_booleandata[49] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[50] = rtu_booleandata[50] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[51] = rtu_booleandata[51] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[52] = rtu_booleandata[52] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[53] = rtu_booleandata[53] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[54] = rtu_booleandata[54] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[55] = rtu_booleandata[55] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[56] = rtu_booleandata[56] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[57] = rtu_booleandata[57] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[58] = rtu_booleandata[58] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[59] = rtu_booleandata[59] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[60] = rtu_booleandata[60] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[61] = rtu_booleandata[61] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[62] = rtu_booleandata[62] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[63] = rtu_booleandata[63] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[64] = rtu_booleandata[64] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[65] = rtu_booleandata[65] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[66] = rtu_booleandata[66] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[67] = rtu_booleandata[67] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[68] = rtu_booleandata[68] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[69] = rtu_booleandata[69] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[70] = rtu_booleandata[70] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[71] = rtu_booleandata[71] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[72] = rtu_booleandata[72] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[73] = rtu_booleandata[73] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[74] = rtu_booleandata[74] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[75] = rtu_booleandata[75] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[76] = rtu_booleandata[76] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[77] = rtu_booleandata[77] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[78] = rtu_booleandata[78] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[79] = rtu_booleandata[79] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[80] = rtu_booleandata[80] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[81] = rtu_booleandata[81] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[82] = rtu_booleandata[82] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[83] = rtu_booleandata[83] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[84] = rtu_booleandata[84] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[85] = rtu_booleandata[85] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[86] = rtu_booleandata[86] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[87] = rtu_booleandata[87] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[88] = rtu_booleandata[88] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[89] = rtu_booleandata[89] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[90] = rtu_booleandata[90] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[91] = rtu_booleandata[91] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[92] = rtu_booleandata[92] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[93] = rtu_booleandata[93] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[94] = rtu_booleandata[94] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[95] = rtu_booleandata[95] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[96] = rtu_booleandata[96] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[97] = rtu_booleandata[97] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[98] = rtu_booleandata[98] ? 1U : 0U;
            }
        }
        {
            {
                localDW->DataTypeConversion[99] = rtu_booleandata[99] ? 1U : 0U;
            }
        }
    }
}


void BMS_FaultProcess_LockDfp(const boolean rtu_DfpRec[100], const boolean rtu_stLock[100], DW_BMS_FaultPr_Faultprocess_h_T* localDW)
{
    sint32 i;
    {
        {
            {
                localDW->UnitDelay_DSTATE[0] = ((localDW->UnitDelay_DSTATE[0]) || (rtu_DfpRec[0]));
                if (rtu_stLock[0]){
                    localDW->Switch[0] = localDW->UnitDelay_DSTATE[0];
                }else{
                    localDW->Switch[0] = rtu_DfpRec[0];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[1] = ((localDW->UnitDelay_DSTATE[1]) || (rtu_DfpRec[1]));
                if (rtu_stLock[1]){
                    localDW->Switch[1] = localDW->UnitDelay_DSTATE[1];
                }else{
                    localDW->Switch[1] = rtu_DfpRec[1];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[2] = ((localDW->UnitDelay_DSTATE[2]) || (rtu_DfpRec[2]));
                if (rtu_stLock[2]){
                    localDW->Switch[2] = localDW->UnitDelay_DSTATE[2];
                }else{
                    localDW->Switch[2] = rtu_DfpRec[2];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[3] = ((localDW->UnitDelay_DSTATE[3]) || (rtu_DfpRec[3]));
                if (rtu_stLock[3]){
                    localDW->Switch[3] = localDW->UnitDelay_DSTATE[3];
                }else{
                    localDW->Switch[3] = rtu_DfpRec[3];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[4] = ((localDW->UnitDelay_DSTATE[4]) || (rtu_DfpRec[4]));
                if (rtu_stLock[4]){
                    localDW->Switch[4] = localDW->UnitDelay_DSTATE[4];
                }else{
                    localDW->Switch[4] = rtu_DfpRec[4];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[5] = ((localDW->UnitDelay_DSTATE[5]) || (rtu_DfpRec[5]));
                if (rtu_stLock[5]){
                    localDW->Switch[5] = localDW->UnitDelay_DSTATE[5];
                }else{
                    localDW->Switch[5] = rtu_DfpRec[5];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[6] = ((localDW->UnitDelay_DSTATE[6]) || (rtu_DfpRec[6]));
                if (rtu_stLock[6]){
                    localDW->Switch[6] = localDW->UnitDelay_DSTATE[6];
                }else{
                    localDW->Switch[6] = rtu_DfpRec[6];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[7] = ((localDW->UnitDelay_DSTATE[7]) || (rtu_DfpRec[7]));
                if (rtu_stLock[7]){
                    localDW->Switch[7] = localDW->UnitDelay_DSTATE[7];
                }else{
                    localDW->Switch[7] = rtu_DfpRec[7];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[8] = ((localDW->UnitDelay_DSTATE[8]) || (rtu_DfpRec[8]));
                if (rtu_stLock[8]){
                    localDW->Switch[8] = localDW->UnitDelay_DSTATE[8];
                }else{
                    localDW->Switch[8] = rtu_DfpRec[8];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[9] = ((localDW->UnitDelay_DSTATE[9]) || (rtu_DfpRec[9]));
                if (rtu_stLock[9]){
                    localDW->Switch[9] = localDW->UnitDelay_DSTATE[9];
                }else{
                    localDW->Switch[9] = rtu_DfpRec[9];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[10] = ((localDW->UnitDelay_DSTATE[10]) || (rtu_DfpRec[10]));
                if (rtu_stLock[10]){
                    localDW->Switch[10] = localDW->UnitDelay_DSTATE[10];
                }else{
                    localDW->Switch[10] = rtu_DfpRec[10];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[11] = ((localDW->UnitDelay_DSTATE[11]) || (rtu_DfpRec[11]));
                if (rtu_stLock[11]){
                    localDW->Switch[11] = localDW->UnitDelay_DSTATE[11];
                }else{
                    localDW->Switch[11] = rtu_DfpRec[11];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[12] = ((localDW->UnitDelay_DSTATE[12]) || (rtu_DfpRec[12]));
                if (rtu_stLock[12]){
                    localDW->Switch[12] = localDW->UnitDelay_DSTATE[12];
                }else{
                    localDW->Switch[12] = rtu_DfpRec[12];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[13] = ((localDW->UnitDelay_DSTATE[13]) || (rtu_DfpRec[13]));
                if (rtu_stLock[13]){
                    localDW->Switch[13] = localDW->UnitDelay_DSTATE[13];
                }else{
                    localDW->Switch[13] = rtu_DfpRec[13];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[14] = ((localDW->UnitDelay_DSTATE[14]) || (rtu_DfpRec[14]));
                if (rtu_stLock[14]){
                    localDW->Switch[14] = localDW->UnitDelay_DSTATE[14];
                }else{
                    localDW->Switch[14] = rtu_DfpRec[14];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[15] = ((localDW->UnitDelay_DSTATE[15]) || (rtu_DfpRec[15]));
                if (rtu_stLock[15]){
                    localDW->Switch[15] = localDW->UnitDelay_DSTATE[15];
                }else{
                    localDW->Switch[15] = rtu_DfpRec[15];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[16] = ((localDW->UnitDelay_DSTATE[16]) || (rtu_DfpRec[16]));
                if (rtu_stLock[16]){
                    localDW->Switch[16] = localDW->UnitDelay_DSTATE[16];
                }else{
                    localDW->Switch[16] = rtu_DfpRec[16];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[17] = ((localDW->UnitDelay_DSTATE[17]) || (rtu_DfpRec[17]));
                if (rtu_stLock[17]){
                    localDW->Switch[17] = localDW->UnitDelay_DSTATE[17];
                }else{
                    localDW->Switch[17] = rtu_DfpRec[17];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[18] = ((localDW->UnitDelay_DSTATE[18]) || (rtu_DfpRec[18]));
                if (rtu_stLock[18]){
                    localDW->Switch[18] = localDW->UnitDelay_DSTATE[18];
                }else{
                    localDW->Switch[18] = rtu_DfpRec[18];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[19] = ((localDW->UnitDelay_DSTATE[19]) || (rtu_DfpRec[19]));
                if (rtu_stLock[19]){
                    localDW->Switch[19] = localDW->UnitDelay_DSTATE[19];
                }else{
                    localDW->Switch[19] = rtu_DfpRec[19];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[20] = ((localDW->UnitDelay_DSTATE[20]) || (rtu_DfpRec[20]));
                if (rtu_stLock[20]){
                    localDW->Switch[20] = localDW->UnitDelay_DSTATE[20];
                }else{
                    localDW->Switch[20] = rtu_DfpRec[20];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[21] = ((localDW->UnitDelay_DSTATE[21]) || (rtu_DfpRec[21]));
                if (rtu_stLock[21]){
                    localDW->Switch[21] = localDW->UnitDelay_DSTATE[21];
                }else{
                    localDW->Switch[21] = rtu_DfpRec[21];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[22] = ((localDW->UnitDelay_DSTATE[22]) || (rtu_DfpRec[22]));
                if (rtu_stLock[22]){
                    localDW->Switch[22] = localDW->UnitDelay_DSTATE[22];
                }else{
                    localDW->Switch[22] = rtu_DfpRec[22];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[23] = ((localDW->UnitDelay_DSTATE[23]) || (rtu_DfpRec[23]));
                if (rtu_stLock[23]){
                    localDW->Switch[23] = localDW->UnitDelay_DSTATE[23];
                }else{
                    localDW->Switch[23] = rtu_DfpRec[23];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[24] = ((localDW->UnitDelay_DSTATE[24]) || (rtu_DfpRec[24]));
                if (rtu_stLock[24]){
                    localDW->Switch[24] = localDW->UnitDelay_DSTATE[24];
                }else{
                    localDW->Switch[24] = rtu_DfpRec[24];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[25] = ((localDW->UnitDelay_DSTATE[25]) || (rtu_DfpRec[25]));
                if (rtu_stLock[25]){
                    localDW->Switch[25] = localDW->UnitDelay_DSTATE[25];
                }else{
                    localDW->Switch[25] = rtu_DfpRec[25];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[26] = ((localDW->UnitDelay_DSTATE[26]) || (rtu_DfpRec[26]));
                if (rtu_stLock[26]){
                    localDW->Switch[26] = localDW->UnitDelay_DSTATE[26];
                }else{
                    localDW->Switch[26] = rtu_DfpRec[26];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[27] = ((localDW->UnitDelay_DSTATE[27]) || (rtu_DfpRec[27]));
                if (rtu_stLock[27]){
                    localDW->Switch[27] = localDW->UnitDelay_DSTATE[27];
                }else{
                    localDW->Switch[27] = rtu_DfpRec[27];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[28] = ((localDW->UnitDelay_DSTATE[28]) || (rtu_DfpRec[28]));
                if (rtu_stLock[28]){
                    localDW->Switch[28] = localDW->UnitDelay_DSTATE[28];
                }else{
                    localDW->Switch[28] = rtu_DfpRec[28];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[29] = ((localDW->UnitDelay_DSTATE[29]) || (rtu_DfpRec[29]));
                if (rtu_stLock[29]){
                    localDW->Switch[29] = localDW->UnitDelay_DSTATE[29];
                }else{
                    localDW->Switch[29] = rtu_DfpRec[29];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[30] = ((localDW->UnitDelay_DSTATE[30]) || (rtu_DfpRec[30]));
                if (rtu_stLock[30]){
                    localDW->Switch[30] = localDW->UnitDelay_DSTATE[30];
                }else{
                    localDW->Switch[30] = rtu_DfpRec[30];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[31] = ((localDW->UnitDelay_DSTATE[31]) || (rtu_DfpRec[31]));
                if (rtu_stLock[31]){
                    localDW->Switch[31] = localDW->UnitDelay_DSTATE[31];
                }else{
                    localDW->Switch[31] = rtu_DfpRec[31];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[32] = ((localDW->UnitDelay_DSTATE[32]) || (rtu_DfpRec[32]));
                if (rtu_stLock[32]){
                    localDW->Switch[32] = localDW->UnitDelay_DSTATE[32];
                }else{
                    localDW->Switch[32] = rtu_DfpRec[32];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[33] = ((localDW->UnitDelay_DSTATE[33]) || (rtu_DfpRec[33]));
                if (rtu_stLock[33]){
                    localDW->Switch[33] = localDW->UnitDelay_DSTATE[33];
                }else{
                    localDW->Switch[33] = rtu_DfpRec[33];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[34] = ((localDW->UnitDelay_DSTATE[34]) || (rtu_DfpRec[34]));
                if (rtu_stLock[34]){
                    localDW->Switch[34] = localDW->UnitDelay_DSTATE[34];
                }else{
                    localDW->Switch[34] = rtu_DfpRec[34];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[35] = ((localDW->UnitDelay_DSTATE[35]) || (rtu_DfpRec[35]));
                if (rtu_stLock[35]){
                    localDW->Switch[35] = localDW->UnitDelay_DSTATE[35];
                }else{
                    localDW->Switch[35] = rtu_DfpRec[35];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[36] = ((localDW->UnitDelay_DSTATE[36]) || (rtu_DfpRec[36]));
                if (rtu_stLock[36]){
                    localDW->Switch[36] = localDW->UnitDelay_DSTATE[36];
                }else{
                    localDW->Switch[36] = rtu_DfpRec[36];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[37] = ((localDW->UnitDelay_DSTATE[37]) || (rtu_DfpRec[37]));
                if (rtu_stLock[37]){
                    localDW->Switch[37] = localDW->UnitDelay_DSTATE[37];
                }else{
                    localDW->Switch[37] = rtu_DfpRec[37];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[38] = ((localDW->UnitDelay_DSTATE[38]) || (rtu_DfpRec[38]));
                if (rtu_stLock[38]){
                    localDW->Switch[38] = localDW->UnitDelay_DSTATE[38];
                }else{
                    localDW->Switch[38] = rtu_DfpRec[38];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[39] = ((localDW->UnitDelay_DSTATE[39]) || (rtu_DfpRec[39]));
                if (rtu_stLock[39]){
                    localDW->Switch[39] = localDW->UnitDelay_DSTATE[39];
                }else{
                    localDW->Switch[39] = rtu_DfpRec[39];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[40] = ((localDW->UnitDelay_DSTATE[40]) || (rtu_DfpRec[40]));
                if (rtu_stLock[40]){
                    localDW->Switch[40] = localDW->UnitDelay_DSTATE[40];
                }else{
                    localDW->Switch[40] = rtu_DfpRec[40];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[41] = ((localDW->UnitDelay_DSTATE[41]) || (rtu_DfpRec[41]));
                if (rtu_stLock[41]){
                    localDW->Switch[41] = localDW->UnitDelay_DSTATE[41];
                }else{
                    localDW->Switch[41] = rtu_DfpRec[41];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[42] = ((localDW->UnitDelay_DSTATE[42]) || (rtu_DfpRec[42]));
                if (rtu_stLock[42]){
                    localDW->Switch[42] = localDW->UnitDelay_DSTATE[42];
                }else{
                    localDW->Switch[42] = rtu_DfpRec[42];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[43] = ((localDW->UnitDelay_DSTATE[43]) || (rtu_DfpRec[43]));
                if (rtu_stLock[43]){
                    localDW->Switch[43] = localDW->UnitDelay_DSTATE[43];
                }else{
                    localDW->Switch[43] = rtu_DfpRec[43];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[44] = ((localDW->UnitDelay_DSTATE[44]) || (rtu_DfpRec[44]));
                if (rtu_stLock[44]){
                    localDW->Switch[44] = localDW->UnitDelay_DSTATE[44];
                }else{
                    localDW->Switch[44] = rtu_DfpRec[44];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[45] = ((localDW->UnitDelay_DSTATE[45]) || (rtu_DfpRec[45]));
                if (rtu_stLock[45]){
                    localDW->Switch[45] = localDW->UnitDelay_DSTATE[45];
                }else{
                    localDW->Switch[45] = rtu_DfpRec[45];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[46] = ((localDW->UnitDelay_DSTATE[46]) || (rtu_DfpRec[46]));
                if (rtu_stLock[46]){
                    localDW->Switch[46] = localDW->UnitDelay_DSTATE[46];
                }else{
                    localDW->Switch[46] = rtu_DfpRec[46];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[47] = ((localDW->UnitDelay_DSTATE[47]) || (rtu_DfpRec[47]));
                if (rtu_stLock[47]){
                    localDW->Switch[47] = localDW->UnitDelay_DSTATE[47];
                }else{
                    localDW->Switch[47] = rtu_DfpRec[47];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[48] = ((localDW->UnitDelay_DSTATE[48]) || (rtu_DfpRec[48]));
                if (rtu_stLock[48]){
                    localDW->Switch[48] = localDW->UnitDelay_DSTATE[48];
                }else{
                    localDW->Switch[48] = rtu_DfpRec[48];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[49] = ((localDW->UnitDelay_DSTATE[49]) || (rtu_DfpRec[49]));
                if (rtu_stLock[49]){
                    localDW->Switch[49] = localDW->UnitDelay_DSTATE[49];
                }else{
                    localDW->Switch[49] = rtu_DfpRec[49];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[50] = ((localDW->UnitDelay_DSTATE[50]) || (rtu_DfpRec[50]));
                if (rtu_stLock[50]){
                    localDW->Switch[50] = localDW->UnitDelay_DSTATE[50];
                }else{
                    localDW->Switch[50] = rtu_DfpRec[50];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[51] = ((localDW->UnitDelay_DSTATE[51]) || (rtu_DfpRec[51]));
                if (rtu_stLock[51]){
                    localDW->Switch[51] = localDW->UnitDelay_DSTATE[51];
                }else{
                    localDW->Switch[51] = rtu_DfpRec[51];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[52] = ((localDW->UnitDelay_DSTATE[52]) || (rtu_DfpRec[52]));
                if (rtu_stLock[52]){
                    localDW->Switch[52] = localDW->UnitDelay_DSTATE[52];
                }else{
                    localDW->Switch[52] = rtu_DfpRec[52];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[53] = ((localDW->UnitDelay_DSTATE[53]) || (rtu_DfpRec[53]));
                if (rtu_stLock[53]){
                    localDW->Switch[53] = localDW->UnitDelay_DSTATE[53];
                }else{
                    localDW->Switch[53] = rtu_DfpRec[53];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[54] = ((localDW->UnitDelay_DSTATE[54]) || (rtu_DfpRec[54]));
                if (rtu_stLock[54]){
                    localDW->Switch[54] = localDW->UnitDelay_DSTATE[54];
                }else{
                    localDW->Switch[54] = rtu_DfpRec[54];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[55] = ((localDW->UnitDelay_DSTATE[55]) || (rtu_DfpRec[55]));
                if (rtu_stLock[55]){
                    localDW->Switch[55] = localDW->UnitDelay_DSTATE[55];
                }else{
                    localDW->Switch[55] = rtu_DfpRec[55];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[56] = ((localDW->UnitDelay_DSTATE[56]) || (rtu_DfpRec[56]));
                if (rtu_stLock[56]){
                    localDW->Switch[56] = localDW->UnitDelay_DSTATE[56];
                }else{
                    localDW->Switch[56] = rtu_DfpRec[56];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[57] = ((localDW->UnitDelay_DSTATE[57]) || (rtu_DfpRec[57]));
                if (rtu_stLock[57]){
                    localDW->Switch[57] = localDW->UnitDelay_DSTATE[57];
                }else{
                    localDW->Switch[57] = rtu_DfpRec[57];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[58] = ((localDW->UnitDelay_DSTATE[58]) || (rtu_DfpRec[58]));
                if (rtu_stLock[58]){
                    localDW->Switch[58] = localDW->UnitDelay_DSTATE[58];
                }else{
                    localDW->Switch[58] = rtu_DfpRec[58];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[59] = ((localDW->UnitDelay_DSTATE[59]) || (rtu_DfpRec[59]));
                if (rtu_stLock[59]){
                    localDW->Switch[59] = localDW->UnitDelay_DSTATE[59];
                }else{
                    localDW->Switch[59] = rtu_DfpRec[59];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[60] = ((localDW->UnitDelay_DSTATE[60]) || (rtu_DfpRec[60]));
                if (rtu_stLock[60]){
                    localDW->Switch[60] = localDW->UnitDelay_DSTATE[60];
                }else{
                    localDW->Switch[60] = rtu_DfpRec[60];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[61] = ((localDW->UnitDelay_DSTATE[61]) || (rtu_DfpRec[61]));
                if (rtu_stLock[61]){
                    localDW->Switch[61] = localDW->UnitDelay_DSTATE[61];
                }else{
                    localDW->Switch[61] = rtu_DfpRec[61];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[62] = ((localDW->UnitDelay_DSTATE[62]) || (rtu_DfpRec[62]));
                if (rtu_stLock[62]){
                    localDW->Switch[62] = localDW->UnitDelay_DSTATE[62];
                }else{
                    localDW->Switch[62] = rtu_DfpRec[62];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[63] = ((localDW->UnitDelay_DSTATE[63]) || (rtu_DfpRec[63]));
                if (rtu_stLock[63]){
                    localDW->Switch[63] = localDW->UnitDelay_DSTATE[63];
                }else{
                    localDW->Switch[63] = rtu_DfpRec[63];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[64] = ((localDW->UnitDelay_DSTATE[64]) || (rtu_DfpRec[64]));
                if (rtu_stLock[64]){
                    localDW->Switch[64] = localDW->UnitDelay_DSTATE[64];
                }else{
                    localDW->Switch[64] = rtu_DfpRec[64];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[65] = ((localDW->UnitDelay_DSTATE[65]) || (rtu_DfpRec[65]));
                if (rtu_stLock[65]){
                    localDW->Switch[65] = localDW->UnitDelay_DSTATE[65];
                }else{
                    localDW->Switch[65] = rtu_DfpRec[65];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[66] = ((localDW->UnitDelay_DSTATE[66]) || (rtu_DfpRec[66]));
                if (rtu_stLock[66]){
                    localDW->Switch[66] = localDW->UnitDelay_DSTATE[66];
                }else{
                    localDW->Switch[66] = rtu_DfpRec[66];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[67] = ((localDW->UnitDelay_DSTATE[67]) || (rtu_DfpRec[67]));
                if (rtu_stLock[67]){
                    localDW->Switch[67] = localDW->UnitDelay_DSTATE[67];
                }else{
                    localDW->Switch[67] = rtu_DfpRec[67];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[68] = ((localDW->UnitDelay_DSTATE[68]) || (rtu_DfpRec[68]));
                if (rtu_stLock[68]){
                    localDW->Switch[68] = localDW->UnitDelay_DSTATE[68];
                }else{
                    localDW->Switch[68] = rtu_DfpRec[68];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[69] = ((localDW->UnitDelay_DSTATE[69]) || (rtu_DfpRec[69]));
                if (rtu_stLock[69]){
                    localDW->Switch[69] = localDW->UnitDelay_DSTATE[69];
                }else{
                    localDW->Switch[69] = rtu_DfpRec[69];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[70] = ((localDW->UnitDelay_DSTATE[70]) || (rtu_DfpRec[70]));
                if (rtu_stLock[70]){
                    localDW->Switch[70] = localDW->UnitDelay_DSTATE[70];
                }else{
                    localDW->Switch[70] = rtu_DfpRec[70];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[71] = ((localDW->UnitDelay_DSTATE[71]) || (rtu_DfpRec[71]));
                if (rtu_stLock[71]){
                    localDW->Switch[71] = localDW->UnitDelay_DSTATE[71];
                }else{
                    localDW->Switch[71] = rtu_DfpRec[71];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[72] = ((localDW->UnitDelay_DSTATE[72]) || (rtu_DfpRec[72]));
                if (rtu_stLock[72]){
                    localDW->Switch[72] = localDW->UnitDelay_DSTATE[72];
                }else{
                    localDW->Switch[72] = rtu_DfpRec[72];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[73] = ((localDW->UnitDelay_DSTATE[73]) || (rtu_DfpRec[73]));
                if (rtu_stLock[73]){
                    localDW->Switch[73] = localDW->UnitDelay_DSTATE[73];
                }else{
                    localDW->Switch[73] = rtu_DfpRec[73];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[74] = ((localDW->UnitDelay_DSTATE[74]) || (rtu_DfpRec[74]));
                if (rtu_stLock[74]){
                    localDW->Switch[74] = localDW->UnitDelay_DSTATE[74];
                }else{
                    localDW->Switch[74] = rtu_DfpRec[74];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[75] = ((localDW->UnitDelay_DSTATE[75]) || (rtu_DfpRec[75]));
                if (rtu_stLock[75]){
                    localDW->Switch[75] = localDW->UnitDelay_DSTATE[75];
                }else{
                    localDW->Switch[75] = rtu_DfpRec[75];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[76] = ((localDW->UnitDelay_DSTATE[76]) || (rtu_DfpRec[76]));
                if (rtu_stLock[76]){
                    localDW->Switch[76] = localDW->UnitDelay_DSTATE[76];
                }else{
                    localDW->Switch[76] = rtu_DfpRec[76];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[77] = ((localDW->UnitDelay_DSTATE[77]) || (rtu_DfpRec[77]));
                if (rtu_stLock[77]){
                    localDW->Switch[77] = localDW->UnitDelay_DSTATE[77];
                }else{
                    localDW->Switch[77] = rtu_DfpRec[77];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[78] = ((localDW->UnitDelay_DSTATE[78]) || (rtu_DfpRec[78]));
                if (rtu_stLock[78]){
                    localDW->Switch[78] = localDW->UnitDelay_DSTATE[78];
                }else{
                    localDW->Switch[78] = rtu_DfpRec[78];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[79] = ((localDW->UnitDelay_DSTATE[79]) || (rtu_DfpRec[79]));
                if (rtu_stLock[79]){
                    localDW->Switch[79] = localDW->UnitDelay_DSTATE[79];
                }else{
                    localDW->Switch[79] = rtu_DfpRec[79];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[80] = ((localDW->UnitDelay_DSTATE[80]) || (rtu_DfpRec[80]));
                if (rtu_stLock[80]){
                    localDW->Switch[80] = localDW->UnitDelay_DSTATE[80];
                }else{
                    localDW->Switch[80] = rtu_DfpRec[80];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[81] = ((localDW->UnitDelay_DSTATE[81]) || (rtu_DfpRec[81]));
                if (rtu_stLock[81]){
                    localDW->Switch[81] = localDW->UnitDelay_DSTATE[81];
                }else{
                    localDW->Switch[81] = rtu_DfpRec[81];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[82] = ((localDW->UnitDelay_DSTATE[82]) || (rtu_DfpRec[82]));
                if (rtu_stLock[82]){
                    localDW->Switch[82] = localDW->UnitDelay_DSTATE[82];
                }else{
                    localDW->Switch[82] = rtu_DfpRec[82];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[83] = ((localDW->UnitDelay_DSTATE[83]) || (rtu_DfpRec[83]));
                if (rtu_stLock[83]){
                    localDW->Switch[83] = localDW->UnitDelay_DSTATE[83];
                }else{
                    localDW->Switch[83] = rtu_DfpRec[83];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[84] = ((localDW->UnitDelay_DSTATE[84]) || (rtu_DfpRec[84]));
                if (rtu_stLock[84]){
                    localDW->Switch[84] = localDW->UnitDelay_DSTATE[84];
                }else{
                    localDW->Switch[84] = rtu_DfpRec[84];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[85] = ((localDW->UnitDelay_DSTATE[85]) || (rtu_DfpRec[85]));
                if (rtu_stLock[85]){
                    localDW->Switch[85] = localDW->UnitDelay_DSTATE[85];
                }else{
                    localDW->Switch[85] = rtu_DfpRec[85];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[86] = ((localDW->UnitDelay_DSTATE[86]) || (rtu_DfpRec[86]));
                if (rtu_stLock[86]){
                    localDW->Switch[86] = localDW->UnitDelay_DSTATE[86];
                }else{
                    localDW->Switch[86] = rtu_DfpRec[86];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[87] = ((localDW->UnitDelay_DSTATE[87]) || (rtu_DfpRec[87]));
                if (rtu_stLock[87]){
                    localDW->Switch[87] = localDW->UnitDelay_DSTATE[87];
                }else{
                    localDW->Switch[87] = rtu_DfpRec[87];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[88] = ((localDW->UnitDelay_DSTATE[88]) || (rtu_DfpRec[88]));
                if (rtu_stLock[88]){
                    localDW->Switch[88] = localDW->UnitDelay_DSTATE[88];
                }else{
                    localDW->Switch[88] = rtu_DfpRec[88];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[89] = ((localDW->UnitDelay_DSTATE[89]) || (rtu_DfpRec[89]));
                if (rtu_stLock[89]){
                    localDW->Switch[89] = localDW->UnitDelay_DSTATE[89];
                }else{
                    localDW->Switch[89] = rtu_DfpRec[89];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[90] = ((localDW->UnitDelay_DSTATE[90]) || (rtu_DfpRec[90]));
                if (rtu_stLock[90]){
                    localDW->Switch[90] = localDW->UnitDelay_DSTATE[90];
                }else{
                    localDW->Switch[90] = rtu_DfpRec[90];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[91] = ((localDW->UnitDelay_DSTATE[91]) || (rtu_DfpRec[91]));
                if (rtu_stLock[91]){
                    localDW->Switch[91] = localDW->UnitDelay_DSTATE[91];
                }else{
                    localDW->Switch[91] = rtu_DfpRec[91];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[92] = ((localDW->UnitDelay_DSTATE[92]) || (rtu_DfpRec[92]));
                if (rtu_stLock[92]){
                    localDW->Switch[92] = localDW->UnitDelay_DSTATE[92];
                }else{
                    localDW->Switch[92] = rtu_DfpRec[92];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[93] = ((localDW->UnitDelay_DSTATE[93]) || (rtu_DfpRec[93]));
                if (rtu_stLock[93]){
                    localDW->Switch[93] = localDW->UnitDelay_DSTATE[93];
                }else{
                    localDW->Switch[93] = rtu_DfpRec[93];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[94] = ((localDW->UnitDelay_DSTATE[94]) || (rtu_DfpRec[94]));
                if (rtu_stLock[94]){
                    localDW->Switch[94] = localDW->UnitDelay_DSTATE[94];
                }else{
                    localDW->Switch[94] = rtu_DfpRec[94];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[95] = ((localDW->UnitDelay_DSTATE[95]) || (rtu_DfpRec[95]));
                if (rtu_stLock[95]){
                    localDW->Switch[95] = localDW->UnitDelay_DSTATE[95];
                }else{
                    localDW->Switch[95] = rtu_DfpRec[95];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[96] = ((localDW->UnitDelay_DSTATE[96]) || (rtu_DfpRec[96]));
                if (rtu_stLock[96]){
                    localDW->Switch[96] = localDW->UnitDelay_DSTATE[96];
                }else{
                    localDW->Switch[96] = rtu_DfpRec[96];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[97] = ((localDW->UnitDelay_DSTATE[97]) || (rtu_DfpRec[97]));
                if (rtu_stLock[97]){
                    localDW->Switch[97] = localDW->UnitDelay_DSTATE[97];
                }else{
                    localDW->Switch[97] = rtu_DfpRec[97];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[98] = ((localDW->UnitDelay_DSTATE[98]) || (rtu_DfpRec[98]));
                if (rtu_stLock[98]){
                    localDW->Switch[98] = localDW->UnitDelay_DSTATE[98];
                }else{
                    localDW->Switch[98] = rtu_DfpRec[98];
                }
            }
        }
        {
            {
                localDW->UnitDelay_DSTATE[99] = ((localDW->UnitDelay_DSTATE[99]) || (rtu_DfpRec[99]));
                if (rtu_stLock[99]){
                    localDW->Switch[99] = localDW->UnitDelay_DSTATE[99];
                }else{
                    localDW->Switch[99] = rtu_DfpRec[99];
                }
            }
        }
    }
}


void Runnable_FaultAct(void)
{
    boolean tmpRead;
    FaultCode rtb_FaultPro_FaultAct_stFaultCo;
    boolean rtb_TmpSignalConversionAtLockDf[100];
    boolean rtb_TmpSignalConversionAtFau_ng;
    boolean rtb_TmpSignalConversionAtFau_cl;
    boolean rtb_TmpSignalConversionAtFau_fh;
    uint8 rtb_TmpSignalConversionAtPwrMgt;
    uint8 rtb_TmpSignalConversionAtSigPro;
    boolean rtb_TmpSignalConversionAtFau_mm;
    boolean rtb_TmpSignalConversionAtFaultD;
    boolean rtb_TmpSignalConversionAtFaul_n;
    boolean rtb_TmpSignalConversionAtFaul_b;
    boolean rtb_TmpSignalConversionAtFau_dv;
    boolean rtb_TmpSignalConversionAtFau_ni;
    boolean rtb_TmpSignalConversionAtFa_nly;
    boolean rtb_TmpSignalConversionAtFau_gx;
    boolean rtb_TmpSignalConversionAtFau_oi;
    boolean rtb_TmpSignalConversionAtFau_bm;
    boolean rtb_TmpSignalConversionAtFaul_j;
    boolean rtb_TmpSignalConversionAtFaul_i;
    boolean rtb_TmpSignalConversionAtFau_me;
    boolean rtb_TmpSignalConversionAtFau_eh;
    boolean rtb_TmpSignalConversionAtFaul_m;
    boolean rtb_TmpSignalConversionAtFaul_e;
    boolean rtb_TmpSignalConversionAtFau_ki;
    boolean rtb_TmpSignalConversionAtFaul_o;
    boolean rtb_TmpSignalConversionAtFaul_k;
    boolean rtb_TmpSignalConversionAtFaul_g;
    boolean rtb_TmpSignalConversionAtFau_nr;
    boolean rtb_TmpSignalConversionAtFau_d5;
    boolean rtb_TmpSignalConversionAtFau_i0;
    boolean rtb_TmpSignalConversionAtFa_mrh;
    boolean rtb_TmpSignalConversionAtFaul_f;
    boolean rtb_TmpSignalConversionAtFaul_p;
    boolean rtb_TmpSignalConversionAtFau_cr;
    boolean rtb_TmpSignalConversionAtFau_fy;
    boolean rtb_TmpSignalConversionAtFaul_h;
    boolean rtb_TmpSignalConversionAtFau_jc;
    boolean rtb_TmpSignalConversionAtFau_ea;
    boolean rtb_TmpSignalConversionAtFau_g4;
    boolean rtb_TmpSignalConversionAtFau_dh;
    boolean rtb_TmpSignalConversionAtFau_na;
    boolean rtb_TmpSignalConversionAtFau_c4;
    boolean rtb_TmpSignalConversionAtFau_ax;
    boolean rtb_TmpSignalConversionAtFau_b3;
    boolean rtb_TmpSignalConversionAtFau_ie;
    boolean rtb_TmpSignalConversionAtFa_kw4;
    boolean rtb_TmpSignalConversionAtFaul_c;
    boolean rtb_TmpSignalConversionAtFau_jw;
    boolean rtb_TmpSignalConversionAtFau_kk;
    boolean rtb_TmpSignalConversionAtFau_mc;
    boolean rtb_TmpSignalConversionAtFau_e2;
    boolean rtb_TmpSignalConversionAtFau_mi;
    boolean rtb_TmpSignalConversionAtFau_kb;
    boolean rtb_TmpSignalConversionAtFau_cq;
    boolean rtb_TmpSignalConversionAtFau_is;
    boolean rtb_TmpSignalConversionAtFau_py;
    boolean rtb_TmpSignalConversionAtFaul_a;
    boolean rtb_TmpSignalConversionAtFa_e4s;
    boolean rtb_TmpSignalConversionAtFau_d1;
    boolean rtb_TmpSignalConversionAtFau_ow;
    boolean rtb_TmpSignalConversionAtFau_jv;
    boolean rtb_TmpSignalConversionAtFau_n0;
    uint8 rtb_Switch2_idx_0;
    uint8 rtb_Switch2_idx_1;
    uint8 rtb_Switch2_idx_4;
    uint8 rtb_Switch2_idx_5;
    (*(&rtb_TmpSignalConversionAtFaultD) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_n) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_b) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_dv) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ni) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFa_nly) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_gx) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_oi) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_bm) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_j) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_i) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_mm) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ng) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_me) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_eh) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_cl) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_m) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_fh) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_e) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ki) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_o) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_k) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_g) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_nr) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_d5) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_i0) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFa_mrh) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_f) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_p) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_cr) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_fy) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_h) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_jc) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ea) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_g4) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_dh) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_na) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_c4) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ax) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_b3) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ie) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFa_kw4) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_c) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_jw) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_kk) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_mc) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_e2) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_mi) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_kb) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_cq) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_is) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_py) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFaul_a) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFa_e4s) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_d1) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_ow) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_jv) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtFau_n0) = Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad, ((Std_ReturnType)(0U)));
    rtb_TmpSignalConversionAtLockDf[0] = rtb_TmpSignalConversionAtFaultD;
    rtb_TmpSignalConversionAtLockDf[1] = 0U;
    rtb_TmpSignalConversionAtLockDf[2] = 0U;
    rtb_TmpSignalConversionAtLockDf[3] = 0U;
    rtb_TmpSignalConversionAtLockDf[4] = rtb_TmpSignalConversionAtFaul_n;
    rtb_TmpSignalConversionAtLockDf[5] = 0U;
    rtb_TmpSignalConversionAtLockDf[6] = 0U;
    rtb_TmpSignalConversionAtLockDf[7] = 0U;
    rtb_TmpSignalConversionAtLockDf[8] = 0U;
    rtb_TmpSignalConversionAtLockDf[9] = rtb_TmpSignalConversionAtFaul_b;
    rtb_TmpSignalConversionAtLockDf[10] = rtb_TmpSignalConversionAtFau_dv;
    rtb_TmpSignalConversionAtLockDf[11] = 0U;
    rtb_TmpSignalConversionAtLockDf[12] = 0U;
    rtb_TmpSignalConversionAtLockDf[13] = 0U;
    rtb_TmpSignalConversionAtLockDf[14] = 0U;
    rtb_TmpSignalConversionAtLockDf[15] = rtb_TmpSignalConversionAtFau_ni;
    rtb_TmpSignalConversionAtLockDf[16] = rtb_TmpSignalConversionAtFa_nly;
    rtb_TmpSignalConversionAtLockDf[17] = rtb_TmpSignalConversionAtFau_gx;
    rtb_TmpSignalConversionAtLockDf[18] = rtb_TmpSignalConversionAtFau_oi;
    rtb_TmpSignalConversionAtLockDf[19] = 0U;
    rtb_TmpSignalConversionAtLockDf[20] = 0U;
    rtb_TmpSignalConversionAtLockDf[21] = 0U;
    rtb_TmpSignalConversionAtLockDf[22] = 0U;
    rtb_TmpSignalConversionAtLockDf[23] = 0U;
    rtb_TmpSignalConversionAtLockDf[24] = 0U;
    rtb_TmpSignalConversionAtLockDf[25] = 0U;
    rtb_TmpSignalConversionAtLockDf[26] = 0U;
    rtb_TmpSignalConversionAtLockDf[27] = 0U;
    rtb_TmpSignalConversionAtLockDf[28] = rtb_TmpSignalConversionAtFau_bm;
    rtb_TmpSignalConversionAtLockDf[29] = rtb_TmpSignalConversionAtFaul_j;
    rtb_TmpSignalConversionAtLockDf[30] = rtb_TmpSignalConversionAtFaul_i;
    rtb_TmpSignalConversionAtLockDf[31] = rtb_TmpSignalConversionAtFau_mm;
    rtb_TmpSignalConversionAtLockDf[32] = rtb_TmpSignalConversionAtFau_ng;
    rtb_TmpSignalConversionAtLockDf[33] = rtb_TmpSignalConversionAtFau_me;
    rtb_TmpSignalConversionAtLockDf[34] = rtb_TmpSignalConversionAtFau_eh;
    rtb_TmpSignalConversionAtLockDf[35] = rtb_TmpSignalConversionAtFau_cl;
    rtb_TmpSignalConversionAtLockDf[36] = rtb_TmpSignalConversionAtFaul_m;
    rtb_TmpSignalConversionAtLockDf[37] = rtb_TmpSignalConversionAtFau_fh;
    rtb_TmpSignalConversionAtLockDf[38] = rtb_TmpSignalConversionAtFaul_e;
    rtb_TmpSignalConversionAtLockDf[39] = rtb_TmpSignalConversionAtFau_ki;
    rtb_TmpSignalConversionAtLockDf[40] = rtb_TmpSignalConversionAtFaul_o;
    rtb_TmpSignalConversionAtLockDf[41] = rtb_TmpSignalConversionAtFaul_k;
    rtb_TmpSignalConversionAtLockDf[42] = rtb_TmpSignalConversionAtFaul_g;
    rtb_TmpSignalConversionAtLockDf[43] = rtb_TmpSignalConversionAtFau_nr;
    rtb_TmpSignalConversionAtLockDf[44] = rtb_TmpSignalConversionAtFau_d5;
    rtb_TmpSignalConversionAtLockDf[45] = rtb_TmpSignalConversionAtFau_i0;
    rtb_TmpSignalConversionAtLockDf[46] = rtb_TmpSignalConversionAtFa_mrh;
    rtb_TmpSignalConversionAtLockDf[47] = rtb_TmpSignalConversionAtFaul_f;
    rtb_TmpSignalConversionAtLockDf[48] = rtb_TmpSignalConversionAtFaul_p;
    rtb_TmpSignalConversionAtLockDf[49] = rtb_TmpSignalConversionAtFau_cr;
    rtb_TmpSignalConversionAtLockDf[50] = rtb_TmpSignalConversionAtFau_fy;
    rtb_TmpSignalConversionAtLockDf[51] = rtb_TmpSignalConversionAtFaul_h;
    rtb_TmpSignalConversionAtLockDf[52] = rtb_TmpSignalConversionAtFau_jc;
    rtb_TmpSignalConversionAtLockDf[53] = rtb_TmpSignalConversionAtFau_ea;
    rtb_TmpSignalConversionAtLockDf[54] = rtb_TmpSignalConversionAtFau_g4;
    rtb_TmpSignalConversionAtLockDf[55] = rtb_TmpSignalConversionAtFau_dh;
    rtb_TmpSignalConversionAtLockDf[56] = rtb_TmpSignalConversionAtFau_na;
    rtb_TmpSignalConversionAtLockDf[57] = rtb_TmpSignalConversionAtFau_c4;
    rtb_TmpSignalConversionAtLockDf[58] = rtb_TmpSignalConversionAtFau_ax;
    rtb_TmpSignalConversionAtLockDf[59] = rtb_TmpSignalConversionAtFau_b3;
    rtb_TmpSignalConversionAtLockDf[60] = rtb_TmpSignalConversionAtFau_ie;
    rtb_TmpSignalConversionAtLockDf[61] = rtb_TmpSignalConversionAtFa_kw4;
    rtb_TmpSignalConversionAtLockDf[62] = rtb_TmpSignalConversionAtFaul_c;
    rtb_TmpSignalConversionAtLockDf[63] = 0U;
    rtb_TmpSignalConversionAtLockDf[64] = 0U;
    rtb_TmpSignalConversionAtLockDf[65] = 0U;
    rtb_TmpSignalConversionAtLockDf[66] = rtb_TmpSignalConversionAtFau_jw;
    rtb_TmpSignalConversionAtLockDf[67] = rtb_TmpSignalConversionAtFau_kk;
    rtb_TmpSignalConversionAtLockDf[68] = rtb_TmpSignalConversionAtFau_mc;
    rtb_TmpSignalConversionAtLockDf[69] = rtb_TmpSignalConversionAtFau_e2;
    rtb_TmpSignalConversionAtLockDf[70] = rtb_TmpSignalConversionAtFau_mi;
    rtb_TmpSignalConversionAtLockDf[71] = rtb_TmpSignalConversionAtFau_kb;
    rtb_TmpSignalConversionAtLockDf[72] = rtb_TmpSignalConversionAtFau_cq;
    rtb_TmpSignalConversionAtLockDf[73] = rtb_TmpSignalConversionAtFau_is;
    rtb_TmpSignalConversionAtLockDf[74] = rtb_TmpSignalConversionAtFau_py;
    rtb_TmpSignalConversionAtLockDf[75] = 0U;
    rtb_TmpSignalConversionAtLockDf[76] = 0U;
    rtb_TmpSignalConversionAtLockDf[77] = 0U;
    rtb_TmpSignalConversionAtLockDf[78] = 0U;
    rtb_TmpSignalConversionAtLockDf[79] = 0U;
    rtb_TmpSignalConversionAtLockDf[80] = 0U;
    rtb_TmpSignalConversionAtLockDf[81] = 0U;
    rtb_TmpSignalConversionAtLockDf[82] = 0U;
    rtb_TmpSignalConversionAtLockDf[83] = 0U;
    rtb_TmpSignalConversionAtLockDf[84] = 0U;
    rtb_TmpSignalConversionAtLockDf[85] = 0U;
    rtb_TmpSignalConversionAtLockDf[86] = 0U;
    rtb_TmpSignalConversionAtLockDf[87] = 0U;
    rtb_TmpSignalConversionAtLockDf[88] = 0U;
    rtb_TmpSignalConversionAtLockDf[89] = 0U;
    rtb_TmpSignalConversionAtLockDf[90] = 0U;
    rtb_TmpSignalConversionAtLockDf[91] = 0U;
    rtb_TmpSignalConversionAtLockDf[92] = rtb_TmpSignalConversionAtFaul_a;
    rtb_TmpSignalConversionAtLockDf[93] = rtb_TmpSignalConversionAtFa_e4s;
    rtb_TmpSignalConversionAtLockDf[94] = rtb_TmpSignalConversionAtFau_d1;
    rtb_TmpSignalConversionAtLockDf[95] = 0U;
    rtb_TmpSignalConversionAtLockDf[96] = 0U;
    rtb_TmpSignalConversionAtLockDf[97] = rtb_TmpSignalConversionAtFau_ow;
    rtb_TmpSignalConversionAtLockDf[98] = rtb_TmpSignalConversionAtFau_jv;
    rtb_TmpSignalConversionAtLockDf[99] = rtb_TmpSignalConversionAtFau_n0;
    BMS_FaultProcess_LockDfp(rtb_TmpSignalConversionAtLockDf, g_BMS_Faultprocess_P.FD_FA_stLock_C, &g_BMS_Faultprocess_DW.LockDfp);
    rtb_TmpSignalConversionAtLockDf[0] = rtb_TmpSignalConversionAtFaultD;
    rtb_TmpSignalConversionAtLockDf[1] = 0U;
    rtb_TmpSignalConversionAtLockDf[2] = 0U;
    rtb_TmpSignalConversionAtLockDf[3] = 0U;
    rtb_TmpSignalConversionAtLockDf[4] = rtb_TmpSignalConversionAtFaul_n;
    rtb_TmpSignalConversionAtLockDf[5] = 0U;
    rtb_TmpSignalConversionAtLockDf[6] = 0U;
    rtb_TmpSignalConversionAtLockDf[7] = 0U;
    rtb_TmpSignalConversionAtLockDf[8] = 0U;
    rtb_TmpSignalConversionAtLockDf[9] = rtb_TmpSignalConversionAtFaul_b;
    rtb_TmpSignalConversionAtLockDf[10] = rtb_TmpSignalConversionAtFau_dv;
    rtb_TmpSignalConversionAtLockDf[11] = 0U;
    rtb_TmpSignalConversionAtLockDf[12] = 0U;
    rtb_TmpSignalConversionAtLockDf[13] = 0U;
    rtb_TmpSignalConversionAtLockDf[14] = 0U;
    rtb_TmpSignalConversionAtLockDf[15] = rtb_TmpSignalConversionAtFau_ni;
    rtb_TmpSignalConversionAtLockDf[16] = rtb_TmpSignalConversionAtFa_nly;
    rtb_TmpSignalConversionAtLockDf[17] = rtb_TmpSignalConversionAtFau_gx;
    rtb_TmpSignalConversionAtLockDf[18] = rtb_TmpSignalConversionAtFau_oi;
    rtb_TmpSignalConversionAtLockDf[19] = 0U;
    rtb_TmpSignalConversionAtLockDf[20] = 0U;
    rtb_TmpSignalConversionAtLockDf[21] = 0U;
    rtb_TmpSignalConversionAtLockDf[22] = 0U;
    rtb_TmpSignalConversionAtLockDf[23] = 0U;
    rtb_TmpSignalConversionAtLockDf[24] = 0U;
    rtb_TmpSignalConversionAtLockDf[25] = 0U;
    rtb_TmpSignalConversionAtLockDf[26] = 0U;
    rtb_TmpSignalConversionAtLockDf[27] = 0U;
    rtb_TmpSignalConversionAtLockDf[28] = rtb_TmpSignalConversionAtFau_bm;
    rtb_TmpSignalConversionAtLockDf[29] = rtb_TmpSignalConversionAtFaul_j;
    rtb_TmpSignalConversionAtLockDf[30] = rtb_TmpSignalConversionAtFaul_i;
    rtb_TmpSignalConversionAtLockDf[31] = rtb_TmpSignalConversionAtFau_mm;
    rtb_TmpSignalConversionAtLockDf[32] = rtb_TmpSignalConversionAtFau_ng;
    rtb_TmpSignalConversionAtLockDf[33] = rtb_TmpSignalConversionAtFau_me;
    rtb_TmpSignalConversionAtLockDf[34] = rtb_TmpSignalConversionAtFau_eh;
    rtb_TmpSignalConversionAtLockDf[35] = rtb_TmpSignalConversionAtFau_cl;
    rtb_TmpSignalConversionAtLockDf[36] = rtb_TmpSignalConversionAtFaul_m;
    rtb_TmpSignalConversionAtLockDf[37] = rtb_TmpSignalConversionAtFau_fh;
    rtb_TmpSignalConversionAtLockDf[38] = rtb_TmpSignalConversionAtFaul_e;
    rtb_TmpSignalConversionAtLockDf[39] = rtb_TmpSignalConversionAtFau_ki;
    rtb_TmpSignalConversionAtLockDf[40] = rtb_TmpSignalConversionAtFaul_o;
    rtb_TmpSignalConversionAtLockDf[41] = rtb_TmpSignalConversionAtFaul_k;
    rtb_TmpSignalConversionAtLockDf[42] = rtb_TmpSignalConversionAtFaul_g;
    rtb_TmpSignalConversionAtLockDf[43] = rtb_TmpSignalConversionAtFau_nr;
    rtb_TmpSignalConversionAtLockDf[44] = rtb_TmpSignalConversionAtFau_d5;
    rtb_TmpSignalConversionAtLockDf[45] = rtb_TmpSignalConversionAtFau_i0;
    rtb_TmpSignalConversionAtLockDf[46] = rtb_TmpSignalConversionAtFa_mrh;
    rtb_TmpSignalConversionAtLockDf[47] = rtb_TmpSignalConversionAtFaul_f;
    rtb_TmpSignalConversionAtLockDf[48] = rtb_TmpSignalConversionAtFaul_p;
    rtb_TmpSignalConversionAtLockDf[49] = rtb_TmpSignalConversionAtFau_cr;
    rtb_TmpSignalConversionAtLockDf[50] = rtb_TmpSignalConversionAtFau_fy;
    rtb_TmpSignalConversionAtLockDf[51] = rtb_TmpSignalConversionAtFaul_h;
    rtb_TmpSignalConversionAtLockDf[52] = rtb_TmpSignalConversionAtFau_jc;
    rtb_TmpSignalConversionAtLockDf[53] = rtb_TmpSignalConversionAtFau_ea;
    rtb_TmpSignalConversionAtLockDf[54] = rtb_TmpSignalConversionAtFau_g4;
    rtb_TmpSignalConversionAtLockDf[55] = rtb_TmpSignalConversionAtFau_dh;
    rtb_TmpSignalConversionAtLockDf[56] = rtb_TmpSignalConversionAtFau_na;
    rtb_TmpSignalConversionAtLockDf[57] = rtb_TmpSignalConversionAtFau_c4;
    rtb_TmpSignalConversionAtLockDf[58] = rtb_TmpSignalConversionAtFau_ax;
    rtb_TmpSignalConversionAtLockDf[59] = rtb_TmpSignalConversionAtFau_b3;
    rtb_TmpSignalConversionAtLockDf[60] = rtb_TmpSignalConversionAtFau_ie;
    rtb_TmpSignalConversionAtLockDf[61] = rtb_TmpSignalConversionAtFa_kw4;
    rtb_TmpSignalConversionAtLockDf[62] = rtb_TmpSignalConversionAtFaul_c;
    rtb_TmpSignalConversionAtLockDf[63] = 0U;
    rtb_TmpSignalConversionAtLockDf[64] = 0U;
    rtb_TmpSignalConversionAtLockDf[65] = 0U;
    rtb_TmpSignalConversionAtLockDf[66] = rtb_TmpSignalConversionAtFau_jw;
    rtb_TmpSignalConversionAtLockDf[67] = rtb_TmpSignalConversionAtFau_kk;
    rtb_TmpSignalConversionAtLockDf[68] = rtb_TmpSignalConversionAtFau_mc;
    rtb_TmpSignalConversionAtLockDf[69] = rtb_TmpSignalConversionAtFau_e2;
    rtb_TmpSignalConversionAtLockDf[70] = rtb_TmpSignalConversionAtFau_mi;
    rtb_TmpSignalConversionAtLockDf[71] = rtb_TmpSignalConversionAtFau_kb;
    rtb_TmpSignalConversionAtLockDf[72] = rtb_TmpSignalConversionAtFau_cq;
    rtb_TmpSignalConversionAtLockDf[73] = rtb_TmpSignalConversionAtFau_is;
    rtb_TmpSignalConversionAtLockDf[74] = rtb_TmpSignalConversionAtFau_py;
    rtb_TmpSignalConversionAtLockDf[75] = 0U;
    rtb_TmpSignalConversionAtLockDf[76] = 0U;
    rtb_TmpSignalConversionAtLockDf[77] = 0U;
    rtb_TmpSignalConversionAtLockDf[78] = 0U;
    rtb_TmpSignalConversionAtLockDf[79] = 0U;
    rtb_TmpSignalConversionAtLockDf[80] = 0U;
    rtb_TmpSignalConversionAtLockDf[81] = 0U;
    rtb_TmpSignalConversionAtLockDf[82] = 0U;
    rtb_TmpSignalConversionAtLockDf[83] = 0U;
    rtb_TmpSignalConversionAtLockDf[84] = 0U;
    rtb_TmpSignalConversionAtLockDf[85] = 0U;
    rtb_TmpSignalConversionAtLockDf[86] = 0U;
    rtb_TmpSignalConversionAtLockDf[87] = 0U;
    rtb_TmpSignalConversionAtLockDf[88] = 0U;
    rtb_TmpSignalConversionAtLockDf[89] = 0U;
    rtb_TmpSignalConversionAtLockDf[90] = 0U;
    rtb_TmpSignalConversionAtLockDf[91] = 0U;
    rtb_TmpSignalConversionAtLockDf[92] = rtb_TmpSignalConversionAtFaul_a;
    rtb_TmpSignalConversionAtLockDf[93] = rtb_TmpSignalConversionAtFa_e4s;
    rtb_TmpSignalConversionAtLockDf[94] = rtb_TmpSignalConversionAtFau_d1;
    rtb_TmpSignalConversionAtLockDf[95] = 0U;
    rtb_TmpSignalConversionAtLockDf[96] = 0U;
    rtb_TmpSignalConversionAtLockDf[97] = rtb_TmpSignalConversionAtFau_ow;
    rtb_TmpSignalConversionAtLockDf[98] = rtb_TmpSignalConversionAtFau_jv;
    rtb_TmpSignalConversionAtLockDf[99] = rtb_TmpSignalConversionAtFau_n0;
    Faultprocess_boolconveru8(rtb_TmpSignalConversionAtLockDf, &g_BMS_Faultprocess_DW.boolconveru8);
    rtb_TmpSignalConversionAtFaul_n = ((rtb_TmpSignalConversionAtFau_ng || rtb_TmpSignalConversionAtFau_cl) || rtb_TmpSignalConversionAtFau_fh);
    (*(&rtb_TmpSignalConversionAtPwrMgt) = Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod, ((Std_ReturnType)(0U)));
    rtb_TmpSignalConversionAtFaul_b = (((sint32)rtb_TmpSignalConversionAtPwrMgt) == 3);
    if (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i){
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i = 1U;
    }else{
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i = (rtb_TmpSignalConversionAtFaul_n && (!rtb_TmpSignalConversionAtFaul_b));
    }
    (*(&tmpRead) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld, ((Std_ReturnType)(0U)));
    (*(&rtb_TmpSignalConversionAtSigPro) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd, ((Std_ReturnType)(0U)));
    if (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h){
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h = 1U;
    }else{
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h = (rtb_TmpSignalConversionAtFau_mm && (tmpRead || (((sint32)rtb_TmpSignalConversionAtSigPro) <= 2)));
    }
    rtb_TmpSignalConversionAtFaultD = ((g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i) || (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h));
    if (rtb_TmpSignalConversionAtFaultD){
        rtb_Switch2_idx_0 = 7U;
    }else{
        rtb_Switch2_idx_0 = 0U;
    }
    rtb_Switch2_idx_1 = rtb_TmpSignalConversionAtFaultD ? 1U : 0U;
    rtb_Switch2_idx_4 = rtb_TmpSignalConversionAtFaultD ? 1U : 0U;
    rtb_Switch2_idx_5 = rtb_TmpSignalConversionAtFaultD ? 1U : 0U;
    if (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j){
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j = 1U;
    }else{
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j = (rtb_TmpSignalConversionAtFaul_n && rtb_TmpSignalConversionAtFaul_b);
    }
    if (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d){
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d = 1U;
    }else{
        g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d = (((!tmpRead) && (((sint32)rtb_TmpSignalConversionAtSigPro) >= 5)) && rtb_TmpSignalConversionAtFau_mm);
    }
    rtb_TmpSignalConversionAtFaultD = ((g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j) || (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d));
    if (rtb_TmpSignalConversionAtFaultD){
        g_BMS_Faultprocess_DW.DataTypeConversion = 4U;
    }else{
        g_BMS_Faultprocess_DW.DataTypeConversion = 0U;
    }
    rtb_TmpSignalConversionAtFau_mm = (((sint32)rtb_Switch2_idx_1) != 0);
    BMS_FaultProcess_FaultCodeCal(g_BMS_Faultprocess_DW.LockDfp.Switch, &g_BMS_Faultprocess_DW.FaultCodeCal);
    Faultprocess_fault_confirm(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11, &g_BMS_Faultprocess_ConstB.Fault_Confirm, &g_BMS_Faultprocess_DW.Fault_Confirm);
    Faultprocess_fault_confirm(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator, &g_BMS_Faultprocess_ConstB.Fault_Confirm1, &g_BMS_Faultprocess_DW.Fault_Confirm1);
    rtb_FaultPro_FaultAct_stFaultCo.PowerOff_Immediately = ((((g_BMS_Faultprocess_DW.Fault_Confirm.Switch2) || (g_BMS_Faultprocess_DW.Fault_Confirm1.Switch2)) || (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1)) || rtb_TmpSignalConversionAtFau_mm);
    rtb_TmpSignalConversionAtFau_mm = ((((((sint32)rtb_TmpSignalConversionAtPwrMgt) == 1) || (((sint32)rtb_TmpSignalConversionAtPwrMgt) == 5)) || (((sint32)rtb_TmpSignalConversionAtPwrMgt) == 7)) && ((((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator) || (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11)) || (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1)) || rtb_TmpSignalConversionAtFau_mm));
    rtb_FaultPro_FaultAct_stFaultCo.DisChgSOP_Prohibit = (rtb_TmpSignalConversionAtFau_mm || (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator2));
    rtb_FaultPro_FaultAct_stFaultCo.ChgSOP_Prohibit = (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator3) || rtb_TmpSignalConversionAtFau_mm) || rtb_TmpSignalConversionAtFaultD);
    rtb_FaultPro_FaultAct_stFaultCo.DisChgSOP_Limit30kw = (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator4) || rtb_TmpSignalConversionAtFaultD) || (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11));
    rtb_FaultPro_FaultAct_stFaultCo.DCChg_Prohibit = ((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator7) || ((((sint32)rtb_Switch2_idx_4) != 0) || rtb_TmpSignalConversionAtFaultD));
    rtb_FaultPro_FaultAct_stFaultCo.ACChg_Prohibit = ((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator8) || ((((sint32)rtb_Switch2_idx_5) != 0) || rtb_TmpSignalConversionAtFaultD));
    rtb_FaultPro_FaultAct_stFaultCo.PowerOff_Req = g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator;
    rtb_FaultPro_FaultAct_stFaultCo.DisChgSOP_LimitCTkw = g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator5;
    rtb_FaultPro_FaultAct_stFaultCo.ChgSOP_LimitCTkw = g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator6;
    rtb_FaultPro_FaultAct_stFaultCo.Balance_Prohibit = g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator9;
    if (rtb_Switch2_idx_0 > g_BMS_Faultprocess_DW.DataTypeConversion){
        g_BMS_Faultprocess_DW.DataTypeConversion = rtb_Switch2_idx_0;
    }
    BMS_FaultProcess_FaultRankCal();
    (void)(Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stFaultLamp = (0U), ((Std_ReturnType)(0U)));
    (void)(Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stFaultType = (0U), ((Std_ReturnType)(0U)));
    (void)(Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stBcuFltRnk = (g_BMS_Faultprocess_DW.DataTypeConversion), ((Std_ReturnType)(0U)));
    (void)Rte_Write_swc_app_faultprocess_FaultPro_FaultAct_stFaultCode(&rtb_FaultPro_FaultAct_stFaultCo);
}


Std_ReturnType Rte_Write_swc_app_faultprocess_FaultPro_FaultAct_stFaultCode(const FaultCode* data)
{
    memcpy(&__igv__FaultPro_FaultAct_stFaultCode, data, sizeof (__igv__FaultPro_FaultAct_stFaultCode));
}


float __AUX_CONVERT_SFIX16_EN2(signed short  si)
{
    if (si > 32768){
        si = si - 65536;
    }
    return si * 0.250000;
}


float __AUX_CONVERT_SFIX16_SP1(signed short  si)
{
    return 0.100000 * si;
}


float __AUX_CONVERT_UFIX16_SP01(unsigned short  si)
{
    return 0.010000 * si;
}


float __AUX_CONVERT_UFIX16_SP1(unsigned short  si)
{
    return 0.100000 * si;
}


float __AUX_CONVERT_UFIX32_SP01(unsigned int si)
{
    return 0.010000 * si;
}

//Runnable_FaultAct() as entry function
int main()
{
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.DataTypeConversion))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.DataTypeConversion, "g_BMS_Faultprocess_DW.DataTypeConversion");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator2))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator2, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator2");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator3))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator3, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator3");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator4))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator4, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator4");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator5))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator5, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator5");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator6))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator6, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator6");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator7))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator7, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator7");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator8))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator8, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator8");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator9))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator9, "g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator9");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.Fault_Confirm.Switch2))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.Fault_Confirm.Switch2, "g_BMS_Faultprocess_DW.Fault_Confirm.Switch2");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.Fault_Confirm.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.Fault_Confirm.UnitDelay_DSTATE, "g_BMS_Faultprocess_DW.Fault_Confirm.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.Fault_Confirm1.Switch2))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.Fault_Confirm1.Switch2, "g_BMS_Faultprocess_DW.Fault_Confirm1.Switch2");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.Fault_Confirm1.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.Fault_Confirm1.UnitDelay_DSTATE, "g_BMS_Faultprocess_DW.Fault_Confirm1.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[0]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[0], "g_BMS_Faultprocess_DW.LockDfp.Switch[0]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[10]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[10], "g_BMS_Faultprocess_DW.LockDfp.Switch[10]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[11]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[11], "g_BMS_Faultprocess_DW.LockDfp.Switch[11]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[12]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[12], "g_BMS_Faultprocess_DW.LockDfp.Switch[12]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[13]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[13], "g_BMS_Faultprocess_DW.LockDfp.Switch[13]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[14]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[14], "g_BMS_Faultprocess_DW.LockDfp.Switch[14]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[15]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[15], "g_BMS_Faultprocess_DW.LockDfp.Switch[15]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[16]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[16], "g_BMS_Faultprocess_DW.LockDfp.Switch[16]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[17]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[17], "g_BMS_Faultprocess_DW.LockDfp.Switch[17]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[18]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[18], "g_BMS_Faultprocess_DW.LockDfp.Switch[18]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[19]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[19], "g_BMS_Faultprocess_DW.LockDfp.Switch[19]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[1]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[1], "g_BMS_Faultprocess_DW.LockDfp.Switch[1]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[20]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[20], "g_BMS_Faultprocess_DW.LockDfp.Switch[20]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[21]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[21], "g_BMS_Faultprocess_DW.LockDfp.Switch[21]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[22]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[22], "g_BMS_Faultprocess_DW.LockDfp.Switch[22]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[23]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[23], "g_BMS_Faultprocess_DW.LockDfp.Switch[23]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[24]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[24], "g_BMS_Faultprocess_DW.LockDfp.Switch[24]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[25]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[25], "g_BMS_Faultprocess_DW.LockDfp.Switch[25]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[26]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[26], "g_BMS_Faultprocess_DW.LockDfp.Switch[26]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[27]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[27], "g_BMS_Faultprocess_DW.LockDfp.Switch[27]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[28]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[28], "g_BMS_Faultprocess_DW.LockDfp.Switch[28]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[29]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[29], "g_BMS_Faultprocess_DW.LockDfp.Switch[29]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[2]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[2], "g_BMS_Faultprocess_DW.LockDfp.Switch[2]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[30]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[30], "g_BMS_Faultprocess_DW.LockDfp.Switch[30]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[31]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[31], "g_BMS_Faultprocess_DW.LockDfp.Switch[31]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[32]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[32], "g_BMS_Faultprocess_DW.LockDfp.Switch[32]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[33]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[33], "g_BMS_Faultprocess_DW.LockDfp.Switch[33]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[34]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[34], "g_BMS_Faultprocess_DW.LockDfp.Switch[34]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[35]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[35], "g_BMS_Faultprocess_DW.LockDfp.Switch[35]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[36]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[36], "g_BMS_Faultprocess_DW.LockDfp.Switch[36]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[37]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[37], "g_BMS_Faultprocess_DW.LockDfp.Switch[37]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[38]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[38], "g_BMS_Faultprocess_DW.LockDfp.Switch[38]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[39]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[39], "g_BMS_Faultprocess_DW.LockDfp.Switch[39]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[3]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[3], "g_BMS_Faultprocess_DW.LockDfp.Switch[3]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[40]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[40], "g_BMS_Faultprocess_DW.LockDfp.Switch[40]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[41]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[41], "g_BMS_Faultprocess_DW.LockDfp.Switch[41]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[42]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[42], "g_BMS_Faultprocess_DW.LockDfp.Switch[42]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[43]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[43], "g_BMS_Faultprocess_DW.LockDfp.Switch[43]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[44]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[44], "g_BMS_Faultprocess_DW.LockDfp.Switch[44]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[45]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[45], "g_BMS_Faultprocess_DW.LockDfp.Switch[45]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[46]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[46], "g_BMS_Faultprocess_DW.LockDfp.Switch[46]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[47]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[47], "g_BMS_Faultprocess_DW.LockDfp.Switch[47]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[48]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[48], "g_BMS_Faultprocess_DW.LockDfp.Switch[48]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[49]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[49], "g_BMS_Faultprocess_DW.LockDfp.Switch[49]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[4]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[4], "g_BMS_Faultprocess_DW.LockDfp.Switch[4]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[50]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[50], "g_BMS_Faultprocess_DW.LockDfp.Switch[50]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[51]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[51], "g_BMS_Faultprocess_DW.LockDfp.Switch[51]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[52]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[52], "g_BMS_Faultprocess_DW.LockDfp.Switch[52]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[53]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[53], "g_BMS_Faultprocess_DW.LockDfp.Switch[53]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[54]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[54], "g_BMS_Faultprocess_DW.LockDfp.Switch[54]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[55]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[55], "g_BMS_Faultprocess_DW.LockDfp.Switch[55]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[56]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[56], "g_BMS_Faultprocess_DW.LockDfp.Switch[56]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[57]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[57], "g_BMS_Faultprocess_DW.LockDfp.Switch[57]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[58]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[58], "g_BMS_Faultprocess_DW.LockDfp.Switch[58]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[59]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[59], "g_BMS_Faultprocess_DW.LockDfp.Switch[59]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[5]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[5], "g_BMS_Faultprocess_DW.LockDfp.Switch[5]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[60]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[60], "g_BMS_Faultprocess_DW.LockDfp.Switch[60]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[61]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[61], "g_BMS_Faultprocess_DW.LockDfp.Switch[61]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[62]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[62], "g_BMS_Faultprocess_DW.LockDfp.Switch[62]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[63]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[63], "g_BMS_Faultprocess_DW.LockDfp.Switch[63]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[64]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[64], "g_BMS_Faultprocess_DW.LockDfp.Switch[64]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[65]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[65], "g_BMS_Faultprocess_DW.LockDfp.Switch[65]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[66]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[66], "g_BMS_Faultprocess_DW.LockDfp.Switch[66]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[67]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[67], "g_BMS_Faultprocess_DW.LockDfp.Switch[67]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[68]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[68], "g_BMS_Faultprocess_DW.LockDfp.Switch[68]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[69]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[69], "g_BMS_Faultprocess_DW.LockDfp.Switch[69]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[6]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[6], "g_BMS_Faultprocess_DW.LockDfp.Switch[6]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[70]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[70], "g_BMS_Faultprocess_DW.LockDfp.Switch[70]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[71]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[71], "g_BMS_Faultprocess_DW.LockDfp.Switch[71]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[72]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[72], "g_BMS_Faultprocess_DW.LockDfp.Switch[72]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[73]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[73], "g_BMS_Faultprocess_DW.LockDfp.Switch[73]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[74]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[74], "g_BMS_Faultprocess_DW.LockDfp.Switch[74]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[75]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[75], "g_BMS_Faultprocess_DW.LockDfp.Switch[75]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[76]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[76], "g_BMS_Faultprocess_DW.LockDfp.Switch[76]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[77]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[77], "g_BMS_Faultprocess_DW.LockDfp.Switch[77]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[78]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[78], "g_BMS_Faultprocess_DW.LockDfp.Switch[78]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[79]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[79], "g_BMS_Faultprocess_DW.LockDfp.Switch[79]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[7]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[7], "g_BMS_Faultprocess_DW.LockDfp.Switch[7]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[80]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[80], "g_BMS_Faultprocess_DW.LockDfp.Switch[80]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[81]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[81], "g_BMS_Faultprocess_DW.LockDfp.Switch[81]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[82]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[82], "g_BMS_Faultprocess_DW.LockDfp.Switch[82]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[83]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[83], "g_BMS_Faultprocess_DW.LockDfp.Switch[83]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[84]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[84], "g_BMS_Faultprocess_DW.LockDfp.Switch[84]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[85]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[85], "g_BMS_Faultprocess_DW.LockDfp.Switch[85]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[86]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[86], "g_BMS_Faultprocess_DW.LockDfp.Switch[86]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[87]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[87], "g_BMS_Faultprocess_DW.LockDfp.Switch[87]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[88]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[88], "g_BMS_Faultprocess_DW.LockDfp.Switch[88]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[89]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[89], "g_BMS_Faultprocess_DW.LockDfp.Switch[89]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[8]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[8], "g_BMS_Faultprocess_DW.LockDfp.Switch[8]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[90]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[90], "g_BMS_Faultprocess_DW.LockDfp.Switch[90]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[91]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[91], "g_BMS_Faultprocess_DW.LockDfp.Switch[91]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[92]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[92], "g_BMS_Faultprocess_DW.LockDfp.Switch[92]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[93]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[93], "g_BMS_Faultprocess_DW.LockDfp.Switch[93]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[94]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[94], "g_BMS_Faultprocess_DW.LockDfp.Switch[94]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[95]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[95], "g_BMS_Faultprocess_DW.LockDfp.Switch[95]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[96]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[96], "g_BMS_Faultprocess_DW.LockDfp.Switch[96]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[97]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[97], "g_BMS_Faultprocess_DW.LockDfp.Switch[97]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[98]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[98], "g_BMS_Faultprocess_DW.LockDfp.Switch[98]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[99]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[99], "g_BMS_Faultprocess_DW.LockDfp.Switch[99]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.Switch[9]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.Switch[9], "g_BMS_Faultprocess_DW.LockDfp.Switch[9]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[0]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[0], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[0]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[10]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[10], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[10]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[11]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[11], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[11]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[12]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[12], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[12]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[13]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[13], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[13]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[14]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[14], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[14]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[15]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[15], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[15]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[16]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[16], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[16]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[17]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[17], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[17]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[18]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[18], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[18]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[19]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[19], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[19]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[1]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[1], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[1]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[20]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[20], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[20]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[21]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[21], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[21]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[22]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[22], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[22]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[23]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[23], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[23]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[24]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[24], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[24]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[25]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[25], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[25]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[26]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[26], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[26]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[27]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[27], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[27]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[28]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[28], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[28]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[29]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[29], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[29]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[2]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[2], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[2]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[30]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[30], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[30]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[31]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[31], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[31]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[32]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[32], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[32]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[33]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[33], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[33]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[34]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[34], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[34]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[35]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[35], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[35]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[36]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[36], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[36]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[37]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[37], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[37]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[38]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[38], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[38]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[39]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[39], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[39]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[3]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[3], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[3]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[40]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[40], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[40]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[41]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[41], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[41]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[42]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[42], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[42]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[43]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[43], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[43]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[44]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[44], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[44]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[45]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[45], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[45]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[46]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[46], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[46]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[47]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[47], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[47]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[48]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[48], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[48]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[49]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[49], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[49]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[4]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[4], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[4]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[50]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[50], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[50]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[51]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[51], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[51]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[52]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[52], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[52]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[53]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[53], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[53]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[54]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[54], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[54]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[55]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[55], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[55]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[56]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[56], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[56]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[57]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[57], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[57]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[58]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[58], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[58]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[59]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[59], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[59]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[5]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[5], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[5]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[60]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[60], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[60]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[61]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[61], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[61]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[62]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[62], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[62]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[63]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[63], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[63]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[64]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[64], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[64]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[65]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[65], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[65]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[66]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[66], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[66]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[67]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[67], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[67]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[68]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[68], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[68]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[69]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[69], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[69]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[6]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[6], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[6]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[70]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[70], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[70]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[71]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[71], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[71]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[72]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[72], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[72]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[73]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[73], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[73]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[74]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[74], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[74]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[75]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[75], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[75]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[76]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[76], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[76]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[77]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[77], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[77]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[78]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[78], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[78]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[79]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[79], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[79]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[7]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[7], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[7]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[80]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[80], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[80]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[81]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[81], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[81]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[82]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[82], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[82]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[83]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[83], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[83]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[84]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[84], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[84]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[85]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[85], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[85]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[86]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[86], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[86]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[87]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[87], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[87]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[88]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[88], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[88]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[89]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[89], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[89]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[8]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[8], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[8]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[90]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[90], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[90]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[91]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[91], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[91]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[92]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[92], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[92]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[93]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[93], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[93]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[94]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[94], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[94]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[95]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[95], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[95]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[96]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[96], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[96]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[97]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[97], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[97]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[98]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[98], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[98]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[99]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[99], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[99]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[9]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[9], "g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[9]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.UnitDelay_DSTATE, "g_BMS_Faultprocess_DW.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d, "g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h, "g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i, "g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j, "g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[0]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[0], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[0]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[10]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[10], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[10]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[11]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[11], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[11]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[12]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[12], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[12]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[13]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[13], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[13]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[14]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[14], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[14]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[15]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[15], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[15]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[16]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[16], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[16]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[17]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[17], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[17]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[18]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[18], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[18]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[19]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[19], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[19]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[1]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[1], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[1]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[20]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[20], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[20]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[21]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[21], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[21]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[22]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[22], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[22]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[23]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[23], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[23]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[24]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[24], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[24]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[25]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[25], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[25]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[26]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[26], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[26]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[27]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[27], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[27]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[28]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[28], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[28]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[29]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[29], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[29]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[2]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[2], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[2]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[30]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[30], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[30]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[31]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[31], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[31]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[32]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[32], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[32]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[33]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[33], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[33]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[34]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[34], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[34]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[35]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[35], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[35]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[36]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[36], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[36]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[37]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[37], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[37]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[38]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[38], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[38]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[39]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[39], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[39]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[3]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[3], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[3]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[40]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[40], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[40]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[41]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[41], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[41]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[42]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[42], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[42]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[43]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[43], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[43]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[44]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[44], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[44]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[45]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[45], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[45]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[46]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[46], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[46]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[47]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[47], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[47]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[48]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[48], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[48]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[49]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[49], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[49]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[4]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[4], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[4]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[50]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[50], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[50]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[51]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[51], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[51]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[52]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[52], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[52]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[53]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[53], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[53]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[54]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[54], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[54]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[55]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[55], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[55]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[56]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[56], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[56]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[57]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[57], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[57]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[58]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[58], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[58]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[59]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[59], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[59]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[5]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[5], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[5]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[60]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[60], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[60]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[61]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[61], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[61]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[62]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[62], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[62]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[63]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[63], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[63]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[64]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[64], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[64]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[65]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[65], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[65]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[66]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[66], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[66]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[67]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[67], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[67]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[68]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[68], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[68]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[69]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[69], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[69]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[6]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[6], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[6]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[70]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[70], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[70]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[71]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[71], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[71]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[72]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[72], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[72]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[73]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[73], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[73]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[74]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[74], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[74]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[75]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[75], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[75]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[76]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[76], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[76]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[77]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[77], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[77]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[78]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[78], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[78]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[79]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[79], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[79]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[7]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[7], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[7]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[80]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[80], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[80]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[81]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[81], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[81]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[82]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[82], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[82]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[83]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[83], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[83]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[84]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[84], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[84]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[85]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[85], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[85]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[86]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[86], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[86]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[87]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[87], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[87]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[88]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[88], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[88]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[89]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[89], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[89]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[8]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[8], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[8]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[90]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[90], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[90]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[91]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[91], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[91]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[92]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[92], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[92]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[93]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[93], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[93]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[94]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[94], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[94]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[95]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[95], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[95]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[96]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[96], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[96]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[97]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[97], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[97]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[98]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[98], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[98]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[99]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[99], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[99]");
klee_make_symbolic_range(&g_BMS_Faultprocess_DW, (unsigned long) ( &(g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[9]))-(unsigned long)(&(g_BMS_Faultprocess_DW)),sizeof g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[9], "g_BMS_Faultprocess_DW.boolconveru8.DataTypeConversion[9]");
klee_assume(((((((g_BMS_Faultprocess_DW.DataTypeConversion >= 0) & (g_BMS_Faultprocess_DW.DataTypeConversion <= 255))))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator1 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator11 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator2 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator2 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator3 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator3 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator4 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator4 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator5 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator5 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator6 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator6 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator7 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator7 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator8 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator8 == 1))) & (((g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator9 == 0) | (g_BMS_Faultprocess_DW.FaultCodeCal.LogicalOperator9 == 1))) & (((g_BMS_Faultprocess_DW.Fault_Confirm.Switch2 == 0) | (g_BMS_Faultprocess_DW.Fault_Confirm.Switch2 == 1))) & (((g_BMS_Faultprocess_DW.Fault_Confirm1.Switch2 == 0) | (g_BMS_Faultprocess_DW.Fault_Confirm1.Switch2 == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[0] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[0] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[10] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[10] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[11] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[11] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[12] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[12] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[13] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[13] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[14] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[14] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[15] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[15] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[16] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[16] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[17] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[17] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[18] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[18] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[19] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[19] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[1] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[1] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[20] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[20] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[21] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[21] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[22] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[22] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[23] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[23] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[24] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[24] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[25] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[25] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[26] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[26] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[27] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[27] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[28] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[28] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[29] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[29] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[2] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[2] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[30] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[30] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[31] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[31] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[32] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[32] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[33] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[33] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[34] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[34] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[35] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[35] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[36] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[36] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[37] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[37] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[38] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[38] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[39] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[39] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[3] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[3] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[40] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[40] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[41] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[41] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[42] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[42] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[43] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[43] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[44] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[44] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[45] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[45] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[46] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[46] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[47] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[47] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[48] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[48] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[49] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[49] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[4] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[4] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[50] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[50] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[51] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[51] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[52] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[52] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[53] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[53] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[54] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[54] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[55] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[55] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[56] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[56] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[57] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[57] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[58] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[58] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[59] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[59] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[5] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[5] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[60] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[60] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[61] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[61] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[62] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[62] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[63] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[63] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[64] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[64] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[65] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[65] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[66] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[66] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[67] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[67] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[68] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[68] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[69] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[69] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[6] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[6] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[70] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[70] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[71] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[71] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[72] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[72] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[73] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[73] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[74] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[74] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[75] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[75] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[76] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[76] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[77] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[77] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[78] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[78] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[79] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[79] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[7] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[7] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[80] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[80] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[81] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[81] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[82] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[82] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[83] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[83] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[84] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[84] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[85] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[85] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[86] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[86] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[87] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[87] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[88] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[88] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[89] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[89] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[8] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[8] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[90] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[90] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[91] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[91] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[92] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[92] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[93] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[93] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[94] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[94] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[95] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[95] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[96] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[96] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[97] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[97] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[98] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[98] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[99] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[99] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.Switch[9] == 0) | (g_BMS_Faultprocess_DW.LockDfp.Switch[9] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[0] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[0] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[10] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[10] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[11] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[11] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[12] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[12] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[13] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[13] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[14] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[14] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[15] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[15] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[16] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[16] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[17] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[17] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[18] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[18] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[19] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[19] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[1] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[1] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[20] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[20] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[21] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[21] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[22] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[22] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[23] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[23] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[24] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[24] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[25] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[25] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[26] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[26] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[27] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[27] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[28] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[28] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[29] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[29] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[2] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[2] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[30] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[30] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[31] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[31] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[32] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[32] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[33] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[33] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[34] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[34] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[35] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[35] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[36] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[36] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[37] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[37] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[38] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[38] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[39] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[39] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[3] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[3] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[40] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[40] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[41] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[41] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[42] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[42] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[43] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[43] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[44] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[44] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[45] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[45] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[46] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[46] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[47] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[47] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[48] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[48] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[49] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[49] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[4] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[4] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[50] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[50] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[51] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[51] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[52] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[52] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[53] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[53] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[54] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[54] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[55] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[55] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[56] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[56] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[57] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[57] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[58] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[58] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[59] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[59] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[5] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[5] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[60] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[60] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[61] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[61] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[62] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[62] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[63] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[63] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[64] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[64] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[65] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[65] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[66] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[66] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[67] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[67] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[68] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[68] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[69] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[69] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[6] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[6] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[70] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[70] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[71] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[71] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[72] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[72] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[73] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[73] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[74] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[74] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[75] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[75] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[76] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[76] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[77] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[77] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[78] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[78] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[79] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[79] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[7] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[7] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[80] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[80] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[81] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[81] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[82] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[82] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[83] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[83] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[84] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[84] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[85] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[85] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[86] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[86] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[87] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[87] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[88] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[88] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[89] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[89] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[8] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[8] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[90] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[90] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[91] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[91] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[92] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[92] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[93] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[93] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[94] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[94] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[95] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[95] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[96] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[96] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[97] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[97] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[98] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[98] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[99] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[99] == 1))) & (((g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[9] == 0) | (g_BMS_Faultprocess_DW.LockDfp.UnitDelay_DSTATE[9] == 1))) & (((((g_BMS_Faultprocess_DW.UnitDelay_DSTATE >= 0) & (g_BMS_Faultprocess_DW.UnitDelay_DSTATE <= 255))))) & (((g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d == 0) | (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_d == 1))) & (((g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h == 0) | (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_h == 1))) & (((g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i == 0) | (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_i == 1))) & (((g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j == 0) | (g_BMS_Faultprocess_DW.UnitDelay_DSTATE_j == 1)))));
    unsigned short __sys_ConfirmFor_2_counter;
klee_make_symbolic(&__sys_ConfirmFor_2_counter, sizeof __sys_ConfirmFor_2_counter, "__sys_ConfirmFor_2_counter");
klee_assume((__sys_ConfirmFor_2_counter >= 0 & __sys_ConfirmFor_2_counter < 32767));
    unsigned char __sys_ConfirmFor_2;
    unsigned char __sys_PreOut_4;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr0;boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr0;
uint8 Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod0;
boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld0;
uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd0;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr1;
uint8 Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod1;
boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld1;
uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd1;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr2;
boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr2;
uint8 Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod2;
boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld2;
uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd2;

klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr0, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr0, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr0");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr0, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod0, sizeof Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod0, "Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod0");
 memcpy(&Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod, &Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod0, sizeof (Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod));
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld0, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld0, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld0");
 memcpy(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld, &Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld0, sizeof (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld));
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd0, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd0, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd0");
 memcpy(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd, &Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd0, sizeof (Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd));
klee_assume(((((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 1))) & (((((Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod >= 0) & (Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod <= 7))))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld == 1))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd <= 254)))))));
    Runnable_FaultAct();
    if ((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 1 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 0)){
        __sys_ConfirmFor_2_counter += 20;
    }else{
        __sys_ConfirmFor_2_counter = 0;
    }
    __sys_ConfirmFor_2 = (__sys_ConfirmFor_2_counter >= 40);
    __sys_PreOut_4 = (Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stBcuFltRnk == 0 && __igv__FaultPro_FaultAct_stFaultCode.PowerOff_Req == 0 && __igv__FaultPro_FaultAct_stFaultCode.PowerOff_Immediately == 0 && __igv__FaultPro_FaultAct_stFaultCode.DisChgSOP_Prohibit == 0 && __igv__FaultPro_FaultAct_stFaultCode.Balance_Prohibit == 0 && __igv__FaultPro_FaultAct_stFaultCode.ChgSOP_Prohibit == 0 && __igv__FaultPro_FaultAct_stFaultCode.DisChgSOP_Limit30kw == 0 && __igv__FaultPro_FaultAct_stFaultCode.DisChgSOP_LimitCTkw == 0 && __igv__FaultPro_FaultAct_stFaultCode.ChgSOP_LimitCTkw == 0 && __igv__FaultPro_FaultAct_stFaultCode.DCChg_Prohibit == 0 && __igv__FaultPro_FaultAct_stFaultCode.ACChg_Prohibit == 0);
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr1, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr1, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr1");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr1, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod1, sizeof Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod1, "Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod1");
 memcpy(&Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod, &Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod1, sizeof (Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod));
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld1, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld1, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld1");
 memcpy(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld, &Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld1, sizeof (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld));
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd1, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd1, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd1");
 memcpy(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd, &Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd1, sizeof (Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd));
klee_assume(((((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 1))) & (((((Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod >= 0) & (Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod <= 7))))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld == 1))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd <= 254)))))));
    Runnable_FaultAct();
    if ((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 1 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 0)){
        __sys_ConfirmFor_2_counter += 20;
    }else{
        __sys_ConfirmFor_2_counter = 0;
    }
    __sys_ConfirmFor_2 = (__sys_ConfirmFor_2_counter >= 40);
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr));
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr2, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr2, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr2");
 memcpy(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr, &Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr2, sizeof (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr));
klee_make_symbolic(&Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod2, sizeof Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod2, "Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod2");
 memcpy(&Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod, &Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod2, sizeof (Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod));
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld2, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld2, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld2");
 memcpy(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld, &Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld2, sizeof (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld));
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd2, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd2, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd2");
 memcpy(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd, &Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd2, sizeof (Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd));
klee_assume(((((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 1))) & (((((Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod >= 0) & (Rte_SWC_APP_HvLvPwrMgt_PwrMgt_HvPwr_stBcuOperMod <= 7))))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stVehSpdVld == 1))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_velVehSpd <= 254)))))));
    Runnable_FaultAct();
    if ((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_AFETempInvalid == 1 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_BalanceFault == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_Crash == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_CrashCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastChgRlyStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_FastchgLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILCircuitVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HVILErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtShort == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_HvExtWoLoad == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortAlarm == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InShortErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_InWaterTempHigh == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_NegStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PosPrechgStk == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechargeErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsCircVCC == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgHsLsOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgLsCircGND == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_PrechgOpen == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOffCur == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_RelayOpenSmallCur == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_ResTempInvalid == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_SOCLowErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempAFEErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_TempResErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolADInvalid == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverChSerious == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_VolOverDchSerious == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_ACTimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CounterErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1CrcErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC1TimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OBC2TimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_OFCTimeoutErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCounterErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUCrcErr == 0 && Rte_SWC_APP_FaultDebounce_FaultDeb_N000U0000_VCUTimeoutErr == 0)){
        __sys_ConfirmFor_2_counter += 20;
    }else{
        __sys_ConfirmFor_2_counter = 0;
    }
    __sys_ConfirmFor_2 = (__sys_ConfirmFor_2_counter >= 40);
klee_assert((!(__sys_ConfirmFor_2 & __sys_PreOut_4) | ((__igv__FaultPro_FaultAct_stFaultCode.PowerOff_Req == 0) & (__igv__FaultPro_FaultAct_stFaultCode.PowerOff_Immediately == 0) & (__igv__FaultPro_FaultAct_stFaultCode.DisChgSOP_Prohibit == 0) & (__igv__FaultPro_FaultAct_stFaultCode.ChgSOP_Prohibit == 1) & (__igv__FaultPro_FaultAct_stFaultCode.DisChgSOP_Limit30kw == 1) & (__igv__FaultPro_FaultAct_stFaultCode.DisChgSOP_LimitCTkw == 0) & (__igv__FaultPro_FaultAct_stFaultCode.ChgSOP_LimitCTkw == 0) & (__igv__FaultPro_FaultAct_stFaultCode.DCChg_Prohibit == 1) & (__igv__FaultPro_FaultAct_stFaultCode.ACChg_Prohibit == 1) & (__igv__FaultPro_FaultAct_stFaultCode.Balance_Prohibit == 0) & (Rte_SWC_APP_FaultProcess_FaultPro_FaultAct_stBcuFltRnk == 4))));
}

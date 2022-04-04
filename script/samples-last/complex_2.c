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
typedef float float32;

typedef unsigned long uint32;

typedef unsigned char boolean;

typedef unsigned short uint16;

typedef unsigned char uint8;

typedef struct 
{
    float32 Divide;
} DW_floatingdivide_Acchg__T;

typedef signed long sint32;

typedef struct 
{
    uint32 UnitDelay_DSTATE;
    boolean Switch2;
} DW_fault_confirm_Acchg_e_T;

typedef struct 
{
    boolean Switch12;
    boolean UnitDelay_DSTATE;
} DW_data_lock_Acchg__T;

typedef struct 
{
    uint16 UnitDelay_DSTATE;
    boolean Switch2;
} DW_fault_confirm_Acchg__T;

typedef struct 
{
    uint16 UnitDelay_DSTATE;
    boolean Switch2;
} DW_fault_confirm_Acchg_a_T;

typedef uint8 ZCSigState;

typedef struct tag_DW_Acchg__T
{
    DW_fault_confirm_Acchg_e_T Fault_Confirm2;
    DW_fault_confirm_Acchg__T Fault_Confirm1;
    DW_fault_confirm_Acchg_e_T Fault_Confirm_f;
    DW_data_lock_Acchg__T data_lock3;
    DW_data_lock_Acchg__T data_lock_g;
    DW_fault_confirm_Acchg_a_T Fault_Confirm2_j;
    DW_fault_confirm_Acchg__T Fault_Confirm1_d;
    DW_fault_confirm_Acchg_a_T Fault_Confirm1_o;
    DW_fault_confirm_Acchg_a_T Fault_Confirm3;
    DW_fault_confirm_Acchg__T Fault_Confirm2_m;
    DW_fault_confirm_Acchg__T Fault_Confirm1_e;
    DW_floatingdivide_Acchg__T FloatingDivide;
    DW_floatingdivide_Acchg__T FloatingDivide1;
    DW_fault_confirm_Acchg__T Fault_Confirm;
    sint32 TmpSignalConversionAtSigPro_Pub;
    uint16 TmpSignalConversionAtSigPro_P_i;
    uint16 TmpSignalConversionAtSigPro_Cel;
    uint16 TmpSignalConversionAtSigPro_P_d;
    uint16 TmpSignalConversionAtSigPro_C_p;
    uint16 TmpSignalConversionAtPacSOC_Cur;
    uint16 UnitDelay_DSTATE;
    uint16 timer10min;
    uint16 timer10min_l;
    uint16 timer2min;
    uint8 Delay1_DSTATE_p[2];
    uint8 Delay13_DSTATE[3];
    uint8 TmpSignalConversionAtSigPro__d4;
    uint8 TmpSignalConversionAtSigPro_P_g;
    uint8 TmpSignalConversionAtFunSafety_;
    uint8 TmpSignalConversionAtSigPro__gx;
    uint8 stACChrg;
    uint8 ChrgEndResn;
    uint8 UnitDelay_DSTATE_a;
    uint8 Delay_DSTATE;
    uint8 Delay1_DSTATE;
    uint8 Delay12_DSTATE;
    uint8 icLoad;
    uint8 is_active_c5_swc_app_acchg;
    uint8 is_c5_swc_app_acchg;
    uint8 is_uncharged2;
    uint8 timer50ms;
    uint8 is_active_c4_swc_app_acchg;
    uint8 is_c4_swc_app_acchg;
    uint8 is_active_c3_swc_app_acchg;
    uint8 is_c3_swc_app_acchg;
    uint8 is_uncharged2_p;
    uint8 is_active_c1_swc_app_acchg;
    uint8 is_c1_swc_app_acchg;
    uint8 is_Prepare;
    uint8 is_active_c6_swc_app_acchg;
    uint8 is_c6_swc_app_acchg;
    uint8 is_AcChrgMod;
    uint8 timer30ms;
    boolean TmpSignalConversionAtSigPro_P_a;
    boolean TmpSignalConversionAtSigPro_P_b;
    boolean TmpSignalConversionAtSigPro__bh;
    boolean Logical_Operator1;
    boolean LogicalOperator10;
    boolean LogicalOperator8;
    boolean LogicalOperator1;
    boolean Compare;
    boolean Compare_f;
    boolean LogicalOperator25;
    boolean LogicalOperator5;
    boolean LogicalOperator6;
    boolean RelationalOperator5;
    boolean WaitVcuChrgAllowTimeOut;
    boolean LogicalOperator4;
    boolean ObcInpAcUAbnormal;
    boolean WaitObcStandbyTimeOut;
    boolean stCCRawNormal;
    boolean OutportBufferForAcChg_SlwChg_st;
    boolean OutportBufferForVehSt_SlwChg_st;
    boolean OutportBufferForVehSt_SlwChg__o;
    boolean UnitDelay_DSTATE_h;
    boolean UnitDelay_DSTATE_i;
    boolean Delay_DSTATE_o;
    boolean UnitDelay_DSTATE_io;
    boolean UnitDelay4_DSTATE;
    boolean Delay_DSTATE_n;
    boolean UnitDelay5_DSTATE;
    boolean UnitDelay_DSTATE_p;
    boolean Delay_DSTATE_e;
    boolean flagObcVolOK;
    boolean flagS2On;
    boolean EnabledSubsystem4_MODE;
    boolean EnabledSubsystem1_MODE;
} DW_Acchg__T;

typedef struct tag_PrevZCX_Acchg__T
{
    ZCSigState Delay_Reset_ZCE;
    ZCSigState Delay_Reset_ZCE_n;
} PrevZCX_Acchg__T;

typedef struct P_Acchg__T_ P_Acchg__T;

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

typedef unsigned short uint16_T;

typedef unsigned int uint32_T;

typedef double float64;

typedef signed short sint16;

/* ADDED VARS */
/* GLOBAL VARS */
struct P_Acchg__T_
{
    sint32 AcChg_SlwChg_iCP_T_D[7];
    sint32 AcChg_SlwChg_iRCC10A_C;
    sint32 AcChg_SlwChg_iRCC16A_C;
    sint32 AcChg_SlwChg_iRCC32A_C;
    sint32 AcChg_SlwChg_iRCC63A_C;
    uint16 AcChg_SlwChg_facOBCefficiency_C;
    uint16 AcChg_SlwChg_dtyCP_T_X[7];
    uint16 VehSt_FstChg_vBMSMaxChaVolAllow_C;
    uint16 SigPro_CellVol_vCellInit_C;
    uint16 VehSt_SlwChg_vReachMaxCell;
    uint8 AcChg_tStepSize;
    uint8 VehSt_FstChg_capBattCap_C;
};

extern void mul_wide_u32(uint32 in0, uint32 in1, uint32* ptrOutBitsHi, uint32* ptrOutBitsLo);

extern uint32 mul_u32_loSR(uint32 a, uint32 b, uint32 aShift);

extern uint32 div_nzp_repeat_u32(uint32 numerator, uint32 denominator, uint32 nRepeatSub);

DW_Acchg__T g_BMS_Acchg_DW;

static void Acchg_inner_default_uncharged2(void);

extern void Acchg_floatingdivide(float32 rtu_dividend, float32 rtu_divider, DW_floatingdivide_Acchg__T* localDW, float32 rtp_minValue);

extern sint32 look1_iu16lu32n31ts32D_Jd1VG4uJ(uint16 u0, const uint16 bp0[], const sint32 table[], uint32 maxIndex);

extern void SWC_AcChg_WaitVcuChrgAllowTimeOut(void);

PrevZCX_Acchg__T g_BMS_Acchg_PrevZCX;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq;

extern void SWC_AcChg_ChrgEndVcuReqPwrdown(void);

extern void SWC_AcChg_ObcInpAcUAbnormal(void);

uint16 Rte_SWC_APP_AcChg_AcChg_SlwChg_iSetSlowCharge;

uint32 Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct;

uint16 Rte_SWC_APP_AcChg_AcChg_SlwChg_iChrgnSysIAllwdMax;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq;

P_Acchg__T g_BMS_Acchg_P = {{0, 6000, 6000, 51000, 52500, 65000, 0}, 10000, 16000, 32000, 63000, 95U, {79U, 80U, 100U, 850U, 851U, 900U, 901U}, 7282U, 8190U, 4335U, 10U, 154U};

extern void SWC_AcChg_ChrgCurrentCal(void);

extern void Acchg_Fault_Confirm(boolean rtu_Fault_soft, uint32 rtu_Fault_times, DW_fault_confirm_Acchg_e_T* localDW);

extern void Acchg_data_lock(uint8 rtu_0, uint8 rtu_1, DW_data_lock_Acchg__T* localDW);

extern void Acchg_fault_confirm(boolean rtu_Fault_soft, uint16 rtu_Fault_times, DW_fault_confirm_Acchg__T* localDW);

extern void Acchg_data_lock_Reset(DW_data_lock_Acchg__T* localDW);

extern void Acchg_fault_confirm_Reset(DW_fault_confirm_Acchg__T* localDW);

extern void Acchg_Fault_Confirm3(boolean rtu_Fault_soft, uint8 rtu_Fault_times, DW_fault_confirm_Acchg_a_T* localDW);

extern void Acchg_Fault_Confirm3_Reset(DW_fault_confirm_Acchg_a_T* localDW);

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx;

Std_ReturnType Rte_Read_swc_app_acchg_FunSafety_FunSafety_stFaultCode(FaultCode* data);

boolean Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft;

boolean Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft;

extern void SWC_AcChg_ChrgEndJudge(void);

uint8 Rte_SWC_APP_AcChg_AcChg_SlwChg_stChrgErrInfo;

uint16 Rte_SWC_APP_AcChg_AcChg_SlwChg_vSetSlowCharge;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl;

extern void BMS_AcChg_ChrgReqCal(void);

uint8 Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts;

extern void BMS_AcChg_ChrgState(void);

extern void BMS_AcChg_StTransitCondtion(void);

uint8 Rte_SWC_APP_AcChg_AcChg_SlwChg_stObcOperModReq;

uint8 Rte_SWC_APP_AcChg_AcChg_SlwChg_stChrgEndResn;

boolean Rte_SWC_APP_AcChg_AcChg_SlwChg_stSlowChargeS2;

boolean Rte_SWC_APP_AcChg_AcChg_SlwChg_stEnOnVehicleCharge;

boolean Rte_SWC_APP_AcChg_AcChg_SlwChg_stBMSCharging;

uint16 Rte_SWC_APP_AcChg_AcChg_SlwChg_tiBMSChaTimeRemain;

uint8 Rte_SWC_APP_AcChg_AcChg_SlwChg_stSlowCharge;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts;

uint16 Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC;

uint16 Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell;

sint32 Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery;

uint8 Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg;

uint16 Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod;

boolean Rte_SWC_APP_AcChg_AcChg_SlwChg_dfpOBCfault;

boolean Rte_SWC_APP_AcChg_AcChg_SlwChg_dfpOBCCurOver;

void Runnable_AcChg(void);


uint8 Rte_SWC_APP_ThermalMgt_ThermMgt_ThermCtr_stChgHeat;

sint16 Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMinCellValid;

sint16 Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMaxCellValid;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_vOutputDCDC;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeupSQ;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeup;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC2;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgSuspReq;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_stACChgCtl;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_ratSOCTrg;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_powTotalAC;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_powPTC;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_powObcMaxChrgOutpPwrAvl;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_iOutputCurDCDC;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChrgMaxAC;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgDCOutputOBC;

uint16 Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgACInput;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagPTCRx;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC2Rx;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagHMIRx;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagDCDCRx;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC2Rx;

uint8 Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC1Rx;

boolean Rte_SWC_APP_SignalProcess_SigPro_PubSig_dfpBMSComm;

boolean Rte_SWC_APP_SOE_PacSOE_MapSOE_stChgFinishTrg;

uint8 Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stPowerComplete;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr;

boolean Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm;


FaultCode __igv__FunSafety_FunSafety_stFaultCode;

/* ADDED FUNCS */
/* FUNCS */

void mul_wide_u32(uint32 in0, uint32 in1, uint32* ptrOutBitsHi, uint32* ptrOutBitsLo)
{
    uint32 outBitsLo;
    uint32 in0Lo;
    uint32 in0Hi;
    uint32 in1Lo;
    uint32 in1Hi;
    uint32 productHiLo;
    uint32 productLoHi;
    in0Hi = (in0 >> 16U);
    in0Lo = in0 & 65535U;
    in1Hi = (in1 >> 16U);
    in1Lo = in1 & 65535U;
    productHiLo = in0Hi * in1Lo;
    productLoHi = in0Lo * in1Hi;
    in0Lo *= in1Lo;
    in1Lo = 0U;
    outBitsLo = (productLoHi << 16U) + in0Lo;
    if (outBitsLo < in0Lo){
        in1Lo = 1U;
    }
    in0Lo = outBitsLo;
    outBitsLo += (productHiLo << 16U);
    if (outBitsLo < in0Lo){
        in1Lo++;
    }
    *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + (in0Hi * in1Hi)) + in1Lo;
    *ptrOutBitsLo = outBitsLo;
}


uint32 mul_u32_loSR(uint32 a, uint32 b, uint32 aShift)
{
    uint32 result;
    uint32 u32_chi;
    mul_wide_u32(a, b, &u32_chi, &result);
    return (u32_chi << (32U - aShift)) | (result >> aShift);
}


uint32 div_nzp_repeat_u32(uint32 numerator, uint32 denominator, uint32 nRepeatSub)
{
    uint32 quotient;
    uint32 iRepeatSub;
    boolean numeratorExtraBit;
    quotient = numerator / denominator;
    numerator %= denominator;
    for (iRepeatSub = 0U;iRepeatSub < nRepeatSub;iRepeatSub++){
        numeratorExtraBit = (numerator >= 2147483648U);
        numerator <<= 1U;
        quotient <<= 1U;
        if (numeratorExtraBit || (numerator >= denominator)){
            quotient++;
            numerator -= denominator;
        }
    }
    return quotient;
}


static void Acchg_inner_default_uncharged2(void)
{
    sint32 tmp;
    uint16 timer10min_l;
    boolean flagObcVolOK;
    boolean flagS2On;
    flagS2On = g_BMS_Acchg_DW.flagS2On;
    flagObcVolOK = g_BMS_Acchg_DW.flagObcVolOK;
    timer10min_l = g_BMS_Acchg_DW.timer10min_l;
    if (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh){
        flagS2On = 1U;
    }else{
    }
    if ((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i) >= 90) && flagS2On){
        flagObcVolOK = 1U;
    }else{
    }
    if (flagS2On && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i) < 90)){
        if (((sint32)timer10min_l) >= 60000){
            g_BMS_Acchg_DW.ObcInpAcUAbnormal = 1U;
            timer10min_l = 0U;
        }else{
            tmp = ((sint32)timer10min_l) + 1;
            if (tmp > 65535){
                tmp = 65535;
            }
            timer10min_l = (uint16)tmp;
        }
    }else{
    }
    if (flagObcVolOK){
        g_BMS_Acchg_DW.ObcInpAcUAbnormal = 0U;
    }else{
    }
    g_BMS_Acchg_DW.timer10min_l = timer10min_l;
    g_BMS_Acchg_DW.flagObcVolOK = flagObcVolOK;
    g_BMS_Acchg_DW.flagS2On = flagS2On;
}


void Acchg_floatingdivide(float32 rtu_dividend, float32 rtu_divider, DW_floatingdivide_Acchg__T* localDW, float32 rtp_minValue)
{
    float32 rtb_Switch2_m;
    if ((0.0F <= rtu_divider) && (rtu_divider <= rtp_minValue)){
        rtb_Switch2_m = rtp_minValue;
    }else
        if ((0.0F < (-rtu_divider)) && ((-rtu_divider) <= rtp_minValue)){
            rtb_Switch2_m = -rtp_minValue;
        }else{
            rtb_Switch2_m = rtu_divider;
        }

    localDW->Divide = rtu_dividend / rtb_Switch2_m;
}


sint32 look1_iu16lu32n31ts32D_Jd1VG4uJ(uint16 u0, const uint16 bp0[], const sint32 table[], uint32 maxIndex)
{
    sint32 y;
    uint32 frac;
    sint32 yR_0d0;
    uint32 iRght;
    uint32 iLeft;
    if (u0 <= bp0[0U]){
        iLeft = 0U;
        frac = 0U;
    }else
        if (u0 < bp0[maxIndex]){
            frac = (maxIndex >> 1U);
            iLeft = 0U;
            iRght = maxIndex;
            while ((iRght - iLeft) > 1U){
                if (u0 < bp0[frac]){
                    iRght = frac;
                }else{
                    iLeft = frac;
                }
                frac = ((iRght + iLeft) >> 1U);
            }
            frac = div_nzp_repeat_u32(((uint32)((uint16)(((uint32)u0) - ((uint32)bp0[iLeft])))) << 16, (uint32)((uint16)(((uint32)bp0[iLeft + 1U]) - ((uint32)bp0[iLeft]))), 15U);
        }else{
            iLeft = maxIndex - 1U;
            frac = 2147483648U;
        }

    yR_0d0 = table[iLeft + 1U];
    if (yR_0d0 >= table[iLeft]){
        y = ((sint32)mul_u32_loSR(frac, ((uint32)yR_0d0) - ((uint32)table[iLeft]), 31U)) + table[iLeft];
    }else{
        y = table[iLeft] - ((sint32)mul_u32_loSR(frac, ((uint32)table[iLeft]) - ((uint32)yR_0d0), 31U));
    }
    return y;
}


void SWC_AcChg_WaitVcuChrgAllowTimeOut(void)
{
    sint32 tmp;
    uint8 timer50ms;
    uint16 timer10min;
    uint8 is_uncharged2;
    uint8 is_c5_swc_app_acchg;
    uint8 is_active_c5_swc_app_acchg;
    uint8 UnitDelay_DSTATE_a;
    UnitDelay_DSTATE_a = g_BMS_Acchg_DW.UnitDelay_DSTATE_a;
    is_active_c5_swc_app_acchg = g_BMS_Acchg_DW.is_active_c5_swc_app_acchg;
    is_c5_swc_app_acchg = g_BMS_Acchg_DW.is_c5_swc_app_acchg;
    is_uncharged2 = g_BMS_Acchg_DW.is_uncharged2;
    timer10min = g_BMS_Acchg_DW.timer10min;
    timer50ms = g_BMS_Acchg_DW.timer50ms;
    if (((uint32)is_active_c5_swc_app_acchg) == 0U){
        is_active_c5_swc_app_acchg = 1U;
        is_c5_swc_app_acchg = ((uint8)1U);
        g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut = 0U;
        timer10min = 0U;
        timer50ms = 0U;
    }else
        if (((uint32)is_c5_swc_app_acchg) == ((uint8)1U)){
            if ((((sint32)UnitDelay_DSTATE_a) == 1) || (((sint32)UnitDelay_DSTATE_a) == 7)){
                is_c5_swc_app_acchg = ((uint8)2U);
                g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut = 0U;
                timer50ms = 0U;
                is_uncharged2 = ((uint8)3U);
                timer10min = 1U;
            }
        }else{
            if ((((sint32)UnitDelay_DSTATE_a) != 1) && (((sint32)UnitDelay_DSTATE_a) != 7)){
                is_uncharged2 = ((uint8)0U);
                is_c5_swc_app_acchg = ((uint8)1U);
                g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut = 0U;
                timer10min = 0U;
                timer50ms = 0U;
            }else{
                switch (is_uncharged2){
                    case ((uint8)1U):
                        if (!g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b){
                            if (((sint32)timer50ms) >= 5){
                                g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut = 1U;
                        }else{
                            tmp = ((sint32)timer50ms) + 1;
                            if (tmp > 255){
                                tmp = 255;
                            }
                            timer50ms = (uint8)tmp;
                        }
                    }else{
                    }
                    break;
                case ((uint8)2U):
                    break;
                default:
                    if (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b){
                        is_uncharged2 = ((uint8)1U);
                        if (!g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b){
                            if (((sint32)timer50ms) >= 5){
                                g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut = 1U;
                        }else{
                            tmp = ((sint32)timer50ms) + 1;
                            if (tmp > 255){
                                tmp = 255;
                            }
                            timer50ms = (uint8)tmp;
                        }
                    }else{
                    }
                }else
                    if (((sint32)timer10min) > 60000){
                        is_uncharged2 = ((uint8)2U);
                        g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut = 1U;
                    }else{
                        tmp = ((sint32)timer10min) + 1;
                        if (tmp > 65535){
                            tmp = 65535;
                        }
                        timer10min = (uint16)tmp;
                    }

                break;
            }
        }
    }

g_BMS_Acchg_DW.timer50ms = timer50ms;
g_BMS_Acchg_DW.timer10min = timer10min;
g_BMS_Acchg_DW.is_uncharged2 = is_uncharged2;
g_BMS_Acchg_DW.is_c5_swc_app_acchg = is_c5_swc_app_acchg;
g_BMS_Acchg_DW.is_active_c5_swc_app_acchg = is_active_c5_swc_app_acchg;
}


void SWC_AcChg_ChrgEndVcuReqPwrdown(void)
{
uint8 tmpRead;
boolean rtb_LogicalOperator7_n;
boolean rtb_LogicalOperator20;
uint8 UnitDelay_DSTATE_a;
boolean Delay_DSTATE_n;
boolean UnitDelay4_DSTATE;
uint8 Delay12_DSTATE;
boolean UnitDelay5_DSTATE;
UnitDelay5_DSTATE = g_BMS_Acchg_DW.UnitDelay5_DSTATE;
Delay12_DSTATE = g_BMS_Acchg_DW.Delay12_DSTATE;
UnitDelay4_DSTATE = g_BMS_Acchg_DW.UnitDelay4_DSTATE;
Delay_DSTATE_n = g_BMS_Acchg_DW.Delay_DSTATE_n;
UnitDelay_DSTATE_a = g_BMS_Acchg_DW.UnitDelay_DSTATE_a;
(*(&tmpRead) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq, ((Std_ReturnType)(0U)));
rtb_LogicalOperator7_n = ((((sint32)UnitDelay_DSTATE_a) == 1) || (((sint32)UnitDelay_DSTATE_a) == 7));
rtb_LogicalOperator20 = (rtb_LogicalOperator7_n && (!UnitDelay4_DSTATE));
if (rtb_LogicalOperator20 && (((uint32)g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE) != 0x01U)){
    Delay_DSTATE_n = 0U;
}
g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE = rtb_LogicalOperator20 ? 1U : 0U;
rtb_LogicalOperator20 = (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtFunSafety_) == 3);
g_BMS_Acchg_DW.LogicalOperator4 = ((((((sint32)tmpRead) == 4) && (((sint32)Delay12_DSTATE) == 4)) && (((sint32)g_BMS_Acchg_DW.Delay1_DSTATE_p[0]) == 4)) && (((sint32)g_BMS_Acchg_DW.Delay13_DSTATE[0]) == 4));
if (Delay_DSTATE_n){
    Delay_DSTATE_n = 1U;
}else{
    Delay_DSTATE_n = ((rtb_LogicalOperator7_n && (rtb_LogicalOperator20 || UnitDelay5_DSTATE)) && (g_BMS_Acchg_DW.LogicalOperator4));
}
g_BMS_Acchg_DW.Delay1_DSTATE_p[0] = g_BMS_Acchg_DW.Delay1_DSTATE_p[1];
g_BMS_Acchg_DW.Delay1_DSTATE_p[1] = tmpRead;
g_BMS_Acchg_DW.Delay13_DSTATE[0] = g_BMS_Acchg_DW.Delay13_DSTATE[1];
g_BMS_Acchg_DW.Delay13_DSTATE[1] = g_BMS_Acchg_DW.Delay13_DSTATE[2];
g_BMS_Acchg_DW.Delay13_DSTATE[2] = tmpRead;
UnitDelay4_DSTATE = rtb_LogicalOperator7_n;
Delay12_DSTATE = tmpRead;
UnitDelay5_DSTATE = rtb_LogicalOperator20;
g_BMS_Acchg_DW.Delay_DSTATE_n = Delay_DSTATE_n;
g_BMS_Acchg_DW.UnitDelay4_DSTATE = UnitDelay4_DSTATE;
g_BMS_Acchg_DW.Delay12_DSTATE = Delay12_DSTATE;
g_BMS_Acchg_DW.UnitDelay5_DSTATE = UnitDelay5_DSTATE;
}


void SWC_AcChg_ObcInpAcUAbnormal(void)
{
uint8 UnitDelay_DSTATE_a;
uint8 is_active_c4_swc_app_acchg;
uint8 is_c4_swc_app_acchg;
is_c4_swc_app_acchg = g_BMS_Acchg_DW.is_c4_swc_app_acchg;
is_active_c4_swc_app_acchg = g_BMS_Acchg_DW.is_active_c4_swc_app_acchg;
UnitDelay_DSTATE_a = g_BMS_Acchg_DW.UnitDelay_DSTATE_a;
if (((uint32)is_active_c4_swc_app_acchg) == 0U){
    is_active_c4_swc_app_acchg = 1U;
    is_c4_swc_app_acchg = ((uint8)1U);
    g_BMS_Acchg_DW.flagS2On = 0U;
    g_BMS_Acchg_DW.flagObcVolOK = 0U;
    g_BMS_Acchg_DW.timer10min_l = 0U;
    g_BMS_Acchg_DW.ObcInpAcUAbnormal = 0U;
}else
    if (((uint32)is_c4_swc_app_acchg) == ((uint8)1U)){
        if ((((sint32)UnitDelay_DSTATE_a) == 1) || (((sint32)UnitDelay_DSTATE_a) == 7)){
            is_c4_swc_app_acchg = ((uint8)2U);
            g_BMS_Acchg_DW.flagS2On = 0U;
            g_BMS_Acchg_DW.flagObcVolOK = 0U;
            g_BMS_Acchg_DW.timer10min_l = 0U;
            g_BMS_Acchg_DW.ObcInpAcUAbnormal = 0U;
            Acchg_inner_default_uncharged2();
        }
    }else{
        if ((((sint32)UnitDelay_DSTATE_a) != 1) && (((sint32)UnitDelay_DSTATE_a) != 7)){
            is_c4_swc_app_acchg = ((uint8)1U);
            g_BMS_Acchg_DW.flagS2On = 0U;
            g_BMS_Acchg_DW.flagObcVolOK = 0U;
            g_BMS_Acchg_DW.timer10min_l = 0U;
            g_BMS_Acchg_DW.ObcInpAcUAbnormal = 0U;
        }else{
            Acchg_inner_default_uncharged2();
        }
    }

g_BMS_Acchg_DW.is_active_c4_swc_app_acchg = is_active_c4_swc_app_acchg;
g_BMS_Acchg_DW.is_c4_swc_app_acchg = is_c4_swc_app_acchg;
}


void SWC_AcChg_ChrgCurrentCal(void)
{
uint16 tmpRead;
uint16 tmpRead_0;
uint8 tmpRead_1;
boolean tmpRead_2;
sint32 rtb_Multiport_Switch;
float32 rtb_MultiportSwitch;
uint32 rtb_A;
uint32 rtb_Switch2;
uint16 rtb_Iac;
uint16 rtb_CC_Battery_0;
uint8 tmp;
float32 u0;
float32 u0_tmp;
if ((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 5)){
    tmp = g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4;
}else{
    tmp = 1U;
}
switch (tmp){
    case 0:
        rtb_Multiport_Switch = 0;
        break;
    case 1:
        rtb_Multiport_Switch = 0;
        break;
    case 2:
        rtb_Multiport_Switch = g_BMS_Acchg_P.AcChg_SlwChg_iRCC10A_C;
        break;
    case 3:
        rtb_Multiport_Switch = g_BMS_Acchg_P.AcChg_SlwChg_iRCC16A_C;
        break;
    case 4:
        rtb_Multiport_Switch = g_BMS_Acchg_P.AcChg_SlwChg_iRCC32A_C;
        break;
    case 5:
        rtb_Multiport_Switch = g_BMS_Acchg_P.AcChg_SlwChg_iRCC63A_C;
        break;
    default:
        rtb_Multiport_Switch = 0;
        break;
}
rtb_MultiportSwitch = (((float32)rtb_Multiport_Switch) / 1000.0F) * 10.0F;
if (rtb_MultiportSwitch < 65536.0F){
    if (rtb_MultiportSwitch >= 0.0F){
        rtb_CC_Battery_0 = (uint16)rtb_MultiportSwitch;
    }else{
        rtb_CC_Battery_0 = 0U;
    }
}else{
    rtb_CC_Battery_0 = ((uint16_T)(65535U));
}
if (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a){
    rtb_Multiport_Switch = look1_iu16lu32n31ts32D_Jd1VG4uJ((uint16)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d, g_BMS_Acchg_P.AcChg_SlwChg_dtyCP_T_X, g_BMS_Acchg_P.AcChg_SlwChg_iCP_T_D, 6U);
    if (rtb_Multiport_Switch > g_BMS_Acchg_P.AcChg_SlwChg_iRCC63A_C){
        rtb_Multiport_Switch = g_BMS_Acchg_P.AcChg_SlwChg_iRCC63A_C;
    }else{
        if (rtb_Multiport_Switch < 0){
            rtb_Multiport_Switch = 0;
        }
    }
    rtb_Multiport_Switch /= 125;
    if (rtb_Multiport_Switch < 0){
        rtb_Multiport_Switch = 0;
    }else{
        if (rtb_Multiport_Switch > 65535){
            rtb_Multiport_Switch = 65535;
        }
    }
    rtb_A = ((((uint32)rtb_Multiport_Switch) * 5U) >> 2);
    if (rtb_A > 65535U){
        rtb_A = 65535U;
    }
    rtb_Iac = (uint16)rtb_A;
}else{
    rtb_Iac = 0U;
}
(*(&tmpRead_2) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq, ((Std_ReturnType)(0U)));
(*(&tmpRead_1) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac, ((Std_ReturnType)(0U)));
switch (tmpRead_1){
    case 0:
        rtb_MultiportSwitch = 1.0F;
        break;
    case 1:
        rtb_MultiportSwitch = 0.7F;
        break;
    case 2:
        rtb_MultiportSwitch = 0.3F;
        break;
    default:
        rtb_MultiportSwitch = 0.0F;
        break;
}
(*(&tmpRead) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl, ((Std_ReturnType)(0U)));
if (rtb_CC_Battery_0 >= rtb_Iac){
    rtb_CC_Battery_0 = rtb_Iac;
}
if (rtb_CC_Battery_0 < rtb_Iac){
    rtb_Iac = rtb_CC_Battery_0;
}
if (tmpRead_2 && (150 < ((sint32)rtb_Iac))){
    rtb_Iac = 150U;
}
Acchg_floatingdivide(((((float32)rtb_Iac) * 0.1F) * (((float32)g_BMS_Acchg_P.AcChg_SlwChg_facOBCefficiency_C) * 0.01F)) * ((float32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i), ((float32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p) * 0.1F, &g_BMS_Acchg_DW.FloatingDivide, 1.0E-7F);
u0_tmp = ((float32)tmpRead) * 0.1F;
if (u0_tmp < g_BMS_Acchg_DW.FloatingDivide.Divide){
    u0 = u0_tmp;
}else{
    u0 = g_BMS_Acchg_DW.FloatingDivide.Divide;
}
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_iChrgnSysIAllwdMax = ((uint16)((float32)(rtb_MultiportSwitch * u0))), ((Std_ReturnType)(0U)));
if (((((sint32)g_BMS_Acchg_DW.stACChrg) == 7) || (((sint32)g_BMS_Acchg_DW.stACChrg) == 8)) && (g_BMS_Acchg_DW.stCCRawNormal)){
    (*(&tmpRead_0) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct, ((Std_ReturnType)(0U)));
    (*(&rtb_Switch2) = Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit, ((Std_ReturnType)(0U)));
    rtb_A = rtb_Switch2 / 1000U;
    if ((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel >= ((uint16)((sint32)(((sint32)g_BMS_Acchg_P.VehSt_SlwChg_vReachMaxCell) - 5)))) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel < g_BMS_Acchg_P.SigPro_CellVol_vCellInit_C)){
        rtb_Switch2 = ((uint32)g_BMS_Acchg_P.VehSt_FstChg_capBattCap_C) / 20U;
    }else{
        rtb_Switch2 = rtb_A;
    }
    Acchg_floatingdivide(((float32)((uint16)(1000U * ((uint32)tmpRead_0)))) * 0.1F, ((float32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p) * 0.1F, &g_BMS_Acchg_DW.FloatingDivide1, 1.0E-7F);
    if (rtb_Switch2 < rtb_A){
        rtb_A = rtb_Switch2;
    }
    u0 = g_BMS_Acchg_DW.FloatingDivide1.Divide + ((float32)rtb_A);
    if (g_BMS_Acchg_DW.FloatingDivide.Divide < u0){
        u0 = g_BMS_Acchg_DW.FloatingDivide.Divide;
    }
    if (u0 < u0_tmp){
        u0_tmp = u0;
    }
    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_iSetSlowCharge = ((uint16)((uint16)((float32)((u0_tmp * rtb_MultiportSwitch) * 10.0F)))), ((Std_ReturnType)(0U)));
}else{
    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_iSetSlowCharge = ((uint16)0U), ((Std_ReturnType)(0U)));
}
}


void Acchg_Fault_Confirm(boolean rtu_Fault_soft, uint32 rtu_Fault_times, DW_fault_confirm_Acchg_e_T* localDW)
{
uint32 rtb_Add1_j;
uint32 UnitDelay_DSTATE;
UnitDelay_DSTATE = localDW->UnitDelay_DSTATE;
rtb_Add1_j = 1U + rtu_Fault_times;
if (rtu_Fault_soft){
    UnitDelay_DSTATE++;
    if (UnitDelay_DSTATE >= rtb_Add1_j){
        UnitDelay_DSTATE = rtb_Add1_j;
    }
}else{
    UnitDelay_DSTATE = 0U;
}
localDW->Switch2 = (UnitDelay_DSTATE >= rtb_Add1_j);
localDW->UnitDelay_DSTATE = UnitDelay_DSTATE;
}


void Acchg_data_lock(uint8 rtu_0, uint8 rtu_1, DW_data_lock_Acchg__T* localDW)
{
boolean UnitDelay_DSTATE;
UnitDelay_DSTATE = localDW->UnitDelay_DSTATE;
if (UnitDelay_DSTATE){
    UnitDelay_DSTATE = 1U;
}else{
    UnitDelay_DSTATE = (rtu_0 == rtu_1);
}
localDW->Switch12 = UnitDelay_DSTATE;
localDW->UnitDelay_DSTATE = UnitDelay_DSTATE;
}


void Acchg_fault_confirm(boolean rtu_Fault_soft, uint16 rtu_Fault_times, DW_fault_confirm_Acchg__T* localDW)
{
uint16 rtb_Add1_h;
uint16 UnitDelay_DSTATE;
UnitDelay_DSTATE = localDW->UnitDelay_DSTATE;
rtb_Add1_h = (uint16)(1U + ((uint32)rtu_Fault_times));
if (rtu_Fault_soft){
    UnitDelay_DSTATE = (uint16)(((uint32)UnitDelay_DSTATE) + 1U);
    if (UnitDelay_DSTATE >= rtb_Add1_h){
        UnitDelay_DSTATE = rtb_Add1_h;
    }
}else{
    UnitDelay_DSTATE = 0U;
}
localDW->Switch2 = (UnitDelay_DSTATE >= rtb_Add1_h);
localDW->UnitDelay_DSTATE = UnitDelay_DSTATE;
}


void Acchg_data_lock_Reset(DW_data_lock_Acchg__T* localDW)
{
localDW->UnitDelay_DSTATE = 0U;
}


void Acchg_fault_confirm_Reset(DW_fault_confirm_Acchg__T* localDW)
{
localDW->UnitDelay_DSTATE = 0U;
}


void Acchg_Fault_Confirm3(boolean rtu_Fault_soft, uint8 rtu_Fault_times, DW_fault_confirm_Acchg_a_T* localDW)
{
uint16 rtb_Add1_g;
uint16 UnitDelay_DSTATE;
UnitDelay_DSTATE = localDW->UnitDelay_DSTATE;
rtb_Add1_g = (uint16)(1U + ((uint32)rtu_Fault_times));
if (rtu_Fault_soft){
    UnitDelay_DSTATE = (uint16)(((uint32)UnitDelay_DSTATE) + 1U);
    if (UnitDelay_DSTATE >= rtb_Add1_g){
        UnitDelay_DSTATE = rtb_Add1_g;
    }
}else{
    UnitDelay_DSTATE = 0U;
}
localDW->Switch2 = (UnitDelay_DSTATE >= rtb_Add1_g);
localDW->UnitDelay_DSTATE = UnitDelay_DSTATE;
}


void Acchg_Fault_Confirm3_Reset(DW_fault_confirm_Acchg_a_T* localDW)
{
localDW->UnitDelay_DSTATE = 0U;
}


void SWC_AcChg_ChrgEndJudge(void)
{
uint8 tmpRead;
FaultCode tmpRead_0;
boolean tmpRead_1;
boolean tmpRead_2;
boolean rtb_RelationalOperator22;
sint32 tmp;
uint16 timer2min;
uint8 is_uncharged2_p;
uint8 is_c3_swc_app_acchg;
uint8 is_active_c3_swc_app_acchg;
is_active_c3_swc_app_acchg = g_BMS_Acchg_DW.is_active_c3_swc_app_acchg;
is_c3_swc_app_acchg = g_BMS_Acchg_DW.is_c3_swc_app_acchg;
is_uncharged2_p = g_BMS_Acchg_DW.is_uncharged2_p;
timer2min = g_BMS_Acchg_DW.timer2min;
if (((uint32)is_active_c3_swc_app_acchg) == 0U){
    is_active_c3_swc_app_acchg = 1U;
    is_c3_swc_app_acchg = ((uint8)1U);
    g_BMS_Acchg_DW.WaitObcStandbyTimeOut = 0U;
    timer2min = 0U;
}else
    if (((uint32)is_c3_swc_app_acchg) == ((uint8)1U)){
        if ((((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 1) || (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 7)){
            is_c3_swc_app_acchg = ((uint8)2U);
            g_BMS_Acchg_DW.WaitObcStandbyTimeOut = 0U;
            is_uncharged2_p = ((uint8)3U);
            timer2min = 1U;
        }
    }else{
        if ((((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) != 1) && (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) != 7)){
            is_uncharged2_p = ((uint8)0U);
            is_c3_swc_app_acchg = ((uint8)1U);
            g_BMS_Acchg_DW.WaitObcStandbyTimeOut = 0U;
            timer2min = 0U;
        }else{
            switch (is_uncharged2_p){
                case ((uint8)1U):
                    break;
                case ((uint8)2U):
                    break;
                default:
                    if (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g) == 1){
                        is_uncharged2_p = ((uint8)1U);
                }else
                    if (((sint32)timer2min) > 12000){
                        is_uncharged2_p = ((uint8)2U);
                        g_BMS_Acchg_DW.WaitObcStandbyTimeOut = 1U;
                    }else{
                        tmp = ((sint32)timer2min) + 1;
                        if (tmp > 65535){
                            tmp = 65535;
                        }
                        timer2min = (uint16)tmp;
                    }

                break;
            }
        }
    }

(*(&tmpRead_2) = Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft, ((Std_ReturnType)(0U)));
(*(&tmpRead_1) = Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft, ((Std_ReturnType)(0U)));
Rte_Read_swc_app_acchg_FunSafety_FunSafety_stFaultCode(&tmpRead_0);
(*(&tmpRead) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx, ((Std_ReturnType)(0U)));
g_BMS_Acchg_DW.Compare = (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 8);
g_BMS_Acchg_DW.Compare_f = tmpRead_0.ACChg_Prohibit;
Acchg_fault_confirm((((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 8) && ((!g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a) || ((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) < 80) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) > 900))), (uint16)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (2000U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm1_e);
rtb_RelationalOperator22 = (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 5);
Acchg_fault_confirm((rtb_RelationalOperator22 && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g) != 1)) && (((sint32)g_BMS_Acchg_DW.Delay1_DSTATE) == 0), (uint16)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (550U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm2_m);
Acchg_Fault_Confirm3(!g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b, (uint8)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (50U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm3);
g_BMS_Acchg_DW.LogicalOperator25 = ((g_BMS_Acchg_DW.Fault_Confirm2_m.Switch2) || (rtb_RelationalOperator22 && (((sint32)tmpRead) == 0)));
g_BMS_Acchg_DW.LogicalOperator5 = (tmpRead_1 || tmpRead_2);
g_BMS_Acchg_DW.LogicalOperator6 = (((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 7) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 9)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 10));
SWC_AcChg_ObcInpAcUAbnormal();
g_BMS_Acchg_DW.RelationalOperator5 = (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 0);
SWC_AcChg_ChrgEndVcuReqPwrdown();
SWC_AcChg_WaitVcuChrgAllowTimeOut();
g_BMS_Acchg_DW.timer2min = timer2min;
g_BMS_Acchg_DW.is_uncharged2_p = is_uncharged2_p;
g_BMS_Acchg_DW.is_c3_swc_app_acchg = is_c3_swc_app_acchg;
g_BMS_Acchg_DW.is_active_c3_swc_app_acchg = is_active_c3_swc_app_acchg;
}


void BMS_AcChg_ChrgReqCal(void)
{
FaultCode tmpRead;
uint16 tmpRead_0;
boolean rtb_LogicalOperator17;
boolean rtb_LogicalOperator12;
uint16 rtb_Add1;
sint32 tmp;
uint8 tmp_0;
uint8 is_c6_swc_app_acchg;
boolean Delay_DSTATE_e;
boolean UnitDelay_DSTATE_p;
uint8 is_active_c6_swc_app_acchg;
uint8 is_AcChrgMod;
uint8 timer30ms;
timer30ms = g_BMS_Acchg_DW.timer30ms;
is_AcChrgMod = g_BMS_Acchg_DW.is_AcChrgMod;
is_active_c6_swc_app_acchg = g_BMS_Acchg_DW.is_active_c6_swc_app_acchg;
UnitDelay_DSTATE_p = g_BMS_Acchg_DW.UnitDelay_DSTATE_p;
Delay_DSTATE_e = g_BMS_Acchg_DW.Delay_DSTATE_e;
is_c6_swc_app_acchg = g_BMS_Acchg_DW.is_c6_swc_app_acchg;
rtb_LogicalOperator17 = ((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 5));
if (((uint32)is_active_c6_swc_app_acchg) == 0U){
    is_active_c6_swc_app_acchg = 1U;
    is_c6_swc_app_acchg = ((uint8)2U);
    g_BMS_Acchg_DW.stCCRawNormal = 0U;
}else
    if (((uint32)is_c6_swc_app_acchg) == ((uint8)1U)){
        if (!rtb_LogicalOperator17){
            is_AcChrgMod = ((uint8)0U);
            is_c6_swc_app_acchg = ((uint8)2U);
            g_BMS_Acchg_DW.stCCRawNormal = 0U;
        }else{
            switch (is_AcChrgMod){
                case ((uint8)1U):
                    if (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 9){
                        is_AcChrgMod = ((uint8)2U);
                        g_BMS_Acchg_DW.stCCRawNormal = 0U;
                }else{
                    if (((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) != 9) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) != 2)) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) != 3)) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) != 4)) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) != 5)){
                        is_AcChrgMod = ((uint8)3U);
                    }else{
                        if (((sint32)timer30ms) >= 3){
                            g_BMS_Acchg_DW.stCCRawNormal = 1U;
                        }else{
                            tmp = ((sint32)timer30ms) + 1;
                            if (tmp > 255){
                                tmp = 255;
                            }
                            timer30ms = (uint8)tmp;
                        }
                    }
                }
                break;
            case ((uint8)2U):
                if ((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 5)){
                    is_AcChrgMod = ((uint8)1U);
                    timer30ms = 1U;
            }
            break;
        default:
            if (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 9){
                is_AcChrgMod = ((uint8)2U);
                g_BMS_Acchg_DW.stCCRawNormal = 0U;
        }else{
            if ((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 5)){
                is_AcChrgMod = ((uint8)1U);
                timer30ms = 1U;
            }
        }
        break;
    }
}
}else{
if (rtb_LogicalOperator17){
    is_c6_swc_app_acchg = ((uint8)1U);
    g_BMS_Acchg_DW.stCCRawNormal = 1U;
    is_AcChrgMod = ((uint8)1U);
    timer30ms = 1U;
}
}

Rte_Read_swc_app_acchg_FunSafety_FunSafety_stFaultCode(&tmpRead);
rtb_LogicalOperator17 = ((((sint32)g_BMS_Acchg_DW.stACChrg) == 1) || (((sint32)g_BMS_Acchg_DW.stACChrg) == 7));
rtb_LogicalOperator12 = (rtb_LogicalOperator17 && (!UnitDelay_DSTATE_p));
if (rtb_LogicalOperator12 && (((uint32)g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE_n) != 0x01U)){
Delay_DSTATE_e = 0U;
}
g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE_n = rtb_LogicalOperator12 ? 1U : 0U;
if (Delay_DSTATE_e){
Delay_DSTATE_e = 1U;
}else{
Delay_DSTATE_e = (((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i) > 90) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh)) && (((sint32)g_BMS_Acchg_DW.stACChrg) == 1));
}
Acchg_fault_confirm((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i) <= 90) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh)) && (((sint32)g_BMS_Acchg_DW.stACChrg) == 1)) && (!Delay_DSTATE_e), (uint16)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (10000U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm);
if ((((sint32)g_BMS_Acchg_DW.stACChrg) == 7) || (((sint32)g_BMS_Acchg_DW.stACChrg) == 8)){
rtb_Add1 = (uint16)(((uint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p) + 100U);
if (rtb_Add1 >= ((uint16)g_BMS_Acchg_P.VehSt_FstChg_vBMSMaxChaVolAllow_C)){
    rtb_Add1 = (uint16)g_BMS_Acchg_P.VehSt_FstChg_vBMSMaxChaVolAllow_C;
}
(*(&tmpRead_0) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl, ((Std_ReturnType)(0U)));
if (rtb_Add1 < ((uint16)tmpRead_0)){
    tmpRead_0 = (uint16)rtb_Add1;
}
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_vSetSlowCharge = ((uint16)((float32)(((float32)tmpRead_0) * 0.1F))), ((Std_ReturnType)(0U)));
}else{
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_vSetSlowCharge = ((uint16)0U), ((Std_ReturnType)(0U)));
}
SWC_AcChg_ChrgCurrentCal();
g_BMS_Acchg_DW.Delay1_DSTATE = (uint8)((((((!tmpRead.ACChg_Prohibit) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b)) && ((((sint32)g_BMS_Acchg_DW.stACChrg) == 1) || (((sint32)g_BMS_Acchg_DW.stACChrg) == 7))) || (((sint32)g_BMS_Acchg_DW.stACChrg) == 8)) && (g_BMS_Acchg_DW.stCCRawNormal)) ? 1 : 0);
if (g_BMS_Acchg_DW.Fault_Confirm.Switch2){
tmp_0 = 9U;
}else{
tmp_0 = 0U;
}
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stChrgErrInfo = (tmp_0), ((Std_ReturnType)(0U)));
UnitDelay_DSTATE_p = rtb_LogicalOperator17;
g_BMS_Acchg_DW.is_c6_swc_app_acchg = is_c6_swc_app_acchg;
g_BMS_Acchg_DW.Delay_DSTATE_e = Delay_DSTATE_e;
g_BMS_Acchg_DW.UnitDelay_DSTATE_p = UnitDelay_DSTATE_p;
g_BMS_Acchg_DW.is_active_c6_swc_app_acchg = is_active_c6_swc_app_acchg;
g_BMS_Acchg_DW.is_AcChrgMod = is_AcChrgMod;
g_BMS_Acchg_DW.timer30ms = timer30ms;
}


void BMS_AcChg_ChrgState(void)
{
uint8 is_c1_swc_app_acchg;
uint8 is_active_c1_swc_app_acchg;
uint8 is_Prepare;
boolean guard1 = 0U;
boolean guard2 = 0U;
is_Prepare = g_BMS_Acchg_DW.is_Prepare;
is_active_c1_swc_app_acchg = g_BMS_Acchg_DW.is_active_c1_swc_app_acchg;
is_c1_swc_app_acchg = g_BMS_Acchg_DW.is_c1_swc_app_acchg;
if (((uint32)is_active_c1_swc_app_acchg) == 0U){
is_active_c1_swc_app_acchg = 1U;
is_c1_swc_app_acchg = ((uint8)4U);
g_BMS_Acchg_DW.stACChrg = 0U;
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
g_BMS_Acchg_DW.ChrgEndResn = 0U;
}else{
guard1 = 0U;
guard2 = 0U;
switch (is_c1_swc_app_acchg){
    case ((uint8)1U):
        g_BMS_Acchg_DW.stACChrg = 3U;
        (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)3U), ((Std_ReturnType)(0U)));
        if (g_BMS_Acchg_DW.LogicalOperator8){
            g_BMS_Acchg_DW.ChrgEndResn = 0U;
            is_c1_swc_app_acchg = ((uint8)5U);
            (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
            is_Prepare = ((uint8)2U);
            g_BMS_Acchg_DW.stACChrg = 1U;
    }else{
        if (g_BMS_Acchg_DW.LogicalOperator10){
            is_c1_swc_app_acchg = ((uint8)4U);
            g_BMS_Acchg_DW.stACChrg = 0U;
            (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
            g_BMS_Acchg_DW.ChrgEndResn = 0U;
        }
    }
    break;
case ((uint8)2U):
    g_BMS_Acchg_DW.stACChrg = 8U;
    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)1U), ((Std_ReturnType)(0U)));
    if (g_BMS_Acchg_DW.LogicalOperator5){
        g_BMS_Acchg_DW.ChrgEndResn = 21U;
        guard2 = 1U;
}else
    if (g_BMS_Acchg_DW.Compare_f){
        g_BMS_Acchg_DW.ChrgEndResn = 16U;
        guard2 = 1U;
    }else
        if (g_BMS_Acchg_DW.LogicalOperator4){
            g_BMS_Acchg_DW.ChrgEndResn = 9U;
            guard2 = 1U;
        }else
            if (g_BMS_Acchg_DW.Fault_Confirm3.Switch2){
                g_BMS_Acchg_DW.ChrgEndResn = 8U;
                guard2 = 1U;
            }else
                if (g_BMS_Acchg_DW.LogicalOperator6){
                    g_BMS_Acchg_DW.ChrgEndResn = 7U;
                    guard2 = 1U;
                }else
                    if (g_BMS_Acchg_DW.Compare){
                        g_BMS_Acchg_DW.ChrgEndResn = 5U;
                        guard2 = 1U;
                    }else
                        if (g_BMS_Acchg_DW.Fault_Confirm1_e.Switch2){
                            g_BMS_Acchg_DW.ChrgEndResn = 2U;
                            guard2 = 1U;
                        }else
                            if (g_BMS_Acchg_DW.RelationalOperator5){
                                g_BMS_Acchg_DW.ChrgEndResn = 1U;
                                guard2 = 1U;
                            }else{
                                if (g_BMS_Acchg_DW.Logical_Operator1){
                                    is_c1_swc_app_acchg = ((uint8)3U);
                                    g_BMS_Acchg_DW.stACChrg = 5U;
                                    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)2U), ((Std_ReturnType)(0U)));
                                }
                            }

break;
case ((uint8)3U):
    g_BMS_Acchg_DW.stACChrg = 5U;
    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)2U), ((Std_ReturnType)(0U)));
    if ((!g_BMS_Acchg_DW.LogicalOperator25) && (g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st)){
        is_c1_swc_app_acchg = ((uint8)4U);
        g_BMS_Acchg_DW.stACChrg = 0U;
        (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
        g_BMS_Acchg_DW.ChrgEndResn = 0U;
}else{
    if (g_BMS_Acchg_DW.LogicalOperator25){
        g_BMS_Acchg_DW.ChrgEndResn = 10U;
        is_c1_swc_app_acchg = ((uint8)1U);
        g_BMS_Acchg_DW.stACChrg = 3U;
        (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)3U), ((Std_ReturnType)(0U)));
    }
}
break;
case ((uint8)4U):
    g_BMS_Acchg_DW.stACChrg = 0U;
    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
    if (g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st){
        is_c1_swc_app_acchg = ((uint8)5U);
        (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
        is_Prepare = ((uint8)2U);
        g_BMS_Acchg_DW.stACChrg = 1U;
}
break;
default:
    (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)0U), ((Std_ReturnType)(0U)));
    if (g_BMS_Acchg_DW.Delay_DSTATE_n){
        g_BMS_Acchg_DW.ChrgEndResn = 50U;
        guard1 = 1U;
}else
    if (g_BMS_Acchg_DW.WaitObcStandbyTimeOut){
        g_BMS_Acchg_DW.ChrgEndResn = 49U;
        guard1 = 1U;
    }else
        if (g_BMS_Acchg_DW.LogicalOperator5){
            g_BMS_Acchg_DW.ChrgEndResn = 21U;
            guard1 = 1U;
        }else
            if (g_BMS_Acchg_DW.Compare_f){
                g_BMS_Acchg_DW.ChrgEndResn = 16U;
                guard1 = 1U;
            }else
                if (g_BMS_Acchg_DW.LogicalOperator6){
                    g_BMS_Acchg_DW.ChrgEndResn = 11U;
                    guard1 = 1U;
                }else
                    if (g_BMS_Acchg_DW.Compare){
                        g_BMS_Acchg_DW.ChrgEndResn = 5U;
                        guard1 = 1U;
                    }else
                        if (g_BMS_Acchg_DW.ObcInpAcUAbnormal){
                            g_BMS_Acchg_DW.ChrgEndResn = 4U;
                            guard1 = 1U;
                        }else
                            if (g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut){
                                g_BMS_Acchg_DW.ChrgEndResn = 3U;
                                guard1 = 1U;
                            }else
                                if (g_BMS_Acchg_DW.RelationalOperator5){
                                    g_BMS_Acchg_DW.ChrgEndResn = 1U;
                                    guard1 = 1U;
                                }else
                                    if (g_BMS_Acchg_DW.Logical_Operator1){
                                        is_Prepare = ((uint8)0U);
                                        is_c1_swc_app_acchg = ((uint8)3U);
                                        g_BMS_Acchg_DW.stACChrg = 5U;
                                        (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)2U), ((Std_ReturnType)(0U)));
                                    }else{
                                        if ((!g_BMS_Acchg_DW.Logical_Operator1) && (g_BMS_Acchg_DW.Fault_Confirm_f.Switch2)){
                                            is_Prepare = ((uint8)0U);
                                            is_c1_swc_app_acchg = ((uint8)2U);
                                            g_BMS_Acchg_DW.stACChrg = 8U;
                                            (void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)1U), ((Std_ReturnType)(0U)));
                                        }else
                                            if (((uint32)is_Prepare) == ((uint8)1U)){
                                                g_BMS_Acchg_DW.stACChrg = 7U;
                                                if (!g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o){
                                                    is_Prepare = ((uint8)2U);
                                                    g_BMS_Acchg_DW.stACChrg = 1U;
                                                }
                                            }else{
                                                g_BMS_Acchg_DW.stACChrg = 1U;
                                                if (g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o){
                                                    is_Prepare = ((uint8)1U);
                                                    g_BMS_Acchg_DW.stACChrg = 7U;
                                                }
                                            }
                                    }

break;
}
if (guard2){
is_c1_swc_app_acchg = ((uint8)1U);
g_BMS_Acchg_DW.stACChrg = 3U;
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)3U), ((Std_ReturnType)(0U)));
}
if (guard1){
is_Prepare = ((uint8)0U);
is_c1_swc_app_acchg = ((uint8)1U);
g_BMS_Acchg_DW.stACChrg = 3U;
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBcuChrgSts = ((uint8)3U), ((Std_ReturnType)(0U)));
}
}
g_BMS_Acchg_DW.is_c1_swc_app_acchg = is_c1_swc_app_acchg;
g_BMS_Acchg_DW.is_active_c1_swc_app_acchg = is_active_c1_swc_app_acchg;
g_BMS_Acchg_DW.is_Prepare = is_Prepare;
}


void BMS_AcChg_StTransitCondtion(void)
{
FaultCode tmpRead;
boolean rtb_Relational_Operator3_a;
boolean rtb_Logical_Operator2;
boolean rtb_RelationalOperator_e;
sint32 tmp;
uint8 Delay_DSTATE;
boolean EnabledSubsystem1_MODE;
boolean EnabledSubsystem4_MODE;
boolean LogicalOperator1;
boolean UnitDelay_DSTATE_io;
uint16 UnitDelay_DSTATE;
uint8 icLoad;
boolean Delay_DSTATE_o;
boolean UnitDelay_DSTATE_i;
boolean UnitDelay_DSTATE_h;
UnitDelay_DSTATE_h = g_BMS_Acchg_DW.UnitDelay_DSTATE_h;
UnitDelay_DSTATE_i = g_BMS_Acchg_DW.UnitDelay_DSTATE_i;
Delay_DSTATE_o = g_BMS_Acchg_DW.Delay_DSTATE_o;
icLoad = g_BMS_Acchg_DW.icLoad;
UnitDelay_DSTATE = g_BMS_Acchg_DW.UnitDelay_DSTATE;
UnitDelay_DSTATE_io = g_BMS_Acchg_DW.UnitDelay_DSTATE_io;
LogicalOperator1 = g_BMS_Acchg_DW.LogicalOperator1;
EnabledSubsystem4_MODE = g_BMS_Acchg_DW.EnabledSubsystem4_MODE;
EnabledSubsystem1_MODE = g_BMS_Acchg_DW.EnabledSubsystem1_MODE;
Delay_DSTATE = g_BMS_Acchg_DW.Delay_DSTATE;
Rte_Read_swc_app_acchg_FunSafety_FunSafety_stFaultCode(&tmpRead);
SWC_AcChg_ChrgEndJudge();
if (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 5){
if (!EnabledSubsystem1_MODE){
icLoad = 1U;
Acchg_Fault_Confirm3_Reset(&g_BMS_Acchg_DW.Fault_Confirm1_o);
UnitDelay_DSTATE_io = 0U;
EnabledSubsystem1_MODE = 1U;
}
if (((sint32)icLoad) != 0){
Delay_DSTATE_o = g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b;
}
Acchg_Fault_Confirm3(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b, (uint8)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (50U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm1_o);
if (UnitDelay_DSTATE_io){
UnitDelay_DSTATE_io = 1U;
}else{
UnitDelay_DSTATE_io = ((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b) && (!Delay_DSTATE_o));
}
LogicalOperator1 = (UnitDelay_DSTATE_io && (g_BMS_Acchg_DW.Fault_Confirm1_o.Switch2));
icLoad = 0U;
Delay_DSTATE_o = g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b;
}else{
if (EnabledSubsystem1_MODE){
LogicalOperator1 = 0U;
EnabledSubsystem1_MODE = 0U;
}
}
if (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 3){
if (!EnabledSubsystem4_MODE){
UnitDelay_DSTATE = 0U;
Acchg_fault_confirm_Reset(&g_BMS_Acchg_DW.Fault_Confirm1_d);
Acchg_Fault_Confirm3_Reset(&g_BMS_Acchg_DW.Fault_Confirm2_j);
UnitDelay_DSTATE_i = 0U;
UnitDelay_DSTATE_h = 0U;
Acchg_data_lock_Reset(&g_BMS_Acchg_DW.data_lock_g);
Acchg_data_lock_Reset(&g_BMS_Acchg_DW.data_lock3);
EnabledSubsystem4_MODE = 1U;
}
UnitDelay_DSTATE = (uint16)(1U + ((uint32)UnitDelay_DSTATE));
Acchg_fault_confirm((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a) && ((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) >= 80) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) <= 900)), (uint16)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (300U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm1_d);
Acchg_Fault_Confirm3(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b, (uint8)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (50U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm2_j);
if (UnitDelay_DSTATE_i){
UnitDelay_DSTATE_i = 1U;
}else{
UnitDelay_DSTATE_i = (((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) < 80) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) > 900)) || (!g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a));
}
if (UnitDelay_DSTATE_h){
UnitDelay_DSTATE_h = 1U;
}else{
UnitDelay_DSTATE_h = !g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b;
}
rtb_Relational_Operator3_a = ((((float32)g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur) * 0.1F) < 90.0F);
g_BMS_Acchg_DW.LogicalOperator10 = (((((((sint32)Delay_DSTATE) == 2) || UnitDelay_DSTATE_i) && (g_BMS_Acchg_DW.Fault_Confirm1_d.Switch2)) || (((((sint32)Delay_DSTATE) == 3) || UnitDelay_DSTATE_h) && (g_BMS_Acchg_DW.Fault_Confirm2_j.Switch2))) && rtb_Relational_Operator3_a);
Acchg_data_lock(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx, 9, &g_BMS_Acchg_DW.data_lock_g);
rtb_Logical_Operator2 = ((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) == 5));
rtb_RelationalOperator_e = (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx == g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4);
Acchg_data_lock(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx, 8, &g_BMS_Acchg_DW.data_lock3);
g_BMS_Acchg_DW.LogicalOperator8 = (rtb_Relational_Operator3_a && ((((g_BMS_Acchg_DW.data_lock_g.Switch12) && rtb_Logical_Operator2) && rtb_RelationalOperator_e) || (((rtb_Logical_Operator2 && rtb_RelationalOperator_e) && (g_BMS_Acchg_DW.data_lock3.Switch12)) && (((sint32)UnitDelay_DSTATE) <= 600))));
}else{
if (EnabledSubsystem4_MODE){
g_BMS_Acchg_DW.LogicalOperator10 = 0U;
g_BMS_Acchg_DW.LogicalOperator8 = 0U;
EnabledSubsystem4_MODE = 0U;
}
}
Acchg_Fault_Confirm(((((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 1) || (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 7)) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub < -2000), (((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (1000U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize)), &g_BMS_Acchg_DW.Fault_Confirm_f);
g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o = (((((((((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 5)) && ((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) >= 80) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) <= 900))) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a)) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b)) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g) == 2)) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i) > 90)) && (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtFunSafety_) == 3)) && (!tmpRead.ACChg_Prohibit));
g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st = (((((float64)g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur) * 0.1) < 90.0) || LogicalOperator1);
rtb_Relational_Operator3_a = (((((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 1) || (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 7)) || (((sint32)g_BMS_Acchg_DW.UnitDelay_DSTATE_a) == 8));
if (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub < 0){
tmp = -g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub;
}else{
tmp = g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub;
}
if (tmp < 0){
tmp = 0;
}
rtb_Logical_Operator2 = (((uint32)tmp) < ((((uint32)g_BMS_Acchg_P.VehSt_FstChg_capBattCap_C) * 1000U) / 20U));
Acchg_fault_confirm(((rtb_Relational_Operator3_a && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel >= g_BMS_Acchg_P.VehSt_SlwChg_vReachMaxCell)) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel < g_BMS_Acchg_P.SigPro_CellVol_vCellInit_C)) && rtb_Logical_Operator2, (uint16)((((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (500U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize))), &g_BMS_Acchg_DW.Fault_Confirm1);
Acchg_Fault_Confirm((rtb_Logical_Operator2 && rtb_Relational_Operator3_a) && ((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel >= ((uint16)((sint32)(((sint32)g_BMS_Acchg_P.VehSt_SlwChg_vReachMaxCell) - 5)))) && (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel < g_BMS_Acchg_P.SigPro_CellVol_vCellInit_C)), (((uint32)g_BMS_Acchg_P.AcChg_tStepSize) == 0U) ? ((uint32_T)(0xFFFFFFFFU)) : (720000U / ((uint32)g_BMS_Acchg_P.AcChg_tStepSize)), &g_BMS_Acchg_DW.Fault_Confirm2);
g_BMS_Acchg_DW.Logical_Operator1 = (((g_BMS_Acchg_DW.Fault_Confirm1.Switch2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur) >= 950)) || (g_BMS_Acchg_DW.Fault_Confirm2.Switch2));
g_BMS_Acchg_DW.EnabledSubsystem1_MODE = EnabledSubsystem1_MODE;
g_BMS_Acchg_DW.EnabledSubsystem4_MODE = EnabledSubsystem4_MODE;
g_BMS_Acchg_DW.LogicalOperator1 = LogicalOperator1;
g_BMS_Acchg_DW.UnitDelay_DSTATE_io = UnitDelay_DSTATE_io;
g_BMS_Acchg_DW.UnitDelay_DSTATE = UnitDelay_DSTATE;
g_BMS_Acchg_DW.icLoad = icLoad;
g_BMS_Acchg_DW.Delay_DSTATE_o = Delay_DSTATE_o;
g_BMS_Acchg_DW.UnitDelay_DSTATE_i = UnitDelay_DSTATE_i;
g_BMS_Acchg_DW.UnitDelay_DSTATE_h = UnitDelay_DSTATE_h;
}


void Runnable_AcChg(void)
{
uint8 tmp;
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_dfpOBCCurOver = (0U), ((Std_ReturnType)(0U)));
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_dfpOBCfault = (0U), ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p) = Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal, ((Std_ReturnType)(0U)));
g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st = ((((((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 2) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 3)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 4)) || (((sint32)g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4) == 5));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtFunSafety_) = Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel) = Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur) = Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts, ((Std_ReturnType)(0U)));
(*(&g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx) = Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw, ((Std_ReturnType)(0U)));
BMS_AcChg_StTransitCondtion();
BMS_AcChg_ChrgState();
BMS_AcChg_ChrgReqCal();
if ((((sint32)g_BMS_Acchg_DW.stACChrg) == 7) || (((sint32)g_BMS_Acchg_DW.stACChrg) == 8)){
tmp = 2U;
}else{
tmp = g_BMS_Acchg_DW.stACChrg;
}
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stSlowCharge = (tmp), ((Std_ReturnType)(0U)));
g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st = 0U;
g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st = 0U;
g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o = 0U;
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_tiBMSChaTimeRemain = ((uint16)0U), ((Std_ReturnType)(0U)));
g_BMS_Acchg_DW.UnitDelay_DSTATE_a = g_BMS_Acchg_DW.stACChrg;
g_BMS_Acchg_DW.Delay_DSTATE = g_BMS_Acchg_DW.ChrgEndResn;
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stBMSCharging = (g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st), ((Std_ReturnType)(0U)));
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stEnOnVehicleCharge = (g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st), ((Std_ReturnType)(0U)));
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stSlowChargeS2 = (g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o), ((Std_ReturnType)(0U)));
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stChrgEndResn = (g_BMS_Acchg_DW.ChrgEndResn), ((Std_ReturnType)(0U)));
(void)(Rte_SWC_APP_AcChg_AcChg_SlwChg_stObcOperModReq = (g_BMS_Acchg_DW.Delay1_DSTATE), ((Std_ReturnType)(0U)));
}


Std_ReturnType Rte_Read_swc_app_acchg_FunSafety_FunSafety_stFaultCode(FaultCode* data)
{
memcpy(data, &__igv__FunSafety_FunSafety_stFaultCode, sizeof (__igv__FunSafety_FunSafety_stFaultCode));
}


int _AUX__trueCount_2(boolean c_0, boolean c_1)
{
return (c_0 != 0) + (c_1 != 0);
}


float __AUX_CONVERT_SFIX16_EN2(sint16 si)
{
if (si > 32768){
si = si - 65536;
}
return si * 0.250000;
}


float __AUX_CONVERT_SFIX16_SP1(sint16 si)
{
return 0.100000 * si;
}


float __AUX_CONVERT_UFIX16_SP01(uint16 si)
{
return 0.010000 * si;
}


float __AUX_CONVERT_UFIX16_SP1(uint16 si)
{
return 0.100000 * si;
}


float __AUX_CONVERT_UFIX32_SP01(uint32 si)
{
return 0.010000 * si;
}

//Runnable_AcChg() as entry function

int main()
{
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm");
klee_make_symbolic(&Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr, sizeof Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr, "Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr");
klee_make_symbolic(&Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stPowerComplete, sizeof Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stPowerComplete, "Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stPowerComplete");
klee_make_symbolic(&Rte_SWC_APP_SOE_PacSOE_MapSOE_stChgFinishTrg, sizeof Rte_SWC_APP_SOE_PacSOE_MapSOE_stChgFinishTrg, "Rte_SWC_APP_SOE_PacSOE_MapSOE_stChgFinishTrg");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_dfpBMSComm, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_dfpBMSComm, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_dfpBMSComm");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC1Rx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC1Rx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC1Rx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC2Rx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC2Rx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagAC2Rx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagDCDCRx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagDCDCRx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagDCDCRx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagHMIRx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagHMIRx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagHMIRx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC2Rx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC2Rx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC2Rx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagPTCRx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagPTCRx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagPTCRx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgACInput, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgACInput, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgACInput");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgDCOutputOBC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgDCOutputOBC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChgDCOutputOBC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChrgMaxAC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChrgMaxAC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_iChrgMaxAC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_iOutputCurDCDC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_iOutputCurDCDC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_iOutputCurDCDC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_powObcMaxChrgOutpPwrAvl, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_powObcMaxChrgOutpPwrAvl, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_powObcMaxChrgOutpPwrAvl");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_powPTC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_powPTC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_powPTC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_powTotalAC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_powTotalAC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_powTotalAC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_ratSOCTrg, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_ratSOCTrg, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_ratSOCTrg");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stACChgCtl, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stACChgCtl, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stACChgCtl");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgSuspReq, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgSuspReq, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgSuspReq");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC2, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC2, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC2");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeup, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeup, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeup");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeupSQ, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeupSQ, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeupSQ");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_vOutputDCDC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_vOutputDCDC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_vOutputDCDC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMaxCellValid, sizeof Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMaxCellValid, "Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMaxCellValid");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMinCellValid, sizeof Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMinCellValid, "Rte_SWC_APP_SignalProcess_SigPro_TempCpu_tMinCellValid");
klee_make_symbolic(&Rte_SWC_APP_ThermalMgt_ThermMgt_ThermCtr_stChgHeat, sizeof Rte_SWC_APP_ThermalMgt_ThermMgt_ThermCtr_stChgHeat, "Rte_SWC_APP_ThermalMgt_ThermMgt_ThermCtr_stChgHeat");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.ChrgEndResn))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.ChrgEndResn, "g_BMS_Acchg_DW.ChrgEndResn");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Compare))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Compare, "g_BMS_Acchg_DW.Compare");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Compare_f))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Compare_f, "g_BMS_Acchg_DW.Compare_f");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay12_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay12_DSTATE, "g_BMS_Acchg_DW.Delay12_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay13_DSTATE[0]))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay13_DSTATE[0], "g_BMS_Acchg_DW.Delay13_DSTATE[0]");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay13_DSTATE[1]))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay13_DSTATE[1], "g_BMS_Acchg_DW.Delay13_DSTATE[1]");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay13_DSTATE[2]))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay13_DSTATE[2], "g_BMS_Acchg_DW.Delay13_DSTATE[2]");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay1_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay1_DSTATE, "g_BMS_Acchg_DW.Delay1_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay1_DSTATE_p[0]))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay1_DSTATE_p[0], "g_BMS_Acchg_DW.Delay1_DSTATE_p[0]");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay1_DSTATE_p[1]))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay1_DSTATE_p[1], "g_BMS_Acchg_DW.Delay1_DSTATE_p[1]");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay_DSTATE, "g_BMS_Acchg_DW.Delay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay_DSTATE_e))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay_DSTATE_e, "g_BMS_Acchg_DW.Delay_DSTATE_e");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay_DSTATE_n))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay_DSTATE_n, "g_BMS_Acchg_DW.Delay_DSTATE_n");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Delay_DSTATE_o))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Delay_DSTATE_o, "g_BMS_Acchg_DW.Delay_DSTATE_o");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.EnabledSubsystem1_MODE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.EnabledSubsystem1_MODE, "g_BMS_Acchg_DW.EnabledSubsystem1_MODE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.EnabledSubsystem4_MODE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.EnabledSubsystem4_MODE, "g_BMS_Acchg_DW.EnabledSubsystem4_MODE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm.Switch2, "g_BMS_Acchg_DW.Fault_Confirm.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1.Switch2, "g_BMS_Acchg_DW.Fault_Confirm1.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm1.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1_d.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1_d.Switch2, "g_BMS_Acchg_DW.Fault_Confirm1_d.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1_d.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1_d.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm1_d.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1_e.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1_e.Switch2, "g_BMS_Acchg_DW.Fault_Confirm1_e.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1_e.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1_e.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm1_e.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1_o.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1_o.Switch2, "g_BMS_Acchg_DW.Fault_Confirm1_o.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm1_o.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm1_o.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm1_o.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm2.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm2.Switch2, "g_BMS_Acchg_DW.Fault_Confirm2.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm2.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm2.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm2.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm2_j.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm2_j.Switch2, "g_BMS_Acchg_DW.Fault_Confirm2_j.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm2_j.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm2_j.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm2_j.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm2_m.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm2_m.Switch2, "g_BMS_Acchg_DW.Fault_Confirm2_m.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm2_m.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm2_m.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm2_m.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm3.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm3.Switch2, "g_BMS_Acchg_DW.Fault_Confirm3.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm3.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm3.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm3.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm_f.Switch2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm_f.Switch2, "g_BMS_Acchg_DW.Fault_Confirm_f.Switch2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Fault_Confirm_f.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Fault_Confirm_f.UnitDelay_DSTATE, "g_BMS_Acchg_DW.Fault_Confirm_f.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.FloatingDivide.Divide))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.FloatingDivide.Divide, "g_BMS_Acchg_DW.FloatingDivide.Divide");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.FloatingDivide1.Divide))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.FloatingDivide1.Divide, "g_BMS_Acchg_DW.FloatingDivide1.Divide");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator1))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator1, "g_BMS_Acchg_DW.LogicalOperator1");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator10))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator10, "g_BMS_Acchg_DW.LogicalOperator10");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator25))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator25, "g_BMS_Acchg_DW.LogicalOperator25");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator4))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator4, "g_BMS_Acchg_DW.LogicalOperator4");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator5))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator5, "g_BMS_Acchg_DW.LogicalOperator5");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator6))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator6, "g_BMS_Acchg_DW.LogicalOperator6");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.LogicalOperator8))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.LogicalOperator8, "g_BMS_Acchg_DW.LogicalOperator8");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.Logical_Operator1))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.Logical_Operator1, "g_BMS_Acchg_DW.Logical_Operator1");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.ObcInpAcUAbnormal))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.ObcInpAcUAbnormal, "g_BMS_Acchg_DW.ObcInpAcUAbnormal");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st, "g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o, "g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st, "g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.RelationalOperator5))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.RelationalOperator5, "g_BMS_Acchg_DW.RelationalOperator5");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtFunSafety_))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtFunSafety_, "g_BMS_Acchg_DW.TmpSignalConversionAtFunSafety_");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur, "g_BMS_Acchg_DW.TmpSignalConversionAtPacSOC_Cur");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_C_p");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Cel");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_d");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_g");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_i");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_Pub");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__d4");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx, "g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__gx");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay4_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay4_DSTATE, "g_BMS_Acchg_DW.UnitDelay4_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay5_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay5_DSTATE, "g_BMS_Acchg_DW.UnitDelay5_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay_DSTATE, "g_BMS_Acchg_DW.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay_DSTATE_a))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay_DSTATE_a, "g_BMS_Acchg_DW.UnitDelay_DSTATE_a");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay_DSTATE_h))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay_DSTATE_h, "g_BMS_Acchg_DW.UnitDelay_DSTATE_h");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay_DSTATE_i))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay_DSTATE_i, "g_BMS_Acchg_DW.UnitDelay_DSTATE_i");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay_DSTATE_io))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay_DSTATE_io, "g_BMS_Acchg_DW.UnitDelay_DSTATE_io");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.UnitDelay_DSTATE_p))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.UnitDelay_DSTATE_p, "g_BMS_Acchg_DW.UnitDelay_DSTATE_p");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.WaitObcStandbyTimeOut))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.WaitObcStandbyTimeOut, "g_BMS_Acchg_DW.WaitObcStandbyTimeOut");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut, "g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.data_lock3.Switch12))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.data_lock3.Switch12, "g_BMS_Acchg_DW.data_lock3.Switch12");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.data_lock3.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.data_lock3.UnitDelay_DSTATE, "g_BMS_Acchg_DW.data_lock3.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.data_lock_g.Switch12))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.data_lock_g.Switch12, "g_BMS_Acchg_DW.data_lock_g.Switch12");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.data_lock_g.UnitDelay_DSTATE))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.data_lock_g.UnitDelay_DSTATE, "g_BMS_Acchg_DW.data_lock_g.UnitDelay_DSTATE");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.flagObcVolOK))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.flagObcVolOK, "g_BMS_Acchg_DW.flagObcVolOK");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.flagS2On))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.flagS2On, "g_BMS_Acchg_DW.flagS2On");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.icLoad))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.icLoad, "g_BMS_Acchg_DW.icLoad");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_AcChrgMod))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_AcChrgMod, "g_BMS_Acchg_DW.is_AcChrgMod");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_Prepare))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_Prepare, "g_BMS_Acchg_DW.is_Prepare");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_active_c1_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_active_c1_swc_app_acchg, "g_BMS_Acchg_DW.is_active_c1_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_active_c3_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_active_c3_swc_app_acchg, "g_BMS_Acchg_DW.is_active_c3_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_active_c4_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_active_c4_swc_app_acchg, "g_BMS_Acchg_DW.is_active_c4_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_active_c5_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_active_c5_swc_app_acchg, "g_BMS_Acchg_DW.is_active_c5_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_active_c6_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_active_c6_swc_app_acchg, "g_BMS_Acchg_DW.is_active_c6_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_c1_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_c1_swc_app_acchg, "g_BMS_Acchg_DW.is_c1_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_c3_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_c3_swc_app_acchg, "g_BMS_Acchg_DW.is_c3_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_c4_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_c4_swc_app_acchg, "g_BMS_Acchg_DW.is_c4_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_c5_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_c5_swc_app_acchg, "g_BMS_Acchg_DW.is_c5_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_c6_swc_app_acchg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_c6_swc_app_acchg, "g_BMS_Acchg_DW.is_c6_swc_app_acchg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_uncharged2))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_uncharged2, "g_BMS_Acchg_DW.is_uncharged2");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.is_uncharged2_p))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.is_uncharged2_p, "g_BMS_Acchg_DW.is_uncharged2_p");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.stACChrg))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.stACChrg, "g_BMS_Acchg_DW.stACChrg");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.stCCRawNormal))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.stCCRawNormal, "g_BMS_Acchg_DW.stCCRawNormal");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.timer10min))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.timer10min, "g_BMS_Acchg_DW.timer10min");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.timer10min_l))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.timer10min_l, "g_BMS_Acchg_DW.timer10min_l");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.timer2min))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.timer2min, "g_BMS_Acchg_DW.timer2min");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.timer30ms))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.timer30ms, "g_BMS_Acchg_DW.timer30ms");
klee_make_symbolic_range(&g_BMS_Acchg_DW, (unsigned long) ( &(g_BMS_Acchg_DW.timer50ms))-(unsigned long)(&(g_BMS_Acchg_DW)),sizeof g_BMS_Acchg_DW.timer50ms, "g_BMS_Acchg_DW.timer50ms");
klee_make_symbolic_range(&g_BMS_Acchg_PrevZCX, (unsigned long) ( &(g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE))-(unsigned long)(&(g_BMS_Acchg_PrevZCX)),sizeof g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE, "g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE");
klee_make_symbolic_range(&g_BMS_Acchg_PrevZCX, (unsigned long) ( &(g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE_n))-(unsigned long)(&(g_BMS_Acchg_PrevZCX)),sizeof g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE_n, "g_BMS_Acchg_PrevZCX.Delay_Reset_ZCE_n");
klee_assume(((((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRAlarm == 1))) & (((Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 0) | (Rte_SWC_APP_FaultDebounce_FaultDeb_N000P0000_LeakRErr == 1))) & (((Rte_SWC_APP_SOE_PacSOE_MapSOE_stChgFinishTrg == 0) | (Rte_SWC_APP_SOE_PacSOE_MapSOE_stChgFinishTrg == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_dfpBMSComm == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_dfpBMSComm == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stACChgCtl == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stACChgCtl == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgSuspReq == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgSuspReq == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC2 == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stRCC2 == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeup == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWakeup == 1))) & (((((g_BMS_Acchg_DW.ChrgEndResn >= 0) & (g_BMS_Acchg_DW.ChrgEndResn <= 53))))) & (((g_BMS_Acchg_DW.Compare == 0) | (g_BMS_Acchg_DW.Compare == 1))) & (((g_BMS_Acchg_DW.Compare_f == 0) | (g_BMS_Acchg_DW.Compare_f == 1))) & (((g_BMS_Acchg_DW.Delay_DSTATE_e == 0) | (g_BMS_Acchg_DW.Delay_DSTATE_e == 1))) & (((g_BMS_Acchg_DW.Delay_DSTATE_n == 0) | (g_BMS_Acchg_DW.Delay_DSTATE_n == 1))) & (((g_BMS_Acchg_DW.Delay_DSTATE_o == 0) | (g_BMS_Acchg_DW.Delay_DSTATE_o == 1))) & (((g_BMS_Acchg_DW.EnabledSubsystem1_MODE == 0) | (g_BMS_Acchg_DW.EnabledSubsystem1_MODE == 1))) & (((g_BMS_Acchg_DW.EnabledSubsystem4_MODE == 0) | (g_BMS_Acchg_DW.EnabledSubsystem4_MODE == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm1.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm1.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm1_d.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm1_d.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm1_e.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm1_e.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm1_o.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm1_o.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm2.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm2.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm2_j.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm2_j.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm2_m.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm2_m.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm3.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm3.Switch2 == 1))) & (((g_BMS_Acchg_DW.Fault_Confirm_f.Switch2 == 0) | (g_BMS_Acchg_DW.Fault_Confirm_f.Switch2 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator1 == 0) | (g_BMS_Acchg_DW.LogicalOperator1 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator10 == 0) | (g_BMS_Acchg_DW.LogicalOperator10 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator25 == 0) | (g_BMS_Acchg_DW.LogicalOperator25 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator4 == 0) | (g_BMS_Acchg_DW.LogicalOperator4 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator5 == 0) | (g_BMS_Acchg_DW.LogicalOperator5 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator6 == 0) | (g_BMS_Acchg_DW.LogicalOperator6 == 1))) & (((g_BMS_Acchg_DW.LogicalOperator8 == 0) | (g_BMS_Acchg_DW.LogicalOperator8 == 1))) & (((g_BMS_Acchg_DW.Logical_Operator1 == 0) | (g_BMS_Acchg_DW.Logical_Operator1 == 1))) & (((g_BMS_Acchg_DW.ObcInpAcUAbnormal == 0) | (g_BMS_Acchg_DW.ObcInpAcUAbnormal == 1))) & (((g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st == 0) | (g_BMS_Acchg_DW.OutportBufferForAcChg_SlwChg_st == 1))) & (((g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o == 0) | (g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg__o == 1))) & (((g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st == 0) | (g_BMS_Acchg_DW.OutportBufferForVehSt_SlwChg_st == 1))) & (((g_BMS_Acchg_DW.RelationalOperator5 == 0) | (g_BMS_Acchg_DW.RelationalOperator5 == 1))) & (((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a == 0) | (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_a == 1))) & (((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b == 0) | (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro_P_b == 1))) & (((g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh == 0) | (g_BMS_Acchg_DW.TmpSignalConversionAtSigPro__bh == 1))) & (((g_BMS_Acchg_DW.UnitDelay4_DSTATE == 0) | (g_BMS_Acchg_DW.UnitDelay4_DSTATE == 1))) & (((g_BMS_Acchg_DW.UnitDelay5_DSTATE == 0) | (g_BMS_Acchg_DW.UnitDelay5_DSTATE == 1))) & (((g_BMS_Acchg_DW.UnitDelay_DSTATE_h == 0) | (g_BMS_Acchg_DW.UnitDelay_DSTATE_h == 1))) & (((g_BMS_Acchg_DW.UnitDelay_DSTATE_i == 0) | (g_BMS_Acchg_DW.UnitDelay_DSTATE_i == 1))) & (((g_BMS_Acchg_DW.UnitDelay_DSTATE_io == 0) | (g_BMS_Acchg_DW.UnitDelay_DSTATE_io == 1))) & (((g_BMS_Acchg_DW.UnitDelay_DSTATE_p == 0) | (g_BMS_Acchg_DW.UnitDelay_DSTATE_p == 1))) & (((g_BMS_Acchg_DW.WaitObcStandbyTimeOut == 0) | (g_BMS_Acchg_DW.WaitObcStandbyTimeOut == 1))) & (((g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut == 0) | (g_BMS_Acchg_DW.WaitVcuChrgAllowTimeOut == 1))) & (((g_BMS_Acchg_DW.data_lock3.Switch12 == 0) | (g_BMS_Acchg_DW.data_lock3.Switch12 == 1))) & (((g_BMS_Acchg_DW.data_lock3.UnitDelay_DSTATE == 0) | (g_BMS_Acchg_DW.data_lock3.UnitDelay_DSTATE == 1))) & (((g_BMS_Acchg_DW.data_lock_g.Switch12 == 0) | (g_BMS_Acchg_DW.data_lock_g.Switch12 == 1))) & (((g_BMS_Acchg_DW.data_lock_g.UnitDelay_DSTATE == 0) | (g_BMS_Acchg_DW.data_lock_g.UnitDelay_DSTATE == 1))) & (((g_BMS_Acchg_DW.flagObcVolOK == 0) | (g_BMS_Acchg_DW.flagObcVolOK == 1))) & (((g_BMS_Acchg_DW.flagS2On == 0) | (g_BMS_Acchg_DW.flagS2On == 1))) & (((g_BMS_Acchg_DW.stCCRawNormal == 0) | (g_BMS_Acchg_DW.stCCRawNormal == 1)))));
int __sys_TrueCount_2;
klee_make_symbolic(&Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit, sizeof Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit, "Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit");
klee_make_symbolic(&Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft, sizeof Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft, "Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft");
klee_make_symbolic(&Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft, sizeof Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft, "Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft");
klee_make_symbolic(&Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod, sizeof Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod, "Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod");
klee_make_symbolic(&Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC, sizeof Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC, "Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell, sizeof Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell, "Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal, sizeof Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal, "Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput");
klee_make_symbolic(&Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl, sizeof Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl, "Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.ACChg_Prohibit))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.ACChg_Prohibit, "__igv__FunSafety_FunSafety_stFaultCode.ACChg_Prohibit");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.Balance_Prohibit))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.Balance_Prohibit, "__igv__FunSafety_FunSafety_stFaultCode.Balance_Prohibit");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_LimitCTkw))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.ChgSOP_LimitCTkw, "__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_LimitCTkw");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_Prohibit))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.ChgSOP_Prohibit, "__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_Prohibit");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.DCChg_Prohibit))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.DCChg_Prohibit, "__igv__FunSafety_FunSafety_stFaultCode.DCChg_Prohibit");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Limit30kw))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Limit30kw, "__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Limit30kw");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_LimitCTkw))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_LimitCTkw, "__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_LimitCTkw");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Prohibit))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Prohibit, "__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Prohibit");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Immediately))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.PowerOff_Immediately, "__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Immediately");
klee_make_symbolic_range(&__igv__FunSafety_FunSafety_stFaultCode, (unsigned long) ( &(__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Req))-(unsigned long)(&(__igv__FunSafety_FunSafety_stFaultCode)),sizeof __igv__FunSafety_FunSafety_stFaultCode.PowerOff_Req, "__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Req");
klee_assume(((((((Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit >= 0) & (Rte_SWC_APP_ChgCurLimit_ChgiLimit_iLimit_iLimit <= 390000))))) & (((Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft == 0) | (Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempHighSeriousSoft == 1))) & (((Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft == 0) | (Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_DfpTempLowSoft == 1))) & (((((Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod >= 0) & (Rte_SWC_APP_FunctionSafety_FunSafety_FunSafety_stBcuOperMod <= 7))))) & (((((Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC >= 0) & (Rte_SWC_APP_SOC_PacSOC_CurSOC_ratSOC <= 1000))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_CellVol_vMaxCell <= 8191))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_CellVol_vTotal <= 8000))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_dtyCP <= 1000))))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_flagOBC1Rx == 1))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery >= -1500000) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_iBattery <= 1500000))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_iObcMaxChrgOutpIAvl <= 1000))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_powExtHvPwrCnsAct <= 255))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stBcuChrgMod <= 10))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCCRaw <= 12))))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stCPSts == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgAllwdFlg == 1))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgIReqLimFac <= 3))))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stChrgUnlckILimReq == 1))) & (((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts == 0) | (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stObcS2Sts == 1))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stPwrReq <= 6))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_stWorkOBC <= 6))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_vChgACInput <= 500))))) & (((((Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl >= 0) & (Rte_SWC_APP_SignalProcess_SigPro_PubSig_vObcMaxChrgOutpUAvl <= 10000))))) & (((__igv__FunSafety_FunSafety_stFaultCode.ACChg_Prohibit == 0) | (__igv__FunSafety_FunSafety_stFaultCode.ACChg_Prohibit == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.Balance_Prohibit == 0) | (__igv__FunSafety_FunSafety_stFaultCode.Balance_Prohibit == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_LimitCTkw == 0) | (__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_LimitCTkw == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_Prohibit == 0) | (__igv__FunSafety_FunSafety_stFaultCode.ChgSOP_Prohibit == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.DCChg_Prohibit == 0) | (__igv__FunSafety_FunSafety_stFaultCode.DCChg_Prohibit == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Limit30kw == 0) | (__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Limit30kw == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_LimitCTkw == 0) | (__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_LimitCTkw == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Prohibit == 0) | (__igv__FunSafety_FunSafety_stFaultCode.DisChgSOP_Prohibit == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Immediately == 0) | (__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Immediately == 1))) & (((__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Req == 0) | (__igv__FunSafety_FunSafety_stFaultCode.PowerOff_Req == 1)))));
Runnable_AcChg();
__sys_TrueCount_2 = _AUX__trueCount_2(Rte_SWC_APP_AcChg_AcChg_SlwChg_dfpOBCCurOver == 0, Rte_SWC_APP_AcChg_AcChg_SlwChg_dfpOBCCurOver == 1);
klee_assert(__sys_TrueCount_2 == 1);
}

#include "__cf_power_PVarray_grid_det.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "power_PVarray_grid_det_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "power_PVarray_grid_det.h"
#include "power_PVarray_grid_det_capi.h"
#include "power_PVarray_grid_det_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"power_PVarray_grid_det/From Workspace" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 0 , TARGET_STRING (
"power_PVarray_grid_det/From Workspace1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 2 , 0 , TARGET_STRING ( "power_PVarray_grid_det/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 4 , 0 , TARGET_STRING ( "power_PVarray_grid_det/B1/Kv" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"power_PVarray_grid_det/B1/Kv1" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1
} , { 6 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Add1" ) , TARGET_STRING ( "Vd" ) , 0 , 0 , 0
, 0 , 1 } , { 8 , 0 , TARGET_STRING ( "power_PVarray_grid_det/Pmean/WkW" ) ,
TARGET_STRING ( "Pmean_PV (kW)" ) , 0 , 0 , 0 , 0 , 2 } , { 9 , 0 ,
TARGET_STRING ( "power_PVarray_grid_det/Subsystem1/Gain" ) , TARGET_STRING (
"-I/V" ) , 0 , 0 , 0 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem1/W2kW" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 11 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Vdc_ref1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 3 } , { 12 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Unit Delay" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Vdc /do not delete this gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Vdc 1/do not delete this gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Discrete-Time Integrator"
) , TARGET_STRING ( "Delta_D" ) , 0 , 0 , 0 , 0 , 2 } , { 16 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/MPPT  Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/div1"
) , TARGET_STRING ( "dI/dV" ) , 0 , 0 , 0 , 0 , 2 } , { 18 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Add1"
) , TARGET_STRING ( "error" ) , 0 , 0 , 0 , 0 , 2 } , { 19 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /PWM Generator (DC-DC)/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Product" ) , TARGET_STRING (
"Idiode" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Product5" ) , TARGET_STRING (
"IRsh_5%" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Add1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/IL ctrl/Product1" ) , TARGET_STRING ( "IL" )
, 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/I_PV/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/V_PV/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Ltot_pu1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 27 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Ltot_pu2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 28 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Rtot_pu1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Rtot_pu5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 30 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Add1" ) , TARGET_STRING
( "Feedforward" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Add3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 3 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/V->pu" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 34 , 39 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Full bridge (1-ph)"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 39 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Full bridge (1-ph)"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 40 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Half bridge (1-ph) and 3-ph bridge"
) , TARGET_STRING ( "States" ) , 0 , 0 , 2 , 0 , 1 } , { 37 , 0 ,
TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 38 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 3 } , { 39 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 40 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 41 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 42 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Add1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 45 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/Rtot_pu3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Constant" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Constant1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/mode2phaseR" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 56 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/mode2phaseS" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/phase2modeR" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/phase2modeS" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Constant" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Constant1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain7" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/mode2phaseR" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/mode2phaseS" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 65 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/phase2modeR" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 66 , 0 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/phase2modeS" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 67 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 68 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 69 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 70 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 71 , 0 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/BAL/Unit Delay" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 1 } , { 72 , 13 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Neg. Seq. Computation"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 73 , 14 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Pos. Seq. Computation"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 74 , 15 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Zero Seq. Computation"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 75 , 22 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Neg. Seq. Computation"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 76 , 23 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Pos. Seq. Computation"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 77 , 24 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Zero Seq. Computation"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 78 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/K1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 2 } , { 79 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Integ4" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 80 , 0 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 81 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 82 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI/Saturate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 83 , 39 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Full bridge (1-ph)/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 84 , 39 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Full bridge (1-ph)/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 85 , 40 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Half bridge (1-ph) and 3-ph bridge/Sum3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 86 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Multiport Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 87 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Multiport Switch3"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 88 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Multiport Switch4"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 90 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 91 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI/Saturate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 92 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 95 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 97 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 101 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 102 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 103 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 104 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 105 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 106 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 107 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 108 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 109 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 110 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 111 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 112 , 13 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Neg. Seq. Computation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 113 , 14 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Pos. Seq. Computation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 114 , 15 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Zero Seq. Computation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 115 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 116 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 117 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 118 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 119 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 120 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 121 , 22 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Neg. Seq. Computation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 122 , 23 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Pos. Seq. Computation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 123 , 24 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Zero Seq. Computation/Gain3"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 2 } , { 124 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem2/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 125 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 126 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete-Time Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 127 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Initial"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 128 , 0 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 129 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 2 } , { 130 , 34 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 131 , 34 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 132 , 35 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 133 , 35 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 134 , 36 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 135 , 36 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 136 , 37 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 137 , 37 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 138 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 139 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 140 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 141 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 142 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 143 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 144 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 145 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 146 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 147 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 148 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 149 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 150 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 151 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 152 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 153 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Math Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 154 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Saturation1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 155 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 156 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 157 , 34 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 158 , 34 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 159 , 35 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 160 , 35 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 161 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 162 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 163 , 36 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 164 , 36 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 165 , 37 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 166 , 37 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 167 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 168 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 169 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 170 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 171 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 172 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 173 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 174 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 175 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 176 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 177 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 178 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 179 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 180 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 181 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 182 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 183 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 184 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 185 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 186 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 187 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 188 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 189 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 190 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 191 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 192 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 193 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 194 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 195 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 196 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 197 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 198 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 199 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 200 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 201 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 202 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 203 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 204 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/K1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 205 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 206 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 207 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*x1(k) + B*u1(k) "
) , TARGET_STRING ( "x1(k+1)" ) , 0 , 0 , 0 , 0 , 2 } , { 208 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*x2(k) + B*u2(k)"
) , TARGET_STRING ( "x2(k+1)" ) , 0 , 0 , 0 , 0 , 2 } , { 209 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*X(k)+D*u(k)"
) , TARGET_STRING ( " y(k)" ) , 0 , 0 , 0 , 0 , 2 } , { 210 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 211 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Gain"
) , TARGET_STRING ( "Delay" ) , 0 , 0 , 0 , 0 , 2 } , { 212 , 0 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 213 , 32 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 214 , 32 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 215 , 33 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 216 , 33 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 217 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 218 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 219 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 220 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 221 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 222 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 223 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 224 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 225 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 226 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 227 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 228 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 229 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 230 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 231 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 232 , 0 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 233 , 32 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 234 , 32 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 235 , 33 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 236 , 33 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 237 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 238 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Gain"
) , TARGET_STRING ( "Delay" ) , 0 , 0 , 0 , 0 , 2 } , { 239 , 30 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 240 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Integ4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 241 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Gain"
) , TARGET_STRING ( "Delay" ) , 0 , 0 , 0 , 0 , 2 } , { 242 , 30 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 243 , 28 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 244 , 28 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 245 , 29 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 246 , 29 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 247 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 248 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 249 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 250 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 251 , 30 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1/Compare"
) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 252 , 28 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 253 , 28 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 254 , 29 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 255 , 29 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1/Fcn1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 256 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique "
) , TARGET_STRING ( "T_MPPT" ) , 0 , 0 , 0 } , { 257 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique "
) , TARGET_STRING ( "Dinit" ) , 0 , 0 , 0 } , { 258 , TARGET_STRING (
"power_PVarray_grid_det/PV Array" ) , TARGET_STRING ( "Npar" ) , 0 , 0 , 0 }
, { 259 , TARGET_STRING ( "power_PVarray_grid_det/PV Array" ) , TARGET_STRING
( "Nser" ) , 0 , 0 , 0 } , { 260 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control" ) , TARGET_STRING ( "Vnom_dc" ) , 0 , 0
, 0 } , { 261 , TARGET_STRING ( "power_PVarray_grid_det/From Workspace" ) ,
TARGET_STRING ( "Time0" ) , 0 , 7 , 0 } , { 262 , TARGET_STRING (
"power_PVarray_grid_det/From Workspace" ) , TARGET_STRING ( "Data0" ) , 0 , 7
, 0 } , { 263 , TARGET_STRING ( "power_PVarray_grid_det/From Workspace1" ) ,
TARGET_STRING ( "Time0" ) , 0 , 7 , 0 } , { 264 , TARGET_STRING (
"power_PVarray_grid_det/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 0 ,
7 , 0 } , { 265 , TARGET_STRING ( "power_PVarray_grid_det/Deblock Converters"
) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 266 , TARGET_STRING (
"power_PVarray_grid_det/Deblock Converters" ) , TARGET_STRING ( "Before" ) ,
0 , 0 , 0 } , { 267 , TARGET_STRING (
"power_PVarray_grid_det/Deblock Converters" ) , TARGET_STRING ( "After" ) , 0
, 0 , 0 } , { 268 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA" ) , TARGET_STRING (
"Frequency" ) , 0 , 0 , 0 } , { 269 , TARGET_STRING (
"power_PVarray_grid_det/B1/Kv" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
270 , TARGET_STRING ( "power_PVarray_grid_det/B1/Kv1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 271 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 272 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 273 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /Deblock MPPT"
) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 274 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /Deblock MPPT"
) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 275 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /Deblock MPPT"
) , TARGET_STRING ( "After" ) , 0 , 0 , 0 } , { 276 , TARGET_STRING (
"power_PVarray_grid_det/Pmean/WkW" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 277 , TARGET_STRING ( "power_PVarray_grid_det/Subsystem1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 278 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem1/W2kW" ) , TARGET_STRING ( "Gain" ) , 0 , 0
, 0 } , { 279 , TARGET_STRING ( "power_PVarray_grid_det/VSC Control/Iq_ref" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 280 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Vdc_ref1" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 281 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 282 , TARGET_STRING (
"power_PVarray_grid_det/Vdc /do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 283 , TARGET_STRING (
"power_PVarray_grid_det/Vdc 1/do not delete this gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 284 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 285 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 286 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Dead Zone"
) , TARGET_STRING ( "LowerValue" ) , 0 , 0 , 0 } , { 287 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Dead Zone"
) , TARGET_STRING ( "UpperValue" ) , 0 , 0 , 0 } , { 288 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 289 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Discrete-Time Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 290 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Discrete-Time Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 291 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Discrete-Time Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 292 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/MPPT  Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 293 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/deg2rad"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 294 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 295 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 296 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 297 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 298 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 299 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Switch1"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 300 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Rsh_array_5%Sref" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 301 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Tref_K1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 302 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Tref_K2" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 303 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/one" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 304 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/one1" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 305 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/EgRef" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 306 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/dEgdT" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 307 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/IL ctrl/0_K" ) , TARGET_STRING ( "Value" ) ,
0 , 0 , 0 } , { 308 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/IL ctrl/IL_module" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 309 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/IL ctrl/Tref_K" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 310 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/IL ctrl/1//Sref" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 311 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/IL ctrl/alpha_Isc" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 312 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/I_PV/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 313 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/V_PV/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 314 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Deg->Rad" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 315 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 316 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI" ) , TARGET_STRING (
"P" ) , 0 , 0 , 0 } , { 317 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI" ) , TARGET_STRING (
"I" ) , 0 , 0 , 0 } , { 318 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 319 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 320 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Ltot_pu1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 321 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Ltot_pu2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 322 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Rtot_pu1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 323 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Rtot_pu5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 324 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 325 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 326 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/V->pu" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 327 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/V->pu1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 328 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 329 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 330 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 331 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Constant5" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 332 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 333 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 334 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 335 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 336 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 337 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 338 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "SinH" ) , 0 , 2 , 0 } , { 339 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "CosH" ) , 0 , 2 , 0 } , { 340 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "SinPhi" ) , 0 , 2 , 0 } , { 341 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Sine Wave" ) ,
TARGET_STRING ( "CosPhi" ) , 0 , 2 , 0 } , { 342 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 343 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 344 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 345 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 346 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 347 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Uabc_ref Generation  max (m) = 1/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 348 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI" ) , TARGET_STRING ( "P"
) , 0 , 0 , 0 } , { 349 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI" ) , TARGET_STRING ( "I"
) , 0 , 0 , 0 } , { 350 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 351 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 352 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "AS_param" ) , 0 , 9 , 0 } , { 353 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "BS_param" ) , 0 , 10 , 0 } , { 354 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "CS_param" ) , 0 , 11 , 0 } , { 355 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "DS_param" ) , 0 , 12 , 0 } , { 356 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ) ,
TARGET_STRING ( "X0_param" ) , 0 , 13 , 0 } , { 357 , TARGET_STRING (
 "power_PVarray_grid_det/3-Level Bridge/Model/Add dummy gates & delays  for clamping diodes/zero to generate dummy diode gate and delay  signals"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 358 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 359 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 360 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 361 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 362 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 363 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave A" ) ,
TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 364 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 365 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 366 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 367 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 368 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 369 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave B" ) ,
TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 370 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 371 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 372 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 373 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 374 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 375 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/120kV 2500MVA/Model/Sine Wave C" ) ,
TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 376 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 377 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 378 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/(1+h)//Z" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 379 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/(1+h)//Z " ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 380 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 381 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 382 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 383 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain6" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 384 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain7" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 385 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Gain8" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 386 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/mode2phaseR" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 387 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/mode2phaseS" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 388 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/phase2modeR" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 389 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/phase2modeS" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 390 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 391 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 392 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/(1+h)//Z" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 393 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/(1+h)//Z " ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 394 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 395 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain4" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 396 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 397 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain6" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 398 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain7" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 399 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Gain8" ) ,
TARGET_STRING ( "Gain" ) , 0 , 8 , 0 } , { 400 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/mode2phaseR" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 401 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/mode2phaseS" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 402 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/phase2modeR" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 403 , TARGET_STRING (
"power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/phase2modeS" ) ,
TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 404 , TARGET_STRING (
"power_PVarray_grid_det/B1/Model/I A:/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 405 , TARGET_STRING (
"power_PVarray_grid_det/B1/Model/I B:/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 406 , TARGET_STRING (
"power_PVarray_grid_det/B1/Model/I C:/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 407 , TARGET_STRING (
"power_PVarray_grid_det/B1/Model/U A:/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 408 , TARGET_STRING (
"power_PVarray_grid_det/B1/Model/U B:/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 409 , TARGET_STRING (
"power_PVarray_grid_det/B1/Model/U C:/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 410 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 411 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 412 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 413 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 414 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 415 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 416 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 417 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 418 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 419 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 420 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 421 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 422 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 423 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 424 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 425 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 426 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 427 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 428 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 429 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 430 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 431 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 432 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 433 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 434 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 435 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 436 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /PWM Generator (DC-DC)/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 437 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/BAL/Unit Delay" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 438 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Subsystem/EgRef" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 439 , TARGET_STRING (
"power_PVarray_grid_det/PV Array/Diode Rsh/Subsystem/k1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 440 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A"
) , TARGET_STRING ( "Freq" ) , 0 , 0 , 0 } , { 441 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B"
) , TARGET_STRING ( "Freq" ) , 0 , 0 , 0 } , { 442 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C"
) , TARGET_STRING ( "Freq" ) , 0 , 0 , 0 } , { 443 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 444 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 445 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 446 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/deg->rad"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 447 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/deg->rad1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 448 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/deg->rad2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 449 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/rad->deg1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 450 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A"
) , TARGET_STRING ( "Freq" ) , 0 , 0 , 0 } , { 451 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B"
) , TARGET_STRING ( "Freq" ) , 0 , 0 , 0 } , { 452 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C"
) , TARGET_STRING ( "Freq" ) , 0 , 0 , 0 } , { 453 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 454 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 455 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 456 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/deg->rad"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 457 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/deg->rad1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 458 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/deg->rad2"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 459 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/rad->deg1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 460 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/K1" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 461 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/K2" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 462 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Integ4" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 463 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Integ4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 464 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 465 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 466 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Unit Delay" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 467 , TARGET_STRING (
"power_PVarray_grid_det/Subsystem2/Mean/Model/Unit Delay1" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 0 , 0 } , { 468 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI/Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 469 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/Current Regulator/PI/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 470 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0"
) , TARGET_STRING ( "Alignment" ) , 0 , 0 , 0 } , { 471 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0"
) , TARGET_STRING ( "Alignment" ) , 0 , 0 , 0 } , { 472 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Full bridge (1-ph)/S"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 473 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Full bridge (1-ph)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 474 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Half bridge (1-ph) and 3-ph bridge/S"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 475 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Constant11"
) , TARGET_STRING ( "Value" ) , 0 , 16 , 0 } , { 476 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Constant12"
) , TARGET_STRING ( "Value" ) , 0 , 16 , 0 } , { 477 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Constant13"
) , TARGET_STRING ( "Value" ) , 0 , 16 , 0 } , { 478 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/State-to-Pulses Decoder/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 479 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI/Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 480 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/VDC Regulator/PI/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 481 , TARGET_STRING (
"power_PVarray_grid_det/powergui/EquivalentModel1/Sources/SwitchCurrents" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 482 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 483 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 484 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 17 , 0 } , { 485 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 486 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 487 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 488 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 17 , 0 } , { 489 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 490 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 491 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 492 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 17 , 0 } , { 493 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 494 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 495 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 496 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 17 , 0 } , { 497 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 498 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 499 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 500 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 18 , 0 } , { 501 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 502 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 503 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 504 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 18 , 0 } , { 505 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 506 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 507 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 508 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 18 , 0 } , { 509 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 510 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 511 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 512 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 18 , 0 } , { 513 , TARGET_STRING (
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 514 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 515 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 516 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 517 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 518 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 519 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 520 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 521 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 522 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 523 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 524 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 525 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 526 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 527 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 528 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 529 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 530 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 531 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 532 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /PWM Generator (DC-DC)/Sawtooth Generator/Model/1\\ib1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 533 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 534 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 535 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 536 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 537 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 538 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 539 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 540 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 541 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 542 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 543 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 544 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 545 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 546 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 547 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 548 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 549 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 550 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 551 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 552 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 553 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 554 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 555 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 556 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 557 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 558 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 559 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 560 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 561 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 562 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 563 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 564 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 565 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 566 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 567 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 568 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 569 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 570 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 571 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 572 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Neg. Seq. Computation/Gain1"
) , TARGET_STRING ( "Gain" ) , 2 , 8 , 0 } , { 573 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Neg. Seq. Computation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 574 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Pos. Seq. Computation/Gain1"
) , TARGET_STRING ( "Gain" ) , 2 , 8 , 0 } , { 575 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Pos. Seq. Computation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 576 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Zero Seq. Computation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 577 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 578 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 579 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 580 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 581 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 582 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 583 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 584 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 585 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 586 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 587 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 588 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 589 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 590 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 591 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 592 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 593 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 594 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 595 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 596 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 597 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 598 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 599 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 600 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 601 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 602 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 603 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Rad->Deg."
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 604 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/cos(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 605 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/cos(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 606 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/cos(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 607 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/cos(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 608 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/cos(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 609 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/cos(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 610 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/sin(wt)"
) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 611 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/sin(wt)"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 612 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/sin(wt)"
) , TARGET_STRING ( "SinH" ) , 0 , 0 , 0 } , { 613 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/sin(wt)"
) , TARGET_STRING ( "CosH" ) , 0 , 0 , 0 } , { 614 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/sin(wt)"
) , TARGET_STRING ( "SinPhi" ) , 0 , 0 , 0 } , { 615 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/sin(wt)"
) , TARGET_STRING ( "CosPhi" ) , 0 , 0 , 0 } , { 616 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Neg. Seq. Computation/Gain1"
) , TARGET_STRING ( "Gain" ) , 2 , 8 , 0 } , { 617 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Neg. Seq. Computation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 618 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Pos. Seq. Computation/Gain1"
) , TARGET_STRING ( "Gain" ) , 2 , 8 , 0 } , { 619 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Pos. Seq. Computation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 620 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Zero Seq. Computation/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 621 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem2/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 622 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem2/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 623 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem2/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 624 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem2/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 625 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete"
) , TARGET_STRING ( "Kp" ) , 0 , 0 , 0 } , { 626 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete"
) , TARGET_STRING ( "Kd" ) , 0 , 0 , 0 } , { 627 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete"
) , TARGET_STRING ( "Init" ) , 0 , 0 , 0 } , { 628 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 629 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 630 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 631 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Gain10"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 632 , TARGET_STRING (
"power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Initial"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 633 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Rate Limiter"
) , TARGET_STRING ( "RisingSlewLimit" ) , 0 , 0 , 0 } , { 634 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Rate Limiter"
) , TARGET_STRING ( "FallingSlewLimit" ) , 0 , 0 , 0 } , { 635 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Rate Limiter"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 636 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 637 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 638 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 639 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/abc to Alpha-Beta-Zero/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 640 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/abc to Alpha-Beta-Zero/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 641 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 642 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Compare To Constant1"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 643 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/abc to Alpha-Beta-Zero/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 644 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/abc to Alpha-Beta-Zero/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 645 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Triangle Generator/Model/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 646 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Triangle Generator/Model/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 647 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Triangle Generator/Model/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 648 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Triangle Generator/Model/1\\ib1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 649 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Triangle Generator/Model/Lookup Table"
) , TARGET_STRING ( "InputValues" ) , 0 , 8 , 0 } , { 650 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PWM Generator (3-Level)/Triangle Generator/Model/Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 651 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 652 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 653 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 654 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 655 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 656 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 657 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 658 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 659 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 660 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 661 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 662 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 663 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 664 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 665 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 666 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 667 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 668 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 669 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 670 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 671 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 672 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 673 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 674 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 675 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 676 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 677 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 678 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 679 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 680 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 681 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 682 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 683 ,
TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 684 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 685 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 686 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 687 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 688 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 689 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 690 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Mean1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 691 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Gain"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 692 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 693 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 694 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Discrete-Time Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 695 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Discrete-Time Integrator"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 696 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Discrete-Time Integrator"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 697 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 698 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 699 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Discrete Derivative "
) , TARGET_STRING ( "Denominator" ) , 0 , 15 , 0 } , { 700 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Discrete/Discrete Derivative "
) , TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 701 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0"
) , TARGET_STRING ( "Alignment" ) , 0 , 0 , 0 } , { 702 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 703 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 704 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 705 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/abc to dq1/Alpha-Beta-Zero to dq0/Subsystem1/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 706 , TARGET_STRING
(
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 707 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 708 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 709 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 710 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 711 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 712 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 713 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 714 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 715 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 716 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 717 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 718 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 719 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 720 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 721 , TARGET_STRING (
 "power_PVarray_grid_det/MPPT Controller using  \"Incremental Conductance  + Integral Regulator \"  technique /MPPT/Fourier1/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 722 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 723 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 724 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 725 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 726 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 727 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 728 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 729 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 730 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 731 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 732 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 733 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 734 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 735 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 736 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 737 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 738 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 739 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 740 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 741 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 742 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 743 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 744 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 745 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 746 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 747 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 748 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 749 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 750 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 751 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 752 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 753 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 754 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 755 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 756 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 757 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 758 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 759 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 760 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 761 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 762 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 763 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 764 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 765 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 766 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 767 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 768 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 769 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 770 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 771 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 772 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 773 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 774 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 775 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 776 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 777 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 778 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 779 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 780 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 781 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 782 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 783 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 784 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 785 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 786 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 787 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 788 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 789 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 790 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 791 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 792 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 793 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 794 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 795 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 796 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 797 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 798 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 799 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 800 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 801 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 802 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 803 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 804 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 805 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 806 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 807 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 808 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 809 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 810 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/K1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 811 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/K2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 812 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 813 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 814 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 815 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 816 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 817 ,
TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 818 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/D*u(k)"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 819 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/Delay_x1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 820 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/Delay_x2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 821 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 822 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 823 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 824 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/To avoid division  by zero"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 825 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/To avoid division  by zero"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 826 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 827 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 828 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Compare To Constant1"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 829 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 830 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/abc to Alpha-Beta-Zero/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 831 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 832 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 833 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 834 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 835 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 836 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 837 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 838 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 839 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 840 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 841 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 842 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 843 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 844 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 845 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 846 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 847 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 848 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 849 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 850 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 851 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 852 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 853 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 854 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 855 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 856 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 857 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 858 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 859 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 860 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 861 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 862 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 863 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 864 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 865 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 866 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 867 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 868 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 869 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 870 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 871 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 872 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 873 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 874 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 875 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 876 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 877 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 878 , TARGET_STRING (
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 879 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0"
) , TARGET_STRING ( "Alignment" ) , 0 , 0 , 0 } , { 880 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)/A11"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 881 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)/A12"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 882 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)/A21"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 883 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/A*k(k-1)/A22"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 884 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))/B11"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 885 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/B*(u(k)+u(k-1))/B21"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 886 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)/C11"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 887 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Second-Order Filter/Model/C*x(k)/C12"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 888 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 889 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Correction subsystem/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 890 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 891 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 892 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 893 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 894 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 895 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/abc to dq0/Alpha-Beta-Zero to dq0/Subsystem1/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 896 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 897 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 898 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 899 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/To avoid division  by zero"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 900 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/To avoid division  by zero"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 901 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 902 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 903 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Integ4"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 904 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Integ4"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 905 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/To avoid division  by zero"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 906 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/To avoid division  by zero"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 907 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 908 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 909 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Compare To Constant1"
) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 910 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 911 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/abc to Alpha-Beta-Zero/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 14 , 0 } , { 912 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 913 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Correction subsystem/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 914 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 915 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 916 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 917 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 918 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 919 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Correction subsystem/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 920 ,
TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P1" ) , 0 , 0 , 0 } , { 921 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P2" ) , 0 , 0 , 0 } , { 922 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P3" ) , 0 , 0 , 0 } , { 923 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay/S-Function"
) , TARGET_STRING ( "P4" ) , 0 , 0 , 0 } , { 924 , TARGET_STRING (
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem - pi//2 delay/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 925 , TARGET_STRING
(
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/abc ->dq0/Alpha-Beta-Zero to dq0/Subsystem1/dq"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 15 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 926 , TARGET_STRING ( "Ts_Control" ) , 0 , 0 , 0
} , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . owrpd40r4f , & rtB . ccyyfrva3i ,
& rtB . jz2jpueldv [ 0 ] , & rtB . achbklegbl , & rtB . ok1tffrvb3 [ 0 ] , &
rtB . mv4y4lj3e3 [ 0 ] , & rtB . e0saic3iqd , & rtB . kjorerjuot , & rtB .
lctnqgrkcy , & rtB . oxh5wmulq0 , & rtB . h52y1dzqu1 , & rtB . gzrqmoukkq , &
rtB . frbia4we4j [ 0 ] , & rtB . e5zlxkpqts , & rtB . kxilaoyxe4 , & rtB .
obrq44eota , & rtB . iiklvtcoqq , & rtB . mq3r0i5j44 , & rtB . jr0qw103fz , &
rtB . ix54lu0252 , & rtB . iyyam0ynm2 , & rtB . difkr25iin , & rtB .
dy1my21n3p , & rtB . hd010gossx , & rtB . ipwc4g5kbq , & rtB . favzhhh3hu , &
rtB . nbftkfipzp , & rtB . ibfymfexhi , & rtB . i0kbmmrhrv , & rtB .
a5q44iw4oh , & rtB . kroikqwecg , & rtB . lkufp4wpyq , & rtB . grnuxqrq3j [ 0
] , & rtB . brgco0dpcf [ 0 ] , & rtB . at1rfpdjxp , & rtB . ipvjqdjexb , &
rtB . mal1o3rrov [ 0 ] , & rtB . jdg1nddwa0 , & rtB . ly0wt10wsm , & rtB .
owk5afwjt2 , & rtB . eknyv0afyk , & rtB . k5lqperbwq , & rtB . donxx0azrh [ 0
] , & rtB . e3pw2tx0gc , & rtB . g0imozkyls [ 0 ] , & rtB . gcfwkua3e1 , &
rtB . pg1alta3lu [ 0 ] , & rtB . ay1bqtoa42 [ 0 ] , & rtB . ncd5m41xqs , &
rtB . ie5urghlgt , & rtB . jkyah5nk3q , & rtB . f3xnh04wjh [ 0 ] , & rtB .
nkctcgpqso [ 0 ] , & rtB . aykkzxyrll [ 0 ] , & rtB . lupahu4br1 [ 0 ] , &
rtB . hmjyxctvar [ 0 ] , & rtB . he14cjinkd [ 0 ] , & rtB . ekctuybauk [ 0 ]
, & rtB . kxvjrbtlec [ 0 ] , & rtB . hllfnshuyf [ 0 ] , & rtB . m5n0tvijea [
0 ] , & rtB . orhpipghdi [ 0 ] , & rtB . fdp5wsxjlw [ 0 ] , & rtB .
mj5uxto5hm [ 0 ] , & rtB . gjo03tzedv [ 0 ] , & rtB . efq03tkmq4 [ 0 ] , &
rtB . ajmuihbldm [ 0 ] , & rtB . ey2rizmais , & rtB . csmg24xt1h , & rtB .
hwalic32e0 , & rtB . j3a4ma3ewn , & rtB . psylw5ftqo , & rtB . msv4qqksksf .
bug11j5vri . re , & rtB . gfc0o4gmcx . bug11j5vri . re , & rtB . g23t01ww0z0
. fr3ijlre3u . re , & rtB . dn2wcdma5d . bug11j5vri . re , & rtB . n45kzzuand
. bug11j5vri . re , & rtB . ojknbv4is1 . fr3ijlre3u . re , & rtB . gudywxfntc
, & rtB . pjzrk5uavg , & rtB . kc5hguu52m , & rtB . bwti5wt3ya [ 0 ] , & rtB
. fezqd2sumv [ 0 ] , & rtB . ipvjqdjexb , & rtB . at1rfpdjxp , & rtB .
mal1o3rrov [ 0 ] , & rtB . oiecajgznh [ 0 ] , & rtB . gfb5fstonv [ 0 ] , &
rtB . imrfandgqo [ 0 ] , & rtB . cligl2qrn5 , & rtB . e0g5n03rqo , & rtB .
djdxiwj2ib , & rtB . d24w5xgal0 [ 0 ] , & rtB . o1mde0n1yk [ 0 ] , & rtB .
okqn5bgutk [ 0 ] , & rtB . pttvbb2pav [ 0 ] , & rtB . apxmnwrgff [ 0 ] , &
rtB . c0xf4gasvx [ 0 ] , & rtB . b5wfzsal13 [ 0 ] , & rtB . okly2bzqby [ 0 ]
, & rtB . hd1nsijzpc , & rtB . ke3ol5ko23 , & rtB . e4ur0oizsv , & rtB .
jcl1buglq4 , & rtB . kereqbn1t4 , & rtB . o5d0soeen3 , & rtB . dfnqmp3zop , &
rtB . dd0kvpdeik , & rtB . hjshci25up , & rtB . nzyqolvt1e , & rtB .
hez2f5zeuo , & rtB . hkupangjj2 , & rtB . msv4qqksksf . bug11j5vri . re , &
rtB . gfc0o4gmcx . bug11j5vri . re , & rtB . g23t01ww0z0 . fr3ijlre3u . re ,
& rtB . og54jqpe51 , & rtB . m2m5qdd1is , & rtB . ma5v5wrx2r , & rtB .
pb25q3i5y0 , & rtB . aefoovdb2f , & rtB . bfc0ew4l5x , & rtB . dn2wcdma5d .
bug11j5vri . re , & rtB . n45kzzuand . bug11j5vri . re , & rtB . ojknbv4is1 .
fr3ijlre3u . re , & rtB . hz05ifo1vv , & rtB . hbphtpnzzj , & rtB .
nzglgwuqma , & rtB . ogvlsk02mg , & rtB . agnrdamyfj , & rtB . n10p5f0juc , &
rtB . ochgqd2u0r . eyzp44vp0r , & rtB . ochgqd2u0r . ni0yn3ls4o , & rtB .
m1irskyirr . oxbdpl4uxb , & rtB . m1irskyirr . eigeh3vm4p , & rtB .
lbykfmi30w . eyzp44vp0r , & rtB . lbykfmi30w . ni0yn3ls4o , & rtB .
ox1z1gld2w . oxbdpl4uxb , & rtB . ox1z1gld2w . eigeh3vm4p , & rtB .
kwtekdraxk [ 0 ] , & rtB . oi4fxfp2u0 , & rtB . l5ghcw4oar , & rtB .
b22ymbd3mf , & rtB . aq0wk5w32c , & rtB . m3yfzukqcw , & rtB . cv4udxzzhc , &
rtB . j0g2g0oaks , & rtB . mof1poi4zr , & rtB . ad3kqeqisd , & rtB .
f5nmukgsc4 , & rtB . eltfn04b2v , & rtB . mgvjcdjnon , & rtB . daq4mncg1i , &
rtB . d5y15rbkwz , & rtB . hbphtpnzzj , & rtB . lru24ttam4 , & rtB .
bwnjdjpcaw , & rtB . oiidjdpb5o , & rtB . ochgqd2u0r . eyzp44vp0r , & rtB .
ochgqd2u0r . ni0yn3ls4o , & rtB . m1irskyirr . oxbdpl4uxb , & rtB .
m1irskyirr . eigeh3vm4p , & rtB . e5omhkiopk , & rtB . f5wahbcw2x , & rtB .
lbykfmi30w . eyzp44vp0r , & rtB . lbykfmi30w . ni0yn3ls4o , & rtB .
ox1z1gld2w . oxbdpl4uxb , & rtB . ox1z1gld2w . eigeh3vm4p , & rtB .
o1zxhzbujc , & rtB . hnzqj2225r , & rtB . h1um2aqafa , & rtB . b34qw0i1wv , &
rtB . ci4i34cvpj , & rtB . edvtkbxssc , & rtB . eznbr5gxnf , & rtB .
iaqaqqt1jc , & rtB . pve14kcnew , & rtB . lxvfcojox3 , & rtB . glnliw2gbu , &
rtB . f2y4jldafv , & rtB . dqmyx5uih2 , & rtB . o2uxxe2t45 , & rtB .
ft4dza43vu , & rtB . boavmh4ejw , & rtB . kinr121xse , & rtB . hahpxwmtiw , &
rtB . drfqwkasyq , & rtB . e1ss3jmyjc , & rtB . b0y5txfras , & rtB .
aytj15pdge , & rtB . eyumafsgjn , & rtB . oihdqvbn2c , & rtB . dts2mafck0 , &
rtB . b4cw0lelim , & rtB . a2dep1ma5q , & rtB . n44elz5k5z , & rtB .
n00vcniaoj , & rtB . n5anonvc5c , & rtB . kbmxjxx40u , & rtB . ozyjvhhlpt , &
rtB . bnu0g1s1dq , & rtB . bx34ezdhdc , & rtB . hw5bsvoycb , & rtB .
adcm1emc4n , & rtB . lnvtu0nq30 , & rtB . cos5j1nh2x , & rtB . ihvm1vxbno , &
rtB . bjbycn0jg3 , & rtB . kvmhczmkfy , & rtB . dhcpdth2nf , & rtB .
kchwhkgx0y , & rtB . obitw0v3yj , & rtB . e3tt25qjpe , & rtB . bvgai4gz1t , &
rtB . jgqfnbi2jt . eyzp44vp0r , & rtB . jgqfnbi2jt . ni0yn3ls4o , & rtB .
dzyhdh21lm . oxbdpl4uxb , & rtB . dzyhdh21lm . eigeh3vm4p , & rtB .
p51nrhewkg [ 0 ] , & rtB . izfqole4m5 , & rtB . kbzrui1hxe , & rtB .
jzl25y2kq5 , & rtB . gilgttova2 , & rtB . ghajl1bsbr , & rtB . errpq1sl3d , &
rtB . beuw5i1psd , & rtB . h4xirodnve , & rtB . e0245b3vbs , & rtB .
epesxiuqru , & rtB . f5k3at4onu , & rtB . ggw0zlizod , & rtB . fdz0zczjpe , &
rtB . ixdwjlg2uu , & rtB . hezxa2a4ub , & rtB . jgqfnbi2jt . eyzp44vp0r , &
rtB . jgqfnbi2jt . ni0yn3ls4o , & rtB . dzyhdh21lm . oxbdpl4uxb , & rtB .
dzyhdh21lm . eigeh3vm4p , & rtB . oelqevpbry , & rtB . kglrgtgbsp , & rtB .
kqdvcno01e , & rtB . bcbiecm4zm , & rtB . k351ndf2p2 , & rtB . frpkkw3tvy , &
rtB . fwds5waerqt . eyzp44vp0r , & rtB . fwds5waerqt . ni0yn3ls4o , & rtB .
klbd0xrbram . oxbdpl4uxb , & rtB . klbd0xrbram . eigeh3vm4p , & rtB .
iv1hfkdvbe [ 0 ] , & rtB . njxdhkx2nn , & rtB . ohqb1f0agt , & rtB .
ldbz23n5ir , & rtB . ahtdmndqnx , & rtB . fwds5waerqt . eyzp44vp0r , & rtB .
fwds5waerqt . ni0yn3ls4o , & rtB . klbd0xrbram . oxbdpl4uxb , & rtB .
klbd0xrbram . eigeh3vm4p , & rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT ,
& rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_Dinit , &
rtP . PVArray_Npar , & rtP . PVArray_Nser , & rtP . VSCControl_Vnom_dc , &
rtP . FromWorkspace_Time0 [ 0 ] , & rtP . FromWorkspace_Data0 [ 0 ] , & rtP .
FromWorkspace1_Time0 [ 0 ] , & rtP . FromWorkspace1_Data0 [ 0 ] , & rtP .
DeblockConverters_Time , & rtP . DeblockConverters_Y0 , & rtP .
DeblockConverters_YFinal , & rtP . u20kV2500MVA_Frequency , & rtP . Kv_Gain ,
& rtP . Kv1_Gain , & rtP . Saturation_UpperSat_laeib1jq35 , & rtP .
Saturation_LowerSat_g4eivppwfy , & rtP . DeblockMPPT_Time , & rtP .
DeblockMPPT_Y0 , & rtP . DeblockMPPT_YFinal , & rtP . WkW_Gain , & rtP .
Gain_Gain_ax0trkdzic , & rtP . W2kW_Gain , & rtP . Iq_ref_Value , & rtP .
Vdc_ref1_Value , & rtP . UnitDelay_InitialCondition_mgudbpcgtt , & rtP .
donotdeletethisgain_Gain_m3rdldqf5v , & rtP .
donotdeletethisgain_Gain_fzvartv1ey , & rtP . Constant_Value_n5vm51nwbz , &
rtP . Constant1_Value_day5k2tdhw , & rtP . DeadZone_Start , & rtP .
DeadZone_End , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator_IC , & rtP . DiscreteTimeIntegrator_UpperSat , & rtP .
DiscreteTimeIntegrator_LowerSat , & rtP . MPPTGain_Gain , & rtP .
deg2rad_Gain , & rtP . Saturation_UpperSat_efuiqyy5v2 , & rtP .
Saturation_LowerSat_fm5f0kduq1 , & rtP . Saturation1_UpperSat , & rtP .
Saturation1_LowerSat , & rtP . Switch_Threshold , & rtP . Switch1_Threshold ,
& rtP . Rsh_array_5Sref_Value , & rtP . Tref_K1_Value , & rtP . Tref_K2_Value
, & rtP . one_Value , & rtP . one1_Value , & rtP . EgRef_Gain , & rtP .
dEgdT_Gain , & rtP . u_K_Value , & rtP . IL_module_Value , & rtP .
Tref_K_Value , & rtP . uSref_Gain , & rtP . alpha_Isc_Gain , & rtP .
donotdeletethisgain_Gain , & rtP . donotdeletethisgain_Gain_mnpduykn4i , &
rtP . DegRad_Gain , & rtP . Gain1_Gain_b0ayny2lnu , & rtP . PI_P_g4lt0nquhm ,
& rtP . PI_I_njl0p4juwl , & rtP . PI_UpperSaturationLimit_mht110pv0e , & rtP
. PI_LowerSaturationLimit_czu3kr5icc , & rtP . Ltot_pu1_Gain , & rtP .
Ltot_pu2_Gain , & rtP . Rtot_pu1_Gain , & rtP . Rtot_pu5_Gain , & rtP .
Saturation_UpperSat_dkga0zi5hq , & rtP . Saturation_LowerSat_j5weoiqwmv , &
rtP . Vpu_Gain , & rtP . Vpu1_Gain , & rtP . Constant1_Value_a4nlxyznsj , &
rtP . Constant2_Value_iqex2uo240 , & rtP . Constant4_Value , & rtP .
Constant5_Value , & rtP . Constant6_Value , & rtP . Gain1_Gain_iza01f01um , &
rtP . Gain2_Gain , & rtP . SineWave_Amp , & rtP . SineWave_Bias , & rtP .
SineWave_Freq , & rtP . SineWave_Hsin [ 0 ] , & rtP . SineWave_HCos [ 0 ] , &
rtP . SineWave_PSin [ 0 ] , & rtP . SineWave_PCos [ 0 ] , & rtP .
Constant_Value_prlpwr0gxs , & rtP . Constant2_Value_lyii0iggwc [ 0 ] , & rtP
. Constant3_Value_o4ynzitq1a , & rtP . Gain1_Gain_bfibyfcm43 , & rtP .
Saturation_UpperSat_h1k5eb5g1b , & rtP . Saturation_LowerSat_h23x3ylqj0 , &
rtP . PI_P , & rtP . PI_I , & rtP . PI_UpperSaturationLimit , & rtP .
PI_LowerSaturationLimit , & rtP . StateSpace_AS_param [ 0 ] , & rtP .
StateSpace_BS_param [ 0 ] , & rtP . StateSpace_CS_param [ 0 ] , & rtP .
StateSpace_DS_param [ 0 ] , & rtP . StateSpace_X0_param [ 0 ] , & rtP .
zerotogeneratedummydiodegateanddelaysignals_Value , & rtP . SineWaveA_Amp , &
rtP . SineWaveA_Bias , & rtP . SineWaveA_Hsin , & rtP . SineWaveA_HCos , &
rtP . SineWaveA_PSin , & rtP . SineWaveA_PCos , & rtP . SineWaveB_Amp , & rtP
. SineWaveB_Bias , & rtP . SineWaveB_Hsin , & rtP . SineWaveB_HCos , & rtP .
SineWaveB_PSin , & rtP . SineWaveB_PCos , & rtP . SineWaveC_Amp , & rtP .
SineWaveC_Bias , & rtP . SineWaveC_Hsin , & rtP . SineWaveC_HCos , & rtP .
SineWaveC_PSin , & rtP . SineWaveC_PCos , & rtP . Constant_Value_as1yt3w1ta [
0 ] , & rtP . Constant1_Value [ 0 ] , & rtP . uhZ_Gain [ 0 ] , & rtP .
uhZ_Gain_m4hahhc3cz [ 0 ] , & rtP . Gain3_Gain_g2ksz1f12h [ 0 ] , & rtP .
Gain4_Gain [ 0 ] , & rtP . Gain5_Gain [ 0 ] , & rtP . Gain6_Gain [ 0 ] , &
rtP . Gain7_Gain [ 0 ] , & rtP . Gain8_Gain [ 0 ] , & rtP . mode2phaseR_Gain
[ 0 ] , & rtP . mode2phaseS_Gain [ 0 ] , & rtP . phase2modeR_Gain [ 0 ] , &
rtP . phase2modeS_Gain [ 0 ] , & rtP . Constant_Value_n13py1cn2l [ 0 ] , &
rtP . Constant1_Value_bo4z2xsjra [ 0 ] , & rtP . uhZ_Gain_ldavx1hyde [ 0 ] ,
& rtP . uhZ_Gain_ea1warj2pf [ 0 ] , & rtP . Gain3_Gain_iaw3umtbfx [ 0 ] , &
rtP . Gain4_Gain_ijr4if2n4i [ 0 ] , & rtP . Gain5_Gain_e5lkbi3hrq [ 0 ] , &
rtP . Gain6_Gain_cnwwm5jxfb [ 0 ] , & rtP . Gain7_Gain_i0zgc1rgb2 [ 0 ] , &
rtP . Gain8_Gain_edeoo4wuci [ 0 ] , & rtP . mode2phaseR_Gain_f10wmgb5wy [ 0 ]
, & rtP . mode2phaseS_Gain_ph1mfferiz [ 0 ] , & rtP .
phase2modeR_Gain_pqkaosz5ma [ 0 ] , & rtP . phase2modeS_Gain_an1doupart [ 0 ]
, & rtP . donotdeletethisgain_Gain_hd2lurzjs1 , & rtP .
donotdeletethisgain_Gain_g0aitc3jds , & rtP .
donotdeletethisgain_Gain_j0j522ufey , & rtP .
donotdeletethisgain_Gain_kb2zb2sa4y , & rtP .
donotdeletethisgain_Gain_kt5arp05v1 , & rtP .
donotdeletethisgain_Gain_bukv5qr0ht , & rtP . RadDeg_Gain , & rtP . coswt_Amp
, & rtP . coswt_Bias , & rtP . coswt_Hsin , & rtP . coswt_HCos , & rtP .
coswt_PSin , & rtP . coswt_PCos , & rtP . sinwt_Amp , & rtP . sinwt_Bias , &
rtP . sinwt_Hsin , & rtP . sinwt_HCos , & rtP . sinwt_PSin , & rtP .
sinwt_PCos , & rtP . RadDeg_Gain_mxg2y3inss , & rtP . coswt_Amp_capd15k4h1 ,
& rtP . coswt_Bias_nfvvmsxu32 , & rtP . coswt_Hsin_d2vrt0arhq , & rtP .
coswt_HCos_n5n2bmm3oz , & rtP . coswt_PSin_ip1flhvgpu , & rtP .
coswt_PCos_cefmdsof5s , & rtP . sinwt_Amp_lhpdgz1f4p , & rtP .
sinwt_Bias_pmyiopzank , & rtP . sinwt_Hsin_mak1cz2jtq , & rtP .
sinwt_HCos_asiwiduiyg , & rtP . sinwt_PSin_iuufprpx4d , & rtP .
sinwt_PCos_ldbj3guoow , & rtP . Constant_Value_kuetp02hmz , & rtP .
UnitDelay_InitialCondition_oe4c3ahrqy , & rtP . EgRef_Value , & rtP . k1_Gain
, & rtP . Fourier_A_Freq , & rtP . Fourier_B_Freq , & rtP . Fourier_C_Freq ,
& rtP . Constant_Value_gu00guxond , & rtP . Constant1_Value_d3fgit3q2y , &
rtP . Constant2_Value_dvfzdjynxb , & rtP . degrad_Gain , & rtP . degrad1_Gain
, & rtP . degrad2_Gain , & rtP . raddeg1_Gain , & rtP .
Fourier_A_Freq_dulhm5uet1 , & rtP . Fourier_B_Freq_c5qlafj1dc , & rtP .
Fourier_C_Freq_cenpjtva3o , & rtP . Constant_Value_fal5u45x5b , & rtP .
Constant1_Value_gerhfiv2al , & rtP . Constant2_Value_h0okejydpk , & rtP .
degrad_Gain_num4oalqxy , & rtP . degrad1_Gain_gcrkcsbsjy , & rtP .
degrad2_Gain_fvnkccap1v , & rtP . raddeg1_Gain_joedyuhdkb , & rtP .
K1_Value_ksxou1md45 , & rtP . K2_Value_a5zsikg0k0 , & rtP .
Integ4_gainval_ky1qdbqrxe , & rtP . Integ4_IC_hubvqsbw3v , & rtP .
Gain_Gain_mubbovzl2s , & rtP . Gain1_Gain_hpgc0ezdfe , & rtP .
UnitDelay_InitialCondition_pwcvpqdvoa , & rtP .
UnitDelay1_InitialCondition_ix5vy4jhke , & rtP .
Integrator_gainval_ozsadpowpb , & rtP . Integrator_IC_kg0exmdii0 , & rtP .
AlphaBetaZerotodq0_Alignment_otrg0yyt1a , & rtP .
AlphaBetaZerotodq0_Alignment_awofvyee55 , & rtP . S_Y0 [ 0 ] , & rtP .
Gain_Gain_jbzlc2mjil , & rtP . S_Y0_o3ff3poqj5 , & rtP . Constant11_Value [ 0
] , & rtP . Constant12_Value [ 0 ] , & rtP . Constant13_Value [ 0 ] , & rtP .
Constant2_Value_id2ug4wnj0 , & rtP . Integrator_gainval , & rtP .
Integrator_IC , & rtP . SwitchCurrents_Value , & rtP .
SFunction_P1_exnlozrbc0 , & rtP . SFunction_P2_in5hmw40xq , & rtP .
SFunction_P3_nc0udh1wzs [ 0 ] , & rtP . SFunction_P4_hdwxfp5ci4 , & rtP .
SFunction_P1_cn35ri2xze , & rtP . SFunction_P2_bqdvpluktw , & rtP .
SFunction_P3_n2npvx3z2y [ 0 ] , & rtP . SFunction_P4_nemm0y544y , & rtP .
SFunction_P1_c5ohdgusve , & rtP . SFunction_P2_dfmouqd5bo , & rtP .
SFunction_P3_jjuvho5tvk [ 0 ] , & rtP . SFunction_P4_agnl2gc4be , & rtP .
SFunction_P1_m2tp4a5pke , & rtP . SFunction_P2_oevff5cms5 , & rtP .
SFunction_P3_hjecudvy4y [ 0 ] , & rtP . SFunction_P4_ftwub4ivck , & rtP .
SFunction_P1_gj2py1ar54 , & rtP . SFunction_P2_euivz3g2fa , & rtP .
SFunction_P3_dajwgfk0b0 [ 0 ] , & rtP . SFunction_P4_bxnk5id0yx , & rtP .
SFunction_P1_kel4oaqysa , & rtP . SFunction_P2_evwmqif1gu , & rtP .
SFunction_P3_oiaycysvyl [ 0 ] , & rtP . SFunction_P4_jatz5vsnx4 , & rtP .
SFunction_P1_ipkxvf4g1l , & rtP . SFunction_P2_l0fffb0cfk , & rtP .
SFunction_P3_p5xm1bnz1b [ 0 ] , & rtP . SFunction_P4_gljve05gks , & rtP .
SFunction_P1_dfibsl0oic , & rtP . SFunction_P2_a30je1lq13 , & rtP .
SFunction_P3_oiidf0epvs [ 0 ] , & rtP . SFunction_P4_pet1q2rvk3 , & rtP .
K1_Value_apbsevdf4n , & rtP . K2_Value_pvhiloavll , & rtP .
Integ4_gainval_h3dnhx20ls , & rtP . Integ4_IC_gjud0ypzut , & rtP .
Gain_Gain_p2kjinmjnk , & rtP . Gain1_Gain_atilud13g1 , & rtP .
UnitDelay_InitialCondition_j5vrlvgdfu , & rtP .
UnitDelay1_InitialCondition_aqxfegphwq , & rtP . K1_Value_gfk0vyatcd , & rtP
. K2_Value_gpemnsgryf , & rtP . Integ4_gainval_l5q1etraeb , & rtP .
Integ4_IC_hghymu5o2d , & rtP . Gain_Gain_cjgtjecd4l , & rtP .
Gain1_Gain_gq01hxeffi , & rtP . UnitDelay_InitialCondition_m1atbbxmdl , & rtP
. UnitDelay1_InitialCondition_bvhpvt24hu , & rtP . Constant2_Value , & rtP .
Constant3_Value , & rtP . uib1_Gain_do31t30z52 , & rtP .
RadDeg_Gain_ggqrcue4an , & rtP . coswt_Amp_anf4q5oxxa , & rtP .
coswt_Bias_eb21lgn3q5 , & rtP . coswt_Hsin_ebehquqc0i , & rtP .
coswt_HCos_he1vypz4le , & rtP . coswt_PSin_bf4ykyadoy , & rtP .
coswt_PCos_imx1lvfr4u , & rtP . sinwt_Amp_eyfyeyhg1z , & rtP .
sinwt_Bias_b1pimrbdub , & rtP . sinwt_Hsin_oqj105hayu , & rtP .
sinwt_HCos_heu1kx4sdg , & rtP . sinwt_PSin_ijekhyu50w , & rtP .
sinwt_PCos_ljjr3tckny , & rtP . RadDeg_Gain_oothuzb2un , & rtP .
coswt_Amp_nskemowyiu , & rtP . coswt_Bias_jk2fedlc5k , & rtP .
coswt_Hsin_omgodzfzvz , & rtP . coswt_HCos_oz23s2cxn2 , & rtP .
coswt_PSin_khvpsemk1b , & rtP . coswt_PCos_ontpys2zdd , & rtP .
sinwt_Amp_kei0q2kps2 , & rtP . sinwt_Bias_d20x1us1zk , & rtP .
sinwt_Hsin_e0rgtjbjpx , & rtP . sinwt_HCos_cafhkcfovv , & rtP .
sinwt_PSin_modl3cgbwm , & rtP . sinwt_PCos_cyveu5wuih , & rtP .
RadDeg_Gain_kam5dohr3p , & rtP . coswt_Amp_ov5trykaai , & rtP .
coswt_Bias_caz0b22m5s , & rtP . coswt_Hsin_p0lqeycuo2 , & rtP .
coswt_HCos_e1lcq0jydt , & rtP . coswt_PSin_pzecylb5ie , & rtP .
coswt_PCos_apooxuqtce , & rtP . sinwt_Amp_gglawa5b0j , & rtP .
sinwt_Bias_ftcgy00q1q , & rtP . sinwt_Hsin_ltv4wuiu5i , & rtP .
sinwt_HCos_lozsdsini2 , & rtP . sinwt_PSin_ism3nzmned , & rtP .
sinwt_PCos_esk52xey53 , & rtP . msv4qqksksf . Gain1_Gain [ 0 ] . re , & rtP .
msv4qqksksf . Gain3_Gain , & rtP . gfc0o4gmcx . Gain1_Gain [ 0 ] . re , & rtP
. gfc0o4gmcx . Gain3_Gain , & rtP . g23t01ww0z0 . Gain3_Gain , & rtP .
RadDeg_Gain_hfllzvpq3o , & rtP . coswt_Amp_ph0slmkaz2 , & rtP .
coswt_Bias_mxccsalmjx , & rtP . coswt_Hsin_ki40gemxaa , & rtP .
coswt_HCos_ih2fmjgzvo , & rtP . coswt_PSin_ckpub3oin5 , & rtP .
coswt_PCos_jgy3xycijn , & rtP . sinwt_Amp_a5iuycgbj5 , & rtP .
sinwt_Bias_o4hfny211d , & rtP . sinwt_Hsin_f4ff1jm01o , & rtP .
sinwt_HCos_ikm4ke3nt1 , & rtP . sinwt_PSin_mxp5pxyazu , & rtP .
sinwt_PCos_ffxrlya5uh , & rtP . RadDeg_Gain_lezhz3zr05 , & rtP .
coswt_Amp_aqxb2j5jnu , & rtP . coswt_Bias_frzp530tnq , & rtP .
coswt_Hsin_fuzcqltv4d , & rtP . coswt_HCos_cs3y4qtzeb , & rtP .
coswt_PSin_bdolgwlxdg , & rtP . coswt_PCos_oqm4st2je0 , & rtP .
sinwt_Amp_lmppjqm2un , & rtP . sinwt_Bias_i50qywn0ii , & rtP .
sinwt_Hsin_i0nd0ubqqg , & rtP . sinwt_HCos_c3em0todhq , & rtP .
sinwt_PSin_bllazdudnu , & rtP . sinwt_PCos_ilquu0arpw , & rtP .
RadDeg_Gain_bjvkdbizli , & rtP . coswt_Amp_ajaph324eb , & rtP .
coswt_Bias_er20tnmo5c , & rtP . coswt_Hsin_nt154hil4g , & rtP .
coswt_HCos_dtrnnwyvoi , & rtP . coswt_PSin_pc2mzqmykn , & rtP .
coswt_PCos_exeoqhe2el , & rtP . sinwt_Amp_oe50flwsvz , & rtP .
sinwt_Bias_hpmk1ox4mk , & rtP . sinwt_Hsin_kfaxcimxsb , & rtP .
sinwt_HCos_lv5zpnsoyo , & rtP . sinwt_PSin_bs1ts2ayri , & rtP .
sinwt_PCos_owldbifmfn , & rtP . dn2wcdma5d . Gain1_Gain [ 0 ] . re , & rtP .
dn2wcdma5d . Gain3_Gain , & rtP . n45kzzuand . Gain1_Gain [ 0 ] . re , & rtP
. n45kzzuand . Gain3_Gain , & rtP . ojknbv4is1 . Gain3_Gain , & rtP .
SFunction_P1_eg0kpdtptk , & rtP . SFunction_P2_bzj01kwxem , & rtP .
SFunction_P3_jcoa4oso2x , & rtP . SFunction_P4_fhpglmrctr , & rtP .
Discrete_Kp , & rtP . Discrete_Kd , & rtP . Discrete_Init , & rtP .
Constant1_Value_finlsj5cwk , & rtP . Constant4_Value_cdziwzfobx , & rtP .
DiscreteTimeIntegrator_gainval_brcl5xxl2q , & rtP . Gain10_Gain , & rtP .
Initial_Value , & rtP . RateLimiter_RisingLim , & rtP .
RateLimiter_FallingLim , & rtP . RateLimiter_IC , & rtP .
UnitDelay_InitialCondition_hvmmrz5whh , & rtP .
CompareToConstant_const_f3j21z25kv , & rtP .
CompareToConstant1_const_m1hj2kgrib , & rtP . Gain1_Gain_ozhyrxfmnh , & rtP .
Gain3_Gain_p1jkth5m13 [ 0 ] , & rtP . CompareToConstant_const_ork22hwfpx , &
rtP . CompareToConstant1_const_mofh5awlq5 , & rtP . Gain1_Gain_pnfzbhegxe , &
rtP . Gain3_Gain_dyow2vdij1 [ 0 ] , & rtP . Constant1_Value_kqscwqq4vj , &
rtP . Constant2_Value_i0dlxfmxog , & rtP . Constant3_Value_ed35vdft5z , & rtP
. uib1_Gain , & rtP . LookupTable_XData [ 0 ] , & rtP . LookupTable_YData [ 0
] , & rtP . K1_Value_igupijfdda , & rtP . K2_Value_jprflebzbm , & rtP .
Integ4_gainval_m34pjkoi4m , & rtP . Integ4_IC_in1hdrx4qr , & rtP . Gain_Gain
, & rtP . Gain1_Gain , & rtP . UnitDelay_InitialCondition_hef0pkfrpk , & rtP
. UnitDelay1_InitialCondition_c1zc5jxdmy , & rtP . K1_Value , & rtP .
K2_Value , & rtP . Integ4_gainval_acyknktfit , & rtP . Integ4_IC_aouvv15ahb ,
& rtP . Gain_Gain_ajetlnuowr , & rtP . Gain1_Gain_mdjweksv13 , & rtP .
UnitDelay_InitialCondition_hi5myw2wbs , & rtP .
UnitDelay1_InitialCondition_jystgemzdu , & rtP . K1_Value_nn55xdcyte , & rtP
. K2_Value_mp20ez40ia , & rtP . Integ4_gainval_hfda0chi2s , & rtP .
Integ4_IC_buerkwsqzk , & rtP . Gain_Gain_a3r3vvwy20 , & rtP .
Gain1_Gain_d2sqh2usk4 , & rtP . UnitDelay_InitialCondition_dd0zzmyaxa , & rtP
. UnitDelay1_InitialCondition_ivg1jwgjgf , & rtP . K1_Value_blbch5to5c , &
rtP . K2_Value_gqo2xfiqqa , & rtP . Integ4_gainval_dma1zsooi4 , & rtP .
Integ4_IC_amcixfh02i , & rtP . Gain_Gain_nmn5fkaqoa , & rtP .
Gain1_Gain_bx11igke5q , & rtP . UnitDelay_InitialCondition_gsydl4aczd , & rtP
. UnitDelay1_InitialCondition_hlntujamzv , & rtP . SFunction_P1_lqmwfpx0vq ,
& rtP . SFunction_P2_ag0l4txku4 , & rtP . SFunction_P3_odml4yuzte , & rtP .
SFunction_P4_ikaqfq0csk , & rtP . SFunction_P1_jc42c4bhge , & rtP .
SFunction_P2_itooqo0gea , & rtP . SFunction_P3_k1pxw4ly2h , & rtP .
SFunction_P4_jbxyzxqgn3 , & rtP . Gain_Y0 , & rtP . Saturation_UpperSat , &
rtP . Saturation_LowerSat , & rtP . DiscreteTimeIntegrator_gainval_do3kgazujd
, & rtP . DiscreteTimeIntegrator_UpperSat_fcaa0odsep , & rtP .
DiscreteTimeIntegrator_LowerSat_gdzmh1fqac , & rtP .
Saturation1_UpperSat_gtqpw40kq5 , & rtP . Saturation1_LowerSat_k5nt0tnm2o , &
rtP . DiscreteDerivative_DenCoef [ 0 ] , & rtP .
DiscreteDerivative_InitialStates , & rtP .
AlphaBetaZerotodq0_Alignment_mnakfv4gd4 , & rtP . ochgqd2u0r . dq_Y0 [ 0 ] ,
& rtP . m1irskyirr . dq_Y0 [ 0 ] , & rtP . lbykfmi30w . dq_Y0 [ 0 ] , & rtP .
ox1z1gld2w . dq_Y0 [ 0 ] , & rtP . SFunction_P1_c2lr44xedy , & rtP .
SFunction_P2_inokeujqpe , & rtP . SFunction_P3_mo5thkovr0 , & rtP .
SFunction_P4_fiqmdku2ea , & rtP . SFunction_P1_ap3v0p2ujs , & rtP .
SFunction_P2_ckc0134djg , & rtP . SFunction_P3_c0hwq3kt3o , & rtP .
SFunction_P4_bew5bppn1v , & rtP . SFunction_P1_lozcbion4g , & rtP .
SFunction_P2_gwt1thx25u , & rtP . SFunction_P3_kudczj5qz4 , & rtP .
SFunction_P4_hdub55ytoi , & rtP . SFunction_P1_jhupwuoqu3 , & rtP .
SFunction_P2_pliykihbkp , & rtP . SFunction_P3_g2ylyvchbc , & rtP .
SFunction_P4_fvyak33v20 , & rtP . K1_Value_mgtlppjp42 , & rtP .
K2_Value_af05yiua5o , & rtP . Integ4_gainval_msuhv1zzxl , & rtP .
Integ4_IC_p5hl13nikg , & rtP . Gain_Gain_er1jzlt204 , & rtP .
Gain1_Gain_cvnj41z3u1 , & rtP . UnitDelay_InitialCondition_fluz1hs4rw , & rtP
. UnitDelay1_InitialCondition_oxna4lbe4y , & rtP . K1_Value_mnxxbxkzc3 , &
rtP . K2_Value_ivipcgq0za , & rtP . Integ4_gainval_i0v3kwd3pb , & rtP .
Integ4_IC_pitekfoys0 , & rtP . Gain_Gain_d5ujhlzr3p , & rtP .
Gain1_Gain_gau2kona2s , & rtP . UnitDelay_InitialCondition_du0hifmua4 , & rtP
. UnitDelay1_InitialCondition_bxzmk5e5pe , & rtP . K1_Value_g33io5pe2n , &
rtP . K2_Value_ox1txrzba0 , & rtP . Integ4_gainval_g3uamgfpqb , & rtP .
Integ4_IC_g12toj1ern , & rtP . Gain_Gain_l1yybb0ozh , & rtP .
Gain1_Gain_jawtsd2iys , & rtP . UnitDelay_InitialCondition_ictydfu5gx , & rtP
. UnitDelay1_InitialCondition_ew2tfa0xiv , & rtP . K1_Value_exdwlktlap , &
rtP . K2_Value_jy0nnlmsm2 , & rtP . Integ4_gainval_gtzjg23pll , & rtP .
Integ4_IC_ln1mjxwhre , & rtP . Gain_Gain_jq3um4cz4j , & rtP .
Gain1_Gain_bsbbtjbk4d , & rtP . UnitDelay_InitialCondition_l3h1l0mohd , & rtP
. UnitDelay1_InitialCondition_mxloi3dinr , & rtP . K1_Value_piw4pfcum5 , &
rtP . K2_Value_luz1rwbbpa , & rtP . Integ4_gainval_lqadd2jned , & rtP .
Integ4_IC_bcihf3qerl , & rtP . Gain_Gain_fc1p3rfcsm , & rtP .
Gain1_Gain_kl3n41qkg4 , & rtP . UnitDelay_InitialCondition_c1mnajnz03 , & rtP
. UnitDelay1_InitialCondition_fwlh0v4clc , & rtP . K1_Value_nofhnhfgqe , &
rtP . K2_Value_cheibnriss , & rtP . Integ4_gainval_h0bygbtnao , & rtP .
Integ4_IC_kpvxlhwixo , & rtP . Gain_Gain_o1r20n5vmz , & rtP .
Gain1_Gain_lly5kv4kuf , & rtP . UnitDelay_InitialCondition_gbfuarhyw0 , & rtP
. UnitDelay1_InitialCondition_ajpewtdlxk , & rtP . K1_Value_odshxihjs1 , &
rtP . K2_Value_ca4rzsh0ua , & rtP . Integ4_gainval_e3hymojevp , & rtP .
Integ4_IC_b4moxyhjbs , & rtP . Gain_Gain_pvpuvbbodz , & rtP .
Gain1_Gain_h0j53ikn03 , & rtP . UnitDelay_InitialCondition_iu5allnmxd , & rtP
. UnitDelay1_InitialCondition_fsrsshkqoc , & rtP . K1_Value_ly41q0lfne , &
rtP . K2_Value_peraggcnbk , & rtP . Integ4_gainval_gvvjdr1enu , & rtP .
Integ4_IC_ljmxfnx2ig , & rtP . Gain_Gain_htrn2od5eo , & rtP .
Gain1_Gain_k45yw5u1ri , & rtP . UnitDelay_InitialCondition_d4fsgzspon , & rtP
. UnitDelay1_InitialCondition_nwwwd2tqrt , & rtP . K1_Value_okiumpl42l , &
rtP . K2_Value_gzomggch2d , & rtP . Integ4_gainval_dmsyi0ujpc , & rtP .
Integ4_IC_lektlq1jie , & rtP . Gain_Gain_nxlojnsi3h , & rtP .
Gain1_Gain_ck1bqs4xph , & rtP . UnitDelay_InitialCondition_nj2mac4354 , & rtP
. UnitDelay1_InitialCondition_exqimte31v , & rtP . K1_Value_fascbhcv3t , &
rtP . K2_Value_bqbhuqvuc2 , & rtP . Integ4_gainval_o4m2wju04m , & rtP .
Integ4_IC_etee4cslmc , & rtP . Gain_Gain_c51ds1jfln , & rtP .
Gain1_Gain_aqpmhpqydp , & rtP . UnitDelay_InitialCondition_bh2031guu1 , & rtP
. UnitDelay1_InitialCondition_gcar3snp12 , & rtP . K1_Value_huwvvbdsqd , &
rtP . K2_Value_nuhsjmrzct , & rtP . Integ4_gainval_ae24pre0oj , & rtP .
Integ4_IC_fzbpruzddz , & rtP . Gain_Gain_afzupnanth , & rtP .
Gain1_Gain_f5mqebcvsk , & rtP . UnitDelay_InitialCondition_bp1tsi5gga , & rtP
. UnitDelay1_InitialCondition_ovdhgn1wwe , & rtP . K1_Value_fl2t5hhsxt , &
rtP . K2_Value_fl0eknqnzp , & rtP . Integ4_gainval_lqpuvz5try , & rtP .
Integ4_IC_omqg2tqo15 , & rtP . Gain_Gain_a2j2ruaijq , & rtP .
Gain1_Gain_phi4msvodo , & rtP . UnitDelay_InitialCondition_drj2csvrhz , & rtP
. UnitDelay1_InitialCondition_lzsilqa4qy , & rtP . Duk_Gain , & rtP .
Delay_x1_InitialCondition , & rtP . Delay_x2_InitialCondition , & rtP .
Constant_Value_kkuzztqyci , & rtP . Integ4_gainval_lotsoek0sk , & rtP .
Integ4_IC_f03w4yglrt , & rtP . Toavoiddivisionbyzero_UpperSat_fngqu4twkq , &
rtP . Toavoiddivisionbyzero_LowerSat_nspiile1b5 , & rtP .
UnitDelay1_InitialCondition_dbtlgsoueo , & rtP .
CompareToConstant_const_mjeo4kqpve , & rtP .
CompareToConstant1_const_lkgpibc3kf , & rtP . Gain1_Gain_op30pyxpek , & rtP .
Gain3_Gain_nwldjxxvlq [ 0 ] , & rtP . SFunction_P1_p5oafid3lr , & rtP .
SFunction_P2_g3zfut0ttz , & rtP . SFunction_P3_ailj2rjtnm , & rtP .
SFunction_P4_pgdix2di41 , & rtP . SFunction_P1_lg5pzzsa2d , & rtP .
SFunction_P2_phvqmqyobr , & rtP . SFunction_P3_h2vg5ev1xh , & rtP .
SFunction_P4_olzkwupxvh , & rtP . SFunction_P1_lz1kvrqslv , & rtP .
SFunction_P2_m4zyizvnqv , & rtP . SFunction_P3_hsaxqamxsw , & rtP .
SFunction_P4_g2c4lhfo5n , & rtP . SFunction_P1_evblyies3u , & rtP .
SFunction_P2_gfwehstk0m , & rtP . SFunction_P3_hc0kiipdev , & rtP .
SFunction_P4_py3bmltzky , & rtP . SFunction_P1_dkdy2k15zy , & rtP .
SFunction_P2_k3kgnekxzq , & rtP . SFunction_P3_hck5ayelnn , & rtP .
SFunction_P4_frxx4pv3d4 , & rtP . SFunction_P1_lxyuxdb3mp , & rtP .
SFunction_P2_lvgbmfzfkf , & rtP . SFunction_P3_cll0rk4ayt , & rtP .
SFunction_P4_cdxkopokc1 , & rtP . SFunction_P1_f3ypa2zb01 , & rtP .
SFunction_P2_hs0brjtvaq , & rtP . SFunction_P3_csxyjaoi2n , & rtP .
SFunction_P4_gtfhpmr5uy , & rtP . SFunction_P1_pa4jjhehiv , & rtP .
SFunction_P2_bytfqwmq3y , & rtP . SFunction_P3_n2witgfr1i , & rtP .
SFunction_P4_k2rjx01pxg , & rtP . SFunction_P1_akvmkuhaw5 , & rtP .
SFunction_P2_dxmnlu0a5n , & rtP . SFunction_P3_jhuhvxm5vq , & rtP .
SFunction_P4_icb2jtdmvm , & rtP . SFunction_P1_ampffu3m3c , & rtP .
SFunction_P2_djfrqai1qz , & rtP . SFunction_P3_he0khbdhcb , & rtP .
SFunction_P4_cbbrphqo2f , & rtP . SFunction_P1_o30oihu332 , & rtP .
SFunction_P2_jub0nilfwr , & rtP . SFunction_P3_jyslu0v2kb , & rtP .
SFunction_P4_lfuanfgbiu , & rtP . SFunction_P1_eo2zpwfgcc , & rtP .
SFunction_P2_mdi2o1yibz , & rtP . SFunction_P3_akzr3coq0n , & rtP .
SFunction_P4_o4gzym1ztl , & rtP . AlphaBetaZerotodq0_Alignment , & rtP .
A11_Gain , & rtP . A12_Gain , & rtP . A21_Gain , & rtP . A22_Gain , & rtP .
B11_Gain , & rtP . B21_Gain , & rtP . C11_Gain , & rtP . C12_Gain , & rtP .
Gain1_Gain_afd104gjl4 , & rtP . UnitDelay_InitialCondition_hw44anb1qk , & rtP
. SFunction_P1_krpmwxbekp , & rtP . SFunction_P2_lji01cpuhb , & rtP .
SFunction_P3_o5gzkun05y , & rtP . SFunction_P4_al55firpgj , & rtP .
jgqfnbi2jt . dq_Y0 [ 0 ] , & rtP . dzyhdh21lm . dq_Y0 [ 0 ] , & rtP .
Constant_Value , & rtP . Integ4_gainval , & rtP . Integ4_IC , & rtP .
Toavoiddivisionbyzero_UpperSat , & rtP . Toavoiddivisionbyzero_LowerSat , &
rtP . UnitDelay1_InitialCondition , & rtP . Constant_Value_jccahizvsu , & rtP
. Integ4_gainval_fz2uqdiylj , & rtP . Integ4_IC_bmrwd2awok , & rtP .
Toavoiddivisionbyzero_UpperSat_cysl1cmul3 , & rtP .
Toavoiddivisionbyzero_LowerSat_k1vxw44tbr , & rtP .
UnitDelay1_InitialCondition_eoex0bhdpa , & rtP . CompareToConstant_const , &
rtP . CompareToConstant1_const , & rtP . Gain1_Gain_mv4azmob4e , & rtP .
Gain3_Gain [ 0 ] , & rtP . Gain1_Gain_cmdba5bv2h , & rtP .
UnitDelay_InitialCondition , & rtP . SFunction_P1 , & rtP . SFunction_P2 , &
rtP . SFunction_P3 , & rtP . SFunction_P4 , & rtP . Gain1_Gain_hetxdadbk5 , &
rtP . UnitDelay_InitialCondition_jycnfiyaap , & rtP . SFunction_P1_bvoxvxdyd0
, & rtP . SFunction_P2_e4zetzg3tb , & rtP . SFunction_P3_dzoprv4wqa , & rtP .
SFunction_P4_en5y5az0mt , & rtP . fwds5waerqt . dq_Y0 [ 0 ] , & rtP .
klbd0xrbram . dq_Y0 [ 0 ] , & rtP . Ts_Control , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } , { "struct" , "creal_T" , 0 , 0 , sizeof ( creal_T ) , SS_DOUBLE , 1 ,
0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , SS_UINT8 ,
0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 22 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } , { rtwCAPI_VECTOR , 26 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 28 , 2 , 0 } , { rtwCAPI_VECTOR , 30 , 2
, 0 } , { rtwCAPI_VECTOR , 32 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 34 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 36 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 12 , 1 , 3 , 1 , 2 , 1 , 42 , 1 , 20 , 1 , 4
, 1 , 744 , 1 , 1 , 3 , 36 , 36 , 36 , 37 , 42 , 36 , 42 , 37 , 36 , 1 , 3 ,
3 , 1 , 2 , 1 , 4 , 58 , 3 , 21 , 3 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0E-6 , 0.0001 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 1 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 256 ,
( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 670 , rtModelParameters
, 1 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 342340780U
, 970417428U , 1137708617U , 229799580U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * power_PVarray_grid_det_GetCAPIStaticMap ( )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void power_PVarray_grid_det_InitializeDataMapInfo ( SimStruct * const rtS ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void power_PVarray_grid_det_host_InitializeDataMapInfo (
power_PVarray_grid_det_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif

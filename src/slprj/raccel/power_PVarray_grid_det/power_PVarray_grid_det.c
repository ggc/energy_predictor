#include "__cf_power_PVarray_grid_det.h"
#include "rt_logging_mmi.h"
#include "power_PVarray_grid_det_capi.h"
#include <math.h>
#include "power_PVarray_grid_det.h"
#include "power_PVarray_grid_det_private.h"
#include "power_PVarray_grid_det_dt.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 2 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "8.11 (R2016b) 25-Aug-2016" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj//raccel//power_PVarray_grid_det//power_PVarray_grid_det_Jpattern.mat"
; const int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const
int_T gblInportDims [ ] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1
} ; const int_T gblInportInterpoFlag [ ] = { - 1 } ; const int_T
gblInportContinuous [ ] = { - 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
const real_T power_PVarray_grid_det_RGND = 0.0 ; B rtB ; DW rtDW ; static
SimStruct model_S ; SimStruct * const rtS = & model_S ; void
BINARYSEARCH_real_T ( uint32_T * piLeft , uint32_T * piRght , real_T u ,
const real_T * pData , uint32_T iHi ) { * piLeft = 0U ; * piRght = iHi ; if (
u <= pData [ 0 ] ) { * piRght = 0U ; } else if ( u >= pData [ iHi ] ) { *
piLeft = iHi ; } else { uint32_T i ; while ( ( * piRght - * piLeft ) > 1U ) {
i = ( * piLeft + * piRght ) >> 1 ; if ( u < pData [ i ] ) { * piRght = i ; }
else { * piLeft = i ; } } } } void LookUp_real_T_real_T ( real_T * pY , const
real_T * pYData , real_T u , const real_T * pUData , uint32_T iHi ) {
uint32_T iLeft ; uint32_T iRght ; BINARYSEARCH_real_T ( & ( iLeft ) , & (
iRght ) , u , pUData , iHi ) ; { real_T lambda ; if ( pUData [ iRght ] >
pUData [ iLeft ] ) { real_T num ; real_T den ; den = pUData [ iRght ] ; den
-= pUData [ iLeft ] ; num = u ; num -= pUData [ iLeft ] ; lambda = num / den
; } else { lambda = 0.0 ; } { real_T yLeftCast ; real_T yRghtCast ; yLeftCast
= pYData [ iLeft ] ; yRghtCast = pYData [ iRght ] ; yLeftCast += lambda * (
yRghtCast - yLeftCast ) ; ( * pY ) = yLeftCast ; } } } void msv4qqksks (
real_T jy4wt3dure , creal_T d0h10zlbsz , creal_T ipzjw5ckui , creal_T
hq5jj4xbl5 , jjshk3p1ma * localB , kobe4yiza3 * localDW , oua4sf5ojz * localP
) { if ( jy4wt3dure > 0.0 ) { localB -> bug11j5vri . re = ( ( ( localP ->
Gain1_Gain [ 0 ] . re * d0h10zlbsz . re - localP -> Gain1_Gain [ 0 ] . im *
d0h10zlbsz . im ) + ( localP -> Gain1_Gain [ 1 ] . re * ipzjw5ckui . re -
localP -> Gain1_Gain [ 1 ] . im * ipzjw5ckui . im ) ) + ( localP ->
Gain1_Gain [ 2 ] . re * hq5jj4xbl5 . re - localP -> Gain1_Gain [ 2 ] . im *
hq5jj4xbl5 . im ) ) * localP -> Gain3_Gain ; localB -> bug11j5vri . im = ( (
( localP -> Gain1_Gain [ 0 ] . re * d0h10zlbsz . im + localP -> Gain1_Gain [
0 ] . im * d0h10zlbsz . re ) + ( localP -> Gain1_Gain [ 1 ] . re * ipzjw5ckui
. im + localP -> Gain1_Gain [ 1 ] . im * ipzjw5ckui . re ) ) + ( localP ->
Gain1_Gain [ 2 ] . re * hq5jj4xbl5 . im + localP -> Gain1_Gain [ 2 ] . im *
hq5jj4xbl5 . re ) ) * localP -> Gain3_Gain ; srUpdateBC ( localDW ->
p2zbab2zyq ) ; } } void g23t01ww0z ( real_T izdu1xpwto , creal_T lrg5vxfs4m ,
creal_T kzywk1rsbw , creal_T gctcncglev , im1xhgdako * localB , kdivvd1gc1 *
localDW , c3xiexpag1 * localP ) { if ( izdu1xpwto > 0.0 ) { localB ->
fr3ijlre3u . re = ( ( lrg5vxfs4m . re + kzywk1rsbw . re ) + gctcncglev . re )
* localP -> Gain3_Gain ; localB -> fr3ijlre3u . im = ( ( lrg5vxfs4m . im +
kzywk1rsbw . im ) + gctcncglev . im ) * localP -> Gain3_Gain ; srUpdateBC (
localDW -> osvjim3e0u ) ; } } void mh05nqty23 ( cyumnaubxc * localB ,
hcrgr2vy5z * localP ) { localB -> eyzp44vp0r = localP -> dq_Y0 [ 0 ] ; localB
-> ni0yn3ls4o = localP -> dq_Y0 [ 1 ] ; } void fwds5waerq ( uint8_T
fb1330tihh , const real_T ly0kcs4v5u [ 2 ] , real_T lvdk4fnjiq , cyumnaubxc *
localB , ckryo0pzru * localDW ) { if ( fb1330tihh > 0 ) { localB ->
eyzp44vp0r = ly0kcs4v5u [ 0 ] * muDoubleScalarSin ( lvdk4fnjiq ) - ly0kcs4v5u
[ 1 ] * muDoubleScalarCos ( lvdk4fnjiq ) ; localB -> ni0yn3ls4o = ly0kcs4v5u
[ 0 ] * muDoubleScalarCos ( lvdk4fnjiq ) + ly0kcs4v5u [ 1 ] *
muDoubleScalarSin ( lvdk4fnjiq ) ; srUpdateBC ( localDW -> ioz5px3kzt ) ; } }
void elbt4vn0aq ( fmkd4jezwv * localB , mirwlvnwva * localP ) { localB ->
oxbdpl4uxb = localP -> dq_Y0 [ 0 ] ; localB -> eigeh3vm4p = localP -> dq_Y0 [
1 ] ; } void klbd0xrbra ( uint8_T fdkph40hgz , const real_T dhwo3sauj3 [ 2 ]
, real_T evvebtru3e , fmkd4jezwv * localB , lbp5rxlyok * localDW ) { if (
fdkph40hgz > 0 ) { localB -> oxbdpl4uxb = dhwo3sauj3 [ 0 ] *
muDoubleScalarCos ( evvebtru3e ) + dhwo3sauj3 [ 1 ] * muDoubleScalarSin (
evvebtru3e ) ; localB -> eigeh3vm4p = - dhwo3sauj3 [ 0 ] * muDoubleScalarSin
( evvebtru3e ) + dhwo3sauj3 [ 1 ] * muDoubleScalarCos ( evvebtru3e ) ;
srUpdateBC ( localDW -> b30icczwdz ) ; } } void MdlInitialize ( void ) { {
SimStruct * rts = ssGetSFunction ( rtS , 2 ) ; sfcnInitializeConditions ( rts
) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts
= ssGetSFunction ( rtS , 3 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 4 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 5 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 6 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 7 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 8 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 9 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . h2vwpcchd5 = rtP .
UnitDelay_InitialCondition_oe4c3ahrqy ; { int32_T i , j ; real_T * As = (
real_T * ) rtDW . gyy03l5gua . AS ; real_T * Bs = ( real_T * ) rtDW .
gyy03l5gua . BS ; real_T * Cs = ( real_T * ) rtDW . gyy03l5gua . CS ; real_T
* Ds = ( real_T * ) rtDW . gyy03l5gua . DS ; real_T * X0 = ( real_T * ) &
rtDW . ghzfhogk1s [ 0 ] ; for ( i = 0 ; i < 36 ; i ++ ) { X0 [ i ] = ( rtP .
StateSpace_X0_param [ i ] ) ; } for ( i = 0 ; i < 36 ; i ++ ) { for ( j = 0 ;
j < 36 ; j ++ ) As [ i * 36 + j ] = ( rtP . StateSpace_AS_param [ i + j * 36
] ) ; for ( j = 0 ; j < 37 ; j ++ ) Bs [ i * 37 + j ] = ( rtP .
StateSpace_BS_param [ i + j * 36 ] ) ; } for ( i = 0 ; i < 42 ; i ++ ) { for
( j = 0 ; j < 36 ; j ++ ) Cs [ i * 36 + j ] = ( rtP . StateSpace_CS_param [ i
+ j * 42 ] ) ; } for ( i = 0 ; i < 42 ; i ++ ) { for ( j = 0 ; j < 37 ; j ++
) Ds [ i * 37 + j ] = ( rtP . StateSpace_DS_param [ i + j * 42 ] ) ; } {
int_T * switch_status = ( int_T * ) rtDW . gyy03l5gua . SWITCH_STATUS ; int_T
* gState = ( int_T * ) rtDW . gyy03l5gua . G_STATE ; real_T * yswitch = (
real_T * ) rtDW . gyy03l5gua . Y_SWITCH ; int_T * switchTypes = ( int_T * )
rtDW . gyy03l5gua . SWITCH_TYPES ; int_T * idxOutSw = ( int_T * ) rtDW .
gyy03l5gua . IDX_OUT_SW ; int_T * switch_status_init = ( int_T * ) rtDW .
gyy03l5gua . SWITCH_STATUS_INIT ; switch_status [ 0 ] = 0 ;
switch_status_init [ 0 ] = 0 ; gState [ 0 ] = ( int_T ) 0.0 ; yswitch [ 0 ] =
1 / 0.0001 ; switchTypes [ 0 ] = ( int_T ) 3.0 ; idxOutSw [ 0 ] = ( ( int_T )
0.0 ) - 1 ; switch_status [ 1 ] = 0 ; switch_status_init [ 1 ] = 0 ; gState [
1 ] = ( int_T ) 0.0 ; yswitch [ 1 ] = 1 / 0.001 ; switchTypes [ 1 ] = ( int_T
) 6.0 ; idxOutSw [ 1 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 2 ] = 0 ;
switch_status_init [ 2 ] = 0 ; gState [ 2 ] = ( int_T ) 0.0 ; yswitch [ 2 ] =
1 / 0.0002 ; switchTypes [ 2 ] = ( int_T ) 7.0 ; idxOutSw [ 2 ] = ( ( int_T )
0.0 ) - 1 ; switch_status [ 3 ] = 0 ; switch_status_init [ 3 ] = 0 ; gState [
3 ] = ( int_T ) 0.0 ; yswitch [ 3 ] = 1 / 0.0002 ; switchTypes [ 3 ] = (
int_T ) 7.0 ; idxOutSw [ 3 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 4 ] =
0 ; switch_status_init [ 4 ] = 0 ; gState [ 4 ] = ( int_T ) 0.0 ; yswitch [ 4
] = 1 / 0.0002 ; switchTypes [ 4 ] = ( int_T ) 7.0 ; idxOutSw [ 4 ] = ( (
int_T ) 0.0 ) - 1 ; switch_status [ 5 ] = 0 ; switch_status_init [ 5 ] = 0 ;
gState [ 5 ] = ( int_T ) 0.0 ; yswitch [ 5 ] = 1 / 0.0002 ; switchTypes [ 5 ]
= ( int_T ) 7.0 ; idxOutSw [ 5 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 6
] = 0 ; switch_status_init [ 6 ] = 0 ; gState [ 6 ] = ( int_T ) 0.0 ; yswitch
[ 6 ] = 1 / 0.0002 ; switchTypes [ 6 ] = ( int_T ) 3.0 ; idxOutSw [ 6 ] = ( (
int_T ) 0.0 ) - 1 ; switch_status [ 7 ] = 0 ; switch_status_init [ 7 ] = 0 ;
gState [ 7 ] = ( int_T ) 0.0 ; yswitch [ 7 ] = 1 / 0.0002 ; switchTypes [ 7 ]
= ( int_T ) 3.0 ; idxOutSw [ 7 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 8
] = 0 ; switch_status_init [ 8 ] = 0 ; gState [ 8 ] = ( int_T ) 0.0 ; yswitch
[ 8 ] = 1 / 0.0002 ; switchTypes [ 8 ] = ( int_T ) 7.0 ; idxOutSw [ 8 ] = ( (
int_T ) 0.0 ) - 1 ; switch_status [ 9 ] = 0 ; switch_status_init [ 9 ] = 0 ;
gState [ 9 ] = ( int_T ) 0.0 ; yswitch [ 9 ] = 1 / 0.0002 ; switchTypes [ 9 ]
= ( int_T ) 7.0 ; idxOutSw [ 9 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 10
] = 0 ; switch_status_init [ 10 ] = 0 ; gState [ 10 ] = ( int_T ) 0.0 ;
yswitch [ 10 ] = 1 / 0.0002 ; switchTypes [ 10 ] = ( int_T ) 7.0 ; idxOutSw [
10 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 11 ] = 0 ; switch_status_init
[ 11 ] = 0 ; gState [ 11 ] = ( int_T ) 0.0 ; yswitch [ 11 ] = 1 / 0.0002 ;
switchTypes [ 11 ] = ( int_T ) 7.0 ; idxOutSw [ 11 ] = ( ( int_T ) 0.0 ) - 1
; switch_status [ 12 ] = 0 ; switch_status_init [ 12 ] = 0 ; gState [ 12 ] =
( int_T ) 0.0 ; yswitch [ 12 ] = 1 / 0.0002 ; switchTypes [ 12 ] = ( int_T )
3.0 ; idxOutSw [ 12 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 13 ] = 0 ;
switch_status_init [ 13 ] = 0 ; gState [ 13 ] = ( int_T ) 0.0 ; yswitch [ 13
] = 1 / 0.0002 ; switchTypes [ 13 ] = ( int_T ) 3.0 ; idxOutSw [ 13 ] = ( (
int_T ) 0.0 ) - 1 ; switch_status [ 14 ] = 0 ; switch_status_init [ 14 ] = 0
; gState [ 14 ] = ( int_T ) 0.0 ; yswitch [ 14 ] = 1 / 0.0002 ; switchTypes [
14 ] = ( int_T ) 7.0 ; idxOutSw [ 14 ] = ( ( int_T ) 0.0 ) - 1 ;
switch_status [ 15 ] = 0 ; switch_status_init [ 15 ] = 0 ; gState [ 15 ] = (
int_T ) 0.0 ; yswitch [ 15 ] = 1 / 0.0002 ; switchTypes [ 15 ] = ( int_T )
7.0 ; idxOutSw [ 15 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 16 ] = 0 ;
switch_status_init [ 16 ] = 0 ; gState [ 16 ] = ( int_T ) 0.0 ; yswitch [ 16
] = 1 / 0.0002 ; switchTypes [ 16 ] = ( int_T ) 7.0 ; idxOutSw [ 16 ] = ( (
int_T ) 0.0 ) - 1 ; switch_status [ 17 ] = 0 ; switch_status_init [ 17 ] = 0
; gState [ 17 ] = ( int_T ) 0.0 ; yswitch [ 17 ] = 1 / 0.0002 ; switchTypes [
17 ] = ( int_T ) 7.0 ; idxOutSw [ 17 ] = ( ( int_T ) 0.0 ) - 1 ;
switch_status [ 18 ] = 0 ; switch_status_init [ 18 ] = 0 ; gState [ 18 ] = (
int_T ) 0.0 ; yswitch [ 18 ] = 1 / 0.0002 ; switchTypes [ 18 ] = ( int_T )
3.0 ; idxOutSw [ 18 ] = ( ( int_T ) 0.0 ) - 1 ; switch_status [ 19 ] = 0 ;
switch_status_init [ 19 ] = 0 ; gState [ 19 ] = ( int_T ) 0.0 ; yswitch [ 19
] = 1 / 0.0002 ; switchTypes [ 19 ] = ( int_T ) 3.0 ; idxOutSw [ 19 ] = ( (
int_T ) 0.0 ) - 1 ; } } rtDW . dnxojqrf4h = rtP . DiscreteTimeIntegrator_IC ;
rtDW . ib1uxvkmwq = rtP . Integ4_IC_aouvv15ahb ; { SimStruct * rts =
ssGetSFunction ( rtS , 10 ) ; sfcnInitializeConditions ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . a25qmsclry = rtP .
UnitDelay_InitialCondition_hi5myw2wbs ; rtDW . pmeo1rt34b = rtP .
UnitDelay1_InitialCondition_jystgemzdu ; rtDW . mjz4t5iaxe = rtP .
Integ4_IC_in1hdrx4qr ; { SimStruct * rts = ssGetSFunction ( rtS , 11 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . ixquqw2qy3 = rtP . UnitDelay_InitialCondition_hef0pkfrpk
; rtDW . lifc0322ne = rtP . UnitDelay1_InitialCondition_c1zc5jxdmy ; rtDW .
harwcohew2 = rtP . Integ4_IC_amcixfh02i ; { SimStruct * rts = ssGetSFunction
( rtS , 12 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . fnwihpmay0 = rtP .
UnitDelay_InitialCondition_gsydl4aczd ; rtDW . baf0vsen1a = rtP .
UnitDelay1_InitialCondition_hlntujamzv ; rtDW . imwn1dqw3v = rtP .
Integ4_IC_buerkwsqzk ; { SimStruct * rts = ssGetSFunction ( rtS , 13 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . ckilcxfkro = rtP . UnitDelay_InitialCondition_dd0zzmyaxa
; rtDW . cynitekjpd = rtP . UnitDelay1_InitialCondition_ivg1jwgjgf ; rtDW .
mrkhrhxnww = rtP . Integ4_IC_gjud0ypzut ; { SimStruct * rts = ssGetSFunction
( rtS , 14 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . ktxgj0tsjf = rtP .
UnitDelay_InitialCondition_j5vrlvgdfu ; rtDW . mi5wu1glsv = rtP .
UnitDelay1_InitialCondition_aqxfegphwq ; rtDW . c4335nifsx = rtP .
Integ4_IC_hghymu5o2d ; { SimStruct * rts = ssGetSFunction ( rtS , 15 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . ptjo3yucdh = rtP . UnitDelay_InitialCondition_m1atbbxmdl
; rtDW . mrw2lvxadr = rtP . UnitDelay1_InitialCondition_bvhpvt24hu ; rtDW .
oqc2oijx4n [ 0 ] = rtP . UnitDelay_InitialCondition_mgudbpcgtt ; rtDW .
oqc2oijx4n [ 1 ] = rtP . UnitDelay_InitialCondition_mgudbpcgtt ; rtDW .
oqc2oijx4n [ 2 ] = rtP . UnitDelay_InitialCondition_mgudbpcgtt ; rtDW .
cjwxpfyi0s = rtB . ogvlsk02mg ; rtDW . fiemep045g = 2 ; rtDW . dhjfalcx4a =
rtP . Integrator_IC ; rtDW . o15yghmujb [ 0 ] = rtP .
Integrator_IC_kg0exmdii0 ; rtDW . o15yghmujb [ 1 ] = rtP .
Integrator_IC_kg0exmdii0 ; rtDW . ab2iqeii2p = rtP .
UnitDelay_InitialCondition_hvmmrz5whh ; rtDW . ihnppyndqr = rtP .
Integ4_IC_f03w4yglrt ; { SimStruct * rts = ssGetSFunction ( rtS , 16 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . klrwiho1ye = rtP . UnitDelay_InitialCondition_hw44anb1qk
; rtDW . a2f2juw01k = rtP . UnitDelay1_InitialCondition_dbtlgsoueo ; rtDW .
o0zn0bw5fs = rtP . DiscreteDerivative_InitialStates ; rtDW . afxwty24tb = rtP
. Discrete_Init ; rtDW . pbhkab23hm = rtP . RateLimiter_IC ; rtDW .
ilas2cvqvf = rtP . Delay_x1_InitialCondition ; rtDW . atky2tlkix = rtP .
Delay_x2_InitialCondition ; rtDW . aq42zioen3 = rtP . Integ4_IC_pitekfoys0 ;
{ SimStruct * rts = ssGetSFunction ( rtS , 17 ) ; sfcnInitializeConditions (
rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
n4rcukwcge = rtP . UnitDelay_InitialCondition_du0hifmua4 ; rtDW . mynehged5v
= rtP . UnitDelay1_InitialCondition_bxzmk5e5pe ; rtDW . cdvd2sss4w = rtP .
Integ4_IC_p5hl13nikg ; { SimStruct * rts = ssGetSFunction ( rtS , 18 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . dhbrbfsgve = rtP . UnitDelay_InitialCondition_fluz1hs4rw
; rtDW . erpra20zur = rtP . UnitDelay1_InitialCondition_oxna4lbe4y ; rtDW .
fz2io1e43r = rtP . Integ4_IC_ln1mjxwhre ; { SimStruct * rts = ssGetSFunction
( rtS , 19 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . b3skrgh41w = rtP .
UnitDelay_InitialCondition_l3h1l0mohd ; rtDW . nlavo4st2f = rtP .
UnitDelay1_InitialCondition_mxloi3dinr ; rtDW . b1pxac2euv = rtP .
Integ4_IC_g12toj1ern ; { SimStruct * rts = ssGetSFunction ( rtS , 20 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . ivxtrpjaaz = rtP . UnitDelay_InitialCondition_ictydfu5gx
; rtDW . hkgssuwq1m = rtP . UnitDelay1_InitialCondition_ew2tfa0xiv ; rtDW .
hanrdqnaqb = rtP . Integ4_IC_kpvxlhwixo ; { SimStruct * rts = ssGetSFunction
( rtS , 21 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . pmotaxwkhx = rtP .
UnitDelay_InitialCondition_gbfuarhyw0 ; rtDW . mybd2g2ug4 = rtP .
UnitDelay1_InitialCondition_ajpewtdlxk ; rtDW . echh34xzp1 = rtP .
Integ4_IC_bcihf3qerl ; { SimStruct * rts = ssGetSFunction ( rtS , 22 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . jlgyu44vvh = rtP . UnitDelay_InitialCondition_c1mnajnz03
; rtDW . ooqkjuryor = rtP . UnitDelay1_InitialCondition_fwlh0v4clc ; rtDW .
muylcyn1jj = rtP . Integ4_IC_ljmxfnx2ig ; { SimStruct * rts = ssGetSFunction
( rtS , 23 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . ljsg2sadfb = rtP .
UnitDelay_InitialCondition_d4fsgzspon ; rtDW . liggmwwqdw = rtP .
UnitDelay1_InitialCondition_nwwwd2tqrt ; rtDW . l1vptmfjzt = rtP .
Integ4_IC_b4moxyhjbs ; { SimStruct * rts = ssGetSFunction ( rtS , 24 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . ghxx3onjqv = rtP . UnitDelay_InitialCondition_iu5allnmxd
; rtDW . e5radjoywg = rtP . UnitDelay1_InitialCondition_fsrsshkqoc ; rtDW .
pvp424fepa = rtP . Integ4_IC_etee4cslmc ; { SimStruct * rts = ssGetSFunction
( rtS , 25 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . c32f1i3eco = rtP .
UnitDelay_InitialCondition_bh2031guu1 ; rtDW . efljn420bi = rtP .
UnitDelay1_InitialCondition_gcar3snp12 ; rtDW . nbkoe5uf1p = rtP .
Integ4_IC_lektlq1jie ; { SimStruct * rts = ssGetSFunction ( rtS , 26 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . mutthcbksv = rtP . UnitDelay_InitialCondition_nj2mac4354
; rtDW . nkocdivqnb = rtP . UnitDelay1_InitialCondition_exqimte31v ; rtDW .
mldhopdlpr = rtP . Integ4_IC_omqg2tqo15 ; { SimStruct * rts = ssGetSFunction
( rtS , 27 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . mmwyhcf00o = rtP .
UnitDelay_InitialCondition_drj2csvrhz ; rtDW . adrzqo1xe3 = rtP .
UnitDelay1_InitialCondition_lzsilqa4qy ; rtDW . cscb0srydh = rtP .
Integ4_IC_fzbpruzddz ; { SimStruct * rts = ssGetSFunction ( rtS , 28 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtDW . jqlkum55me = rtP . UnitDelay_InitialCondition_bp1tsi5gga
; rtDW . ensydwnmvi = rtP . UnitDelay1_InitialCondition_ovdhgn1wwe ; rtDW .
ihdw3zr5an = rtP . Integ4_IC_hubvqsbw3v ; { SimStruct * rts = ssGetSFunction
( rtS , 29 ) ; sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtDW . eacppom1uy = rtP .
UnitDelay_InitialCondition_pwcvpqdvoa ; rtDW . e5dcrnrcoh = rtP .
UnitDelay1_InitialCondition_ix5vy4jhke ; rtB . mal1o3rrov [ 0 ] = rtP .
S_Y0_o3ff3poqj5 ; rtB . mal1o3rrov [ 1 ] = rtP . S_Y0_o3ff3poqj5 ; rtB .
mal1o3rrov [ 2 ] = rtP . S_Y0_o3ff3poqj5 ; rtB . at1rfpdjxp = rtP . S_Y0 [ 0
] ; rtB . ipvjqdjexb = rtP . S_Y0 [ 1 ] ; elbt4vn0aq ( & rtB . m1irskyirr , (
mirwlvnwva * ) & rtP . m1irskyirr ) ; mh05nqty23 ( & rtB . ochgqd2u0r , (
hcrgr2vy5z * ) & rtP . ochgqd2u0r ) ; elbt4vn0aq ( & rtB . ox1z1gld2w , (
mirwlvnwva * ) & rtP . ox1z1gld2w ) ; mh05nqty23 ( & rtB . lbykfmi30w , (
hcrgr2vy5z * ) & rtP . lbykfmi30w ) ; rtDW . hijxp3gq4o = rtP . Integ4_IC ; {
SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnInitializeConditions ( rts
) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . lcfqi5wiqw
= rtP . UnitDelay_InitialCondition ; rtDW . pldh2wssv5 = rtP .
UnitDelay1_InitialCondition ; rtDW . golju3qw0i = rtP . Integ4_IC_bmrwd2awok
; { SimStruct * rts = ssGetSFunction ( rtS , 1 ) ; sfcnInitializeConditions (
rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
ate4w5xtkf = rtP . UnitDelay_InitialCondition_jycnfiyaap ; rtDW . ixft3bo0dp
= rtP . UnitDelay1_InitialCondition_eoex0bhdpa ; elbt4vn0aq ( & rtB .
klbd0xrbram , ( mirwlvnwva * ) & rtP . klbd0xrbram ) ; mh05nqty23 ( & rtB .
fwds5waerqt , ( hcrgr2vy5z * ) & rtP . fwds5waerqt ) ; rtB . hbphtpnzzj = rtP
. Gain_Y0 ; elbt4vn0aq ( & rtB . dzyhdh21lm , ( mirwlvnwva * ) & rtP .
dzyhdh21lm ) ; mh05nqty23 ( & rtB . jgqfnbi2jt , ( hcrgr2vy5z * ) & rtP .
jgqfnbi2jt ) ; } void MdlEnable ( void ) { rtDW . m1skjwniqk = 1 ; rtDW .
hyyms1dnyh = 1 ; rtDW . ollwobuil1 = 1 ; rtDW . gknbnf4qjh = 1 ; rtDW .
ccq3a0hvvz = 1U ; rtDW . l13rycub2z = 1 ; rtDW . i4vvodokqr = 1U ; rtDW .
cpzm1pmpde = 1 ; rtDW . ac2dk1rt3k = 1U ; rtDW . coxroxkeps = 1 ; rtDW .
fkhoj2jgmi = 1U ; rtDW . i51ueaix42 = 1U ; rtDW . aqkqgpm4gc = 1U ; rtDW .
jpogq0qh5i = 1 ; rtDW . gh4ntcxpmy = 1U ; rtDW . cmppqlszma = 1 ; rtDW .
njaezbobrh = 1U ; rtDW . emqtpaqsyx = 1 ; rtDW . gqe40uruvc = 1U ; rtDW .
astd22hv22 = 1 ; rtDW . gzyeeyibia = 1U ; rtDW . o2bedrw3qj = 1 ; rtDW .
lkucpq1uah = 1U ; rtDW . ctvv1mfvu3 = 1 ; rtDW . jjgj3xap4d = 1U ; rtDW .
nyffl0g5oa = 1 ; rtDW . jwgnwdiuim = 1U ; rtDW . lh2fnsyrng = 1 ; rtDW .
fvyxp4evkh = 1U ; rtDW . avzvl0d5ni = 1 ; rtDW . f2wyufteoz = 1U ; rtDW .
oiwxefn4uv = 1 ; rtDW . lcc4thgbvm = 1U ; rtDW . f3xukdg4ir = 1 ; rtDW .
n2aitbecpw = 1U ; rtDW . iemuxuhgxj = 1 ; rtDW . jjuul3sb0d = 1U ; rtDW .
lrk1dig0no = 1 ; rtDW . a5ot3orarr = 1U ; rtDW . b4vqgmg5hq = 1U ; } void
MdlStart ( void ) { { void * * pOSigstreamManagerAddr =
rt_GetOSigstreamManagerAddr ( ) ; const char * errorCreatingOSigstreamManager
= rtwOSigstreamManagerCreateInstance ( rt_GetMatSigLogSelectorFileName ( ) ,
pOSigstreamManagerAddr ) ; if ( errorCreatingOSigstreamManager != ( NULL ) )
{ * pOSigstreamManagerAddr = ( NULL ) ; ssSetErrorStatus ( rtS ,
errorCreatingOSigstreamManager ) ; return ; } } rtB . f3xnh04wjh [ 0 ] = rtP
. Constant_Value_as1yt3w1ta [ 0 ] ; rtB . f3xnh04wjh [ 1 ] = rtP .
Constant_Value_as1yt3w1ta [ 1 ] ; rtB . f3xnh04wjh [ 2 ] = rtP .
Constant_Value_as1yt3w1ta [ 2 ] ; { SimStruct * rts = ssGetSFunction ( rtS ,
2 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return
; } rtB . nkctcgpqso [ 0 ] = rtP . Constant1_Value [ 0 ] ; rtB . nkctcgpqso [
1 ] = rtP . Constant1_Value [ 1 ] ; rtB . nkctcgpqso [ 2 ] = rtP .
Constant1_Value [ 2 ] ; { SimStruct * rts = ssGetSFunction ( rtS , 3 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } {
SimStruct * rts = ssGetSFunction ( rtS , 4 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 5 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . hllfnshuyf [ 0 ] = rtP .
Constant_Value_n13py1cn2l [ 0 ] ; rtB . hllfnshuyf [ 1 ] = rtP .
Constant_Value_n13py1cn2l [ 1 ] ; rtB . hllfnshuyf [ 2 ] = rtP .
Constant_Value_n13py1cn2l [ 2 ] ; { SimStruct * rts = ssGetSFunction ( rtS ,
6 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return
; } rtB . m5n0tvijea [ 0 ] = rtP . Constant1_Value_bo4z2xsjra [ 0 ] ; rtB .
m5n0tvijea [ 1 ] = rtP . Constant1_Value_bo4z2xsjra [ 1 ] ; rtB . m5n0tvijea
[ 2 ] = rtP . Constant1_Value_bo4z2xsjra [ 2 ] ; { SimStruct * rts =
ssGetSFunction ( rtS , 7 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } { SimStruct * rts = ssGetSFunction ( rtS , 8 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } {
SimStruct * rts = ssGetSFunction ( rtS , 9 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { FWksInfo * fromwksInfo ;
if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == (
NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Temp" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace1_Data0 ; fromwksInfo -> nDataPoints = 744 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace1_Time0 ; rtDW .
lfo1uw1b0p . TimePtr = fromwksInfo -> time ; rtDW . lfo1uw1b0p . DataPtr =
fromwksInfo -> data ; rtDW . lfo1uw1b0p . RSimInfoPtr = fromwksInfo ; } rtDW
. p2fhxn0bci . PrevIndex = 0 ; } { FWksInfo * fromwksInfo ; if ( (
fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL )
) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Ir" ; fromwksInfo -> origDataTypeId =
0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 1 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints = 744 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW .
l3d41fro2o . TimePtr = fromwksInfo -> time ; rtDW . l3d41fro2o . DataPtr =
fromwksInfo -> data ; rtDW . l3d41fro2o . RSimInfoPtr = fromwksInfo ; } rtDW
. fjcqncbtpa . PrevIndex = 0 ; } { rtDW . gyy03l5gua . AS = ( real_T * )
calloc ( 36 * 36 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua . BS = ( real_T *
) calloc ( 36 * 37 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua . CS = ( real_T
* ) calloc ( 42 * 36 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua . DS = (
real_T * ) calloc ( 42 * 37 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua .
DX_COL = ( real_T * ) calloc ( 42 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua .
TMP2 = ( real_T * ) calloc ( 37 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua .
BD_COL = ( real_T * ) calloc ( 36 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua .
TMP1 = ( real_T * ) calloc ( 36 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua .
XTMP = ( real_T * ) calloc ( 36 , sizeof ( real_T ) ) ; rtDW . gyy03l5gua .
SWITCH_STATUS = ( int_T * ) calloc ( 20 , sizeof ( int_T ) ) ; rtDW .
gyy03l5gua . SW_CHG = ( int_T * ) calloc ( 20 , sizeof ( int_T ) ) ; rtDW .
gyy03l5gua . G_STATE = ( int_T * ) calloc ( 20 , sizeof ( int_T ) ) ; rtDW .
gyy03l5gua . Y_SWITCH = ( real_T * ) calloc ( 20 , sizeof ( real_T ) ) ; rtDW
. gyy03l5gua . SWITCH_TYPES = ( int_T * ) calloc ( 20 , sizeof ( int_T ) ) ;
rtDW . gyy03l5gua . IDX_OUT_SW = ( int_T * ) calloc ( 20 , sizeof ( int_T ) )
; rtDW . gyy03l5gua . SWITCH_STATUS_INIT = ( int_T * ) calloc ( 20 , sizeof (
int_T ) ) ; rtDW . gyy03l5gua . USWLAST = ( real_T * ) calloc ( 20 , sizeof (
real_T ) ) ; } rtB . aq0wk5w32c = rtP . K1_Value ; { SimStruct * rts =
ssGetSFunction ( rtS , 10 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . oi4fxfp2u0 = rtP . K1_Value_igupijfdda ; {
SimStruct * rts = ssGetSFunction ( rtS , 11 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtB . f5nmukgsc4 = rtP .
K1_Value_blbch5to5c ; { SimStruct * rts = ssGetSFunction ( rtS , 12 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtB . j0g2g0oaks = rtP . K1_Value_nn55xdcyte ; { SimStruct * rts =
ssGetSFunction ( rtS , 13 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . hd1nsijzpc = rtP . K1_Value_apbsevdf4n ; {
SimStruct * rts = ssGetSFunction ( rtS , 14 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtB . jcl1buglq4 = rtP .
K1_Value_gfk0vyatcd ; { SimStruct * rts = ssGetSFunction ( rtS , 15 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtB . ogvlsk02mg = rtP . Initial_Value ; rtDW . dzjozoogns = true ; rtDW .
mzm5o4mdzr = false ; ssSetSolverNeedsReset ( rtS ) ; { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } { SimStruct * rts = ssGetSFunction ( rtS , 1 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } {
SimStruct * rts = ssGetSFunction ( rtS , 16 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtB . iaqaqqt1jc = rtP .
K1_Value_mnxxbxkzc3 ; { SimStruct * rts = ssGetSFunction ( rtS , 17 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtB . ci4i34cvpj = rtP . K1_Value_mgtlppjp42 ; { SimStruct * rts =
ssGetSFunction ( rtS , 18 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . o2uxxe2t45 = rtP . K1_Value_exdwlktlap ; {
SimStruct * rts = ssGetSFunction ( rtS , 19 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtB . glnliw2gbu = rtP .
K1_Value_g33io5pe2n ; { SimStruct * rts = ssGetSFunction ( rtS , 20 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtB . e1ss3jmyjc = rtP . K1_Value_nofhnhfgqe ; { SimStruct * rts =
ssGetSFunction ( rtS , 21 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . kinr121xse = rtP . K1_Value_piw4pfcum5 ; {
SimStruct * rts = ssGetSFunction ( rtS , 22 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtB . b4cw0lelim = rtP .
K1_Value_ly41q0lfne ; { SimStruct * rts = ssGetSFunction ( rtS , 23 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtB . eyumafsgjn = rtP . K1_Value_odshxihjs1 ; { SimStruct * rts =
ssGetSFunction ( rtS , 24 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . ozyjvhhlpt = rtP . K1_Value_fascbhcv3t ; {
SimStruct * rts = ssGetSFunction ( rtS , 25 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtB . n00vcniaoj = rtP .
K1_Value_okiumpl42l ; { SimStruct * rts = ssGetSFunction ( rtS , 26 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtB . cos5j1nh2x = rtP . K1_Value_fl2t5hhsxt ; { SimStruct * rts =
ssGetSFunction ( rtS , 27 ) ; sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts
) != ( NULL ) ) return ; } rtB . hw5bsvoycb = rtP . K1_Value_huwvvbdsqd ; {
SimStruct * rts = ssGetSFunction ( rtS , 28 ) ; sfcnStart ( rts ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static const char_T * rt_ToWksLabels [ ] = { "P (kW)" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData , { rt_ToWksLabels } , ( NULL ) ,
( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ;
static const char_T rt_ToWksBlockName [ ] =
"power_PVarray_grid_det/To Workspace" ; rtDW . bdbgvmjymm . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Ppv_cur" , 0 ,
0 , 1 , 0.0001 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
bdbgvmjymm . LoggedData == ( NULL ) ) return ; } rtB . gudywxfntc = rtP .
K1_Value_ksxou1md45 ; { SimStruct * rts = ssGetSFunction ( rtS , 29 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
MdlInitialize ( ) ; MdlEnable ( ) ; { bool externalInputIsInDatasetFormat =
false ; void * pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { creal_T ihvx3pktqx ; creal_T pqq20nmt00 ;
creal_T f2qy1ven34 ; creal_T hiekkqjckm ; creal_T o2dmea0xvr ; creal_T
phpmdpcbxu ; real_T gfy1yepycs [ 3 ] ; real_T pllxoz3w5r [ 3 ] ; real_T
p3x2szmvf0 [ 3 ] ; real_T o0xsqct4ng ; real_T p0m5uz2jqa [ 3 ] ; real_T
bklc5rig2z ; real_T mwvcnabfhf [ 3 ] ; real_T nbge0mtnlx [ 3 ] ; real_T
khqzbk5gxa [ 3 ] ; real_T oetzrpdjay [ 3 ] ; real_T bw1u5trivs [ 3 ] ; real_T
cin5eyqzft ; real_T fp2koweo5u ; real_T fow0yjgeva ; real_T ptq0jdvsbh ;
real_T dma451azaj ; real_T hcownyakz4 ; real_T ffhxxivd0z ; real_T hjn1wn1s1t
; int32_T i ; real_T b5i3hstlai ; srClearBC ( rtDW . msv4qqksksf . p2zbab2zyq
) ; srClearBC ( rtDW . g23t01ww0z0 . osvjim3e0u ) ; srClearBC ( rtDW .
fwds5waerqt . ioz5px3kzt ) ; srClearBC ( rtDW . klbd0xrbram . b30icczwdz ) ;
srClearBC ( rtDW . bibamec5kg ) ; srClearBC ( rtDW . moo2ct0pfe ) ; srClearBC
( rtDW . kfq2syo2or ) ; rtB . f3xnh04wjh [ 0 ] = rtP .
Constant_Value_as1yt3w1ta [ 0 ] ; rtB . f3xnh04wjh [ 1 ] = rtP .
Constant_Value_as1yt3w1ta [ 1 ] ; rtB . f3xnh04wjh [ 2 ] = rtP .
Constant_Value_as1yt3w1ta [ 2 ] ; { SimStruct * rts = ssGetSFunction ( rtS ,
2 ) ; sfcnOutputs ( rts , 0 ) ; } khqzbk5gxa [ 0 ] = rtP . uhZ_Gain [ 0 ] *
rtB . okqn5bgutk [ 0 ] ; rtB . nkctcgpqso [ 0 ] = rtP . Constant1_Value [ 0 ]
; khqzbk5gxa [ 1 ] = rtP . uhZ_Gain [ 1 ] * rtB . okqn5bgutk [ 1 ] ; rtB .
nkctcgpqso [ 1 ] = rtP . Constant1_Value [ 1 ] ; khqzbk5gxa [ 2 ] = rtP .
uhZ_Gain [ 2 ] * rtB . okqn5bgutk [ 2 ] ; rtB . nkctcgpqso [ 2 ] = rtP .
Constant1_Value [ 2 ] ; { SimStruct * rts = ssGetSFunction ( rtS , 3 ) ;
sfcnOutputs ( rts , 0 ) ; } cin5eyqzft = khqzbk5gxa [ 0 ] - rtB . d24w5xgal0
[ 0 ] ; mwvcnabfhf [ 0 ] = rtP . Gain6_Gain [ 0 ] * cin5eyqzft ; khqzbk5gxa [
0 ] = cin5eyqzft ; cin5eyqzft = khqzbk5gxa [ 1 ] - rtB . d24w5xgal0 [ 1 ] ;
mwvcnabfhf [ 1 ] = rtP . Gain6_Gain [ 1 ] * cin5eyqzft ; khqzbk5gxa [ 1 ] =
cin5eyqzft ; cin5eyqzft = khqzbk5gxa [ 2 ] - rtB . d24w5xgal0 [ 2 ] ;
mwvcnabfhf [ 2 ] = rtP . Gain6_Gain [ 2 ] * cin5eyqzft ; khqzbk5gxa [ 2 ] =
cin5eyqzft ; { SimStruct * rts = ssGetSFunction ( rtS , 4 ) ; sfcnOutputs (
rts , 0 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 5 ) ; sfcnOutputs (
rts , 0 ) ; } cin5eyqzft = rtP . uhZ_Gain_m4hahhc3cz [ 0 ] * rtB . pttvbb2pav
[ 0 ] - rtB . o1mde0n1yk [ 0 ] ; nbge0mtnlx [ 0 ] = cin5eyqzft ; mwvcnabfhf [
0 ] += rtP . Gain3_Gain_g2ksz1f12h [ 0 ] * cin5eyqzft ; cin5eyqzft = rtP .
uhZ_Gain_m4hahhc3cz [ 1 ] * rtB . pttvbb2pav [ 1 ] - rtB . o1mde0n1yk [ 1 ] ;
nbge0mtnlx [ 1 ] = cin5eyqzft ; mwvcnabfhf [ 1 ] += rtP .
Gain3_Gain_g2ksz1f12h [ 1 ] * cin5eyqzft ; cin5eyqzft = rtP .
uhZ_Gain_m4hahhc3cz [ 2 ] * rtB . pttvbb2pav [ 2 ] - rtB . o1mde0n1yk [ 2 ] ;
fow0yjgeva = rtP . Gain3_Gain_g2ksz1f12h [ 2 ] * cin5eyqzft + mwvcnabfhf [ 2
] ; nbge0mtnlx [ 2 ] = cin5eyqzft ; mwvcnabfhf [ 2 ] = fow0yjgeva ; for ( i =
0 ; i < 3 ; i ++ ) { rtB . he14cjinkd [ i ] = 0.0 ; rtB . he14cjinkd [ i ] +=
rtP . mode2phaseS_Gain [ i ] * mwvcnabfhf [ 0 ] ; rtB . he14cjinkd [ i ] +=
rtP . mode2phaseS_Gain [ i + 3 ] * mwvcnabfhf [ 1 ] ; rtB . he14cjinkd [ i ]
+= rtP . mode2phaseS_Gain [ i + 6 ] * fow0yjgeva ; nbge0mtnlx [ i ] = rtP .
Gain4_Gain [ i ] * khqzbk5gxa [ i ] + rtP . Gain5_Gain [ i ] * nbge0mtnlx [ i
] ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB . hmjyxctvar [ i ] = 0.0 ; rtB .
hmjyxctvar [ i ] += rtP . mode2phaseR_Gain [ i ] * nbge0mtnlx [ 0 ] ; rtB .
hmjyxctvar [ i ] += rtP . mode2phaseR_Gain [ i + 3 ] * nbge0mtnlx [ 1 ] ; rtB
. hmjyxctvar [ i ] += rtP . mode2phaseR_Gain [ i + 6 ] * nbge0mtnlx [ 2 ] ;
rtB . hllfnshuyf [ i ] = rtP . Constant_Value_n13py1cn2l [ i ] ; } {
SimStruct * rts = ssGetSFunction ( rtS , 6 ) ; sfcnOutputs ( rts , 0 ) ; }
khqzbk5gxa [ 0 ] = rtP . uhZ_Gain_ldavx1hyde [ 0 ] * rtB . b5wfzsal13 [ 0 ] ;
rtB . m5n0tvijea [ 0 ] = rtP . Constant1_Value_bo4z2xsjra [ 0 ] ; khqzbk5gxa
[ 1 ] = rtP . uhZ_Gain_ldavx1hyde [ 1 ] * rtB . b5wfzsal13 [ 1 ] ; rtB .
m5n0tvijea [ 1 ] = rtP . Constant1_Value_bo4z2xsjra [ 1 ] ; khqzbk5gxa [ 2 ]
= rtP . uhZ_Gain_ldavx1hyde [ 2 ] * rtB . b5wfzsal13 [ 2 ] ; rtB . m5n0tvijea
[ 2 ] = rtP . Constant1_Value_bo4z2xsjra [ 2 ] ; { SimStruct * rts =
ssGetSFunction ( rtS , 7 ) ; sfcnOutputs ( rts , 0 ) ; } cin5eyqzft =
khqzbk5gxa [ 0 ] - rtB . apxmnwrgff [ 0 ] ; oetzrpdjay [ 0 ] = rtP .
Gain6_Gain_cnwwm5jxfb [ 0 ] * cin5eyqzft ; khqzbk5gxa [ 0 ] = cin5eyqzft ;
cin5eyqzft = khqzbk5gxa [ 1 ] - rtB . apxmnwrgff [ 1 ] ; oetzrpdjay [ 1 ] =
rtP . Gain6_Gain_cnwwm5jxfb [ 1 ] * cin5eyqzft ; khqzbk5gxa [ 1 ] =
cin5eyqzft ; cin5eyqzft = khqzbk5gxa [ 2 ] - rtB . apxmnwrgff [ 2 ] ;
oetzrpdjay [ 2 ] = rtP . Gain6_Gain_cnwwm5jxfb [ 2 ] * cin5eyqzft ;
khqzbk5gxa [ 2 ] = cin5eyqzft ; { SimStruct * rts = ssGetSFunction ( rtS , 8
) ; sfcnOutputs ( rts , 0 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 9
) ; sfcnOutputs ( rts , 0 ) ; } cin5eyqzft = rtP . uhZ_Gain_ea1warj2pf [ 0 ]
* rtB . okly2bzqby [ 0 ] - rtB . c0xf4gasvx [ 0 ] ; bw1u5trivs [ 0 ] =
cin5eyqzft ; oetzrpdjay [ 0 ] += rtP . Gain3_Gain_iaw3umtbfx [ 0 ] *
cin5eyqzft ; cin5eyqzft = rtP . uhZ_Gain_ea1warj2pf [ 1 ] * rtB . okly2bzqby
[ 1 ] - rtB . c0xf4gasvx [ 1 ] ; bw1u5trivs [ 1 ] = cin5eyqzft ; oetzrpdjay [
1 ] += rtP . Gain3_Gain_iaw3umtbfx [ 1 ] * cin5eyqzft ; cin5eyqzft = rtP .
uhZ_Gain_ea1warj2pf [ 2 ] * rtB . okly2bzqby [ 2 ] - rtB . c0xf4gasvx [ 2 ] ;
fow0yjgeva = rtP . Gain3_Gain_iaw3umtbfx [ 2 ] * cin5eyqzft + oetzrpdjay [ 2
] ; bw1u5trivs [ 2 ] = cin5eyqzft ; oetzrpdjay [ 2 ] = fow0yjgeva ; for ( i =
0 ; i < 3 ; i ++ ) { rtB . gjo03tzedv [ i ] = 0.0 ; rtB . gjo03tzedv [ i ] +=
rtP . mode2phaseS_Gain_ph1mfferiz [ i ] * oetzrpdjay [ 0 ] ; rtB . gjo03tzedv
[ i ] += rtP . mode2phaseS_Gain_ph1mfferiz [ i + 3 ] * oetzrpdjay [ 1 ] ; rtB
. gjo03tzedv [ i ] += rtP . mode2phaseS_Gain_ph1mfferiz [ i + 6 ] *
fow0yjgeva ; bw1u5trivs [ i ] = rtP . Gain4_Gain_ijr4if2n4i [ i ] *
khqzbk5gxa [ i ] + rtP . Gain5_Gain_e5lkbi3hrq [ i ] * bw1u5trivs [ i ] ; }
for ( i = 0 ; i < 3 ; i ++ ) { rtB . mj5uxto5hm [ i ] = 0.0 ; rtB .
mj5uxto5hm [ i ] += rtP . mode2phaseR_Gain_f10wmgb5wy [ i ] * bw1u5trivs [ 0
] ; rtB . mj5uxto5hm [ i ] += rtP . mode2phaseR_Gain_f10wmgb5wy [ i + 3 ] *
bw1u5trivs [ 1 ] ; rtB . mj5uxto5hm [ i ] += rtP .
mode2phaseR_Gain_f10wmgb5wy [ i + 6 ] * bw1u5trivs [ 2 ] ; } { real_T *
pDataValues = ( real_T * ) rtDW . lfo1uw1b0p . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . lfo1uw1b0p . TimePtr ; int_T currTimeIndex = rtDW .
p2fhxn0bci . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . lfo1uw1b0p .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . p2fhxn0bci . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB .
ccyyfrva3i = pDataValues [ currTimeIndex ] ; } else { rtB . ccyyfrva3i =
pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . ccyyfrva3i = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } cin5eyqzft = rtB . ccyyfrva3i + rtP .
u_K_Value ; fp2koweo5u = ( ( cin5eyqzft - rtP . Tref_K_Value ) * rtP .
alpha_Isc_Gain + rtP . IL_module_Value ) * rtP . PVArray_Npar ; { real_T *
pDataValues = ( real_T * ) rtDW . l3d41fro2o . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . l3d41fro2o . TimePtr ; int_T currTimeIndex = rtDW .
fjcqncbtpa . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . l3d41fro2o .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . fjcqncbtpa . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB .
owrpd40r4f = pDataValues [ currTimeIndex ] ; } else { rtB . owrpd40r4f =
pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . owrpd40r4f = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } fow0yjgeva = rtP . uSref_Gain * rtB .
owrpd40r4f ; rtB . hd010gossx = fp2koweo5u * fow0yjgeva ; rtB . psylw5ftqo =
rtDW . h2vwpcchd5 ; if ( rtDW . m1skjwniqk != 0 ) { rtDW . g1ps0mh4qh =
muDoubleScalarSin ( 6.2831853071795862 * rtP . u20kV2500MVA_Frequency *
ssGetTaskTime ( rtS , 1 ) ) ; rtDW . hoosvni13i = muDoubleScalarCos (
6.2831853071795862 * rtP . u20kV2500MVA_Frequency * ssGetTaskTime ( rtS , 1 )
) ; rtDW . m1skjwniqk = 0 ; } rtB . ncd5m41xqs = ( ( rtDW . g1ps0mh4qh * rtP
. SineWaveA_PCos + rtDW . hoosvni13i * rtP . SineWaveA_PSin ) * rtP .
SineWaveA_HCos + ( rtDW . hoosvni13i * rtP . SineWaveA_PCos - rtDW .
g1ps0mh4qh * rtP . SineWaveA_PSin ) * rtP . SineWaveA_Hsin ) * rtP .
SineWaveA_Amp + rtP . SineWaveA_Bias ; if ( rtDW . hyyms1dnyh != 0 ) { rtDW .
jy4gbbna5m = muDoubleScalarSin ( 6.2831853071795862 * rtP .
u20kV2500MVA_Frequency * ssGetTaskTime ( rtS , 1 ) ) ; rtDW . dddoob1h3n =
muDoubleScalarCos ( 6.2831853071795862 * rtP . u20kV2500MVA_Frequency *
ssGetTaskTime ( rtS , 1 ) ) ; rtDW . hyyms1dnyh = 0 ; } rtB . ie5urghlgt = (
( rtDW . jy4gbbna5m * rtP . SineWaveB_PCos + rtDW . dddoob1h3n * rtP .
SineWaveB_PSin ) * rtP . SineWaveB_HCos + ( rtDW . dddoob1h3n * rtP .
SineWaveB_PCos - rtDW . jy4gbbna5m * rtP . SineWaveB_PSin ) * rtP .
SineWaveB_Hsin ) * rtP . SineWaveB_Amp + rtP . SineWaveB_Bias ; if ( rtDW .
ollwobuil1 != 0 ) { rtDW . ccrvwkgeyc = muDoubleScalarSin (
6.2831853071795862 * rtP . u20kV2500MVA_Frequency * ssGetTaskTime ( rtS , 1 )
) ; rtDW . aehdlec5cy = muDoubleScalarCos ( 6.2831853071795862 * rtP .
u20kV2500MVA_Frequency * ssGetTaskTime ( rtS , 1 ) ) ; rtDW . ollwobuil1 = 0
; } rtB . jkyah5nk3q = ( ( rtDW . ccrvwkgeyc * rtP . SineWaveC_PCos + rtDW .
aehdlec5cy * rtP . SineWaveC_PSin ) * rtP . SineWaveC_HCos + ( rtDW .
aehdlec5cy * rtP . SineWaveC_PCos - rtDW . ccrvwkgeyc * rtP . SineWaveC_PSin
) * rtP . SineWaveC_Hsin ) * rtP . SineWaveC_Amp + rtP . SineWaveC_Bias ; {
real_T accum ; int_T * switch_status = ( int_T * ) rtDW . gyy03l5gua .
SWITCH_STATUS ; int_T * switch_status_init = ( int_T * ) rtDW . gyy03l5gua .
SWITCH_STATUS_INIT ; int_T * SwitchChange = ( int_T * ) rtDW . gyy03l5gua .
SW_CHG ; int_T * gState = ( int_T * ) rtDW . gyy03l5gua . G_STATE ; real_T *
yswitch = ( real_T * ) rtDW . gyy03l5gua . Y_SWITCH ; int_T * switchTypes = (
int_T * ) rtDW . gyy03l5gua . SWITCH_TYPES ; int_T * idxOutSw = ( int_T * )
rtDW . gyy03l5gua . IDX_OUT_SW ; real_T * DxCol = ( real_T * ) rtDW .
gyy03l5gua . DX_COL ; real_T * tmp2 = ( real_T * ) rtDW . gyy03l5gua . TMP2 ;
real_T * BDcol = ( real_T * ) rtDW . gyy03l5gua . BD_COL ; real_T * tmp1 = (
real_T * ) rtDW . gyy03l5gua . TMP1 ; real_T * uswlast = ( real_T * ) rtDW .
gyy03l5gua . USWLAST ; int_T newState ; int_T swChanged = 0 ; int loopsToDo =
20 ; real_T temp ; memcpy ( switch_status_init , switch_status , 20 * sizeof
( int_T ) ) ; memcpy ( uswlast , & rtB . pg1alta3lu [ 0 ] , 20 * sizeof (
real_T ) ) ; do { if ( loopsToDo == 1 ) { swChanged = 0 ; { int_T i1 ; for (
i1 = 0 ; i1 < 20 ; i1 ++ ) { swChanged = ( ( SwitchChange [ i1 ] =
switch_status_init [ i1 ] - switch_status [ i1 ] ) != 0 ) ? 1 : swChanged ;
switch_status [ i1 ] = switch_status_init [ i1 ] ; } } } else { real_T * Cs =
( real_T * ) rtDW . gyy03l5gua . CS ; real_T * Ds = ( real_T * ) rtDW .
gyy03l5gua . DS ; { int_T i1 ; real_T * y0 = & rtB . pg1alta3lu [ 0 ] ; for (
i1 = 0 ; i1 < 42 ; i1 ++ ) { accum = 0.0 ; { int_T i2 ; real_T * xd = & rtDW
. ghzfhogk1s [ 0 ] ; for ( i2 = 0 ; i2 < 36 ; i2 ++ ) { accum += * ( Cs ++ )
* xd [ i2 ] ; } } accum += * ( Ds ++ ) * rtP . SwitchCurrents_Value ; accum
+= * ( Ds ++ ) * 0.0 ; { int_T i2 ; const real_T * u0 ; for ( i2 = 0 ; i2 <
18 ; i2 ++ ) { accum += * ( Ds ++ ) * 0.0 ; } accum += * ( Ds ++ ) * rtB .
he14cjinkd [ 0 ] ; accum += * ( Ds ++ ) * rtB . he14cjinkd [ 1 ] ; accum += *
( Ds ++ ) * rtB . he14cjinkd [ 2 ] ; accum += * ( Ds ++ ) * rtB . hmjyxctvar
[ 0 ] ; accum += * ( Ds ++ ) * rtB . hmjyxctvar [ 1 ] ; accum += * ( Ds ++ )
* rtB . hmjyxctvar [ 2 ] ; accum += * ( Ds ++ ) * rtB . gjo03tzedv [ 0 ] ;
accum += * ( Ds ++ ) * rtB . gjo03tzedv [ 1 ] ; accum += * ( Ds ++ ) * rtB .
gjo03tzedv [ 2 ] ; accum += * ( Ds ++ ) * rtB . mj5uxto5hm [ 0 ] ; accum += *
( Ds ++ ) * rtB . mj5uxto5hm [ 1 ] ; accum += * ( Ds ++ ) * rtB . mj5uxto5hm
[ 2 ] ; accum += * ( Ds ++ ) * rtB . hd010gossx ; accum += * ( Ds ++ ) * rtB
. psylw5ftqo ; accum += * ( Ds ++ ) * rtB . ncd5m41xqs ; accum += * ( Ds ++ )
* rtB . ie5urghlgt ; accum += * ( Ds ++ ) * rtB . jkyah5nk3q ; } y0 [ i1 ] =
accum ; } } swChanged = 0 ; { int_T i1 ; real_T * y0 = & rtB . pg1alta3lu [ 0
] ; for ( i1 = 0 ; i1 < 20 ; i1 ++ ) { switch ( switchTypes [ i1 ] ) { case 3
: newState = y0 [ i1 ] > 0.0 ? 1 : ( ( y0 [ i1 ] < 0.0 ) ? 0 : switch_status
[ i1 ] ) ; break ; case 6 : newState = ( y0 [ i1 ] > 0.0 ) && gState [ i1 ] >
0 ? 1 : ( ( ( y0 [ i1 ] < 0.0 ) || gState [ i1 ] == 0 ) ? 0 : switch_status [
i1 ] ) ; break ; case 7 : newState = ( ( y0 [ i1 ] > 0.0 ) && ( gState [ i1 ]
> 0 ) ) || ( y0 [ i1 ] < 0.0 ) ? 1 : ( ( ( y0 [ i1 ] > 0.0 ) && gState [ i1 ]
== 0 ) ? 0 : switch_status [ i1 ] ) ; break ; } swChanged = ( ( SwitchChange
[ i1 ] = newState - switch_status [ i1 ] ) != 0 ) ? 1 : swChanged ;
switch_status [ i1 ] = newState ; } } } if ( swChanged ) { real_T * As = (
real_T * ) rtDW . gyy03l5gua . AS ; real_T * Cs = ( real_T * ) rtDW .
gyy03l5gua . CS ; real_T * Bs = ( real_T * ) rtDW . gyy03l5gua . BS ; real_T
* Ds = ( real_T * ) rtDW . gyy03l5gua . DS ; real_T a1 ; { int_T i1 ; for (
i1 = 0 ; i1 < 20 ; i1 ++ ) { if ( SwitchChange [ i1 ] != 0 ) { a1 = yswitch [
i1 ] * SwitchChange [ i1 ] ; temp = 1 / ( 1 - Ds [ i1 * 38 ] * a1 ) ; { int_T
i2 ; for ( i2 = 0 ; i2 < 42 ; i2 ++ ) { DxCol [ i2 ] = Ds [ i2 * 37 + i1 ] *
temp * a1 ; } } DxCol [ i1 ] = temp ; { int_T i2 ; for ( i2 = 0 ; i2 < 36 ;
i2 ++ ) { BDcol [ i2 ] = Bs [ i2 * 37 + i1 ] * a1 ; } } memcpy ( tmp1 , & Cs
[ i1 * 36 ] , 36 * sizeof ( real_T ) ) ; memset ( & Cs [ i1 * 36 ] , '\0' ,
36 * sizeof ( real_T ) ) ; memcpy ( tmp2 , & Ds [ i1 * 37 ] , 37 * sizeof (
real_T ) ) ; memset ( & Ds [ i1 * 37 ] , '\0' , 37 * sizeof ( real_T ) ) ; {
int_T i2 ; for ( i2 = 0 ; i2 < 42 ; i2 ++ ) { a1 = DxCol [ i2 ] ; { int_T i3
; for ( i3 = 0 ; i3 < 36 ; i3 ++ ) { Cs [ i2 * 36 + i3 ] += a1 * tmp1 [ i3 ]
; } } { int_T i3 ; for ( i3 = 0 ; i3 < 37 ; i3 ++ ) { Ds [ i2 * 37 + i3 ] +=
a1 * tmp2 [ i3 ] ; } } } } { int_T i2 ; for ( i2 = 0 ; i2 < 36 ; i2 ++ ) { a1
= BDcol [ i2 ] ; { int_T i3 ; for ( i3 = 0 ; i3 < 36 ; i3 ++ ) { As [ i2 * 36
+ i3 ] += a1 * Cs [ i1 * 36 + i3 ] ; } } { int_T i3 ; for ( i3 = 0 ; i3 < 37
; i3 ++ ) { Bs [ i2 * 37 + i3 ] += a1 * Ds [ i1 * 37 + i3 ] ; } } } } } } } }
} while ( swChanged > 0 && -- loopsToDo > 0 ) ; if ( loopsToDo == 0 ) {
real_T * Cs = ( real_T * ) rtDW . gyy03l5gua . CS ; real_T * Ds = ( real_T *
) rtDW . gyy03l5gua . DS ; { int_T i1 ; real_T * y0 = & rtB . pg1alta3lu [ 0
] ; for ( i1 = 0 ; i1 < 42 ; i1 ++ ) { accum = 0.0 ; { int_T i2 ; real_T * xd
= & rtDW . ghzfhogk1s [ 0 ] ; for ( i2 = 0 ; i2 < 36 ; i2 ++ ) { accum += * (
Cs ++ ) * xd [ i2 ] ; } } accum += * ( Ds ++ ) * rtP . SwitchCurrents_Value ;
accum += * ( Ds ++ ) * 0.0 ; { int_T i2 ; const real_T * u0 ; for ( i2 = 0 ;
i2 < 18 ; i2 ++ ) { accum += * ( Ds ++ ) * 0.0 ; } accum += * ( Ds ++ ) * rtB
. he14cjinkd [ 0 ] ; accum += * ( Ds ++ ) * rtB . he14cjinkd [ 1 ] ; accum +=
* ( Ds ++ ) * rtB . he14cjinkd [ 2 ] ; accum += * ( Ds ++ ) * rtB .
hmjyxctvar [ 0 ] ; accum += * ( Ds ++ ) * rtB . hmjyxctvar [ 1 ] ; accum += *
( Ds ++ ) * rtB . hmjyxctvar [ 2 ] ; accum += * ( Ds ++ ) * rtB . gjo03tzedv
[ 0 ] ; accum += * ( Ds ++ ) * rtB . gjo03tzedv [ 1 ] ; accum += * ( Ds ++ )
* rtB . gjo03tzedv [ 2 ] ; accum += * ( Ds ++ ) * rtB . mj5uxto5hm [ 0 ] ;
accum += * ( Ds ++ ) * rtB . mj5uxto5hm [ 1 ] ; accum += * ( Ds ++ ) * rtB .
mj5uxto5hm [ 2 ] ; accum += * ( Ds ++ ) * rtB . hd010gossx ; accum += * ( Ds
++ ) * rtB . psylw5ftqo ; accum += * ( Ds ++ ) * rtB . ncd5m41xqs ; accum +=
* ( Ds ++ ) * rtB . ie5urghlgt ; accum += * ( Ds ++ ) * rtB . jkyah5nk3q ; }
y0 [ i1 ] = accum ; } } } { int_T i1 ; real_T * y1 = & rtB . ay1bqtoa42 [ 0 ]
; for ( i1 = 0 ; i1 < 20 ; i1 ++ ) { y1 [ i1 ] = ( real_T ) switch_status [
i1 ] ; } } } if ( ssGetTaskTime ( rtS , 0 ) < rtP . DeblockConverters_Time )
{ fp2koweo5u = rtP . DeblockConverters_Y0 ; } else { fp2koweo5u = rtP .
DeblockConverters_YFinal ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
obrq44eota = rtDW . dnxojqrf4h ; } if ( ssGetTaskTime ( rtS , 0 ) < rtP .
DeblockMPPT_Time ) { hjn1wn1s1t = rtP . DeblockMPPT_Y0 ; } else { hjn1wn1s1t
= rtP . DeblockMPPT_YFinal ; } if ( hjn1wn1s1t >= rtP . Switch1_Threshold ) {
b5i3hstlai = rtB . obrq44eota ; } else { b5i3hstlai = rtP .
Constant1_Value_day5k2tdhw ; } ffhxxivd0z = rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_Dinit -
b5i3hstlai ; rtB . ipwc4g5kbq = rtP . donotdeletethisgain_Gain * rtB .
pg1alta3lu [ 41 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtDW .
gknbnf4qjh != 0 ) { rtDW . j5c2uvj2oq = muDoubleScalarSin ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . fg2d05ol4v =
muDoubleScalarCos ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . gknbnf4qjh = 0 ; }
rtB . ey2rizmais = ( ( ( rtDW . j5c2uvj2oq * rtP . sinwt_PCos + rtDW .
fg2d05ol4v * rtP . sinwt_PSin ) * rtP . sinwt_HCos + ( rtDW . fg2d05ol4v *
rtP . sinwt_PCos - rtDW . j5c2uvj2oq * rtP . sinwt_PSin ) * rtP . sinwt_Hsin
) * rtP . sinwt_Amp + rtP . sinwt_Bias ) * rtB . ipwc4g5kbq ; if ( rtDW .
ccq3a0hvvz != 0 ) { rtB . m3yfzukqcw = rtDW . ib1uxvkmwq ; } else { rtB .
m3yfzukqcw = rtP . Integ4_gainval_acyknktfit * rtB . ey2rizmais + rtDW .
ib1uxvkmwq ; } rtB . aq0wk5w32c = rtP . K1_Value ; { SimStruct * rts =
ssGetSFunction ( rtS , 10 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime
( rtS , 2 ) >= rtB . aq0wk5w32c ) { rtB . cv4udxzzhc = ( rtB . m3yfzukqcw -
rtB . hnzqj2225r ) * rtP . K2_Value + ( rtP . Gain1_Gain_mdjweksv13 * rtB .
ey2rizmais - rtP . Gain_Gain_ajetlnuowr * rtDW . a25qmsclry ) ; } else { rtB
. cv4udxzzhc = rtDW . pmeo1rt34b ; } if ( rtDW . l13rycub2z != 0 ) { rtDW .
hulws5qzax = muDoubleScalarSin ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . nkyucij1yx =
muDoubleScalarCos ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . l13rycub2z = 0 ; }
rtB . csmg24xt1h = ( ( ( rtDW . hulws5qzax * rtP . coswt_PCos + rtDW .
nkyucij1yx * rtP . coswt_PSin ) * rtP . coswt_HCos + ( rtDW . nkyucij1yx *
rtP . coswt_PCos - rtDW . hulws5qzax * rtP . coswt_PSin ) * rtP . coswt_Hsin
) * rtP . coswt_Amp + rtP . coswt_Bias ) * rtB . ipwc4g5kbq ; if ( rtDW .
i4vvodokqr != 0 ) { rtB . l5ghcw4oar = rtDW . mjz4t5iaxe ; } else { rtB .
l5ghcw4oar = rtP . Integ4_gainval_m34pjkoi4m * rtB . csmg24xt1h + rtDW .
mjz4t5iaxe ; } rtB . oi4fxfp2u0 = rtP . K1_Value_igupijfdda ; { SimStruct *
rts = ssGetSFunction ( rtS , 11 ) ; sfcnOutputs ( rts , 0 ) ; } if (
ssGetTaskTime ( rtS , 2 ) >= rtB . oi4fxfp2u0 ) { rtB . b22ymbd3mf = ( rtB .
l5ghcw4oar - rtB . o1zxhzbujc ) * rtP . K2_Value_jprflebzbm + ( rtP .
Gain1_Gain * rtB . csmg24xt1h - rtP . Gain_Gain * rtDW . ixquqw2qy3 ) ; }
else { rtB . b22ymbd3mf = rtDW . lifc0322ne ; } dma451azaj =
muDoubleScalarHypot ( rtB . cv4udxzzhc , rtB . b22ymbd3mf ) ; ptq0jdvsbh =
rtP . RadDeg_Gain * muDoubleScalarAtan2 ( rtB . b22ymbd3mf , rtB . cv4udxzzhc
) ; } rtB . favzhhh3hu = rtP . donotdeletethisgain_Gain_mnpduykn4i * rtB .
pg1alta3lu [ 37 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtDW .
cpzm1pmpde != 0 ) { rtDW . h5eluf4mhs = muDoubleScalarSin ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . eylslb44al =
muDoubleScalarCos ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . cpzm1pmpde = 0 ; }
rtB . hwalic32e0 = ( ( ( rtDW . h5eluf4mhs * rtP . sinwt_PCos_ldbj3guoow +
rtDW . eylslb44al * rtP . sinwt_PSin_iuufprpx4d ) * rtP .
sinwt_HCos_asiwiduiyg + ( rtDW . eylslb44al * rtP . sinwt_PCos_ldbj3guoow -
rtDW . h5eluf4mhs * rtP . sinwt_PSin_iuufprpx4d ) * rtP .
sinwt_Hsin_mak1cz2jtq ) * rtP . sinwt_Amp_lhpdgz1f4p + rtP .
sinwt_Bias_pmyiopzank ) * rtB . favzhhh3hu ; if ( rtDW . ac2dk1rt3k != 0 ) {
rtB . eltfn04b2v = rtDW . harwcohew2 ; } else { rtB . eltfn04b2v = rtP .
Integ4_gainval_dma1zsooi4 * rtB . hwalic32e0 + rtDW . harwcohew2 ; } rtB .
f5nmukgsc4 = rtP . K1_Value_blbch5to5c ; { SimStruct * rts = ssGetSFunction (
rtS , 12 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . f5nmukgsc4 ) { rtB . mgvjcdjnon = ( rtB . eltfn04b2v - rtB . b34qw0i1wv
) * rtP . K2_Value_gqo2xfiqqa + ( rtP . Gain1_Gain_bx11igke5q * rtB .
hwalic32e0 - rtP . Gain_Gain_nmn5fkaqoa * rtDW . fnwihpmay0 ) ; } else { rtB
. mgvjcdjnon = rtDW . baf0vsen1a ; } if ( rtDW . coxroxkeps != 0 ) { rtDW .
ltflkvmtgt = muDoubleScalarSin ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . go54o5xrzu =
muDoubleScalarCos ( 1.0 / rtP .
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT *
6.2831853071795862 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . coxroxkeps = 0 ; }
rtB . j3a4ma3ewn = ( ( ( rtDW . ltflkvmtgt * rtP . coswt_PCos_cefmdsof5s +
rtDW . go54o5xrzu * rtP . coswt_PSin_ip1flhvgpu ) * rtP .
coswt_HCos_n5n2bmm3oz + ( rtDW . go54o5xrzu * rtP . coswt_PCos_cefmdsof5s -
rtDW . ltflkvmtgt * rtP . coswt_PSin_ip1flhvgpu ) * rtP .
coswt_Hsin_d2vrt0arhq ) * rtP . coswt_Amp_capd15k4h1 + rtP .
coswt_Bias_nfvvmsxu32 ) * rtB . favzhhh3hu ; if ( rtDW . fkhoj2jgmi != 0 ) {
rtB . mof1poi4zr = rtDW . imwn1dqw3v ; } else { rtB . mof1poi4zr = rtP .
Integ4_gainval_hfda0chi2s * rtB . j3a4ma3ewn + rtDW . imwn1dqw3v ; } rtB .
j0g2g0oaks = rtP . K1_Value_nn55xdcyte ; { SimStruct * rts = ssGetSFunction (
rtS , 13 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . j0g2g0oaks ) { rtB . ad3kqeqisd = ( rtB . mof1poi4zr - rtB . h1um2aqafa
) * rtP . K2_Value_mp20ez40ia + ( rtP . Gain1_Gain_d2sqh2usk4 * rtB .
j3a4ma3ewn - rtP . Gain_Gain_a3r3vvwy20 * rtDW . ckilcxfkro ) ; } else { rtB
. ad3kqeqisd = rtDW . cynitekjpd ; } b5i3hstlai = muDoubleScalarHypot ( rtB .
mgvjcdjnon , rtB . ad3kqeqisd ) ; if ( b5i3hstlai > rtP .
Saturation1_UpperSat ) { b5i3hstlai = rtP . Saturation1_UpperSat ; } else {
if ( b5i3hstlai < rtP . Saturation1_LowerSat ) { b5i3hstlai = rtP .
Saturation1_LowerSat ; } } rtB . mq3r0i5j44 = muDoubleScalarCos ( (
ptq0jdvsbh - rtP . RadDeg_Gain_mxg2y3inss * muDoubleScalarAtan2 ( rtB .
ad3kqeqisd , rtB . mgvjcdjnon ) ) * rtP . deg2rad_Gain ) * ( dma451azaj /
b5i3hstlai ) ; if ( rtDW . i51ueaix42 != 0 ) { rtB . ke3ol5ko23 = rtDW .
mrkhrhxnww ; } else { rtB . ke3ol5ko23 = rtP . Integ4_gainval_h3dnhx20ls *
rtB . ipwc4g5kbq + rtDW . mrkhrhxnww ; } rtB . hd1nsijzpc = rtP .
K1_Value_apbsevdf4n ; { SimStruct * rts = ssGetSFunction ( rtS , 14 ) ;
sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >= rtB .
hd1nsijzpc ) { rtB . e4ur0oizsv = ( rtB . ke3ol5ko23 - rtB . daq4mncg1i ) *
rtP . K2_Value_pvhiloavll + ( rtP . Gain1_Gain_atilud13g1 * rtB . ipwc4g5kbq
- rtP . Gain_Gain_p2kjinmjnk * rtDW . ktxgj0tsjf ) ; } else { rtB .
e4ur0oizsv = rtDW . mi5wu1glsv ; } if ( rtDW . aqkqgpm4gc != 0 ) { rtB .
kereqbn1t4 = rtDW . c4335nifsx ; } else { rtB . kereqbn1t4 = rtP .
Integ4_gainval_l5q1etraeb * rtB . favzhhh3hu + rtDW . c4335nifsx ; } rtB .
jcl1buglq4 = rtP . K1_Value_gfk0vyatcd ; { SimStruct * rts = ssGetSFunction (
rtS , 15 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . jcl1buglq4 ) { rtB . o5d0soeen3 = ( rtB . kereqbn1t4 - rtB . d5y15rbkwz
) * rtP . K2_Value_gpemnsgryf + ( rtP . Gain1_Gain_gq01hxeffi * rtB .
favzhhh3hu - rtP . Gain_Gain_cjgtjecd4l * rtDW . ptjo3yucdh ) ; } else { rtB
. o5d0soeen3 = rtDW . mrw2lvxadr ; } if ( rtB . o5d0soeen3 > rtP .
Saturation_UpperSat_efuiqyy5v2 ) { hcownyakz4 = rtP .
Saturation_UpperSat_efuiqyy5v2 ; } else if ( rtB . o5d0soeen3 < rtP .
Saturation_LowerSat_fm5f0kduq1 ) { hcownyakz4 = rtP .
Saturation_LowerSat_fm5f0kduq1 ; } else { hcownyakz4 = rtB . o5d0soeen3 ; }
hcownyakz4 = rtB . e4ur0oizsv / hcownyakz4 ; rtB . jr0qw103fz = rtB .
mq3r0i5j44 + hcownyakz4 ; } if ( hjn1wn1s1t >= rtP . Switch_Threshold ) {
dma451azaj = rtB . jr0qw103fz ; } else { dma451azaj = rtP .
Constant_Value_n5vm51nwbz ; } if ( dma451azaj > rtP . DeadZone_End ) {
dma451azaj -= rtP . DeadZone_End ; } else if ( dma451azaj >= rtP .
DeadZone_Start ) { dma451azaj = 0.0 ; } else { dma451azaj -= rtP .
DeadZone_Start ; } rtB . iiklvtcoqq = rtP . MPPTGain_Gain * dma451azaj ; if (
ffhxxivd0z > rtP . Saturation_UpperSat_laeib1jq35 ) { rtB . e0saic3iqd = rtP
. Saturation_UpperSat_laeib1jq35 ; } else if ( ffhxxivd0z < rtP .
Saturation_LowerSat_g4eivppwfy ) { rtB . e0saic3iqd = rtP .
Saturation_LowerSat_g4eivppwfy ; } else { rtB . e0saic3iqd = ffhxxivd0z ; }
rtB . ix54lu0252 = ( ( rtB . e0saic3iqd != rtP . Constant_Value_kuetp02hmz )
&& ( rtB . e0saic3iqd >= ( ( muDoubleScalarRem ( ssGetTaskTime ( rtS , 1 ) +
rtP . Constant3_Value , rtP . Constant2_Value ) * rtP . uib1_Gain_do31t30z52
* 2.0 - 1.0 ) + 1.0 ) * 0.5 ) ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB
. frbia4we4j [ 0 ] = rtDW . oqc2oijx4n [ 0 ] ; rtB . frbia4we4j [ 1 ] = rtDW
. oqc2oijx4n [ 1 ] ; rtB . frbia4we4j [ 2 ] = rtDW . oqc2oijx4n [ 2 ] ; } if
( rtDW . jpogq0qh5i != 0 ) { rtDW . mduabwvxdw [ 0 ] = muDoubleScalarSin (
rtP . SineWave_Freq * ssGetTaskTime ( rtS , 1 ) ) ; rtDW . ka0lb4ead4 [ 0 ] =
muDoubleScalarCos ( rtP . SineWave_Freq * ssGetTaskTime ( rtS , 1 ) ) ; rtDW
. mduabwvxdw [ 1 ] = muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime
( rtS , 1 ) ) ; rtDW . ka0lb4ead4 [ 1 ] = muDoubleScalarCos ( rtP .
SineWave_Freq * ssGetTaskTime ( rtS , 1 ) ) ; rtDW . mduabwvxdw [ 2 ] =
muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS , 1 ) ) ; rtDW
. ka0lb4ead4 [ 2 ] = muDoubleScalarCos ( rtP . SineWave_Freq * ssGetTaskTime
( rtS , 1 ) ) ; rtDW . jpogq0qh5i = 0 ; } if ( ( int32_T ) rtP .
Constant5_Value == 1 ) { khqzbk5gxa [ 0 ] = rtB . frbia4we4j [ 0 ] ;
khqzbk5gxa [ 1 ] = rtB . frbia4we4j [ 1 ] ; khqzbk5gxa [ 2 ] = rtB .
frbia4we4j [ 2 ] ; } else { khqzbk5gxa [ 0 ] = ( ( rtDW . mduabwvxdw [ 0 ] *
rtP . SineWave_PCos [ 0 ] + rtDW . ka0lb4ead4 [ 0 ] * rtP . SineWave_PSin [ 0
] ) * rtP . SineWave_HCos [ 0 ] + ( rtDW . ka0lb4ead4 [ 0 ] * rtP .
SineWave_PCos [ 0 ] - rtDW . mduabwvxdw [ 0 ] * rtP . SineWave_PSin [ 0 ] ) *
rtP . SineWave_Hsin [ 0 ] ) * rtP . SineWave_Amp + rtP . SineWave_Bias ;
khqzbk5gxa [ 1 ] = ( ( rtDW . mduabwvxdw [ 1 ] * rtP . SineWave_PCos [ 1 ] +
rtDW . ka0lb4ead4 [ 1 ] * rtP . SineWave_PSin [ 1 ] ) * rtP . SineWave_HCos [
1 ] + ( rtDW . ka0lb4ead4 [ 1 ] * rtP . SineWave_PCos [ 1 ] - rtDW .
mduabwvxdw [ 1 ] * rtP . SineWave_PSin [ 1 ] ) * rtP . SineWave_Hsin [ 1 ] )
* rtP . SineWave_Amp + rtP . SineWave_Bias ; khqzbk5gxa [ 2 ] = ( ( rtDW .
mduabwvxdw [ 2 ] * rtP . SineWave_PCos [ 2 ] + rtDW . ka0lb4ead4 [ 2 ] * rtP
. SineWave_PSin [ 2 ] ) * rtP . SineWave_HCos [ 2 ] + ( rtDW . ka0lb4ead4 [ 2
] * rtP . SineWave_PCos [ 2 ] - rtDW . mduabwvxdw [ 2 ] * rtP . SineWave_PSin
[ 2 ] ) * rtP . SineWave_Hsin [ 2 ] ) * rtP . SineWave_Amp + rtP .
SineWave_Bias ; } if ( ( int32_T ) rtP . Constant4_Value == 1 ) { hjn1wn1s1t
= rtB . owk5afwjt2 ; ffhxxivd0z = rtB . eknyv0afyk ; } else { o0xsqct4ng =
muDoubleScalarRem ( ssGetTaskTime ( rtS , 1 ) + rtP .
Constant3_Value_ed35vdft5z , rtP . Constant1_Value_kqscwqq4vj ) * rtP .
uib1_Gain ; LookUp_real_T_real_T ( & ( bklc5rig2z ) , rtP . LookupTable_YData
, o0xsqct4ng , rtP . LookupTable_XData , 2U ) ; dma451azaj = bklc5rig2z - rtP
. Constant2_Value_i0dlxfmxog ; hjn1wn1s1t = ( dma451azaj + 1.0 ) * 0.5 ;
ffhxxivd0z = ( dma451azaj - 1.0 ) * 0.5 ; } if ( rtB . jdg1nddwa0 ) { rtB .
mal1o3rrov [ 0 ] = ( khqzbk5gxa [ 0 ] >= hjn1wn1s1t ) - ( khqzbk5gxa [ 0 ] <=
ffhxxivd0z ) ; rtB . mal1o3rrov [ 1 ] = ( khqzbk5gxa [ 1 ] >= hjn1wn1s1t ) -
( khqzbk5gxa [ 1 ] <= ffhxxivd0z ) ; rtB . mal1o3rrov [ 2 ] = ( khqzbk5gxa [
2 ] >= hjn1wn1s1t ) - ( khqzbk5gxa [ 2 ] <= ffhxxivd0z ) ; srUpdateBC ( rtDW
. kfq2syo2or ) ; } if ( rtB . ly0wt10wsm ) { dma451azaj = rtP .
Gain_Gain_jbzlc2mjil * khqzbk5gxa [ 0 ] ; rtB . ipvjqdjexb = ( dma451azaj >=
hjn1wn1s1t ) - ( dma451azaj <= ffhxxivd0z ) ; rtB . at1rfpdjxp = ( khqzbk5gxa
[ 0 ] >= hjn1wn1s1t ) - ( khqzbk5gxa [ 0 ] <= ffhxxivd0z ) ; srUpdateBC (
rtDW . moo2ct0pfe ) ; } if ( ! rtB . ly0wt10wsm ) { khqzbk5gxa [ 0 ] = rtB .
mal1o3rrov [ 0 ] ; khqzbk5gxa [ 1 ] = rtB . mal1o3rrov [ 1 ] ; khqzbk5gxa [ 2
] = rtB . mal1o3rrov [ 2 ] ; } else { khqzbk5gxa [ 0 ] = rtB . at1rfpdjxp ;
khqzbk5gxa [ 1 ] = rtB . ipvjqdjexb ; khqzbk5gxa [ 2 ] = rtB . ipvjqdjexb ; }
khqzbk5gxa [ 0 ] += rtP . Constant2_Value_id2ug4wnj0 ; khqzbk5gxa [ 1 ] +=
rtP . Constant2_Value_id2ug4wnj0 ; switch ( ( int32_T ) khqzbk5gxa [ 0 ] ) {
case 1 : rtB . oiecajgznh [ 0 ] = rtP . Constant12_Value [ 0 ] ; rtB .
oiecajgznh [ 1 ] = rtP . Constant12_Value [ 1 ] ; rtB . oiecajgznh [ 2 ] =
rtP . Constant12_Value [ 2 ] ; rtB . oiecajgznh [ 3 ] = rtP .
Constant12_Value [ 3 ] ; break ; case 2 : rtB . oiecajgznh [ 0 ] = rtP .
Constant13_Value [ 0 ] ; rtB . oiecajgznh [ 1 ] = rtP . Constant13_Value [ 1
] ; rtB . oiecajgznh [ 2 ] = rtP . Constant13_Value [ 2 ] ; rtB . oiecajgznh
[ 3 ] = rtP . Constant13_Value [ 3 ] ; break ; default : rtB . oiecajgznh [ 0
] = rtP . Constant11_Value [ 0 ] ; rtB . oiecajgznh [ 1 ] = rtP .
Constant11_Value [ 1 ] ; rtB . oiecajgznh [ 2 ] = rtP . Constant11_Value [ 2
] ; rtB . oiecajgznh [ 3 ] = rtP . Constant11_Value [ 3 ] ; break ; } switch
( ( int32_T ) khqzbk5gxa [ 1 ] ) { case 1 : rtB . gfb5fstonv [ 0 ] = rtP .
Constant12_Value [ 0 ] ; rtB . gfb5fstonv [ 1 ] = rtP . Constant12_Value [ 1
] ; rtB . gfb5fstonv [ 2 ] = rtP . Constant12_Value [ 2 ] ; rtB . gfb5fstonv
[ 3 ] = rtP . Constant12_Value [ 3 ] ; break ; case 2 : rtB . gfb5fstonv [ 0
] = rtP . Constant13_Value [ 0 ] ; rtB . gfb5fstonv [ 1 ] = rtP .
Constant13_Value [ 1 ] ; rtB . gfb5fstonv [ 2 ] = rtP . Constant13_Value [ 2
] ; rtB . gfb5fstonv [ 3 ] = rtP . Constant13_Value [ 3 ] ; break ; default :
rtB . gfb5fstonv [ 0 ] = rtP . Constant11_Value [ 0 ] ; rtB . gfb5fstonv [ 1
] = rtP . Constant11_Value [ 1 ] ; rtB . gfb5fstonv [ 2 ] = rtP .
Constant11_Value [ 2 ] ; rtB . gfb5fstonv [ 3 ] = rtP . Constant11_Value [ 3
] ; break ; } switch ( ( int32_T ) ( khqzbk5gxa [ 2 ] + rtP .
Constant2_Value_id2ug4wnj0 ) ) { case 1 : rtB . imrfandgqo [ 0 ] = rtP .
Constant12_Value [ 0 ] ; rtB . imrfandgqo [ 1 ] = rtP . Constant12_Value [ 1
] ; rtB . imrfandgqo [ 2 ] = rtP . Constant12_Value [ 2 ] ; rtB . imrfandgqo
[ 3 ] = rtP . Constant12_Value [ 3 ] ; break ; case 2 : rtB . imrfandgqo [ 0
] = rtP . Constant13_Value [ 0 ] ; rtB . imrfandgqo [ 1 ] = rtP .
Constant13_Value [ 1 ] ; rtB . imrfandgqo [ 2 ] = rtP . Constant13_Value [ 2
] ; rtB . imrfandgqo [ 3 ] = rtP . Constant13_Value [ 3 ] ; break ; default :
rtB . imrfandgqo [ 0 ] = rtP . Constant11_Value [ 0 ] ; rtB . imrfandgqo [ 1
] = rtP . Constant11_Value [ 1 ] ; rtB . imrfandgqo [ 2 ] = rtP .
Constant11_Value [ 2 ] ; rtB . imrfandgqo [ 3 ] = rtP . Constant11_Value [ 3
] ; break ; } rtB . jz2jpueldv [ 0 ] = fp2koweo5u * rtB . oiecajgznh [ 0 ] ;
rtB . jz2jpueldv [ 4 ] = fp2koweo5u * rtB . gfb5fstonv [ 0 ] ; rtB .
jz2jpueldv [ 8 ] = fp2koweo5u * rtB . imrfandgqo [ 0 ] ; rtB . jz2jpueldv [ 1
] = fp2koweo5u * rtB . oiecajgznh [ 1 ] ; rtB . jz2jpueldv [ 5 ] = fp2koweo5u
* rtB . gfb5fstonv [ 1 ] ; rtB . jz2jpueldv [ 9 ] = fp2koweo5u * rtB .
imrfandgqo [ 1 ] ; rtB . jz2jpueldv [ 2 ] = fp2koweo5u * rtB . oiecajgznh [ 2
] ; rtB . jz2jpueldv [ 6 ] = fp2koweo5u * rtB . gfb5fstonv [ 2 ] ; rtB .
jz2jpueldv [ 10 ] = fp2koweo5u * rtB . imrfandgqo [ 2 ] ; rtB . jz2jpueldv [
3 ] = fp2koweo5u * rtB . oiecajgznh [ 3 ] ; rtB . jz2jpueldv [ 7 ] =
fp2koweo5u * rtB . gfb5fstonv [ 3 ] ; rtB . jz2jpueldv [ 11 ] = fp2koweo5u *
rtB . imrfandgqo [ 3 ] ; rtB . achbklegbl = fp2koweo5u * rtB . ix54lu0252 ;
rtB . mv4y4lj3e3 [ 0 ] = rtP . donotdeletethisgain_Gain_kb2zb2sa4y * rtB .
pg1alta3lu [ 34 ] * rtP . Kv1_Gain ; rtB . mv4y4lj3e3 [ 1 ] = rtP .
donotdeletethisgain_Gain_kt5arp05v1 * rtB . pg1alta3lu [ 35 ] * rtP .
Kv1_Gain ; rtB . mv4y4lj3e3 [ 2 ] = rtP . donotdeletethisgain_Gain_bukv5qr0ht
* rtB . pg1alta3lu [ 36 ] * rtP . Kv1_Gain ; rtB . brgco0dpcf [ 0 ] = rtP .
Vpu_Gain * rtB . mv4y4lj3e3 [ 0 ] ; rtB . brgco0dpcf [ 1 ] = rtP . Vpu_Gain *
rtB . mv4y4lj3e3 [ 1 ] ; rtB . brgco0dpcf [ 2 ] = rtP . Vpu_Gain * rtB .
mv4y4lj3e3 [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { gfy1yepycs [ i ] = rtP .
Gain1_Gain_ozhyrxfmnh * ( rtP . Gain3_Gain_p1jkth5m13 [ i + 6 ] * rtB .
brgco0dpcf [ 2 ] + ( rtP . Gain3_Gain_p1jkth5m13 [ i + 3 ] * rtB . brgco0dpcf
[ 1 ] + rtP . Gain3_Gain_p1jkth5m13 [ i ] * rtB . brgco0dpcf [ 0 ] ) ) ; } if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . n10p5f0juc = ( rtDW . cjwxpfyi0s >
rtP . Constant4_Value_cdziwzfobx ) ; if ( rtDW . dzjozoogns ) { rtDW .
dzjozoogns = false ; rtB . ogvlsk02mg = rtP . Initial_Value ; } else { rtB .
ogvlsk02mg = rtDW . cjwxpfyi0s - rtP . Constant4_Value_cdziwzfobx ; } if (
rtB . n10p5f0juc && ( rtDW . fiemep045g <= 0 ) ) { rtDW . cjwxpfyi0s = rtB .
ogvlsk02mg ; } rtB . nzglgwuqma = rtDW . cjwxpfyi0s ; } klbd0xrbra ( rtB .
bwnjdjpcaw , & gfy1yepycs [ 0 ] , rtB . nzglgwuqma , & rtB . m1irskyirr , &
rtDW . m1irskyirr ) ; fwds5waerq ( rtB . oiidjdpb5o , & gfy1yepycs [ 0 ] ,
rtB . nzglgwuqma , & rtB . ochgqd2u0r , & rtDW . ochgqd2u0r ) ; if ( rtB .
bwnjdjpcaw != 0 ) { hjn1wn1s1t = rtB . m1irskyirr . oxbdpl4uxb ; ffhxxivd0z =
rtB . m1irskyirr . eigeh3vm4p ; } else { hjn1wn1s1t = rtB . ochgqd2u0r .
eyzp44vp0r ; ffhxxivd0z = rtB . ochgqd2u0r . ni0yn3ls4o ; } rtB . e5zlxkpqts
= rtP . donotdeletethisgain_Gain_m3rdldqf5v * rtB . pg1alta3lu [ 33 ] ; rtB .
gcfwkua3e1 = 1.0 / rtP . VSCControl_Vnom_dc * ( rtB . e5zlxkpqts - rtB .
gzrqmoukkq ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . e0g5n03rqo = rtP
. PI_I * rtB . gcfwkua3e1 ; rtB . cligl2qrn5 = rtP . Integrator_gainval * rtB
. e0g5n03rqo + rtDW . dhjfalcx4a ; b5i3hstlai = rtP . PI_P * rtB . gcfwkua3e1
+ rtB . cligl2qrn5 ; if ( b5i3hstlai > rtP . PI_UpperSaturationLimit ) { rtB
. djdxiwj2ib = rtP . PI_UpperSaturationLimit ; } else if ( b5i3hstlai < rtP .
PI_LowerSaturationLimit ) { rtB . djdxiwj2ib = rtP . PI_LowerSaturationLimit
; } else { rtB . djdxiwj2ib = b5i3hstlai ; } rtB . i0kbmmrhrv = rtP .
Rtot_pu1_Gain * rtB . djdxiwj2ib ; rtB . ibfymfexhi = rtP . Ltot_pu2_Gain *
rtB . djdxiwj2ib ; } rtB . kroikqwecg = ( hjn1wn1s1t + rtB . i0kbmmrhrv ) -
rtB . nbftkfipzp ; rtB . lkufp4wpyq = ( ffhxxivd0z + rtB . a5q44iw4oh ) + rtB
. ibfymfexhi ; rtB . ok1tffrvb3 [ 0 ] = rtP .
donotdeletethisgain_Gain_hd2lurzjs1 * rtB . pg1alta3lu [ 38 ] * rtP . Kv_Gain
; rtB . ok1tffrvb3 [ 1 ] = rtP . donotdeletethisgain_Gain_g0aitc3jds * rtB .
pg1alta3lu [ 39 ] * rtP . Kv_Gain ; rtB . ok1tffrvb3 [ 2 ] = rtP .
donotdeletethisgain_Gain_j0j522ufey * rtB . pg1alta3lu [ 40 ] * rtP . Kv_Gain
; for ( i = 0 ; i < 3 ; i ++ ) { pllxoz3w5r [ i ] = rtP .
Gain1_Gain_pnfzbhegxe * ( rtP . Gain3_Gain_dyow2vdij1 [ i + 6 ] * ( rtP .
Vpu1_Gain * rtB . ok1tffrvb3 [ 2 ] ) + ( rtP . Gain3_Gain_dyow2vdij1 [ i + 3
] * ( rtP . Vpu1_Gain * rtB . ok1tffrvb3 [ 1 ] ) + rtP . Vpu1_Gain * rtB .
ok1tffrvb3 [ 0 ] * rtP . Gain3_Gain_dyow2vdij1 [ i ] ) ) ; } klbd0xrbra ( rtB
. e5omhkiopk , & pllxoz3w5r [ 0 ] , rtB . nzglgwuqma , & rtB . ox1z1gld2w , &
rtDW . ox1z1gld2w ) ; fwds5waerq ( rtB . f5wahbcw2x , & pllxoz3w5r [ 0 ] ,
rtB . nzglgwuqma , & rtB . lbykfmi30w , & rtDW . lbykfmi30w ) ; if ( rtB .
e5omhkiopk != 0 ) { rtB . kwtekdraxk [ 0 ] = rtB . ox1z1gld2w . oxbdpl4uxb ;
rtB . kwtekdraxk [ 1 ] = rtB . ox1z1gld2w . eigeh3vm4p ; } else { rtB .
kwtekdraxk [ 0 ] = rtB . lbykfmi30w . eyzp44vp0r ; rtB . kwtekdraxk [ 1 ] =
rtB . lbykfmi30w . ni0yn3ls4o ; } rtB . grnuxqrq3j [ 0 ] = rtB . djdxiwj2ib -
rtB . kwtekdraxk [ 0 ] ; rtB . grnuxqrq3j [ 1 ] = rtP . Iq_ref_Value - rtB .
kwtekdraxk [ 1 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { b5i3hstlai = rtP .
PI_P_g4lt0nquhm * rtB . grnuxqrq3j [ 0 ] + rtDW . o15yghmujb [ 0 ] ; if (
b5i3hstlai > rtP . PI_UpperSaturationLimit_mht110pv0e ) { rtB . fezqd2sumv [
0 ] = rtP . PI_UpperSaturationLimit_mht110pv0e ; } else if ( b5i3hstlai < rtP
. PI_LowerSaturationLimit_czu3kr5icc ) { rtB . fezqd2sumv [ 0 ] = rtP .
PI_LowerSaturationLimit_czu3kr5icc ; } else { rtB . fezqd2sumv [ 0 ] =
b5i3hstlai ; } rtB . bwti5wt3ya [ 0 ] = rtP . PI_I_njl0p4juwl * rtB .
grnuxqrq3j [ 0 ] ; b5i3hstlai = rtP . PI_P_g4lt0nquhm * rtB . grnuxqrq3j [ 1
] + rtDW . o15yghmujb [ 1 ] ; if ( b5i3hstlai > rtP .
PI_UpperSaturationLimit_mht110pv0e ) { rtB . fezqd2sumv [ 1 ] = rtP .
PI_UpperSaturationLimit_mht110pv0e ; } else if ( b5i3hstlai < rtP .
PI_LowerSaturationLimit_czu3kr5icc ) { rtB . fezqd2sumv [ 1 ] = rtP .
PI_LowerSaturationLimit_czu3kr5icc ; } else { rtB . fezqd2sumv [ 1 ] =
b5i3hstlai ; } rtB . bwti5wt3ya [ 1 ] = rtP . PI_I_njl0p4juwl * rtB .
grnuxqrq3j [ 1 ] ; } hjn1wn1s1t = rtB . fezqd2sumv [ 0 ] + rtB . kroikqwecg ;
if ( hjn1wn1s1t > rtP . Saturation_UpperSat_dkga0zi5hq ) { hjn1wn1s1t = rtP .
Saturation_UpperSat_dkga0zi5hq ; } else { if ( hjn1wn1s1t < rtP .
Saturation_LowerSat_j5weoiqwmv ) { hjn1wn1s1t = rtP .
Saturation_LowerSat_j5weoiqwmv ; } } ffhxxivd0z = rtB . fezqd2sumv [ 1 ] +
rtB . lkufp4wpyq ; if ( ffhxxivd0z > rtP . Saturation_UpperSat_dkga0zi5hq ) {
ffhxxivd0z = rtP . Saturation_UpperSat_dkga0zi5hq ; } else { if ( ffhxxivd0z
< rtP . Saturation_LowerSat_j5weoiqwmv ) { ffhxxivd0z = rtP .
Saturation_LowerSat_j5weoiqwmv ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
fp2koweo5u = rtDW . ab2iqeii2p ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
rtP . Constant1_Value_finlsj5cwk > 0.0 ) { if ( ! rtDW . mzm5o4mdzr ) { if (
ssGetTaskTime ( rtS , 2 ) != ssGetTStart ( rtS ) ) { ssSetSolverNeedsReset (
rtS ) ; } rtDW . nihykliv33 = 1U ; rtDW . h0pos1xozd = 1U ; rtDW . mzm5o4mdzr
= true ; } for ( i = 0 ; i < 3 ; i ++ ) { p0m5uz2jqa [ i ] = rtP .
Gain1_Gain_mv4azmob4e * ( rtP . Gain3_Gain [ i + 6 ] * rtB . brgco0dpcf [ 2 ]
+ ( rtP . Gain3_Gain [ i + 3 ] * rtB . brgco0dpcf [ 1 ] + rtP . Gain3_Gain [
i ] * rtB . brgco0dpcf [ 0 ] ) ) ; } klbd0xrbra ( rtB . ldbz23n5ir , &
p0m5uz2jqa [ 0 ] , rtB . nzglgwuqma , & rtB . klbd0xrbram , & rtDW .
klbd0xrbram ) ; fwds5waerq ( rtB . ahtdmndqnx , & p0m5uz2jqa [ 0 ] , rtB .
nzglgwuqma , & rtB . fwds5waerqt , & rtDW . fwds5waerqt ) ; if ( rtB .
ldbz23n5ir != 0 ) { rtB . iv1hfkdvbe [ 0 ] = rtB . klbd0xrbram . oxbdpl4uxb ;
rtB . iv1hfkdvbe [ 1 ] = rtB . klbd0xrbram . eigeh3vm4p ; } else { rtB .
iv1hfkdvbe [ 0 ] = rtB . fwds5waerqt . eyzp44vp0r ; rtB . iv1hfkdvbe [ 1 ] =
rtB . fwds5waerqt . ni0yn3ls4o ; } if ( rtDW . nihykliv33 != 0 ) { rtB .
oelqevpbry = rtDW . hijxp3gq4o ; } else { rtB . oelqevpbry = rtP .
Integ4_gainval * rtB . iv1hfkdvbe [ 0 ] + rtDW . hijxp3gq4o ; } if (
fp2koweo5u > rtP . Toavoiddivisionbyzero_UpperSat ) { dma451azaj = rtP .
Toavoiddivisionbyzero_UpperSat ; } else if ( fp2koweo5u < rtP .
Toavoiddivisionbyzero_LowerSat ) { dma451azaj = rtP .
Toavoiddivisionbyzero_LowerSat ; } else { dma451azaj = fp2koweo5u ; }
dma451azaj = 1.0 / dma451azaj / 0.0001 ; ptq0jdvsbh = muDoubleScalarCeil (
dma451azaj ) ; rtB . kglrgtgbsp = rtP . Ts_Control * ptq0jdvsbh ; { SimStruct
* rts = ssGetSFunction ( rtS , 0 ) ; sfcnOutputs ( rts , 0 ) ; } if (
ssGetTaskTime ( rtS , 2 ) >= rtP . Constant_Value ) { ptq0jdvsbh = dma451azaj
- ptq0jdvsbh ; rtB . kqdvcno01e = ( ( rtB . iv1hfkdvbe [ 0 ] - rtDW .
lcfqi5wiqw ) * ptq0jdvsbh * rtP . Gain1_Gain_cmdba5bv2h + rtB . iv1hfkdvbe [
0 ] ) * ( ptq0jdvsbh / dma451azaj ) + ( rtB . oelqevpbry - rtB . njxdhkx2nn )
* fp2koweo5u ; } else { rtB . kqdvcno01e = rtDW . pldh2wssv5 ; } if ( rtDW .
h0pos1xozd != 0 ) { rtB . bcbiecm4zm = rtDW . golju3qw0i ; } else { rtB .
bcbiecm4zm = rtP . Integ4_gainval_fz2uqdiylj * rtB . iv1hfkdvbe [ 1 ] + rtDW
. golju3qw0i ; } if ( fp2koweo5u > rtP .
Toavoiddivisionbyzero_UpperSat_cysl1cmul3 ) { dma451azaj = rtP .
Toavoiddivisionbyzero_UpperSat_cysl1cmul3 ; } else if ( fp2koweo5u < rtP .
Toavoiddivisionbyzero_LowerSat_k1vxw44tbr ) { dma451azaj = rtP .
Toavoiddivisionbyzero_LowerSat_k1vxw44tbr ; } else { dma451azaj = fp2koweo5u
; } dma451azaj = 1.0 / dma451azaj / 0.0001 ; ptq0jdvsbh = muDoubleScalarCeil
( dma451azaj ) ; rtB . k351ndf2p2 = rtP . Ts_Control * ptq0jdvsbh ; {
SimStruct * rts = ssGetSFunction ( rtS , 1 ) ; sfcnOutputs ( rts , 0 ) ; } if
( ssGetTaskTime ( rtS , 2 ) >= rtP . Constant_Value_jccahizvsu ) { ptq0jdvsbh
= dma451azaj - ptq0jdvsbh ; rtB . frpkkw3tvy = ( ( rtB . iv1hfkdvbe [ 1 ] -
rtDW . ate4w5xtkf ) * ptq0jdvsbh * rtP . Gain1_Gain_hetxdadbk5 + rtB .
iv1hfkdvbe [ 1 ] ) * ( ptq0jdvsbh / dma451azaj ) + ( rtB . bcbiecm4zm - rtB .
ohqb1f0agt ) * fp2koweo5u ; } else { rtB . frpkkw3tvy = rtDW . ixft3bo0dp ; }
b5i3hstlai = muDoubleScalarHypot ( rtB . kqdvcno01e , rtB . frpkkw3tvy ) ; if
( b5i3hstlai > rtP . Saturation_UpperSat ) { b5i3hstlai = rtP .
Saturation_UpperSat ; } else { if ( b5i3hstlai < rtP . Saturation_LowerSat )
{ b5i3hstlai = rtP . Saturation_LowerSat ; } } rtB . hbphtpnzzj = 1.0 /
b5i3hstlai ; srUpdateBC ( rtDW . bibamec5kg ) ; } else { if ( rtDW .
mzm5o4mdzr ) { ssSetSolverNeedsReset ( rtS ) ; rtDW . mzm5o4mdzr = false ; }
} } for ( i = 0 ; i < 3 ; i ++ ) { p3x2szmvf0 [ i ] = rtP .
Gain1_Gain_op30pyxpek * ( rtP . Gain3_Gain_nwldjxxvlq [ i + 6 ] * rtB .
brgco0dpcf [ 2 ] + ( rtP . Gain3_Gain_nwldjxxvlq [ i + 3 ] * rtB . brgco0dpcf
[ 1 ] + rtP . Gain3_Gain_nwldjxxvlq [ i ] * rtB . brgco0dpcf [ 0 ] ) ) ; }
klbd0xrbra ( rtB . ixdwjlg2uu , & p3x2szmvf0 [ 0 ] , rtB . nzglgwuqma , & rtB
. dzyhdh21lm , & rtDW . dzyhdh21lm ) ; fwds5waerq ( rtB . hezxa2a4ub , &
p3x2szmvf0 [ 0 ] , rtB . nzglgwuqma , & rtB . jgqfnbi2jt , & rtDW .
jgqfnbi2jt ) ; if ( rtB . ixdwjlg2uu != 0 ) { rtB . p51nrhewkg [ 0 ] = rtB .
dzyhdh21lm . oxbdpl4uxb ; rtB . p51nrhewkg [ 1 ] = rtB . dzyhdh21lm .
eigeh3vm4p ; } else { rtB . p51nrhewkg [ 0 ] = rtB . jgqfnbi2jt . eyzp44vp0r
; rtB . p51nrhewkg [ 1 ] = rtB . jgqfnbi2jt . ni0yn3ls4o ; } if ( rtDW .
gh4ntcxpmy != 0 ) { rtB . obitw0v3yj = rtDW . ihnppyndqr ; } else { rtB .
obitw0v3yj = rtP . Integ4_gainval_lotsoek0sk * rtB . p51nrhewkg [ 1 ] + rtDW
. ihnppyndqr ; } if ( fp2koweo5u > rtP .
Toavoiddivisionbyzero_UpperSat_fngqu4twkq ) { dma451azaj = rtP .
Toavoiddivisionbyzero_UpperSat_fngqu4twkq ; } else if ( fp2koweo5u < rtP .
Toavoiddivisionbyzero_LowerSat_nspiile1b5 ) { dma451azaj = rtP .
Toavoiddivisionbyzero_LowerSat_nspiile1b5 ; } else { dma451azaj = fp2koweo5u
; } dma451azaj = 1.0 / dma451azaj / 0.0001 ; ptq0jdvsbh = muDoubleScalarCeil
( dma451azaj ) ; rtB . e3tt25qjpe = rtP . Ts_Control * ptq0jdvsbh ; {
SimStruct * rts = ssGetSFunction ( rtS , 16 ) ; sfcnOutputs ( rts , 0 ) ; }
if ( ssGetTaskTime ( rtS , 2 ) >= rtP . Constant_Value_kkuzztqyci ) {
ptq0jdvsbh = dma451azaj - ptq0jdvsbh ; rtB . bvgai4gz1t = ( ( rtB .
p51nrhewkg [ 1 ] - rtDW . klrwiho1ye ) * ptq0jdvsbh * rtP .
Gain1_Gain_afd104gjl4 + rtB . p51nrhewkg [ 1 ] ) * ( ptq0jdvsbh / dma451azaj
) + ( rtB . obitw0v3yj - rtB . fdz0zczjpe ) * fp2koweo5u ; } else { rtB .
bvgai4gz1t = rtDW . a2f2juw01k ; } rtB . agnrdamyfj = rtB . bvgai4gz1t * rtB
. hbphtpnzzj ; rtDW . lfe3bbafy3 = ( rtB . agnrdamyfj - rtP .
DiscreteDerivative_DenCoef [ 1 ] * rtDW . o0zn0bw5fs ) / rtP .
DiscreteDerivative_DenCoef [ 0 ] ; b5i3hstlai = ( rtP . Discrete_Kp * rtB .
agnrdamyfj + rtDW . afxwty24tb ) + ( rtP . Discrete_Kd * rtDW . lfe3bbafy3 +
- rtP . Discrete_Kd * rtDW . o0zn0bw5fs ) ; if ( b5i3hstlai > rtP .
Saturation1_UpperSat_gtqpw40kq5 ) { rtB . lru24ttam4 = rtP .
Saturation1_UpperSat_gtqpw40kq5 ; } else if ( b5i3hstlai < rtP .
Saturation1_LowerSat_k5nt0tnm2o ) { rtB . lru24ttam4 = rtP .
Saturation1_LowerSat_k5nt0tnm2o ; } else { rtB . lru24ttam4 = b5i3hstlai ; }
dma451azaj = rtP . Gain10_Gain * rtB . lru24ttam4 ; fp2koweo5u = dma451azaj -
rtDW . pbhkab23hm ; if ( fp2koweo5u > rtP . RateLimiter_RisingLim ) {
dma451azaj = rtDW . pbhkab23hm + rtP . RateLimiter_RisingLim ; } else { if (
fp2koweo5u < rtP . RateLimiter_FallingLim ) { dma451azaj = rtDW . pbhkab23hm
+ rtP . RateLimiter_FallingLim ; } } rtDW . pbhkab23hm = dma451azaj ; rtB .
kvmhczmkfy = ( rtP . A11_Gain * rtDW . ilas2cvqvf + rtP . A12_Gain * rtDW .
atky2tlkix ) + rtP . B11_Gain * dma451azaj ; rtB . dhcpdth2nf = ( rtP .
A21_Gain * rtDW . ilas2cvqvf + rtP . A22_Gain * rtDW . atky2tlkix ) + rtP .
B21_Gain * dma451azaj ; rtB . kchwhkgx0y = ( rtP . C11_Gain * rtDW .
ilas2cvqvf + rtP . C12_Gain * rtDW . atky2tlkix ) + rtP . Duk_Gain *
dma451azaj ; dma451azaj = rtP . Ts_Control * 60.0 * 6.2831853071795862 ; rtB
. g0imozkyls [ 0 ] = ( ( rtB . nzglgwuqma + rtP . Constant2_Value_lyii0iggwc
[ 0 ] ) + rtP . Constant_Value_prlpwr0gxs ) + dma451azaj ; rtB . g0imozkyls [
1 ] = ( ( rtB . nzglgwuqma + rtP . Constant2_Value_lyii0iggwc [ 1 ] ) + rtP .
Constant_Value_prlpwr0gxs ) + dma451azaj ; rtB . g0imozkyls [ 2 ] = ( ( rtB .
nzglgwuqma + rtP . Constant2_Value_lyii0iggwc [ 2 ] ) + rtP .
Constant_Value_prlpwr0gxs ) + dma451azaj ; } hjn1wn1s1t /= rtB . k5lqperbwq ;
ptq0jdvsbh = ffhxxivd0z / rtB . k5lqperbwq ; dma451azaj = muDoubleScalarAtan2
( ptq0jdvsbh , hjn1wn1s1t ) ; b5i3hstlai = muDoubleScalarHypot ( hjn1wn1s1t ,
ptq0jdvsbh ) ; if ( b5i3hstlai > rtP . Saturation_UpperSat_h1k5eb5g1b ) { rtB
. e3pw2tx0gc = rtP . Saturation_UpperSat_h1k5eb5g1b ; } else if ( b5i3hstlai
< rtP . Saturation_LowerSat_h23x3ylqj0 ) { rtB . e3pw2tx0gc = rtP .
Saturation_LowerSat_h23x3ylqj0 ; } else { rtB . e3pw2tx0gc = b5i3hstlai ; }
rtB . donxx0azrh [ 0 ] = muDoubleScalarSin ( dma451azaj + rtB . g0imozkyls [
0 ] ) * rtB . e3pw2tx0gc ; rtB . donxx0azrh [ 1 ] = muDoubleScalarSin (
dma451azaj + rtB . g0imozkyls [ 1 ] ) * rtB . e3pw2tx0gc ; rtB . donxx0azrh [
2 ] = muDoubleScalarSin ( dma451azaj + rtB . g0imozkyls [ 2 ] ) * rtB .
e3pw2tx0gc ; rtB . kjorerjuot = 0.37152 * rtP . PVArray_Nser / rtP .
PVArray_Npar * rtB . ipwc4g5kbq + rtB . favzhhh3hu ; dma451azaj = cin5eyqzft
/ rtP . Tref_K2_Value ; rtB . iyyam0ynm2 = muDoubleScalarExp ( rtP .
EgRef_Value - ( ( cin5eyqzft - rtP . Tref_K1_Value ) * rtP . dEgdT_Gain + rtP
. one1_Value ) * rtP . EgRef_Gain / ( rtP . k1_Gain * cin5eyqzft ) ) * (
6.3014E-12 * rtP . PVArray_Npar * muDoubleScalarPower ( dma451azaj , 3.0 ) )
* ( muDoubleScalarExp ( 1.0 / ( 2.33081271902494 * rtP . PVArray_Nser *
dma451azaj ) * rtB . kjorerjuot ) - rtP . one_Value ) ; rtB . difkr25iin =
rtB . kjorerjuot / rtP . Rsh_array_5Sref_Value ; rtB . dy1my21n3p = ( rtB .
kjorerjuot / ( 269.5934 * rtP . PVArray_Nser / rtP . PVArray_Npar ) *
fow0yjgeva + rtB . iyyam0ynm2 ) - rtB . difkr25iin ; rtB . kxilaoyxe4 = rtP .
donotdeletethisgain_Gain_fzvartv1ey * rtB . pg1alta3lu [ 32 ] ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtDW . cmppqlszma != 0 ) { rtDW .
ifniwtykup = muDoubleScalarSin ( 6.2831853071795862 * rtP . Fourier_A_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . oepb11b4s2 = muDoubleScalarCos (
6.2831853071795862 * rtP . Fourier_A_Freq * ssGetTaskTime ( rtS , 2 ) ) ;
rtDW . cmppqlszma = 0 ; } rtB . dfnqmp3zop = ( ( ( rtDW . ifniwtykup * rtP .
sinwt_PCos_ljjr3tckny + rtDW . oepb11b4s2 * rtP . sinwt_PSin_ijekhyu50w ) *
rtP . sinwt_HCos_heu1kx4sdg + ( rtDW . oepb11b4s2 * rtP .
sinwt_PCos_ljjr3tckny - rtDW . ifniwtykup * rtP . sinwt_PSin_ijekhyu50w ) *
rtP . sinwt_Hsin_oqj105hayu ) * rtP . sinwt_Amp_eyfyeyhg1z + rtP .
sinwt_Bias_b1pimrbdub ) * rtB . mv4y4lj3e3 [ 0 ] ; if ( rtDW . njaezbobrh !=
0 ) { rtB . pve14kcnew = rtDW . aq42zioen3 ; } else { rtB . pve14kcnew = rtP
. Integ4_gainval_i0v3kwd3pb * rtB . dfnqmp3zop + rtDW . aq42zioen3 ; } rtB .
iaqaqqt1jc = rtP . K1_Value_mnxxbxkzc3 ; { SimStruct * rts = ssGetSFunction (
rtS , 17 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . iaqaqqt1jc ) { rtB . lxvfcojox3 = ( rtB . pve14kcnew - rtB . kbzrui1hxe
) * rtP . K2_Value_ivipcgq0za + ( rtP . Gain1_Gain_gau2kona2s * rtB .
dfnqmp3zop - rtP . Gain_Gain_d5ujhlzr3p * rtDW . n4rcukwcge ) ; } else { rtB
. lxvfcojox3 = rtDW . mynehged5v ; } if ( rtDW . emqtpaqsyx != 0 ) { rtDW .
kdxy4zwivo = muDoubleScalarSin ( 6.2831853071795862 * rtP . Fourier_A_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . p2n12agdxx = muDoubleScalarCos (
6.2831853071795862 * rtP . Fourier_A_Freq * ssGetTaskTime ( rtS , 2 ) ) ;
rtDW . emqtpaqsyx = 0 ; } rtB . dd0kvpdeik = ( ( ( rtDW . kdxy4zwivo * rtP .
coswt_PCos_imx1lvfr4u + rtDW . p2n12agdxx * rtP . coswt_PSin_bf4ykyadoy ) *
rtP . coswt_HCos_he1vypz4le + ( rtDW . p2n12agdxx * rtP .
coswt_PCos_imx1lvfr4u - rtDW . kdxy4zwivo * rtP . coswt_PSin_bf4ykyadoy ) *
rtP . coswt_Hsin_ebehquqc0i ) * rtP . coswt_Amp_anf4q5oxxa + rtP .
coswt_Bias_eb21lgn3q5 ) * rtB . mv4y4lj3e3 [ 0 ] ; if ( rtDW . gqe40uruvc !=
0 ) { rtB . edvtkbxssc = rtDW . cdvd2sss4w ; } else { rtB . edvtkbxssc = rtP
. Integ4_gainval_msuhv1zzxl * rtB . dd0kvpdeik + rtDW . cdvd2sss4w ; } rtB .
ci4i34cvpj = rtP . K1_Value_mgtlppjp42 ; { SimStruct * rts = ssGetSFunction (
rtS , 18 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . ci4i34cvpj ) { rtB . eznbr5gxnf = ( rtB . edvtkbxssc - rtB . izfqole4m5
) * rtP . K2_Value_af05yiua5o + ( rtP . Gain1_Gain_cvnj41z3u1 * rtB .
dd0kvpdeik - rtP . Gain_Gain_er1jzlt204 * rtDW . dhbrbfsgve ) ; } else { rtB
. eznbr5gxnf = rtDW . erpra20zur ; } cin5eyqzft = rtP .
RadDeg_Gain_ggqrcue4an * muDoubleScalarAtan2 ( rtB . eznbr5gxnf , rtB .
lxvfcojox3 ) * rtP . degrad_Gain ; ihvx3pktqx . re = muDoubleScalarHypot (
rtB . lxvfcojox3 , rtB . eznbr5gxnf ) * muDoubleScalarCos ( cin5eyqzft ) ;
ihvx3pktqx . im = muDoubleScalarHypot ( rtB . lxvfcojox3 , rtB . eznbr5gxnf )
* muDoubleScalarSin ( cin5eyqzft ) ; if ( rtDW . astd22hv22 != 0 ) { rtDW .
hgonifzr0h = muDoubleScalarSin ( 6.2831853071795862 * rtP . Fourier_B_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . mhz2zh32sr = muDoubleScalarCos (
6.2831853071795862 * rtP . Fourier_B_Freq * ssGetTaskTime ( rtS , 2 ) ) ;
rtDW . astd22hv22 = 0 ; } rtB . hjshci25up = ( ( ( rtDW . hgonifzr0h * rtP .
sinwt_PCos_cyveu5wuih + rtDW . mhz2zh32sr * rtP . sinwt_PSin_modl3cgbwm ) *
rtP . sinwt_HCos_cafhkcfovv + ( rtDW . mhz2zh32sr * rtP .
sinwt_PCos_cyveu5wuih - rtDW . hgonifzr0h * rtP . sinwt_PSin_modl3cgbwm ) *
rtP . sinwt_Hsin_e0rgtjbjpx ) * rtP . sinwt_Amp_kei0q2kps2 + rtP .
sinwt_Bias_d20x1us1zk ) * rtB . mv4y4lj3e3 [ 1 ] ; if ( rtDW . gzyeeyibia !=
0 ) { rtB . ft4dza43vu = rtDW . fz2io1e43r ; } else { rtB . ft4dza43vu = rtP
. Integ4_gainval_gtzjg23pll * rtB . hjshci25up + rtDW . fz2io1e43r ; } rtB .
o2uxxe2t45 = rtP . K1_Value_exdwlktlap ; { SimStruct * rts = ssGetSFunction (
rtS , 19 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . o2uxxe2t45 ) { rtB . boavmh4ejw = ( rtB . ft4dza43vu - rtB . gilgttova2
) * rtP . K2_Value_jy0nnlmsm2 + ( rtP . Gain1_Gain_bsbbtjbk4d * rtB .
hjshci25up - rtP . Gain_Gain_jq3um4cz4j * rtDW . b3skrgh41w ) ; } else { rtB
. boavmh4ejw = rtDW . nlavo4st2f ; } if ( rtDW . o2bedrw3qj != 0 ) { rtDW .
gvfp0kopbi = muDoubleScalarSin ( 6.2831853071795862 * rtP . Fourier_B_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . drpqup31hq = muDoubleScalarCos (
6.2831853071795862 * rtP . Fourier_B_Freq * ssGetTaskTime ( rtS , 2 ) ) ;
rtDW . o2bedrw3qj = 0 ; } rtB . nzyqolvt1e = ( ( ( rtDW . gvfp0kopbi * rtP .
coswt_PCos_ontpys2zdd + rtDW . drpqup31hq * rtP . coswt_PSin_khvpsemk1b ) *
rtP . coswt_HCos_oz23s2cxn2 + ( rtDW . drpqup31hq * rtP .
coswt_PCos_ontpys2zdd - rtDW . gvfp0kopbi * rtP . coswt_PSin_khvpsemk1b ) *
rtP . coswt_Hsin_omgodzfzvz ) * rtP . coswt_Amp_nskemowyiu + rtP .
coswt_Bias_jk2fedlc5k ) * rtB . mv4y4lj3e3 [ 1 ] ; if ( rtDW . lkucpq1uah !=
0 ) { rtB . f2y4jldafv = rtDW . b1pxac2euv ; } else { rtB . f2y4jldafv = rtP
. Integ4_gainval_g3uamgfpqb * rtB . nzyqolvt1e + rtDW . b1pxac2euv ; } rtB .
glnliw2gbu = rtP . K1_Value_g33io5pe2n ; { SimStruct * rts = ssGetSFunction (
rtS , 20 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . glnliw2gbu ) { rtB . dqmyx5uih2 = ( rtB . f2y4jldafv - rtB . jzl25y2kq5
) * rtP . K2_Value_ox1txrzba0 + ( rtP . Gain1_Gain_jawtsd2iys * rtB .
nzyqolvt1e - rtP . Gain_Gain_l1yybb0ozh * rtDW . ivxtrpjaaz ) ; } else { rtB
. dqmyx5uih2 = rtDW . hkgssuwq1m ; } cin5eyqzft = rtP .
RadDeg_Gain_oothuzb2un * muDoubleScalarAtan2 ( rtB . dqmyx5uih2 , rtB .
boavmh4ejw ) * rtP . degrad1_Gain ; pqq20nmt00 . re = muDoubleScalarHypot (
rtB . boavmh4ejw , rtB . dqmyx5uih2 ) * muDoubleScalarCos ( cin5eyqzft ) ;
pqq20nmt00 . im = muDoubleScalarHypot ( rtB . boavmh4ejw , rtB . dqmyx5uih2 )
* muDoubleScalarSin ( cin5eyqzft ) ; if ( rtDW . ctvv1mfvu3 != 0 ) { rtDW .
fbnimcf5zs = muDoubleScalarSin ( 6.2831853071795862 * rtP . Fourier_C_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . ddeer0wu2d = muDoubleScalarCos (
6.2831853071795862 * rtP . Fourier_C_Freq * ssGetTaskTime ( rtS , 2 ) ) ;
rtDW . ctvv1mfvu3 = 0 ; } rtB . hez2f5zeuo = ( ( ( rtDW . fbnimcf5zs * rtP .
sinwt_PCos_esk52xey53 + rtDW . ddeer0wu2d * rtP . sinwt_PSin_ism3nzmned ) *
rtP . sinwt_HCos_lozsdsini2 + ( rtDW . ddeer0wu2d * rtP .
sinwt_PCos_esk52xey53 - rtDW . fbnimcf5zs * rtP . sinwt_PSin_ism3nzmned ) *
rtP . sinwt_Hsin_ltv4wuiu5i ) * rtP . sinwt_Amp_gglawa5b0j + rtP .
sinwt_Bias_ftcgy00q1q ) * rtB . mv4y4lj3e3 [ 2 ] ; if ( rtDW . jjgj3xap4d !=
0 ) { rtB . b0y5txfras = rtDW . hanrdqnaqb ; } else { rtB . b0y5txfras = rtP
. Integ4_gainval_h0bygbtnao * rtB . hez2f5zeuo + rtDW . hanrdqnaqb ; } rtB .
e1ss3jmyjc = rtP . K1_Value_nofhnhfgqe ; { SimStruct * rts = ssGetSFunction (
rtS , 21 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . e1ss3jmyjc ) { rtB . aytj15pdge = ( rtB . b0y5txfras - rtB . errpq1sl3d
) * rtP . K2_Value_cheibnriss + ( rtP . Gain1_Gain_lly5kv4kuf * rtB .
hez2f5zeuo - rtP . Gain_Gain_o1r20n5vmz * rtDW . pmotaxwkhx ) ; } else { rtB
. aytj15pdge = rtDW . mybd2g2ug4 ; } if ( rtDW . nyffl0g5oa != 0 ) { rtDW .
hrluunvnvz = muDoubleScalarSin ( 6.2831853071795862 * rtP . Fourier_C_Freq *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . fm2sl2lxgz = muDoubleScalarCos (
6.2831853071795862 * rtP . Fourier_C_Freq * ssGetTaskTime ( rtS , 2 ) ) ;
rtDW . nyffl0g5oa = 0 ; } rtB . hkupangjj2 = ( ( ( rtDW . hrluunvnvz * rtP .
coswt_PCos_apooxuqtce + rtDW . fm2sl2lxgz * rtP . coswt_PSin_pzecylb5ie ) *
rtP . coswt_HCos_e1lcq0jydt + ( rtDW . fm2sl2lxgz * rtP .
coswt_PCos_apooxuqtce - rtDW . hrluunvnvz * rtP . coswt_PSin_pzecylb5ie ) *
rtP . coswt_Hsin_p0lqeycuo2 ) * rtP . coswt_Amp_ov5trykaai + rtP .
coswt_Bias_caz0b22m5s ) * rtB . mv4y4lj3e3 [ 2 ] ; if ( rtDW . jwgnwdiuim !=
0 ) { rtB . hahpxwmtiw = rtDW . echh34xzp1 ; } else { rtB . hahpxwmtiw = rtP
. Integ4_gainval_lqadd2jned * rtB . hkupangjj2 + rtDW . echh34xzp1 ; } rtB .
kinr121xse = rtP . K1_Value_piw4pfcum5 ; { SimStruct * rts = ssGetSFunction (
rtS , 22 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . kinr121xse ) { rtB . drfqwkasyq = ( rtB . hahpxwmtiw - rtB . ghajl1bsbr
) * rtP . K2_Value_luz1rwbbpa + ( rtP . Gain1_Gain_kl3n41qkg4 * rtB .
hkupangjj2 - rtP . Gain_Gain_fc1p3rfcsm * rtDW . jlgyu44vvh ) ; } else { rtB
. drfqwkasyq = rtDW . ooqkjuryor ; } cin5eyqzft = rtP .
RadDeg_Gain_kam5dohr3p * muDoubleScalarAtan2 ( rtB . drfqwkasyq , rtB .
aytj15pdge ) * rtP . degrad2_Gain ; f2qy1ven34 . re = muDoubleScalarHypot (
rtB . aytj15pdge , rtB . drfqwkasyq ) * muDoubleScalarCos ( cin5eyqzft ) ;
f2qy1ven34 . im = muDoubleScalarHypot ( rtB . aytj15pdge , rtB . drfqwkasyq )
* muDoubleScalarSin ( cin5eyqzft ) ; msv4qqksks ( rtP .
Constant_Value_gu00guxond , ihvx3pktqx , pqq20nmt00 , f2qy1ven34 , & rtB .
gfc0o4gmcx , & rtDW . gfc0o4gmcx , ( oua4sf5ojz * ) & rtP . gfc0o4gmcx ) ;
msv4qqksks ( rtP . Constant1_Value_d3fgit3q2y , ihvx3pktqx , pqq20nmt00 ,
f2qy1ven34 , & rtB . msv4qqksksf , & rtDW . msv4qqksksf , ( oua4sf5ojz * ) &
rtP . msv4qqksksf ) ; g23t01ww0z ( rtP . Constant2_Value_dvfzdjynxb ,
ihvx3pktqx , pqq20nmt00 , f2qy1ven34 , & rtB . g23t01ww0z0 , & rtDW .
g23t01ww0z0 , ( c3xiexpag1 * ) & rtP . g23t01ww0z0 ) ; khqzbk5gxa [ 0 ] =
muDoubleScalarHypot ( rtB . gfc0o4gmcx . bug11j5vri . re , rtB . gfc0o4gmcx .
bug11j5vri . im ) ; dma451azaj = muDoubleScalarAtan2 ( rtB . gfc0o4gmcx .
bug11j5vri . im , rtB . gfc0o4gmcx . bug11j5vri . re ) ; if ( rtDW .
lh2fnsyrng != 0 ) { rtDW . h5f4diwe0i = muDoubleScalarSin (
6.2831853071795862 * rtP . Fourier_A_Freq_dulhm5uet1 * ssGetTaskTime ( rtS ,
2 ) ) ; rtDW . gzkywi4luv = muDoubleScalarCos ( 6.2831853071795862 * rtP .
Fourier_A_Freq_dulhm5uet1 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . lh2fnsyrng =
0 ; } rtB . og54jqpe51 = ( ( ( rtDW . h5f4diwe0i * rtP .
sinwt_PCos_ffxrlya5uh + rtDW . gzkywi4luv * rtP . sinwt_PSin_mxp5pxyazu ) *
rtP . sinwt_HCos_ikm4ke3nt1 + ( rtDW . gzkywi4luv * rtP .
sinwt_PCos_ffxrlya5uh - rtDW . h5f4diwe0i * rtP . sinwt_PSin_mxp5pxyazu ) *
rtP . sinwt_Hsin_f4ff1jm01o ) * rtP . sinwt_Amp_a5iuycgbj5 + rtP .
sinwt_Bias_o4hfny211d ) * rtB . ok1tffrvb3 [ 0 ] ; if ( rtDW . fvyxp4evkh !=
0 ) { rtB . a2dep1ma5q = rtDW . muylcyn1jj ; } else { rtB . a2dep1ma5q = rtP
. Integ4_gainval_gvvjdr1enu * rtB . og54jqpe51 + rtDW . muylcyn1jj ; } rtB .
b4cw0lelim = rtP . K1_Value_ly41q0lfne ; { SimStruct * rts = ssGetSFunction (
rtS , 23 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . b4cw0lelim ) { rtB . n44elz5k5z = ( rtB . a2dep1ma5q - rtB . h4xirodnve
) * rtP . K2_Value_peraggcnbk + ( rtP . Gain1_Gain_k45yw5u1ri * rtB .
og54jqpe51 - rtP . Gain_Gain_htrn2od5eo * rtDW . ljsg2sadfb ) ; } else { rtB
. n44elz5k5z = rtDW . liggmwwqdw ; } if ( rtDW . avzvl0d5ni != 0 ) { rtDW .
k1ned5pogk = muDoubleScalarSin ( 6.2831853071795862 * rtP .
Fourier_A_Freq_dulhm5uet1 * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . plgz2e0c3z =
muDoubleScalarCos ( 6.2831853071795862 * rtP . Fourier_A_Freq_dulhm5uet1 *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . avzvl0d5ni = 0 ; } rtB . m2m5qdd1is = (
( ( rtDW . k1ned5pogk * rtP . coswt_PCos_jgy3xycijn + rtDW . plgz2e0c3z * rtP
. coswt_PSin_ckpub3oin5 ) * rtP . coswt_HCos_ih2fmjgzvo + ( rtDW . plgz2e0c3z
* rtP . coswt_PCos_jgy3xycijn - rtDW . k1ned5pogk * rtP .
coswt_PSin_ckpub3oin5 ) * rtP . coswt_Hsin_ki40gemxaa ) * rtP .
coswt_Amp_ph0slmkaz2 + rtP . coswt_Bias_mxccsalmjx ) * rtB . ok1tffrvb3 [ 0 ]
; if ( rtDW . f2wyufteoz != 0 ) { rtB . oihdqvbn2c = rtDW . l1vptmfjzt ; }
else { rtB . oihdqvbn2c = rtP . Integ4_gainval_e3hymojevp * rtB . m2m5qdd1is
+ rtDW . l1vptmfjzt ; } rtB . eyumafsgjn = rtP . K1_Value_odshxihjs1 ; {
SimStruct * rts = ssGetSFunction ( rtS , 24 ) ; sfcnOutputs ( rts , 0 ) ; }
if ( ssGetTaskTime ( rtS , 2 ) >= rtB . eyumafsgjn ) { rtB . dts2mafck0 = (
rtB . oihdqvbn2c - rtB . beuw5i1psd ) * rtP . K2_Value_ca4rzsh0ua + ( rtP .
Gain1_Gain_h0j53ikn03 * rtB . m2m5qdd1is - rtP . Gain_Gain_pvpuvbbodz * rtDW
. ghxx3onjqv ) ; } else { rtB . dts2mafck0 = rtDW . e5radjoywg ; } cin5eyqzft
= rtP . RadDeg_Gain_hfllzvpq3o * muDoubleScalarAtan2 ( rtB . dts2mafck0 , rtB
. n44elz5k5z ) * rtP . degrad_Gain_num4oalqxy ; hiekkqjckm . re =
muDoubleScalarHypot ( rtB . n44elz5k5z , rtB . dts2mafck0 ) *
muDoubleScalarCos ( cin5eyqzft ) ; hiekkqjckm . im = muDoubleScalarHypot (
rtB . n44elz5k5z , rtB . dts2mafck0 ) * muDoubleScalarSin ( cin5eyqzft ) ; if
( rtDW . oiwxefn4uv != 0 ) { rtDW . mzvrmost0b = muDoubleScalarSin (
6.2831853071795862 * rtP . Fourier_B_Freq_c5qlafj1dc * ssGetTaskTime ( rtS ,
2 ) ) ; rtDW . onyz5jcubj = muDoubleScalarCos ( 6.2831853071795862 * rtP .
Fourier_B_Freq_c5qlafj1dc * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . oiwxefn4uv =
0 ; } rtB . ma5v5wrx2r = ( ( ( rtDW . mzvrmost0b * rtP .
sinwt_PCos_ilquu0arpw + rtDW . onyz5jcubj * rtP . sinwt_PSin_bllazdudnu ) *
rtP . sinwt_HCos_c3em0todhq + ( rtDW . onyz5jcubj * rtP .
sinwt_PCos_ilquu0arpw - rtDW . mzvrmost0b * rtP . sinwt_PSin_bllazdudnu ) *
rtP . sinwt_Hsin_i0nd0ubqqg ) * rtP . sinwt_Amp_lmppjqm2un + rtP .
sinwt_Bias_i50qywn0ii ) * rtB . ok1tffrvb3 [ 1 ] ; if ( rtDW . lcc4thgbvm !=
0 ) { rtB . bnu0g1s1dq = rtDW . pvp424fepa ; } else { rtB . bnu0g1s1dq = rtP
. Integ4_gainval_o4m2wju04m * rtB . ma5v5wrx2r + rtDW . pvp424fepa ; } rtB .
ozyjvhhlpt = rtP . K1_Value_fascbhcv3t ; { SimStruct * rts = ssGetSFunction (
rtS , 25 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . ozyjvhhlpt ) { rtB . bx34ezdhdc = ( rtB . bnu0g1s1dq - rtB . epesxiuqru
) * rtP . K2_Value_bqbhuqvuc2 + ( rtP . Gain1_Gain_aqpmhpqydp * rtB .
ma5v5wrx2r - rtP . Gain_Gain_c51ds1jfln * rtDW . c32f1i3eco ) ; } else { rtB
. bx34ezdhdc = rtDW . efljn420bi ; } if ( rtDW . f3xukdg4ir != 0 ) { rtDW .
ctyh01bulx = muDoubleScalarSin ( 6.2831853071795862 * rtP .
Fourier_B_Freq_c5qlafj1dc * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . epbyahgnci =
muDoubleScalarCos ( 6.2831853071795862 * rtP . Fourier_B_Freq_c5qlafj1dc *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . f3xukdg4ir = 0 ; } rtB . pb25q3i5y0 = (
( ( rtDW . ctyh01bulx * rtP . coswt_PCos_oqm4st2je0 + rtDW . epbyahgnci * rtP
. coswt_PSin_bdolgwlxdg ) * rtP . coswt_HCos_cs3y4qtzeb + ( rtDW . epbyahgnci
* rtP . coswt_PCos_oqm4st2je0 - rtDW . ctyh01bulx * rtP .
coswt_PSin_bdolgwlxdg ) * rtP . coswt_Hsin_fuzcqltv4d ) * rtP .
coswt_Amp_aqxb2j5jnu + rtP . coswt_Bias_frzp530tnq ) * rtB . ok1tffrvb3 [ 1 ]
; if ( rtDW . n2aitbecpw != 0 ) { rtB . n5anonvc5c = rtDW . nbkoe5uf1p ; }
else { rtB . n5anonvc5c = rtP . Integ4_gainval_dmsyi0ujpc * rtB . pb25q3i5y0
+ rtDW . nbkoe5uf1p ; } rtB . n00vcniaoj = rtP . K1_Value_okiumpl42l ; {
SimStruct * rts = ssGetSFunction ( rtS , 26 ) ; sfcnOutputs ( rts , 0 ) ; }
if ( ssGetTaskTime ( rtS , 2 ) >= rtB . n00vcniaoj ) { rtB . kbmxjxx40u = (
rtB . n5anonvc5c - rtB . e0245b3vbs ) * rtP . K2_Value_gzomggch2d + ( rtP .
Gain1_Gain_ck1bqs4xph * rtB . pb25q3i5y0 - rtP . Gain_Gain_nxlojnsi3h * rtDW
. mutthcbksv ) ; } else { rtB . kbmxjxx40u = rtDW . nkocdivqnb ; } cin5eyqzft
= rtP . RadDeg_Gain_lezhz3zr05 * muDoubleScalarAtan2 ( rtB . kbmxjxx40u , rtB
. bx34ezdhdc ) * rtP . degrad1_Gain_gcrkcsbsjy ; o2dmea0xvr . re =
muDoubleScalarHypot ( rtB . bx34ezdhdc , rtB . kbmxjxx40u ) *
muDoubleScalarCos ( cin5eyqzft ) ; o2dmea0xvr . im = muDoubleScalarHypot (
rtB . bx34ezdhdc , rtB . kbmxjxx40u ) * muDoubleScalarSin ( cin5eyqzft ) ; if
( rtDW . iemuxuhgxj != 0 ) { rtDW . f0f4dq1t4x = muDoubleScalarSin (
6.2831853071795862 * rtP . Fourier_C_Freq_cenpjtva3o * ssGetTaskTime ( rtS ,
2 ) ) ; rtDW . cj44rcnno0 = muDoubleScalarCos ( 6.2831853071795862 * rtP .
Fourier_C_Freq_cenpjtva3o * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . iemuxuhgxj =
0 ; } rtB . aefoovdb2f = ( ( ( rtDW . f0f4dq1t4x * rtP .
sinwt_PCos_owldbifmfn + rtDW . cj44rcnno0 * rtP . sinwt_PSin_bs1ts2ayri ) *
rtP . sinwt_HCos_lv5zpnsoyo + ( rtDW . cj44rcnno0 * rtP .
sinwt_PCos_owldbifmfn - rtDW . f0f4dq1t4x * rtP . sinwt_PSin_bs1ts2ayri ) *
rtP . sinwt_Hsin_kfaxcimxsb ) * rtP . sinwt_Amp_oe50flwsvz + rtP .
sinwt_Bias_hpmk1ox4mk ) * rtB . ok1tffrvb3 [ 2 ] ; if ( rtDW . jjuul3sb0d !=
0 ) { rtB . ihvm1vxbno = rtDW . mldhopdlpr ; } else { rtB . ihvm1vxbno = rtP
. Integ4_gainval_lqpuvz5try * rtB . aefoovdb2f + rtDW . mldhopdlpr ; } rtB .
cos5j1nh2x = rtP . K1_Value_fl2t5hhsxt ; { SimStruct * rts = ssGetSFunction (
rtS , 27 ) ; sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >=
rtB . cos5j1nh2x ) { rtB . bjbycn0jg3 = ( rtB . ihvm1vxbno - rtB . ggw0zlizod
) * rtP . K2_Value_fl0eknqnzp + ( rtP . Gain1_Gain_phi4msvodo * rtB .
aefoovdb2f - rtP . Gain_Gain_a2j2ruaijq * rtDW . mmwyhcf00o ) ; } else { rtB
. bjbycn0jg3 = rtDW . adrzqo1xe3 ; } if ( rtDW . lrk1dig0no != 0 ) { rtDW .
o3r1h21bfi = muDoubleScalarSin ( 6.2831853071795862 * rtP .
Fourier_C_Freq_cenpjtva3o * ssGetTaskTime ( rtS , 2 ) ) ; rtDW . g0pqsze5ut =
muDoubleScalarCos ( 6.2831853071795862 * rtP . Fourier_C_Freq_cenpjtva3o *
ssGetTaskTime ( rtS , 2 ) ) ; rtDW . lrk1dig0no = 0 ; } rtB . bfc0ew4l5x = (
( ( rtDW . o3r1h21bfi * rtP . coswt_PCos_exeoqhe2el + rtDW . g0pqsze5ut * rtP
. coswt_PSin_pc2mzqmykn ) * rtP . coswt_HCos_dtrnnwyvoi + ( rtDW . g0pqsze5ut
* rtP . coswt_PCos_exeoqhe2el - rtDW . o3r1h21bfi * rtP .
coswt_PSin_pc2mzqmykn ) * rtP . coswt_Hsin_nt154hil4g ) * rtP .
coswt_Amp_ajaph324eb + rtP . coswt_Bias_er20tnmo5c ) * rtB . ok1tffrvb3 [ 2 ]
; if ( rtDW . a5ot3orarr != 0 ) { rtB . adcm1emc4n = rtDW . cscb0srydh ; }
else { rtB . adcm1emc4n = rtP . Integ4_gainval_ae24pre0oj * rtB . bfc0ew4l5x
+ rtDW . cscb0srydh ; } rtB . hw5bsvoycb = rtP . K1_Value_huwvvbdsqd ; {
SimStruct * rts = ssGetSFunction ( rtS , 28 ) ; sfcnOutputs ( rts , 0 ) ; }
if ( ssGetTaskTime ( rtS , 2 ) >= rtB . hw5bsvoycb ) { rtB . lnvtu0nq30 = (
rtB . adcm1emc4n - rtB . f5k3at4onu ) * rtP . K2_Value_nuhsjmrzct + ( rtP .
Gain1_Gain_f5mqebcvsk * rtB . bfc0ew4l5x - rtP . Gain_Gain_afzupnanth * rtDW
. jqlkum55me ) ; } else { rtB . lnvtu0nq30 = rtDW . ensydwnmvi ; } cin5eyqzft
= rtP . RadDeg_Gain_bjvkdbizli * muDoubleScalarAtan2 ( rtB . lnvtu0nq30 , rtB
. bjbycn0jg3 ) * rtP . degrad2_Gain_fvnkccap1v ; phpmdpcbxu . re =
muDoubleScalarHypot ( rtB . bjbycn0jg3 , rtB . lnvtu0nq30 ) *
muDoubleScalarCos ( cin5eyqzft ) ; phpmdpcbxu . im = muDoubleScalarHypot (
rtB . bjbycn0jg3 , rtB . lnvtu0nq30 ) * muDoubleScalarSin ( cin5eyqzft ) ;
msv4qqksks ( rtP . Constant_Value_fal5u45x5b , hiekkqjckm , o2dmea0xvr ,
phpmdpcbxu , & rtB . n45kzzuand , & rtDW . n45kzzuand , ( oua4sf5ojz * ) &
rtP . n45kzzuand ) ; msv4qqksks ( rtP . Constant1_Value_gerhfiv2al ,
hiekkqjckm , o2dmea0xvr , phpmdpcbxu , & rtB . dn2wcdma5d , & rtDW .
dn2wcdma5d , ( oua4sf5ojz * ) & rtP . dn2wcdma5d ) ; g23t01ww0z ( rtP .
Constant2_Value_h0okejydpk , hiekkqjckm , o2dmea0xvr , phpmdpcbxu , & rtB .
ojknbv4is1 , & rtDW . ojknbv4is1 , ( c3xiexpag1 * ) & rtP . ojknbv4is1 ) ;
rtB . h52y1dzqu1 = muDoubleScalarCos ( ( rtP . raddeg1_Gain * dma451azaj -
rtP . raddeg1_Gain_joedyuhdkb * muDoubleScalarAtan2 ( rtB . n45kzzuand .
bug11j5vri . im , rtB . n45kzzuand . bug11j5vri . re ) ) * rtP . DegRad_Gain
) * ( khqzbk5gxa [ 0 ] * muDoubleScalarHypot ( rtB . n45kzzuand . bug11j5vri
. re , rtB . n45kzzuand . bug11j5vri . im ) * rtP . Gain1_Gain_b0ayny2lnu ) *
rtP . W2kW_Gain ; if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . bdbgvmjymm .
LoggedData , ( NULL ) , & rtB . h52y1dzqu1 ) ; } } } rtB . lctnqgrkcy = rtB .
o5d0soeen3 * rtB . e4ur0oizsv * rtP . WkW_Gain ; } if ( ssIsSampleHit ( rtS ,
2 , 0 ) ) { if ( rtDW . b4vqgmg5hq != 0 ) { rtB . pjzrk5uavg = rtDW .
ihdw3zr5an ; } else { rtB . pjzrk5uavg = rtP . Integ4_gainval_ky1qdbqrxe *
rtB . e5zlxkpqts + rtDW . ihdw3zr5an ; } rtB . gudywxfntc = rtP .
K1_Value_ksxou1md45 ; { SimStruct * rts = ssGetSFunction ( rtS , 29 ) ;
sfcnOutputs ( rts , 0 ) ; } if ( ssGetTaskTime ( rtS , 2 ) >= rtB .
gudywxfntc ) { rtB . kc5hguu52m = ( rtB . pjzrk5uavg - rtB . hz05ifo1vv ) *
rtP . K2_Value_a5zsikg0k0 + ( rtP . Gain1_Gain_hpgc0ezdfe * rtB . e5zlxkpqts
- rtP . Gain_Gain_mubbovzl2s * rtDW . eacppom1uy ) ; } else { rtB .
kc5hguu52m = rtDW . e5dcrnrcoh ; } } for ( i = 0 ; i < 3 ; i ++ ) { rtB .
aykkzxyrll [ i ] = rtP . Gain7_Gain [ i ] * mwvcnabfhf [ i ] ; rtB .
lupahu4br1 [ i ] = rtP . Gain8_Gain [ i ] * nbge0mtnlx [ i ] ; rtB .
ekctuybauk [ i ] = 0.0 ; rtB . kxvjrbtlec [ i ] = 0.0 ; rtB . orhpipghdi [ i
] = rtP . Gain7_Gain_i0zgc1rgb2 [ i ] * oetzrpdjay [ i ] ; rtB . fdp5wsxjlw [
i ] = rtP . Gain8_Gain_edeoo4wuci [ i ] * bw1u5trivs [ i ] ; rtB . efq03tkmq4
[ i ] = 0.0 ; rtB . ajmuihbldm [ i ] = 0.0 ; rtB . ekctuybauk [ i ] += rtP .
phase2modeR_Gain [ i ] * rtB . pg1alta3lu [ 23 ] ; rtB . kxvjrbtlec [ i ] +=
rtP . phase2modeS_Gain [ i ] * rtB . pg1alta3lu [ 20 ] ; rtB . efq03tkmq4 [ i
] += rtP . phase2modeR_Gain_pqkaosz5ma [ i ] * rtB . pg1alta3lu [ 29 ] ; rtB
. ajmuihbldm [ i ] += rtP . phase2modeS_Gain_an1doupart [ i ] * rtB .
pg1alta3lu [ 26 ] ; rtB . ekctuybauk [ i ] += rtP . phase2modeR_Gain [ i + 3
] * rtB . pg1alta3lu [ 24 ] ; rtB . kxvjrbtlec [ i ] += rtP .
phase2modeS_Gain [ i + 3 ] * rtB . pg1alta3lu [ 21 ] ; rtB . efq03tkmq4 [ i ]
+= rtP . phase2modeR_Gain_pqkaosz5ma [ i + 3 ] * rtB . pg1alta3lu [ 30 ] ;
rtB . ajmuihbldm [ i ] += rtP . phase2modeS_Gain_an1doupart [ i + 3 ] * rtB .
pg1alta3lu [ 27 ] ; rtB . ekctuybauk [ i ] += rtP . phase2modeR_Gain [ i + 6
] * rtB . pg1alta3lu [ 25 ] ; rtB . kxvjrbtlec [ i ] += rtP .
phase2modeS_Gain [ i + 6 ] * rtB . pg1alta3lu [ 22 ] ; rtB . efq03tkmq4 [ i ]
+= rtP . phase2modeR_Gain_pqkaosz5ma [ i + 6 ] * rtB . pg1alta3lu [ 31 ] ;
rtB . ajmuihbldm [ i ] += rtP . phase2modeS_Gain_an1doupart [ i + 6 ] * rtB .
pg1alta3lu [ 28 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . oxh5wmulq0
= rtP . Gain_Gain_ax0trkdzic * hcownyakz4 ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { real_T f0ppcbe0bk ; rtB . ly0wt10wsm = (
rtP . Constant2_Value_iqex2uo240 == rtP . Constant6_Value ) ; f0ppcbe0bk =
muDoubleScalarSin ( rtP . Gain1_Gain_iza01f01um * 0.0 ) ; if ( f0ppcbe0bk >
1.0 ) { f0ppcbe0bk = 1.0 ; } else { if ( f0ppcbe0bk < - 1.0 ) { f0ppcbe0bk =
- 1.0 ; } } f0ppcbe0bk = rtP . Gain2_Gain * muDoubleScalarAsin ( f0ppcbe0bk )
; rtB . owk5afwjt2 = f0ppcbe0bk + rtP . Constant1_Value_a4nlxyznsj ; rtB .
eknyv0afyk = f0ppcbe0bk - rtP . Constant1_Value_a4nlxyznsj ; rtB . jdg1nddwa0
= ! rtB . ly0wt10wsm ; rtB . bwnjdjpcaw = ( uint8_T ) ( rtP .
AlphaBetaZerotodq0_Alignment_otrg0yyt1a == rtP .
CompareToConstant_const_f3j21z25kv ) ; rtB . oiidjdpb5o = ( uint8_T ) ( rtP .
AlphaBetaZerotodq0_Alignment_otrg0yyt1a == rtP .
CompareToConstant1_const_m1hj2kgrib ) ; rtB . gzrqmoukkq = rtP .
Vdc_ref1_Value ; rtB . nbftkfipzp = rtP . Ltot_pu1_Gain * rtP . Iq_ref_Value
; rtB . a5q44iw4oh = rtP . Rtot_pu5_Gain * rtP . Iq_ref_Value ; rtB .
e5omhkiopk = ( uint8_T ) ( rtP . AlphaBetaZerotodq0_Alignment_awofvyee55 ==
rtP . CompareToConstant_const_ork22hwfpx ) ; rtB . f5wahbcw2x = ( uint8_T ) (
rtP . AlphaBetaZerotodq0_Alignment_awofvyee55 == rtP .
CompareToConstant1_const_mofh5awlq5 ) ; rtB . ldbz23n5ir = ( uint8_T ) ( rtP
. AlphaBetaZerotodq0_Alignment == rtP . CompareToConstant_const ) ; rtB .
ahtdmndqnx = ( uint8_T ) ( rtP . AlphaBetaZerotodq0_Alignment == rtP .
CompareToConstant1_const ) ; srUpdateBC ( rtDW . bibamec5kg ) ; rtB .
ixdwjlg2uu = ( uint8_T ) ( rtP . AlphaBetaZerotodq0_Alignment_mnakfv4gd4 ==
rtP . CompareToConstant_const_mjeo4kqpve ) ; rtB . hezxa2a4ub = ( uint8_T ) (
rtP . AlphaBetaZerotodq0_Alignment_mnakfv4gd4 == rtP .
CompareToConstant1_const_lkgpibc3kf ) ; rtB . k5lqperbwq = rtP .
Gain1_Gain_bfibyfcm43 * rtP . VSCControl_Vnom_dc / rtP .
Constant3_Value_o4ynzitq1a ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { real_T HoldSine ; { SimStruct * rts = ssGetSFunction ( rtS , 2
) ; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) )
return ; } { SimStruct * rts = ssGetSFunction ( rtS , 3 ) ; sfcnUpdate ( rts
, 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct *
rts = ssGetSFunction ( rtS , 4 ) ; sfcnUpdate ( rts , 0 ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 5 ) ; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus (
rts ) != ( NULL ) ) return ; } { SimStruct * rts = ssGetSFunction ( rtS , 6 )
; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return
; } { SimStruct * rts = ssGetSFunction ( rtS , 7 ) ; sfcnUpdate ( rts , 0 ) ;
if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 8 ) ; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus (
rts ) != ( NULL ) ) return ; } { SimStruct * rts = ssGetSFunction ( rtS , 9 )
; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return
; } rtDW . h2vwpcchd5 = rtB . dy1my21n3p ; HoldSine = rtDW . g1ps0mh4qh ;
rtDW . g1ps0mh4qh = rtDW . g1ps0mh4qh * rtP . SineWaveA_HCos + rtDW .
hoosvni13i * rtP . SineWaveA_Hsin ; rtDW . hoosvni13i = rtDW . hoosvni13i *
rtP . SineWaveA_HCos - HoldSine * rtP . SineWaveA_Hsin ; HoldSine = rtDW .
jy4gbbna5m ; rtDW . jy4gbbna5m = rtDW . jy4gbbna5m * rtP . SineWaveB_HCos +
rtDW . dddoob1h3n * rtP . SineWaveB_Hsin ; rtDW . dddoob1h3n = rtDW .
dddoob1h3n * rtP . SineWaveB_HCos - HoldSine * rtP . SineWaveB_Hsin ;
HoldSine = rtDW . ccrvwkgeyc ; rtDW . ccrvwkgeyc = rtDW . ccrvwkgeyc * rtP .
SineWaveC_HCos + rtDW . aehdlec5cy * rtP . SineWaveC_Hsin ; rtDW . aehdlec5cy
= rtDW . aehdlec5cy * rtP . SineWaveC_HCos - HoldSine * rtP . SineWaveC_Hsin
; { const real_T * As = ( real_T * ) rtDW . gyy03l5gua . AS ; const real_T *
Bs = ( real_T * ) rtDW . gyy03l5gua . BS ; real_T * xtmp = ( real_T * ) rtDW
. gyy03l5gua . XTMP ; real_T accum ; { int_T i1 ; real_T * xd = & rtDW .
ghzfhogk1s [ 0 ] ; for ( i1 = 0 ; i1 < 36 ; i1 ++ ) { accum = 0.0 ; { int_T
i2 ; real_T * xd = & rtDW . ghzfhogk1s [ 0 ] ; for ( i2 = 0 ; i2 < 36 ; i2 ++
) { accum += * ( As ++ ) * xd [ i2 ] ; } } accum += * ( Bs ++ ) * rtP .
SwitchCurrents_Value ; accum += * ( Bs ++ ) * 0.0 ; { int_T i2 ; const real_T
* u0 ; for ( i2 = 0 ; i2 < 18 ; i2 ++ ) { accum += * ( Bs ++ ) * 0.0 ; }
accum += * ( Bs ++ ) * rtB . he14cjinkd [ 0 ] ; accum += * ( Bs ++ ) * rtB .
he14cjinkd [ 1 ] ; accum += * ( Bs ++ ) * rtB . he14cjinkd [ 2 ] ; accum += *
( Bs ++ ) * rtB . hmjyxctvar [ 0 ] ; accum += * ( Bs ++ ) * rtB . hmjyxctvar
[ 1 ] ; accum += * ( Bs ++ ) * rtB . hmjyxctvar [ 2 ] ; accum += * ( Bs ++ )
* rtB . gjo03tzedv [ 0 ] ; accum += * ( Bs ++ ) * rtB . gjo03tzedv [ 1 ] ;
accum += * ( Bs ++ ) * rtB . gjo03tzedv [ 2 ] ; accum += * ( Bs ++ ) * rtB .
mj5uxto5hm [ 0 ] ; accum += * ( Bs ++ ) * rtB . mj5uxto5hm [ 1 ] ; accum += *
( Bs ++ ) * rtB . mj5uxto5hm [ 2 ] ; accum += * ( Bs ++ ) * rtB . hd010gossx
; accum += * ( Bs ++ ) * rtB . psylw5ftqo ; accum += * ( Bs ++ ) * rtB .
ncd5m41xqs ; accum += * ( Bs ++ ) * rtB . ie5urghlgt ; accum += * ( Bs ++ ) *
rtB . jkyah5nk3q ; } xtmp [ i1 ] = accum ; } } { int_T i1 ; real_T * xd = &
rtDW . ghzfhogk1s [ 0 ] ; for ( i1 = 0 ; i1 < 36 ; i1 ++ ) { xd [ i1 ] = xtmp
[ i1 ] ; } } { int_T * gState = ( int_T * ) rtDW . gyy03l5gua . G_STATE ; * (
gState ++ ) = ( int_T ) 0.0 ; * ( gState ++ ) = ( int_T ) rtB . achbklegbl ;
* ( gState ++ ) = ( int_T ) rtB . jz2jpueldv [ 0 ] ; * ( gState ++ ) = (
int_T ) rtB . jz2jpueldv [ 1 ] ; * ( gState ++ ) = ( int_T ) rtB . jz2jpueldv
[ 2 ] ; * ( gState ++ ) = ( int_T ) rtB . jz2jpueldv [ 3 ] ; * ( gState ++ )
= ( int_T ) rtP . zerotogeneratedummydiodegateanddelaysignals_Value ; * (
gState ++ ) = ( int_T ) rtP .
zerotogeneratedummydiodegateanddelaysignals_Value ; * ( gState ++ ) = ( int_T
) rtB . jz2jpueldv [ 4 ] ; * ( gState ++ ) = ( int_T ) rtB . jz2jpueldv [ 5 ]
; * ( gState ++ ) = ( int_T ) rtB . jz2jpueldv [ 6 ] ; * ( gState ++ ) = (
int_T ) rtB . jz2jpueldv [ 7 ] ; * ( gState ++ ) = ( int_T ) rtP .
zerotogeneratedummydiodegateanddelaysignals_Value ; * ( gState ++ ) = ( int_T
) rtP . zerotogeneratedummydiodegateanddelaysignals_Value ; * ( gState ++ ) =
( int_T ) rtB . jz2jpueldv [ 8 ] ; * ( gState ++ ) = ( int_T ) rtB .
jz2jpueldv [ 9 ] ; * ( gState ++ ) = ( int_T ) rtB . jz2jpueldv [ 10 ] ; * (
gState ++ ) = ( int_T ) rtB . jz2jpueldv [ 11 ] ; * ( gState ++ ) = ( int_T )
rtP . zerotogeneratedummydiodegateanddelaysignals_Value ; * ( gState ++ ) = (
int_T ) rtP . zerotogeneratedummydiodegateanddelaysignals_Value ; } } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . dnxojqrf4h += rtP .
DiscreteTimeIntegrator_gainval * rtB . iiklvtcoqq ; if ( rtDW . dnxojqrf4h >=
rtP . DiscreteTimeIntegrator_UpperSat ) { rtDW . dnxojqrf4h = rtP .
DiscreteTimeIntegrator_UpperSat ; } else { if ( rtDW . dnxojqrf4h <= rtP .
DiscreteTimeIntegrator_LowerSat ) { rtDW . dnxojqrf4h = rtP .
DiscreteTimeIntegrator_LowerSat ; } } HoldSine = rtDW . j5c2uvj2oq ; rtDW .
j5c2uvj2oq = rtDW . j5c2uvj2oq * rtP . sinwt_HCos + rtDW . fg2d05ol4v * rtP .
sinwt_Hsin ; rtDW . fg2d05ol4v = rtDW . fg2d05ol4v * rtP . sinwt_HCos -
HoldSine * rtP . sinwt_Hsin ; rtDW . ccq3a0hvvz = 0U ; rtDW . ib1uxvkmwq =
rtP . Integ4_gainval_acyknktfit * rtB . ey2rizmais + rtB . m3yfzukqcw ; {
SimStruct * rts = ssGetSFunction ( rtS , 10 ) ; sfcnUpdate ( rts , 0 ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . a25qmsclry = rtB .
ey2rizmais ; rtDW . pmeo1rt34b = rtB . cv4udxzzhc ; HoldSine = rtDW .
hulws5qzax ; rtDW . hulws5qzax = rtDW . hulws5qzax * rtP . coswt_HCos + rtDW
. nkyucij1yx * rtP . coswt_Hsin ; rtDW . nkyucij1yx = rtDW . nkyucij1yx * rtP
. coswt_HCos - HoldSine * rtP . coswt_Hsin ; rtDW . i4vvodokqr = 0U ; rtDW .
mjz4t5iaxe = rtP . Integ4_gainval_m34pjkoi4m * rtB . csmg24xt1h + rtB .
l5ghcw4oar ; { SimStruct * rts = ssGetSFunction ( rtS , 11 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
ixquqw2qy3 = rtB . csmg24xt1h ; rtDW . lifc0322ne = rtB . b22ymbd3mf ;
HoldSine = rtDW . h5eluf4mhs ; rtDW . h5eluf4mhs = rtDW . h5eluf4mhs * rtP .
sinwt_HCos_asiwiduiyg + rtDW . eylslb44al * rtP . sinwt_Hsin_mak1cz2jtq ;
rtDW . eylslb44al = rtDW . eylslb44al * rtP . sinwt_HCos_asiwiduiyg -
HoldSine * rtP . sinwt_Hsin_mak1cz2jtq ; rtDW . ac2dk1rt3k = 0U ; rtDW .
harwcohew2 = rtP . Integ4_gainval_dma1zsooi4 * rtB . hwalic32e0 + rtB .
eltfn04b2v ; { SimStruct * rts = ssGetSFunction ( rtS , 12 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
fnwihpmay0 = rtB . hwalic32e0 ; rtDW . baf0vsen1a = rtB . mgvjcdjnon ;
HoldSine = rtDW . ltflkvmtgt ; rtDW . ltflkvmtgt = rtDW . ltflkvmtgt * rtP .
coswt_HCos_n5n2bmm3oz + rtDW . go54o5xrzu * rtP . coswt_Hsin_d2vrt0arhq ;
rtDW . go54o5xrzu = rtDW . go54o5xrzu * rtP . coswt_HCos_n5n2bmm3oz -
HoldSine * rtP . coswt_Hsin_d2vrt0arhq ; rtDW . fkhoj2jgmi = 0U ; rtDW .
imwn1dqw3v = rtP . Integ4_gainval_hfda0chi2s * rtB . j3a4ma3ewn + rtB .
mof1poi4zr ; { SimStruct * rts = ssGetSFunction ( rtS , 13 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
ckilcxfkro = rtB . j3a4ma3ewn ; rtDW . cynitekjpd = rtB . ad3kqeqisd ; rtDW .
i51ueaix42 = 0U ; rtDW . mrkhrhxnww = rtP . Integ4_gainval_h3dnhx20ls * rtB .
ipwc4g5kbq + rtB . ke3ol5ko23 ; { SimStruct * rts = ssGetSFunction ( rtS , 14
) ; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) )
return ; } rtDW . ktxgj0tsjf = rtB . ipwc4g5kbq ; rtDW . mi5wu1glsv = rtB .
e4ur0oizsv ; rtDW . aqkqgpm4gc = 0U ; rtDW . c4335nifsx = rtP .
Integ4_gainval_l5q1etraeb * rtB . favzhhh3hu + rtB . kereqbn1t4 ; { SimStruct
* rts = ssGetSFunction ( rtS , 15 ) ; sfcnUpdate ( rts , 0 ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . ptjo3yucdh = rtB .
favzhhh3hu ; rtDW . mrw2lvxadr = rtB . o5d0soeen3 ; rtDW . oqc2oijx4n [ 0 ] =
rtB . donxx0azrh [ 0 ] ; rtDW . oqc2oijx4n [ 1 ] = rtB . donxx0azrh [ 1 ] ;
rtDW . oqc2oijx4n [ 2 ] = rtB . donxx0azrh [ 2 ] ; } HoldSine = rtDW .
mduabwvxdw [ 0 ] ; rtDW . mduabwvxdw [ 0 ] = rtDW . mduabwvxdw [ 0 ] * rtP .
SineWave_HCos [ 0 ] + rtDW . ka0lb4ead4 [ 0 ] * rtP . SineWave_Hsin [ 0 ] ;
rtDW . ka0lb4ead4 [ 0 ] = rtDW . ka0lb4ead4 [ 0 ] * rtP . SineWave_HCos [ 0 ]
- HoldSine * rtP . SineWave_Hsin [ 0 ] ; HoldSine = rtDW . mduabwvxdw [ 1 ] ;
rtDW . mduabwvxdw [ 1 ] = rtDW . mduabwvxdw [ 1 ] * rtP . SineWave_HCos [ 1 ]
+ rtDW . ka0lb4ead4 [ 1 ] * rtP . SineWave_Hsin [ 1 ] ; rtDW . ka0lb4ead4 [ 1
] = rtDW . ka0lb4ead4 [ 1 ] * rtP . SineWave_HCos [ 1 ] - HoldSine * rtP .
SineWave_Hsin [ 1 ] ; HoldSine = rtDW . mduabwvxdw [ 2 ] ; rtDW . mduabwvxdw
[ 2 ] = rtDW . mduabwvxdw [ 2 ] * rtP . SineWave_HCos [ 2 ] + rtDW .
ka0lb4ead4 [ 2 ] * rtP . SineWave_Hsin [ 2 ] ; rtDW . ka0lb4ead4 [ 2 ] = rtDW
. ka0lb4ead4 [ 2 ] * rtP . SineWave_HCos [ 2 ] - HoldSine * rtP .
SineWave_Hsin [ 2 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW .
cjwxpfyi0s += rtP . DiscreteTimeIntegrator_gainval_brcl5xxl2q * rtB .
lru24ttam4 ; rtDW . fiemep045g = ( int8_T ) rtB . n10p5f0juc ; rtDW .
dhjfalcx4a = rtP . Integrator_gainval * rtB . e0g5n03rqo + rtB . cligl2qrn5 ;
rtDW . o15yghmujb [ 0 ] += rtP . Integrator_gainval_ozsadpowpb * rtB .
bwti5wt3ya [ 0 ] ; rtDW . o15yghmujb [ 1 ] += rtP .
Integrator_gainval_ozsadpowpb * rtB . bwti5wt3ya [ 1 ] ; rtDW . ab2iqeii2p =
rtB . kchwhkgx0y ; if ( rtDW . mzm5o4mdzr ) { rtDW . nihykliv33 = 0U ; rtDW .
hijxp3gq4o = rtP . Integ4_gainval * rtB . iv1hfkdvbe [ 0 ] + rtB . oelqevpbry
; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnUpdate ( rts , 0 ) ;
if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . lcfqi5wiqw =
rtB . iv1hfkdvbe [ 0 ] ; rtDW . pldh2wssv5 = rtB . kqdvcno01e ; rtDW .
h0pos1xozd = 0U ; rtDW . golju3qw0i = rtP . Integ4_gainval_fz2uqdiylj * rtB .
iv1hfkdvbe [ 1 ] + rtB . bcbiecm4zm ; { SimStruct * rts = ssGetSFunction (
rtS , 1 ) ; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL
) ) return ; } rtDW . ate4w5xtkf = rtB . iv1hfkdvbe [ 1 ] ; rtDW . ixft3bo0dp
= rtB . frpkkw3tvy ; } rtDW . gh4ntcxpmy = 0U ; rtDW . ihnppyndqr = rtP .
Integ4_gainval_lotsoek0sk * rtB . p51nrhewkg [ 1 ] + rtB . obitw0v3yj ; {
SimStruct * rts = ssGetSFunction ( rtS , 16 ) ; sfcnUpdate ( rts , 0 ) ; if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . klrwiho1ye = rtB .
p51nrhewkg [ 1 ] ; rtDW . a2f2juw01k = rtB . bvgai4gz1t ; rtDW . o0zn0bw5fs =
rtDW . lfe3bbafy3 ; rtDW . afxwty24tb += rtP .
DiscreteTimeIntegrator_gainval_do3kgazujd * rtB . agnrdamyfj ; if ( rtDW .
afxwty24tb >= rtP . DiscreteTimeIntegrator_UpperSat_fcaa0odsep ) { rtDW .
afxwty24tb = rtP . DiscreteTimeIntegrator_UpperSat_fcaa0odsep ; } else { if (
rtDW . afxwty24tb <= rtP . DiscreteTimeIntegrator_LowerSat_gdzmh1fqac ) {
rtDW . afxwty24tb = rtP . DiscreteTimeIntegrator_LowerSat_gdzmh1fqac ; } }
rtDW . ilas2cvqvf = rtB . kvmhczmkfy ; rtDW . atky2tlkix = rtB . dhcpdth2nf ;
HoldSine = rtDW . ifniwtykup ; rtDW . ifniwtykup = rtDW . ifniwtykup * rtP .
sinwt_HCos_heu1kx4sdg + rtDW . oepb11b4s2 * rtP . sinwt_Hsin_oqj105hayu ;
rtDW . oepb11b4s2 = rtDW . oepb11b4s2 * rtP . sinwt_HCos_heu1kx4sdg -
HoldSine * rtP . sinwt_Hsin_oqj105hayu ; rtDW . njaezbobrh = 0U ; rtDW .
aq42zioen3 = rtP . Integ4_gainval_i0v3kwd3pb * rtB . dfnqmp3zop + rtB .
pve14kcnew ; { SimStruct * rts = ssGetSFunction ( rtS , 17 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
n4rcukwcge = rtB . dfnqmp3zop ; rtDW . mynehged5v = rtB . lxvfcojox3 ;
HoldSine = rtDW . kdxy4zwivo ; rtDW . kdxy4zwivo = rtDW . kdxy4zwivo * rtP .
coswt_HCos_he1vypz4le + rtDW . p2n12agdxx * rtP . coswt_Hsin_ebehquqc0i ;
rtDW . p2n12agdxx = rtDW . p2n12agdxx * rtP . coswt_HCos_he1vypz4le -
HoldSine * rtP . coswt_Hsin_ebehquqc0i ; rtDW . gqe40uruvc = 0U ; rtDW .
cdvd2sss4w = rtP . Integ4_gainval_msuhv1zzxl * rtB . dd0kvpdeik + rtB .
edvtkbxssc ; { SimStruct * rts = ssGetSFunction ( rtS , 18 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
dhbrbfsgve = rtB . dd0kvpdeik ; rtDW . erpra20zur = rtB . eznbr5gxnf ;
HoldSine = rtDW . hgonifzr0h ; rtDW . hgonifzr0h = rtDW . hgonifzr0h * rtP .
sinwt_HCos_cafhkcfovv + rtDW . mhz2zh32sr * rtP . sinwt_Hsin_e0rgtjbjpx ;
rtDW . mhz2zh32sr = rtDW . mhz2zh32sr * rtP . sinwt_HCos_cafhkcfovv -
HoldSine * rtP . sinwt_Hsin_e0rgtjbjpx ; rtDW . gzyeeyibia = 0U ; rtDW .
fz2io1e43r = rtP . Integ4_gainval_gtzjg23pll * rtB . hjshci25up + rtB .
ft4dza43vu ; { SimStruct * rts = ssGetSFunction ( rtS , 19 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
b3skrgh41w = rtB . hjshci25up ; rtDW . nlavo4st2f = rtB . boavmh4ejw ;
HoldSine = rtDW . gvfp0kopbi ; rtDW . gvfp0kopbi = rtDW . gvfp0kopbi * rtP .
coswt_HCos_oz23s2cxn2 + rtDW . drpqup31hq * rtP . coswt_Hsin_omgodzfzvz ;
rtDW . drpqup31hq = rtDW . drpqup31hq * rtP . coswt_HCos_oz23s2cxn2 -
HoldSine * rtP . coswt_Hsin_omgodzfzvz ; rtDW . lkucpq1uah = 0U ; rtDW .
b1pxac2euv = rtP . Integ4_gainval_g3uamgfpqb * rtB . nzyqolvt1e + rtB .
f2y4jldafv ; { SimStruct * rts = ssGetSFunction ( rtS , 20 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
ivxtrpjaaz = rtB . nzyqolvt1e ; rtDW . hkgssuwq1m = rtB . dqmyx5uih2 ;
HoldSine = rtDW . fbnimcf5zs ; rtDW . fbnimcf5zs = rtDW . fbnimcf5zs * rtP .
sinwt_HCos_lozsdsini2 + rtDW . ddeer0wu2d * rtP . sinwt_Hsin_ltv4wuiu5i ;
rtDW . ddeer0wu2d = rtDW . ddeer0wu2d * rtP . sinwt_HCos_lozsdsini2 -
HoldSine * rtP . sinwt_Hsin_ltv4wuiu5i ; rtDW . jjgj3xap4d = 0U ; rtDW .
hanrdqnaqb = rtP . Integ4_gainval_h0bygbtnao * rtB . hez2f5zeuo + rtB .
b0y5txfras ; { SimStruct * rts = ssGetSFunction ( rtS , 21 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
pmotaxwkhx = rtB . hez2f5zeuo ; rtDW . mybd2g2ug4 = rtB . aytj15pdge ;
HoldSine = rtDW . hrluunvnvz ; rtDW . hrluunvnvz = rtDW . hrluunvnvz * rtP .
coswt_HCos_e1lcq0jydt + rtDW . fm2sl2lxgz * rtP . coswt_Hsin_p0lqeycuo2 ;
rtDW . fm2sl2lxgz = rtDW . fm2sl2lxgz * rtP . coswt_HCos_e1lcq0jydt -
HoldSine * rtP . coswt_Hsin_p0lqeycuo2 ; rtDW . jwgnwdiuim = 0U ; rtDW .
echh34xzp1 = rtP . Integ4_gainval_lqadd2jned * rtB . hkupangjj2 + rtB .
hahpxwmtiw ; { SimStruct * rts = ssGetSFunction ( rtS , 22 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
jlgyu44vvh = rtB . hkupangjj2 ; rtDW . ooqkjuryor = rtB . drfqwkasyq ;
HoldSine = rtDW . h5f4diwe0i ; rtDW . h5f4diwe0i = rtDW . h5f4diwe0i * rtP .
sinwt_HCos_ikm4ke3nt1 + rtDW . gzkywi4luv * rtP . sinwt_Hsin_f4ff1jm01o ;
rtDW . gzkywi4luv = rtDW . gzkywi4luv * rtP . sinwt_HCos_ikm4ke3nt1 -
HoldSine * rtP . sinwt_Hsin_f4ff1jm01o ; rtDW . fvyxp4evkh = 0U ; rtDW .
muylcyn1jj = rtP . Integ4_gainval_gvvjdr1enu * rtB . og54jqpe51 + rtB .
a2dep1ma5q ; { SimStruct * rts = ssGetSFunction ( rtS , 23 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
ljsg2sadfb = rtB . og54jqpe51 ; rtDW . liggmwwqdw = rtB . n44elz5k5z ;
HoldSine = rtDW . k1ned5pogk ; rtDW . k1ned5pogk = rtDW . k1ned5pogk * rtP .
coswt_HCos_ih2fmjgzvo + rtDW . plgz2e0c3z * rtP . coswt_Hsin_ki40gemxaa ;
rtDW . plgz2e0c3z = rtDW . plgz2e0c3z * rtP . coswt_HCos_ih2fmjgzvo -
HoldSine * rtP . coswt_Hsin_ki40gemxaa ; rtDW . f2wyufteoz = 0U ; rtDW .
l1vptmfjzt = rtP . Integ4_gainval_e3hymojevp * rtB . m2m5qdd1is + rtB .
oihdqvbn2c ; { SimStruct * rts = ssGetSFunction ( rtS , 24 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
ghxx3onjqv = rtB . m2m5qdd1is ; rtDW . e5radjoywg = rtB . dts2mafck0 ;
HoldSine = rtDW . mzvrmost0b ; rtDW . mzvrmost0b = rtDW . mzvrmost0b * rtP .
sinwt_HCos_c3em0todhq + rtDW . onyz5jcubj * rtP . sinwt_Hsin_i0nd0ubqqg ;
rtDW . onyz5jcubj = rtDW . onyz5jcubj * rtP . sinwt_HCos_c3em0todhq -
HoldSine * rtP . sinwt_Hsin_i0nd0ubqqg ; rtDW . lcc4thgbvm = 0U ; rtDW .
pvp424fepa = rtP . Integ4_gainval_o4m2wju04m * rtB . ma5v5wrx2r + rtB .
bnu0g1s1dq ; { SimStruct * rts = ssGetSFunction ( rtS , 25 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
c32f1i3eco = rtB . ma5v5wrx2r ; rtDW . efljn420bi = rtB . bx34ezdhdc ;
HoldSine = rtDW . ctyh01bulx ; rtDW . ctyh01bulx = rtDW . ctyh01bulx * rtP .
coswt_HCos_cs3y4qtzeb + rtDW . epbyahgnci * rtP . coswt_Hsin_fuzcqltv4d ;
rtDW . epbyahgnci = rtDW . epbyahgnci * rtP . coswt_HCos_cs3y4qtzeb -
HoldSine * rtP . coswt_Hsin_fuzcqltv4d ; rtDW . n2aitbecpw = 0U ; rtDW .
nbkoe5uf1p = rtP . Integ4_gainval_dmsyi0ujpc * rtB . pb25q3i5y0 + rtB .
n5anonvc5c ; { SimStruct * rts = ssGetSFunction ( rtS , 26 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
mutthcbksv = rtB . pb25q3i5y0 ; rtDW . nkocdivqnb = rtB . kbmxjxx40u ;
HoldSine = rtDW . f0f4dq1t4x ; rtDW . f0f4dq1t4x = rtDW . f0f4dq1t4x * rtP .
sinwt_HCos_lv5zpnsoyo + rtDW . cj44rcnno0 * rtP . sinwt_Hsin_kfaxcimxsb ;
rtDW . cj44rcnno0 = rtDW . cj44rcnno0 * rtP . sinwt_HCos_lv5zpnsoyo -
HoldSine * rtP . sinwt_Hsin_kfaxcimxsb ; rtDW . jjuul3sb0d = 0U ; rtDW .
mldhopdlpr = rtP . Integ4_gainval_lqpuvz5try * rtB . aefoovdb2f + rtB .
ihvm1vxbno ; { SimStruct * rts = ssGetSFunction ( rtS , 27 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
mmwyhcf00o = rtB . aefoovdb2f ; rtDW . adrzqo1xe3 = rtB . bjbycn0jg3 ;
HoldSine = rtDW . o3r1h21bfi ; rtDW . o3r1h21bfi = rtDW . o3r1h21bfi * rtP .
coswt_HCos_dtrnnwyvoi + rtDW . g0pqsze5ut * rtP . coswt_Hsin_nt154hil4g ;
rtDW . g0pqsze5ut = rtDW . g0pqsze5ut * rtP . coswt_HCos_dtrnnwyvoi -
HoldSine * rtP . coswt_Hsin_nt154hil4g ; rtDW . a5ot3orarr = 0U ; rtDW .
cscb0srydh = rtP . Integ4_gainval_ae24pre0oj * rtB . bfc0ew4l5x + rtB .
adcm1emc4n ; { SimStruct * rts = ssGetSFunction ( rtS , 28 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW .
jqlkum55me = rtB . bfc0ew4l5x ; rtDW . ensydwnmvi = rtB . lnvtu0nq30 ; rtDW .
b4vqgmg5hq = 0U ; rtDW . ihdw3zr5an = rtP . Integ4_gainval_ky1qdbqrxe * rtB .
e5zlxkpqts + rtB . pjzrk5uavg ; { SimStruct * rts = ssGetSFunction ( rtS , 29
) ; sfcnUpdate ( rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) )
return ; } rtDW . eacppom1uy = rtB . e5zlxkpqts ; rtDW . e5dcrnrcoh = rtB .
kc5hguu52m ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid )
{ UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { { SimStruct * rts
= ssGetSFunction ( rtS , 2 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 3 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 4 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 5 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 6 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 7 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 8 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 9 ) ; sfcnTerminate ( rts ) ; } rt_FREE ( rtDW .
lfo1uw1b0p . RSimInfoPtr ) ; rt_FREE ( rtDW . l3d41fro2o . RSimInfoPtr ) ; {
free ( rtDW . gyy03l5gua . AS ) ; free ( rtDW . gyy03l5gua . BS ) ; free (
rtDW . gyy03l5gua . CS ) ; free ( rtDW . gyy03l5gua . DS ) ; free ( rtDW .
gyy03l5gua . DX_COL ) ; free ( rtDW . gyy03l5gua . TMP2 ) ; free ( rtDW .
gyy03l5gua . BD_COL ) ; free ( rtDW . gyy03l5gua . TMP1 ) ; free ( rtDW .
gyy03l5gua . XTMP ) ; free ( rtDW . gyy03l5gua . G_STATE ) ; free ( rtDW .
gyy03l5gua . SWITCH_STATUS ) ; free ( rtDW . gyy03l5gua . SW_CHG ) ; free (
rtDW . gyy03l5gua . SWITCH_STATUS_INIT ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 10 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 11 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 12 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 13 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 14 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 15 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 1 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 16 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 17 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 18 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 19 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 20 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 21 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 22 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 23 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 24 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 25 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 26 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 27 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 28 ) ; sfcnTerminate ( rts ) ; } { SimStruct * rts =
ssGetSFunction ( rtS , 29 ) ; sfcnTerminate ( rts ) ; }
rtwOSigstreamManagerSaveDatasetsToMatFile ( rt_GetOSigstreamManager ( ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwOSigstreamManagerDestroyInstance
( rt_GetOSigstreamManager ( ) ) ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0
) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ;
ssSetNumBlocks ( rtS , 936 ) ; ssSetNumBlockIO ( rtS , 230 ) ;
ssSetNumBlockParams ( rtS , 10725 ) ; } void MdlInitializeSampleTimes ( void
) { ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 1.0E-6 )
; ssSetSampleTime ( rtS , 2 , 0.0001 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( SimStruct * rtS ) { ssSetChecksumVal ( rtS , 0 ,
342340780U ) ; ssSetChecksumVal ( rtS , 1 , 970417428U ) ; ssSetChecksumVal (
rtS , 2 , 1137708617U ) ; ssSetChecksumVal ( rtS , 3 , 229799580U ) ; }
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { void * dwork =
( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork
, 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset
( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo (
rtS , & dtInfo ) ; dtInfo . numDataTypes = 26 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; } power_PVarray_grid_det_InitializeDataMapInfo ( rtS ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"power_PVarray_grid_det" ) ; ssSetPath ( rtS , "power_PVarray_grid_det" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 32.0 ) ; ssSetStepSize ( rtS
, 1.0E-6 ) ; ssSetFixedStepSize ( rtS , 1.0E-6 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 36 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ]
= { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 36 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 3 , 1 , 1 , 2 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const char_T *
rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "states" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"power_PVarray_grid_det/PV Array/Diode Rsh/BAL/Unit Delay" ,
"power_PVarray_grid_det/powergui/EquivalentModel1/State-Space" ,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Discrete-Time\nIntegrator"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier1/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier1/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier1/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier1/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier1/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Fourier1/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Mean1/Model/Integ4"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Mean1/Model/Unit Delay"
,
 "power_PVarray_grid_det/MPPT Controller\nusing  \"Incremental Conductance \n+ Integral Regulator \"  technique\n/MPPT/Mean1/Model/Unit Delay1"
, "power_PVarray_grid_det/VSC Control/Unit Delay" ,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Discrete-Time\nIntegrator"
, "power_PVarray_grid_det/VSC Control/VDC Regulator/PI/Integrator" ,
"power_PVarray_grid_det/VSC Control/Current Regulator/PI/Integrator" ,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Unit Delay"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Variable Frequency\nMean value/Model/Integ4"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Variable Frequency\nMean value/Model/Correction\nsubsystem/Unit Delay"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Variable Frequency\nMean value/Model/Unit Delay1"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Discrete/Discrete\nDerivative "
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Discrete/Discrete-Time\nIntegrator"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Second-Order\nFilter/Model/Delay_x1"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Second-Order\nFilter/Model/Delay_x2"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Integ4"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Unit Delay"
,
 "power_PVarray_grid_det/Subsystem1/Power\n(Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Unit Delay1"
, "power_PVarray_grid_det/Subsystem2/Mean/Model/Integ4" ,
"power_PVarray_grid_det/Subsystem2/Mean/Model/Unit Delay" ,
"power_PVarray_grid_det/Subsystem2/Mean/Model/Unit Delay1" ,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Automatic Gain\nControl/Positive-Sequence\n(PLL-Driven)/Mean\n(Variable Frequency)1/Model/Integ4"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Automatic Gain\nControl/Positive-Sequence\n(PLL-Driven)/Mean\n(Variable Frequency)1/Model/Correction\nsubsystem/Unit Delay"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Automatic Gain\nControl/Positive-Sequence\n(PLL-Driven)/Mean\n(Variable Frequency)1/Model/Unit Delay1"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Automatic Gain\nControl/Positive-Sequence\n(PLL-Driven)/Mean\n(Variable Frequency)2/Model/Integ4"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Automatic Gain\nControl/Positive-Sequence\n(PLL-Driven)/Mean\n(Variable Frequency)2/Model/Correction\nsubsystem/Unit Delay"
,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL\n(3ph)/Model/Automatic Gain\nControl/Positive-Sequence\n(PLL-Driven)/Mean\n(Variable Frequency)2/Model/Unit Delay1"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 78 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , { rt_LoggedStateLabels } , ( NULL )
, ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , { rt_LoggedStateNames
} , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 78 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . h2vwpcchd5 ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) rtDW . ghzfhogk1s ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . dnxojqrf4h ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . ib1uxvkmwq ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . a25qmsclry ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . pmeo1rt34b ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . mjz4t5iaxe ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . ixquqw2qy3 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . lifc0322ne ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . harwcohew2 ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . fnwihpmay0 ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . baf0vsen1a ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . imwn1dqw3v ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . ckilcxfkro ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . cynitekjpd ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtDW . mrkhrhxnww ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtDW . ktxgj0tsjf ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtDW . mi5wu1glsv ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtDW . c4335nifsx ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . ptjo3yucdh ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . mrw2lvxadr ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) rtDW . oqc2oijx4n ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtDW . cjwxpfyi0s ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtDW . dhjfalcx4a ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) rtDW . o15yghmujb ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtDW . ab2iqeii2p ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtDW . ihnppyndqr ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtDW . klrwiho1ye ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtDW . a2f2juw01k ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtDW . o0zn0bw5fs ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtDW . afxwty24tb ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtDW . ilas2cvqvf ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtDW . atky2tlkix ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtDW . aq42zioen3 ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtDW . n4rcukwcge ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtDW . mynehged5v ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtDW . cdvd2sss4w ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtDW . dhbrbfsgve ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtDW . erpra20zur ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtDW . fz2io1e43r ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtDW . b3skrgh41w ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtDW . nlavo4st2f ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtDW . b1pxac2euv ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtDW . ivxtrpjaaz ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtDW . hkgssuwq1m ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtDW . hanrdqnaqb ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtDW . pmotaxwkhx ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtDW . mybd2g2ug4 ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtDW . echh34xzp1 ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtDW . jlgyu44vvh ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtDW . ooqkjuryor ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtDW . muylcyn1jj ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtDW . ljsg2sadfb ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtDW . liggmwwqdw ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtDW . l1vptmfjzt ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtDW . ghxx3onjqv ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtDW . e5radjoywg ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtDW . pvp424fepa ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtDW . c32f1i3eco ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtDW . efljn420bi ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtDW . nbkoe5uf1p ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtDW . mutthcbksv ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . nkocdivqnb ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . mldhopdlpr ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . mmwyhcf00o ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . adrzqo1xe3 ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . cscb0srydh ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtDW . jqlkum55me ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . ensydwnmvi ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtDW . ihdw3zr5an ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtDW . eacppom1uy ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtDW . e5dcrnrcoh ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtDW . hijxp3gq4o ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . lcfqi5wiqw ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . pldh2wssv5 ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . golju3qw0i ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . ate4w5xtkf ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . ixft3bo0dp ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo )
; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver (
rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 342340780U
) ; ssSetChecksumVal ( rtS , 1 , 970417428U ) ; ssSetChecksumVal ( rtS , 2 ,
1137708617U ) ; ssSetChecksumVal ( rtS , 3 , 229799580U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 41 ] ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = ( sysRanDType * ) &
rtDW . msv4qqksksf . p2zbab2zyq ; systemRan [ 14 ] = ( sysRanDType * ) & rtDW
. gfc0o4gmcx . p2zbab2zyq ; systemRan [ 15 ] = ( sysRanDType * ) & rtDW .
g23t01ww0z0 . osvjim3e0u ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [
17 ] = & rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [
19 ] = & rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [
21 ] = & rtAlwaysEnabled ; systemRan [ 22 ] = ( sysRanDType * ) & rtDW .
dn2wcdma5d . p2zbab2zyq ; systemRan [ 23 ] = ( sysRanDType * ) & rtDW .
n45kzzuand . p2zbab2zyq ; systemRan [ 24 ] = ( sysRanDType * ) & rtDW .
ojknbv4is1 . osvjim3e0u ; systemRan [ 25 ] = & rtAlwaysEnabled ; systemRan [
26 ] = ( sysRanDType * ) & rtDW . bibamec5kg ; systemRan [ 27 ] = (
sysRanDType * ) & rtDW . bibamec5kg ; systemRan [ 28 ] = ( sysRanDType * ) &
rtDW . fwds5waerqt . ioz5px3kzt ; systemRan [ 29 ] = ( sysRanDType * ) & rtDW
. klbd0xrbram . b30icczwdz ; systemRan [ 30 ] = ( sysRanDType * ) & rtDW .
bibamec5kg ; systemRan [ 31 ] = & rtAlwaysEnabled ; systemRan [ 32 ] = (
sysRanDType * ) & rtDW . jgqfnbi2jt . ioz5px3kzt ; systemRan [ 33 ] = (
sysRanDType * ) & rtDW . dzyhdh21lm . b30icczwdz ; systemRan [ 34 ] = (
sysRanDType * ) & rtDW . ochgqd2u0r . ioz5px3kzt ; systemRan [ 35 ] = (
sysRanDType * ) & rtDW . m1irskyirr . b30icczwdz ; systemRan [ 36 ] = (
sysRanDType * ) & rtDW . lbykfmi30w . ioz5px3kzt ; systemRan [ 37 ] = (
sysRanDType * ) & rtDW . ox1z1gld2w . b30icczwdz ; systemRan [ 38 ] = &
rtAlwaysEnabled ; systemRan [ 39 ] = ( sysRanDType * ) & rtDW . moo2ct0pfe ;
systemRan [ 40 ] = ( sysRanDType * ) & rtDW . kfq2syo2or ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } rtP . Saturation_UpperSat = rtInf ; rtP .
Saturation1_UpperSat = rtInf ; rtP . Saturation_UpperSat_efuiqyy5v2 = rtInf ;
rtP . DiscreteTimeIntegrator_UpperSat_fcaa0odsep = rtInf ; rtP .
Saturation1_UpperSat_gtqpw40kq5 = rtInf ; ssSetNumSFunctions ( rtS , 30 ) ; {
static SimStruct childSFunctions [ 30 ] ; static SimStruct *
childSFunctionPtrs [ 30 ] ; ( void ) memset ( ( void * ) & childSFunctions [
0 ] , 0 , sizeof ( childSFunctions ) ) ; ssSetSFunctions ( rtS , &
childSFunctionPtrs [ 0 ] ) ; { int_T i ; for ( i = 0 ; i < 30 ; i ++ ) {
ssSetSFunction ( rtS , i , & childSFunctions [ i ] ) ; } } { SimStruct * rts
= ssGetSFunction ( rtS , 0 ) ; static time_T sfcnPeriod [ 1 ] ; static time_T
sfcnOffset [ 1 ] ; static int_T sfcnTsMap [ 1 ] ; ( void ) memset ( ( void *
) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ; ( void ) memset ( ( void * )
sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , &
sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts ,
ssGetMdlInfoPtr ( rtS ) ) ; { static struct _ssSFcnModelMethods2 methods2 ;
ssSetModelMethods2 ( rts , & methods2 ) ; } { static struct
_ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , & methods3 ) ; } {
static struct _ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , &
methods4 ) ; } { static struct _ssStatesInfo2 statesInfo2 ; static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetStatesInfo2 ( rts , &
statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } {
static struct _ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts ,
2 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . oelqevpbry ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
kglrgtgbsp ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . njxdhkx2nn ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size ) ; ssSetSFcnParam ( rts , 1 , (
mxArray * ) rtP . SFunction_P2_Size ) ; ssSetSFcnParam ( rts , 2 , ( mxArray
* ) rtP . SFunction_P3_Size ) ; ssSetSFcnParam ( rts , 3 , ( mxArray * ) rtP
. SFunction_P4_Size ) ; } ssSetRWork ( rts , ( real_T * ) & rtDW . fck5m0uiyz
) ; ssSetIWork ( rts , ( int_T * ) & rtDW . ismn0fa03d ) ; ssSetPWork ( rts ,
( void * * ) & rtDW . ipxvdl54a3 ) ; { static struct _ssDWorkRecord
dWorkRecord [ 3 ] ; static struct _ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ;
ssSetSFcnDWork ( rts , dWorkRecord ) ; ssSetSFcnDWorkAux ( rts ,
dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ; ssSetDWorkWidth ( rts , 0 , 1
) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE ) ; ssSetDWorkComplexSignal (
rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW . fck5m0uiyz ) ;
ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1 , SS_INTEGER )
; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts , 1 , & rtDW .
ismn0fa03d ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ; ssSetDWorkDataType ( rts , 2
, SS_POINTER ) ; ssSetDWorkComplexSignal ( rts , 2 , 0 ) ; ssSetDWork ( rts ,
2 , & rtDW . ipxvdl54a3 ) ; } sfun_discreteVariableDelay ( rts ) ;
sfcnInitializeSizes ( rts ) ; sfcnInitializeSampleTimes ( rts ) ;
ssSetSampleTime ( rts , 0 , 0.0001 ) ; ssSetOffsetTime ( rts , 0 , 0.0 ) ;
sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth ( rts , 0 , 1 ) ;
ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ; ssSetInputPortComplexSignal
( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts , 0 , 0 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts , 1 ,
SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 1 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . bcbiecm4zm ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
k351ndf2p2 ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . ohqb1f0agt ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Automatic Gain Control/Positive-Sequence (PLL-Driven)/Mean (Variable Frequency)2/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_gcwln5h2fy ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_cja0aqxvcz ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_av3rmjmb5f ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_hngc2st1ax ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . ooebeu311i ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. mkz0ezztxm ) ; ssSetPWork ( rts , ( void * * ) & rtDW . o4alvg3b0t ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
ooebeu311i ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . mkz0ezztxm ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . o4alvg3b0t ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 2 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . kxvjrbtlec ; sfcnUPtrs [ 1
] = & rtB . kxvjrbtlec [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . kxvjrbtlec [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
f3xnh04wjh ; sfcnUPtrs [ 1 ] = & rtB . f3xnh04wjh [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . f3xnh04wjh [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . okqn5bgutk ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_hyy1qnn33f ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_gxlcontqfu ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_l2ibalkmhi ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_kk523flakb ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . dyvsgh5vzd ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. l4vvlhftva [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . b1bk4wr52e [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
dyvsgh5vzd ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . l4vvlhftva [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . b1bk4wr52e [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 3 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . aykkzxyrll ; sfcnUPtrs [ 1
] = & rtB . aykkzxyrll [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . aykkzxyrll [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
nkctcgpqso ; sfcnUPtrs [ 1 ] = & rtB . nkctcgpqso [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . nkctcgpqso [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . d24w5xgal0 ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_etqx4raqzf ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_enybtaa5s0 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_binuljwssx ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_gthbeik2ef ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . jccw5ulscb ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. bnqxpqqocc [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . j30hquqewe [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
jccw5ulscb ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . bnqxpqqocc [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . j30hquqewe [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 4 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . lupahu4br1 ; sfcnUPtrs [ 1
] = & rtB . lupahu4br1 [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . lupahu4br1 [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
nkctcgpqso ; sfcnUPtrs [ 1 ] = & rtB . nkctcgpqso [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . nkctcgpqso [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . o1mde0n1yk ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_gfkgf1tc0j ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_j1gpzilyb4 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_nhspi31nsm ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_kfsukvtv0x ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . o5ke412osf ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. lecvnywo4k [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . kqujynw0xe [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
o5ke412osf ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . lecvnywo4k [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . kqujynw0xe [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 5 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . ekctuybauk ; sfcnUPtrs [ 1
] = & rtB . ekctuybauk [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . ekctuybauk [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
f3xnh04wjh ; sfcnUPtrs [ 1 ] = & rtB . f3xnh04wjh [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . f3xnh04wjh [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . pttvbb2pav ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/14-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_h5egaqo4ey ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_bihovjmkz2 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_jkbiskfpyc ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_c2u3sues1r ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . l3y4sgzlo2 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. e2qhy2vquq [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . ev1p3jq1oa [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
l3y4sgzlo2 ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . e2qhy2vquq [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . ev1p3jq1oa [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 6 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . ajmuihbldm ; sfcnUPtrs [ 1
] = & rtB . ajmuihbldm [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . ajmuihbldm [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
hllfnshuyf ; sfcnUPtrs [ 1 ] = & rtB . hllfnshuyf [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . hllfnshuyf [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . b5wfzsal13 ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V1/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_au4imovtxx ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_p0ny44agjc ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_pvrdwmytrj ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_aan0milyrl ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . l1fyvyutj4 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. ptwjzjv2ft [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . opaamwqgrd [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
l1fyvyutj4 ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . ptwjzjv2ft [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . opaamwqgrd [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 7 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . orhpipghdi ; sfcnUPtrs [ 1
] = & rtB . orhpipghdi [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . orhpipghdi [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
m5n0tvijea ; sfcnUPtrs [ 1 ] = & rtB . m5n0tvijea [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . m5n0tvijea [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . apxmnwrgff ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I1/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_jw2g4bpaoz ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_nohqjs2fbl ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_g45xvxqq15 ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_lmbbgj5ilo ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . lyuonz2lct ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. eijbxglnje [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . dbsrbugt2q [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
lyuonz2lct ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . eijbxglnje [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . dbsrbugt2q [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 8 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . fdp5wsxjlw ; sfcnUPtrs [ 1
] = & rtB . fdp5wsxjlw [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . fdp5wsxjlw [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
m5n0tvijea ; sfcnUPtrs [ 1 ] = & rtB . m5n0tvijea [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . m5n0tvijea [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . c0xf4gasvx ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_I2/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_ncamyki5at ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_cqci3pfmgh ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_ilng0qdwau ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_onn4qciyxh ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . mx42r0xxfc ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. chp4om3pcs [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . fhnmddjqgx [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
mx42r0xxfc ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . chp4om3pcs [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . fhnmddjqgx [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 9 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB . efq03tkmq4 ; sfcnUPtrs [ 1
] = & rtB . efq03tkmq4 [ 1 ] ; sfcnUPtrs [ 2 ] = & rtB . efq03tkmq4 [ 2 ] ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 3 ) ; } { static real_T const * sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = rtB .
hllfnshuyf ; sfcnUPtrs [ 1 ] = & rtB . hllfnshuyf [ 1 ] ; sfcnUPtrs [ 2 ] = &
rtB . hllfnshuyf [ 2 ] ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType
) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 3 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 3 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) rtB . okly2bzqby ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/600V Utlity Grid/5-km Feeder/Model/Discrete Variable Time Delay_V2/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_pprijeqgwv ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_pbqrvyvwsu ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_kxjcudznis ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_fka1xmnywj ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . kyioo4dt1t ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. julwkqpaqt [ 0 ] ) ; ssSetPWork ( rts , ( void * * ) & rtDW . aafkt2vokc [
0 ] ) ; { static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
kyioo4dt1t ) ; ssSetDWorkWidth ( rts , 1 , 3 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . julwkqpaqt [ 0 ] ) ; ssSetDWorkWidth ( rts , 2 , 3 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . aafkt2vokc [ 0 ] ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 1.0E-6 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ; ssSetInputPortWidth
( rts , 0 , 3 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 3
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 3 ) ; ssSetNumPWork ( rts , 3 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 10 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . m3yfzukqcw ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
aq0wk5w32c ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . hnzqj2225r ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
"power_PVarray_grid_det/MPPT Controller using  " Incremental Conductance +
Integral Regulator
 "  technique /MPPT/Fourier/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_edekkxu4yh ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_nx30efk4ge ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_kpuffejruv ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_p4zqu5x0fk ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . jvbhrxnbdo ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. hb2ckldpqz ) ; ssSetPWork ( rts , ( void * * ) & rtDW . aidy5un313 ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
jvbhrxnbdo ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . hb2ckldpqz ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . aidy5un313 ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 11 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . l5ghcw4oar ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
oi4fxfp2u0 ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . o1zxhzbujc ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
"power_PVarray_grid_det/MPPT Controller using  " Incremental Conductance +
Integral Regulator
"  technique /MPPT/Fourier/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_jtx2hil2z3 ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_c0k5gmdptk ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_fdkng2owrn ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_npeueslym3 ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . foqpbaavj2 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. ldgtoitv1o ) ; ssSetPWork ( rts , ( void * * ) & rtDW . gz4i5fn4xr ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
foqpbaavj2 ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . ldgtoitv1o ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . gz4i5fn4xr ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 12 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . eltfn04b2v ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
f5nmukgsc4 ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . b34qw0i1wv ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
"power_PVarray_grid_det/MPPT Controller using  " Incremental Conductance +
Integral Regulator
 "  technique /MPPT/Fourier1/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_kbcpedyncd ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_chpqhdnlw4 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_hiywv3v22g ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_evcdk004im ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . eigxuivmjh ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. o4ur1imqbj ) ; ssSetPWork ( rts , ( void * * ) & rtDW . eeyp5miaem ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
eigxuivmjh ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . o4ur1imqbj ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . eeyp5miaem ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 13 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . mof1poi4zr ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
j0g2g0oaks ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . h1um2aqafa ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
"power_PVarray_grid_det/MPPT Controller using  " Incremental Conductance +
Integral Regulator
"  technique /MPPT/Fourier1/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_fv0ovj4mok ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_b0xbpne10w ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_kg3uwt024h ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_i5j0wxj4uo ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . heuggrbmd5 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. gahe4pij11 ) ; ssSetPWork ( rts , ( void * * ) & rtDW . p0a4vnsgq0 ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
heuggrbmd5 ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . gahe4pij11 ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . p0a4vnsgq0 ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 14 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . ke3ol5ko23 ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
hd1nsijzpc ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . daq4mncg1i ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
"power_PVarray_grid_det/MPPT Controller using  " Incremental Conductance +
Integral Regulator
"  technique /MPPT/Mean/Model/Discrete Variable Time Delay/S-Function" ) ; if
( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_eyhfaekx5p ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_hj41qqyuxq ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_bsbcvbclne ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_mmm0bn2303 ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . kagdozuldk ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. da3z0dz4kh ) ; ssSetPWork ( rts , ( void * * ) & rtDW . a5trsryrnv ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
kagdozuldk ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . da3z0dz4kh ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . a5trsryrnv ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 15 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . kereqbn1t4 ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
jcl1buglq4 ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . d5y15rbkwz ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
"power_PVarray_grid_det/MPPT Controller using  " Incremental Conductance +
Integral Regulator
"  technique /MPPT/Mean1/Model/Discrete Variable Time Delay/S-Function" ) ;
if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_mvpl3piin0 ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_mfqyqcbplz ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_jeeot0bbg0 ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_jv4cqxrqm0 ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . ajkkbr4qyh ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. hgccxahfyf ) ; ssSetPWork ( rts , ( void * * ) & rtDW . e5bjbu44ju ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
ajkkbr4qyh ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . hgccxahfyf ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . e5bjbu44ju ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 16 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . obitw0v3yj ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
e3tt25qjpe ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . fdz0zczjpe ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/VSC Control/PLL & Measurements/PLL (3ph)/Model/Variable Frequency Mean value/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_azl4fmid3u ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_dvmzlzudlq ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_fgok1k5lwp ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_nocru43ywt ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . kw2fecfmnk ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. fezpkpghtx ) ; ssSetPWork ( rts , ( void * * ) & rtDW . ird0hxkflz ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
kw2fecfmnk ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . fezpkpghtx ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . ird0hxkflz ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 17 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . pve14kcnew ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
iaqaqqt1jc ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . kbzrui1hxe ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_ibhpobj5mh ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_hndwfqeer1 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_kqonwcz2dd ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_gljhqdhvcw ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . mw0010yxeb ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. ilbibnpgf5 ) ; ssSetPWork ( rts , ( void * * ) & rtDW . lztapq0cux ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
mw0010yxeb ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . ilbibnpgf5 ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . lztapq0cux ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 18 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . edvtkbxssc ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
ci4i34cvpj ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . izfqole4m5 ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_pfhrkjciej ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_mhope5jeqx ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_ky0vccwnr2 ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_di5ycaxh3v ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . g1zakttyh3 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. b3xfy5lnts ) ; ssSetPWork ( rts , ( void * * ) & rtDW . cdoqg5t13n ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
g1zakttyh3 ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . b3xfy5lnts ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . cdoqg5t13n ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 19 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . ft4dza43vu ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
o2uxxe2t45 ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . gilgttova2 ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_ptq3yp4fjx ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_ke5xzzx4kh ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_gp3iwgfnzr ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_fjvrmxlm3b ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . eq0hrq5weq ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. pbljwnxani ) ; ssSetPWork ( rts , ( void * * ) & rtDW . fnu3dqnga5 ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
eq0hrq5weq ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . pbljwnxani ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . fnu3dqnga5 ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 20 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . f2y4jldafv ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
glnliw2gbu ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . jzl25y2kq5 ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_cjan5gzh5s ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_jvanv0ykea ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_jgylmcydz1 ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_fcjx3ghw1g ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . ltlee4nvj5 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. hrqivllh0v ) ; ssSetPWork ( rts , ( void * * ) & rtDW . bgqpsz3lfl ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
ltlee4nvj5 ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . hrqivllh0v ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . bgqpsz3lfl ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 21 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . b0y5txfras ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
e1ss3jmyjc ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . errpq1sl3d ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_pejtedqyc4 ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_hlcp1ovx4k ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_ftrxnxhe1f ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_jds5a2cbzo ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . degadiwukr ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. nkbwzlwzih ) ; ssSetPWork ( rts , ( void * * ) & rtDW . jkxsu4uagp ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
degadiwukr ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . nkbwzlwzih ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . jkxsu4uagp ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 22 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . hahpxwmtiw ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
kinr121xse ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . ghajl1bsbr ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_n1ajy1bnud ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_e0a1ljwhhh ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_g2ktdcnint ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_ouyv0d4ulf ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . fiz31ckkc5 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. nuwli2tn2j ) ; ssSetPWork ( rts , ( void * * ) & rtDW . clw0qdlp1k ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
fiz31ckkc5 ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . nuwli2tn2j ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . clw0qdlp1k ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 23 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . a2dep1ma5q ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
b4cw0lelim ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . h4xirodnve ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_jukdwcj1bv ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_psnzhais11 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_l30wnhs0mm ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_ktxkgaz1xj ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . hmopavfndx ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. k0ezy54wt3 ) ; ssSetPWork ( rts , ( void * * ) & rtDW . jd5t2m1djs ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
hmopavfndx ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . k0ezy54wt3 ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . jd5t2m1djs ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 24 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . oihdqvbn2c ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
eyumafsgjn ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . beuw5i1psd ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_A/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_nmlo2jbnyf ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_lziftoqs2s ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_izfvfjalyr ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_gy1avcz5ha ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . hxnfzwwv2d ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. jzqbqm5jn4 ) ; ssSetPWork ( rts , ( void * * ) & rtDW . hpgod412uc ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
hxnfzwwv2d ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . jzqbqm5jn4 ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . hpgod412uc ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 25 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . bnu0g1s1dq ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
ozyjvhhlpt ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . epesxiuqru ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_i4ous05wd0 ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_nomaj1bgdp ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_n4gzbc3msr ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_g2xqkvldm0 ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . ec5l2wgozd ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. k52cnsnlfs ) ; ssSetPWork ( rts , ( void * * ) & rtDW . lhx3ty435v ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
ec5l2wgozd ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . k52cnsnlfs ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . lhx3ty435v ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 26 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . n5anonvc5c ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
n00vcniaoj ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . e0245b3vbs ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_B/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_cvpkxdvatx ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_fwn5zkbns1 ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_pedctzjhmg ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_nydreygcaq ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . jv0kr4jarc ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. ahfv5tgaf1 ) ; ssSetPWork ( rts , ( void * * ) & rtDW . o4trfw022a ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
jv0kr4jarc ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . ahfv5tgaf1 ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . o4trfw022a ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 27 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . ihvm1vxbno ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
cos5j1nh2x ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . ggw0zlizod ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean value1/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_pd353sj30r ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_a1y0oaqnrc ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_er4czmynw5 ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_pk24ovu2kv ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . fnjqtr2jeb ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. bsj2dvtovn ) ; ssSetPWork ( rts , ( void * * ) & rtDW . dslmfp2sgn ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
fnjqtr2jeb ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . bsj2dvtovn ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . dslmfp2sgn ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 28 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . adcm1emc4n ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
hw5bsvoycb ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . f5k3at4onu ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem1/Power (Positive-Sequence)/Sequence Analyzer1/Fourier_C/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_gt1yv20ls2 ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_acjwavlpwb ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_k0opnt4gpv ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_luydhi20rk ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . nhz0oe1kd1 ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. duewcj00jw ) ; ssSetPWork ( rts , ( void * * ) & rtDW . ig20cpfyqn ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
nhz0oe1kd1 ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . duewcj00jw ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . ig20cpfyqn ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 29 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; {
static struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , &
methods2 ) ; } { static struct _ssSFcnModelMethods3 methods3 ;
ssSetModelMethods3 ( rts , & methods3 ) ; } { static struct
_ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , & methods4 ) ; } {
static struct _ssStatesInfo2 statesInfo2 ; static ssPeriodicStatesInfo
periodicStatesInfo ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ; } { static struct
_ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts , 2 ) ;
ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static real_T
const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB . pjzrk5uavg ;
ssSetInputPortSignalPtrs ( rts , 0 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 0 , 1 ) ; ssSetInputPortWidth ( rts , 0
, 1 ) ; } { static real_T const * sfcnUPtrs [ 1 ] ; sfcnUPtrs [ 0 ] = & rtB .
gudywxfntc ; ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) &
sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetInputPortWidth ( rts , 1 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { _ssSetOutputPortNumDimensions ( rts
, 0 , 1 ) ; ssSetOutputPortWidth ( rts , 0 , 1 ) ; ssSetOutputPortSignal (
rts , 0 , ( ( real_T * ) & rtB . hz05ifo1vv ) ) ; } } ssSetModelName ( rts ,
"S-Function" ) ; ssSetPath ( rts ,
 "power_PVarray_grid_det/Subsystem2/Mean/Model/Discrete Variable Time Delay/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 4 ] ; ssSetSFcnParamsCount ( rts , 4 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_eznrwwwakz ) ; ssSetSFcnParam ( rts , 1
, ( mxArray * ) rtP . SFunction_P2_Size_mng4gf0rcy ) ; ssSetSFcnParam ( rts ,
2 , ( mxArray * ) rtP . SFunction_P3_Size_iiwgh5oham ) ; ssSetSFcnParam ( rts
, 3 , ( mxArray * ) rtP . SFunction_P4_Size_n2nlp4exzs ) ; } ssSetRWork ( rts
, ( real_T * ) & rtDW . l5uc40op4g ) ; ssSetIWork ( rts , ( int_T * ) & rtDW
. lkqkifrepl ) ; ssSetPWork ( rts , ( void * * ) & rtDW . hu1rwiabb4 ) ; {
static struct _ssDWorkRecord dWorkRecord [ 3 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 3 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 3 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW .
l5uc40op4g ) ; ssSetDWorkWidth ( rts , 1 , 1 ) ; ssSetDWorkDataType ( rts , 1
, SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 1 , 0 ) ; ssSetDWork ( rts ,
1 , & rtDW . lkqkifrepl ) ; ssSetDWorkWidth ( rts , 2 , 1 ) ;
ssSetDWorkDataType ( rts , 2 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
2 , 0 ) ; ssSetDWork ( rts , 2 , & rtDW . hu1rwiabb4 ) ; }
sfun_discreteVariableDelay ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0001 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 2 ; ssSetInputPortWidth
( rts , 0 , 1 ) ; ssSetInputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 0 , 0 ) ; ssSetInputPortFrameData ( rts ,
0 , 0 ) ; ssSetInputPortWidth ( rts , 1 , 1 ) ; ssSetInputPortDataType ( rts
, 1 , SS_DOUBLE ) ; ssSetInputPortComplexSignal ( rts , 1 , 0 ) ;
ssSetInputPortFrameData ( rts , 1 , 0 ) ; ssSetOutputPortWidth ( rts , 0 , 1
) ; ssSetOutputPortDataType ( rts , 0 , SS_DOUBLE ) ;
ssSetOutputPortComplexSignal ( rts , 0 , 0 ) ; ssSetOutputPortFrameData ( rts
, 0 , 0 ) ; ssSetNumIWork ( rts , 1 ) ; ssSetNumPWork ( rts , 1 ) ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 0 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; ssSetInputPortBufferDstPort (
rts , 1 , - 1 ) ; } } return rtS ; } const int_T gblParameterTuningTid = 3 ;
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID3 ( tid ) ; }

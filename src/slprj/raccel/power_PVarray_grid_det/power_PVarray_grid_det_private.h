#include "__cf_power_PVarray_grid_det.h"
#ifndef RTW_HEADER_power_PVarray_grid_det_private_h_
#define RTW_HEADER_power_PVarray_grid_det_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include <math.h>
#include <stdlib.h>
#include "power_PVarray_grid_det.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)   (((v1)==(v2))?((double)(v1)):  (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?   muDoubleScalarFloor((v) + 0.5) :   muDoubleScalarCeil((v) - 0.5) )
#endif
#ifndef CodeFormat
#define CodeFormat   S-Function
#else
#undef CodeFormat
#define CodeFormat   S-Function
#endif
#ifndef S_FUNCTION_NAME
#define S_FUNCTION_NAME   simulink_only_sfcn
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME   simulink_only_sfcn
#endif
#ifndef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL  2
#else
#undef S_FUNCTION_LEVEL
#define S_FUNCTION_LEVEL  2
#endif
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)        NULL
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif
#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES
#ifndef _RTW_COMMON_DEFINES_
#define _RTW_COMMON_DEFINES_
#endif
#endif
void BINARYSEARCH_real_T ( uint32_T * piLeft , uint32_T * piRght , real_T u ,
const real_T * pData , uint32_T iHi ) ; void LookUp_real_T_real_T ( real_T *
pY , const real_T * pYData , real_T u , const real_T * pUData , uint32_T iHi
) ; extern void sfun_discreteVariableDelay ( SimStruct * rts ) ; extern void
msv4qqksks ( real_T jy4wt3dure , creal_T d0h10zlbsz , creal_T ipzjw5ckui ,
creal_T hq5jj4xbl5 , jjshk3p1ma * localB , kobe4yiza3 * localDW , oua4sf5ojz
* localP ) ; extern void g23t01ww0z ( real_T izdu1xpwto , creal_T lrg5vxfs4m
, creal_T kzywk1rsbw , creal_T gctcncglev , im1xhgdako * localB , kdivvd1gc1
* localDW , c3xiexpag1 * localP ) ; extern void mh05nqty23 ( cyumnaubxc *
localB , hcrgr2vy5z * localP ) ; extern void fwds5waerq ( uint8_T fb1330tihh
, const real_T ly0kcs4v5u [ 2 ] , real_T lvdk4fnjiq , cyumnaubxc * localB ,
ckryo0pzru * localDW ) ; extern void elbt4vn0aq ( fmkd4jezwv * localB ,
mirwlvnwva * localP ) ; extern void klbd0xrbra ( uint8_T fdkph40hgz , const
real_T dhwo3sauj3 [ 2 ] , real_T evvebtru3e , fmkd4jezwv * localB ,
lbp5rxlyok * localDW ) ;
#if defined(MULTITASKING)
#error Model (power_PVarray_grid_det) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif

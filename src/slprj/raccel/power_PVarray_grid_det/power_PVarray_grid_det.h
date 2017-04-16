#include "__cf_power_PVarray_grid_det.h"
#ifndef RTW_HEADER_power_PVarray_grid_det_h_
#define RTW_HEADER_power_PVarray_grid_det_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef power_PVarray_grid_det_COMMON_INCLUDES_
#define power_PVarray_grid_det_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "power_PVarray_grid_det_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME power_PVarray_grid_det
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (230) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { creal_T bug11j5vri ; } jjshk3p1ma ; typedef struct { int8_T
p2zbab2zyq ; } kobe4yiza3 ; typedef struct { creal_T fr3ijlre3u ; }
im1xhgdako ; typedef struct { int8_T osvjim3e0u ; } kdivvd1gc1 ; typedef
struct { real_T eyzp44vp0r ; real_T ni0yn3ls4o ; } cyumnaubxc ; typedef
struct { int8_T ioz5px3kzt ; } ckryo0pzru ; typedef struct { real_T
oxbdpl4uxb ; real_T eigeh3vm4p ; } fmkd4jezwv ; typedef struct { int8_T
b30icczwdz ; } lbp5rxlyok ; typedef struct { real_T f3xnh04wjh [ 3 ] ; real_T
okqn5bgutk [ 3 ] ; real_T nkctcgpqso [ 3 ] ; real_T d24w5xgal0 [ 3 ] ; real_T
o1mde0n1yk [ 3 ] ; real_T pttvbb2pav [ 3 ] ; real_T he14cjinkd [ 3 ] ; real_T
hmjyxctvar [ 3 ] ; real_T hllfnshuyf [ 3 ] ; real_T b5wfzsal13 [ 3 ] ; real_T
m5n0tvijea [ 3 ] ; real_T apxmnwrgff [ 3 ] ; real_T c0xf4gasvx [ 3 ] ; real_T
okly2bzqby [ 3 ] ; real_T gjo03tzedv [ 3 ] ; real_T mj5uxto5hm [ 3 ] ; real_T
ccyyfrva3i ; real_T owrpd40r4f ; real_T hd010gossx ; real_T psylw5ftqo ;
real_T ncd5m41xqs ; real_T ie5urghlgt ; real_T jkyah5nk3q ; real_T pg1alta3lu
[ 42 ] ; real_T ay1bqtoa42 [ 20 ] ; real_T obrq44eota ; real_T ipwc4g5kbq ;
real_T ey2rizmais ; real_T m3yfzukqcw ; real_T aq0wk5w32c ; real_T hnzqj2225r
; real_T cv4udxzzhc ; real_T csmg24xt1h ; real_T l5ghcw4oar ; real_T
oi4fxfp2u0 ; real_T o1zxhzbujc ; real_T b22ymbd3mf ; real_T favzhhh3hu ;
real_T hwalic32e0 ; real_T eltfn04b2v ; real_T f5nmukgsc4 ; real_T b34qw0i1wv
; real_T mgvjcdjnon ; real_T j3a4ma3ewn ; real_T mof1poi4zr ; real_T
j0g2g0oaks ; real_T h1um2aqafa ; real_T ad3kqeqisd ; real_T mq3r0i5j44 ;
real_T ke3ol5ko23 ; real_T hd1nsijzpc ; real_T daq4mncg1i ; real_T e4ur0oizsv
; real_T kereqbn1t4 ; real_T jcl1buglq4 ; real_T d5y15rbkwz ; real_T
o5d0soeen3 ; real_T jr0qw103fz ; real_T iiklvtcoqq ; real_T e0saic3iqd ;
real_T ix54lu0252 ; real_T frbia4we4j [ 3 ] ; real_T owk5afwjt2 ; real_T
eknyv0afyk ; real_T oiecajgznh [ 4 ] ; real_T gfb5fstonv [ 4 ] ; real_T
imrfandgqo [ 4 ] ; real_T jz2jpueldv [ 12 ] ; real_T achbklegbl ; real_T
mv4y4lj3e3 [ 3 ] ; real_T brgco0dpcf [ 3 ] ; real_T ogvlsk02mg ; real_T
nzglgwuqma ; real_T e5zlxkpqts ; real_T gzrqmoukkq ; real_T gcfwkua3e1 ;
real_T e0g5n03rqo ; real_T cligl2qrn5 ; real_T djdxiwj2ib ; real_T i0kbmmrhrv
; real_T nbftkfipzp ; real_T kroikqwecg ; real_T a5q44iw4oh ; real_T
ibfymfexhi ; real_T lkufp4wpyq ; real_T ok1tffrvb3 [ 3 ] ; real_T kwtekdraxk
[ 2 ] ; real_T grnuxqrq3j [ 2 ] ; real_T fezqd2sumv [ 2 ] ; real_T bwti5wt3ya
[ 2 ] ; real_T p51nrhewkg [ 2 ] ; real_T obitw0v3yj ; real_T e3tt25qjpe ;
real_T fdz0zczjpe ; real_T bvgai4gz1t ; real_T agnrdamyfj ; real_T lru24ttam4
; real_T kvmhczmkfy ; real_T dhcpdth2nf ; real_T kchwhkgx0y ; real_T
g0imozkyls [ 3 ] ; real_T k5lqperbwq ; real_T e3pw2tx0gc ; real_T donxx0azrh
[ 3 ] ; real_T kjorerjuot ; real_T iyyam0ynm2 ; real_T difkr25iin ; real_T
dy1my21n3p ; real_T kxilaoyxe4 ; real_T dfnqmp3zop ; real_T pve14kcnew ;
real_T iaqaqqt1jc ; real_T kbzrui1hxe ; real_T lxvfcojox3 ; real_T dd0kvpdeik
; real_T edvtkbxssc ; real_T ci4i34cvpj ; real_T izfqole4m5 ; real_T
eznbr5gxnf ; real_T hjshci25up ; real_T ft4dza43vu ; real_T o2uxxe2t45 ;
real_T gilgttova2 ; real_T boavmh4ejw ; real_T nzyqolvt1e ; real_T f2y4jldafv
; real_T glnliw2gbu ; real_T jzl25y2kq5 ; real_T dqmyx5uih2 ; real_T
hez2f5zeuo ; real_T b0y5txfras ; real_T e1ss3jmyjc ; real_T errpq1sl3d ;
real_T aytj15pdge ; real_T hkupangjj2 ; real_T hahpxwmtiw ; real_T kinr121xse
; real_T ghajl1bsbr ; real_T drfqwkasyq ; real_T og54jqpe51 ; real_T
a2dep1ma5q ; real_T b4cw0lelim ; real_T h4xirodnve ; real_T n44elz5k5z ;
real_T m2m5qdd1is ; real_T oihdqvbn2c ; real_T eyumafsgjn ; real_T beuw5i1psd
; real_T dts2mafck0 ; real_T ma5v5wrx2r ; real_T bnu0g1s1dq ; real_T
ozyjvhhlpt ; real_T epesxiuqru ; real_T bx34ezdhdc ; real_T pb25q3i5y0 ;
real_T n5anonvc5c ; real_T n00vcniaoj ; real_T e0245b3vbs ; real_T kbmxjxx40u
; real_T aefoovdb2f ; real_T ihvm1vxbno ; real_T cos5j1nh2x ; real_T
ggw0zlizod ; real_T bjbycn0jg3 ; real_T bfc0ew4l5x ; real_T adcm1emc4n ;
real_T hw5bsvoycb ; real_T f5k3at4onu ; real_T lnvtu0nq30 ; real_T h52y1dzqu1
; real_T lctnqgrkcy ; real_T pjzrk5uavg ; real_T gudywxfntc ; real_T
hz05ifo1vv ; real_T kc5hguu52m ; real_T aykkzxyrll [ 3 ] ; real_T lupahu4br1
[ 3 ] ; real_T ekctuybauk [ 3 ] ; real_T kxvjrbtlec [ 3 ] ; real_T orhpipghdi
[ 3 ] ; real_T fdp5wsxjlw [ 3 ] ; real_T efq03tkmq4 [ 3 ] ; real_T ajmuihbldm
[ 3 ] ; real_T oxh5wmulq0 ; real_T mal1o3rrov [ 3 ] ; real_T ipvjqdjexb ;
real_T at1rfpdjxp ; real_T iv1hfkdvbe [ 2 ] ; real_T oelqevpbry ; real_T
kglrgtgbsp ; real_T njxdhkx2nn ; real_T kqdvcno01e ; real_T bcbiecm4zm ;
real_T k351ndf2p2 ; real_T ohqb1f0agt ; real_T frpkkw3tvy ; real_T hbphtpnzzj
; uint8_T bwnjdjpcaw ; uint8_T oiidjdpb5o ; uint8_T e5omhkiopk ; uint8_T
f5wahbcw2x ; uint8_T ixdwjlg2uu ; uint8_T hezxa2a4ub ; uint8_T ldbz23n5ir ;
uint8_T ahtdmndqnx ; boolean_T ly0wt10wsm ; boolean_T jdg1nddwa0 ; boolean_T
n10p5f0juc ; fmkd4jezwv ox1z1gld2w ; cyumnaubxc lbykfmi30w ; fmkd4jezwv
m1irskyirr ; cyumnaubxc ochgqd2u0r ; fmkd4jezwv dzyhdh21lm ; cyumnaubxc
jgqfnbi2jt ; fmkd4jezwv klbd0xrbram ; cyumnaubxc fwds5waerqt ; im1xhgdako
ojknbv4is1 ; jjshk3p1ma n45kzzuand ; jjshk3p1ma dn2wcdma5d ; im1xhgdako
g23t01ww0z0 ; jjshk3p1ma gfc0o4gmcx ; jjshk3p1ma msv4qqksksf ; } B ; typedef
struct { real_T h2vwpcchd5 ; real_T ghzfhogk1s [ 36 ] ; real_T dnxojqrf4h ;
real_T ib1uxvkmwq ; real_T a25qmsclry ; real_T pmeo1rt34b ; real_T mjz4t5iaxe
; real_T ixquqw2qy3 ; real_T lifc0322ne ; real_T harwcohew2 ; real_T
fnwihpmay0 ; real_T baf0vsen1a ; real_T imwn1dqw3v ; real_T ckilcxfkro ;
real_T cynitekjpd ; real_T mrkhrhxnww ; real_T ktxgj0tsjf ; real_T mi5wu1glsv
; real_T c4335nifsx ; real_T ptjo3yucdh ; real_T mrw2lvxadr ; real_T
oqc2oijx4n [ 3 ] ; real_T cjwxpfyi0s ; real_T dhjfalcx4a ; real_T o15yghmujb
[ 2 ] ; real_T ab2iqeii2p ; real_T ihnppyndqr ; real_T klrwiho1ye ; real_T
a2f2juw01k ; real_T o0zn0bw5fs ; real_T afxwty24tb ; real_T ilas2cvqvf ;
real_T atky2tlkix ; real_T aq42zioen3 ; real_T n4rcukwcge ; real_T mynehged5v
; real_T cdvd2sss4w ; real_T dhbrbfsgve ; real_T erpra20zur ; real_T
fz2io1e43r ; real_T b3skrgh41w ; real_T nlavo4st2f ; real_T b1pxac2euv ;
real_T ivxtrpjaaz ; real_T hkgssuwq1m ; real_T hanrdqnaqb ; real_T pmotaxwkhx
; real_T mybd2g2ug4 ; real_T echh34xzp1 ; real_T jlgyu44vvh ; real_T
ooqkjuryor ; real_T muylcyn1jj ; real_T ljsg2sadfb ; real_T liggmwwqdw ;
real_T l1vptmfjzt ; real_T ghxx3onjqv ; real_T e5radjoywg ; real_T pvp424fepa
; real_T c32f1i3eco ; real_T efljn420bi ; real_T nbkoe5uf1p ; real_T
mutthcbksv ; real_T nkocdivqnb ; real_T mldhopdlpr ; real_T mmwyhcf00o ;
real_T adrzqo1xe3 ; real_T cscb0srydh ; real_T jqlkum55me ; real_T ensydwnmvi
; real_T ihdw3zr5an ; real_T eacppom1uy ; real_T e5dcrnrcoh ; real_T
hijxp3gq4o ; real_T lcfqi5wiqw ; real_T pldh2wssv5 ; real_T golju3qw0i ;
real_T ate4w5xtkf ; real_T ixft3bo0dp ; real_T g1ps0mh4qh ; real_T hoosvni13i
; real_T jy4gbbna5m ; real_T dddoob1h3n ; real_T ccrvwkgeyc ; real_T
aehdlec5cy ; real_T j5c2uvj2oq ; real_T fg2d05ol4v ; real_T hulws5qzax ;
real_T nkyucij1yx ; real_T h5eluf4mhs ; real_T eylslb44al ; real_T ltflkvmtgt
; real_T go54o5xrzu ; real_T mduabwvxdw [ 3 ] ; real_T ka0lb4ead4 [ 3 ] ;
real_T lfe3bbafy3 ; real_T pbhkab23hm ; real_T ifniwtykup ; real_T oepb11b4s2
; real_T kdxy4zwivo ; real_T p2n12agdxx ; real_T hgonifzr0h ; real_T
mhz2zh32sr ; real_T gvfp0kopbi ; real_T drpqup31hq ; real_T fbnimcf5zs ;
real_T ddeer0wu2d ; real_T hrluunvnvz ; real_T fm2sl2lxgz ; real_T h5f4diwe0i
; real_T gzkywi4luv ; real_T k1ned5pogk ; real_T plgz2e0c3z ; real_T
mzvrmost0b ; real_T onyz5jcubj ; real_T ctyh01bulx ; real_T epbyahgnci ;
real_T f0f4dq1t4x ; real_T cj44rcnno0 ; real_T o3r1h21bfi ; real_T g0pqsze5ut
; real_T dyvsgh5vzd ; real_T jccw5ulscb ; real_T o5ke412osf ; real_T
l3y4sgzlo2 ; real_T l1fyvyutj4 ; real_T lyuonz2lct ; real_T mx42r0xxfc ;
real_T kyioo4dt1t ; real_T jvbhrxnbdo ; real_T foqpbaavj2 ; real_T eigxuivmjh
; real_T heuggrbmd5 ; real_T kagdozuldk ; real_T ajkkbr4qyh ; real_T
kw2fecfmnk ; real_T mw0010yxeb ; real_T g1zakttyh3 ; real_T eq0hrq5weq ;
real_T ltlee4nvj5 ; real_T degadiwukr ; real_T fiz31ckkc5 ; real_T hmopavfndx
; real_T hxnfzwwv2d ; real_T ec5l2wgozd ; real_T jv0kr4jarc ; real_T
fnjqtr2jeb ; real_T nhz0oe1kd1 ; real_T l5uc40op4g ; real_T fck5m0uiyz ;
real_T ooebeu311i ; void * b1bk4wr52e [ 3 ] ; void * j30hquqewe [ 3 ] ; void
* kqujynw0xe [ 3 ] ; void * ev1p3jq1oa [ 3 ] ; void * opaamwqgrd [ 3 ] ; void
* dbsrbugt2q [ 3 ] ; void * fhnmddjqgx [ 3 ] ; void * aafkt2vokc [ 3 ] ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } lfo1uw1b0p
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
l3d41fro2o ; struct { void * AS ; void * BS ; void * CS ; void * DS ; void *
DX_COL ; void * BD_COL ; void * TMP1 ; void * TMP2 ; void * XTMP ; void *
SWITCH_STATUS ; void * SWITCH_STATUS_INIT ; void * SW_CHG ; void * G_STATE ;
void * USWLAST ; void * XKM12 ; void * XKP12 ; void * XLAST ; void * ULAST ;
void * IDX_SW_CHG ; void * Y_SWITCH ; void * SWITCH_TYPES ; void * IDX_OUT_SW
; void * SWITCH_TOPO_SAVED_IDX ; void * SWITCH_MAP ; } gyy03l5gua ; void *
aidy5un313 ; void * gz4i5fn4xr ; void * eeyp5miaem ; void * p0a4vnsgq0 ; void
* a5trsryrnv ; void * e5bjbu44ju ; struct { void * LoggedData ; } ffar0wdka0
; void * ird0hxkflz ; struct { void * LoggedData ; } mc5o4audhr ; struct {
void * LoggedData [ 2 ] ; } i1r1saqow3 ; void * lztapq0cux ; void *
cdoqg5t13n ; void * fnu3dqnga5 ; void * bgqpsz3lfl ; void * jkxsu4uagp ; void
* clw0qdlp1k ; void * jd5t2m1djs ; void * hpgod412uc ; void * lhx3ty435v ;
void * o4trfw022a ; void * dslmfp2sgn ; void * ig20cpfyqn ; struct { void *
LoggedData ; } okafag5rbe ; struct { void * LoggedData ; } bdbgvmjymm ;
struct { void * LoggedData [ 5 ] ; } nncqdvi2n4 ; void * hu1rwiabb4 ; struct
{ void * LoggedData [ 2 ] ; } ml0mrucfmc ; struct { void * LoggedData [ 3 ] ;
} b5reaz3yxn ; struct { void * LoggedData [ 2 ] ; } oam43dvb3g ; struct {
void * LoggedData ; } c5f2o4lrjk ; void * ipxvdl54a3 ; void * o4alvg3b0t ;
int32_T m1skjwniqk ; int32_T hyyms1dnyh ; int32_T ollwobuil1 ; int32_T
gknbnf4qjh ; int32_T l13rycub2z ; int32_T cpzm1pmpde ; int32_T coxroxkeps ;
int32_T jpogq0qh5i ; int32_T cmppqlszma ; int32_T emqtpaqsyx ; int32_T
astd22hv22 ; int32_T o2bedrw3qj ; int32_T ctvv1mfvu3 ; int32_T nyffl0g5oa ;
int32_T lh2fnsyrng ; int32_T avzvl0d5ni ; int32_T oiwxefn4uv ; int32_T
f3xukdg4ir ; int32_T iemuxuhgxj ; int32_T lrk1dig0no ; int_T l4vvlhftva [ 3 ]
; int_T bnqxpqqocc [ 3 ] ; int_T lecvnywo4k [ 3 ] ; int_T e2qhy2vquq [ 3 ] ;
int_T ptwjzjv2ft [ 3 ] ; int_T eijbxglnje [ 3 ] ; int_T chp4om3pcs [ 3 ] ;
int_T julwkqpaqt [ 3 ] ; struct { int_T PrevIndex ; } p2fhxn0bci ; struct {
int_T PrevIndex ; } fjcqncbtpa ; int_T ey2kugr0vw [ 11 ] ; int_T hb2ckldpqz ;
int_T ldgtoitv1o ; int_T o4ur1imqbj ; int_T gahe4pij11 ; int_T da3z0dz4kh ;
int_T hgccxahfyf ; int_T fezpkpghtx ; int_T ilbibnpgf5 ; int_T b3xfy5lnts ;
int_T pbljwnxani ; int_T hrqivllh0v ; int_T nkbwzlwzih ; int_T nuwli2tn2j ;
int_T k0ezy54wt3 ; int_T jzqbqm5jn4 ; int_T k52cnsnlfs ; int_T ahfv5tgaf1 ;
int_T bsj2dvtovn ; int_T duewcj00jw ; int_T lkqkifrepl ; int_T ismn0fa03d ;
int_T mkz0ezztxm ; int8_T kfq2syo2or ; int8_T moo2ct0pfe ; int8_T fiemep045g
; int8_T bibamec5kg ; uint8_T ccq3a0hvvz ; uint8_T i4vvodokqr ; uint8_T
ac2dk1rt3k ; uint8_T fkhoj2jgmi ; uint8_T i51ueaix42 ; uint8_T aqkqgpm4gc ;
uint8_T gh4ntcxpmy ; uint8_T njaezbobrh ; uint8_T gqe40uruvc ; uint8_T
gzyeeyibia ; uint8_T lkucpq1uah ; uint8_T jjgj3xap4d ; uint8_T jwgnwdiuim ;
uint8_T fvyxp4evkh ; uint8_T f2wyufteoz ; uint8_T lcc4thgbvm ; uint8_T
n2aitbecpw ; uint8_T jjuul3sb0d ; uint8_T a5ot3orarr ; uint8_T b4vqgmg5hq ;
uint8_T nihykliv33 ; uint8_T h0pos1xozd ; boolean_T dzjozoogns ; boolean_T
mzm5o4mdzr ; lbp5rxlyok ox1z1gld2w ; ckryo0pzru lbykfmi30w ; lbp5rxlyok
m1irskyirr ; ckryo0pzru ochgqd2u0r ; lbp5rxlyok dzyhdh21lm ; ckryo0pzru
jgqfnbi2jt ; lbp5rxlyok klbd0xrbram ; ckryo0pzru fwds5waerqt ; kdivvd1gc1
ojknbv4is1 ; kobe4yiza3 n45kzzuand ; kobe4yiza3 dn2wcdma5d ; kdivvd1gc1
g23t01ww0z0 ; kobe4yiza3 gfc0o4gmcx ; kobe4yiza3 msv4qqksksf ; } DW ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct oua4sf5ojz_ {
real_T Gain3_Gain ; creal_T Gain1_Gain [ 3 ] ; } ; struct c3xiexpag1_ {
real_T Gain3_Gain ; } ; struct hcrgr2vy5z_ { real_T dq_Y0 [ 2 ] ; } ; struct
mirwlvnwva_ { real_T dq_Y0 [ 2 ] ; } ; struct P_ { real_T Ts_Control ; real_T
AlphaBetaZerotodq0_Alignment ; real_T AlphaBetaZerotodq0_Alignment_otrg0yyt1a
; real_T AlphaBetaZerotodq0_Alignment_awofvyee55 ; real_T
AlphaBetaZerotodq0_Alignment_mnakfv4gd4 ; real_T
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_Dinit ;
real_T Fourier_A_Freq ; real_T Fourier_B_Freq ; real_T Fourier_C_Freq ;
real_T Fourier_A_Freq_dulhm5uet1 ; real_T Fourier_B_Freq_c5qlafj1dc ; real_T
Fourier_C_Freq_cenpjtva3o ; real_T u20kV2500MVA_Frequency ; real_T PI_I ;
real_T PI_I_njl0p4juwl ; real_T Discrete_Init ; real_T Discrete_Kd ; real_T
Discrete_Kp ; real_T PI_LowerSaturationLimit ; real_T
PI_LowerSaturationLimit_czu3kr5icc ; real_T PVArray_Npar ; real_T
PVArray_Nser ; real_T PI_P ; real_T PI_P_g4lt0nquhm ; real_T
MPPTControllerusingIncrementalConductanceIntegralRegulatortechnique_T_MPPT ;
real_T PI_UpperSaturationLimit ; real_T PI_UpperSaturationLimit_mht110pv0e ;
real_T VSCControl_Vnom_dc ; real_T CompareToConstant_const ; real_T
CompareToConstant1_const ; real_T CompareToConstant_const_f3j21z25kv ; real_T
CompareToConstant1_const_m1hj2kgrib ; real_T
CompareToConstant_const_ork22hwfpx ; real_T
CompareToConstant1_const_mofh5awlq5 ; real_T
CompareToConstant_const_mjeo4kqpve ; real_T
CompareToConstant1_const_lkgpibc3kf ; real_T Gain_Gain ; real_T Gain1_Gain ;
real_T Gain_Gain_ajetlnuowr ; real_T Gain1_Gain_mdjweksv13 ; real_T
Gain_Gain_a3r3vvwy20 ; real_T Gain1_Gain_d2sqh2usk4 ; real_T
Gain_Gain_nmn5fkaqoa ; real_T Gain1_Gain_bx11igke5q ; real_T
Gain_Gain_p2kjinmjnk ; real_T Gain1_Gain_atilud13g1 ; real_T
Gain_Gain_cjgtjecd4l ; real_T Gain1_Gain_gq01hxeffi ; real_T
Gain_Gain_er1jzlt204 ; real_T Gain1_Gain_cvnj41z3u1 ; real_T
Gain_Gain_d5ujhlzr3p ; real_T Gain1_Gain_gau2kona2s ; real_T
Gain_Gain_l1yybb0ozh ; real_T Gain1_Gain_jawtsd2iys ; real_T
Gain_Gain_jq3um4cz4j ; real_T Gain1_Gain_bsbbtjbk4d ; real_T
Gain_Gain_fc1p3rfcsm ; real_T Gain1_Gain_kl3n41qkg4 ; real_T
Gain_Gain_o1r20n5vmz ; real_T Gain1_Gain_lly5kv4kuf ; real_T
Gain_Gain_pvpuvbbodz ; real_T Gain1_Gain_h0j53ikn03 ; real_T
Gain_Gain_htrn2od5eo ; real_T Gain1_Gain_k45yw5u1ri ; real_T
Gain_Gain_nxlojnsi3h ; real_T Gain1_Gain_ck1bqs4xph ; real_T
Gain_Gain_c51ds1jfln ; real_T Gain1_Gain_aqpmhpqydp ; real_T
Gain_Gain_afzupnanth ; real_T Gain1_Gain_f5mqebcvsk ; real_T
Gain_Gain_a2j2ruaijq ; real_T Gain1_Gain_phi4msvodo ; real_T
Gain_Gain_mubbovzl2s ; real_T Gain1_Gain_hpgc0ezdfe ; real_T
Gain1_Gain_cmdba5bv2h ; real_T Gain1_Gain_hetxdadbk5 ; real_T Gain_Y0 ;
real_T Gain3_Gain [ 9 ] ; real_T Gain1_Gain_mv4azmob4e ; real_T
Integ4_gainval ; real_T Integ4_IC ; real_T Toavoiddivisionbyzero_UpperSat ;
real_T Toavoiddivisionbyzero_LowerSat ; real_T SFunction_P1_Size [ 2 ] ;
real_T SFunction_P1 ; real_T SFunction_P2_Size [ 2 ] ; real_T SFunction_P2 ;
real_T SFunction_P3_Size [ 2 ] ; real_T SFunction_P3 ; real_T
SFunction_P4_Size [ 2 ] ; real_T SFunction_P4 ; real_T
UnitDelay_InitialCondition ; real_T Constant_Value ; real_T
UnitDelay1_InitialCondition ; real_T Integ4_gainval_fz2uqdiylj ; real_T
Integ4_IC_bmrwd2awok ; real_T Toavoiddivisionbyzero_UpperSat_cysl1cmul3 ;
real_T Toavoiddivisionbyzero_LowerSat_k1vxw44tbr ; real_T
SFunction_P1_Size_gcwln5h2fy [ 2 ] ; real_T SFunction_P1_bvoxvxdyd0 ; real_T
SFunction_P2_Size_cja0aqxvcz [ 2 ] ; real_T SFunction_P2_e4zetzg3tb ; real_T
SFunction_P3_Size_av3rmjmb5f [ 2 ] ; real_T SFunction_P3_dzoprv4wqa ; real_T
SFunction_P4_Size_hngc2st1ax [ 2 ] ; real_T SFunction_P4_en5y5az0mt ; real_T
UnitDelay_InitialCondition_jycnfiyaap ; real_T Constant_Value_jccahizvsu ;
real_T UnitDelay1_InitialCondition_eoex0bhdpa ; real_T Saturation_UpperSat ;
real_T Saturation_LowerSat ; real_T Gain1_Gain_afd104gjl4 ; real_T uib1_Gain
; real_T LookupTable_XData [ 3 ] ; real_T LookupTable_YData [ 3 ] ; real_T
S_Y0 [ 2 ] ; real_T Gain_Gain_jbzlc2mjil ; real_T S_Y0_o3ff3poqj5 ; real_T
SwitchCurrents_Value ; real_T Constant_Value_as1yt3w1ta [ 3 ] ; real_T
SFunction_P1_Size_hyy1qnn33f [ 2 ] ; real_T SFunction_P1_c5ohdgusve ; real_T
SFunction_P2_Size_gxlcontqfu [ 2 ] ; real_T SFunction_P2_dfmouqd5bo ; real_T
SFunction_P3_Size_l2ibalkmhi [ 2 ] ; real_T SFunction_P3_jjuvho5tvk [ 174 ] ;
real_T SFunction_P4_Size_kk523flakb [ 2 ] ; real_T SFunction_P4_agnl2gc4be ;
real_T uhZ_Gain [ 3 ] ; real_T Constant1_Value [ 3 ] ; real_T
SFunction_P1_Size_etqx4raqzf [ 2 ] ; real_T SFunction_P1_exnlozrbc0 ; real_T
SFunction_P2_Size_enybtaa5s0 [ 2 ] ; real_T SFunction_P2_in5hmw40xq ; real_T
SFunction_P3_Size_binuljwssx [ 2 ] ; real_T SFunction_P3_nc0udh1wzs [ 174 ] ;
real_T SFunction_P4_Size_gthbeik2ef [ 2 ] ; real_T SFunction_P4_hdwxfp5ci4 ;
real_T Gain6_Gain [ 3 ] ; real_T SFunction_P1_Size_gfkgf1tc0j [ 2 ] ; real_T
SFunction_P1_cn35ri2xze ; real_T SFunction_P2_Size_j1gpzilyb4 [ 2 ] ; real_T
SFunction_P2_bqdvpluktw ; real_T SFunction_P3_Size_nhspi31nsm [ 2 ] ; real_T
SFunction_P3_n2npvx3z2y [ 174 ] ; real_T SFunction_P4_Size_kfsukvtv0x [ 2 ] ;
real_T SFunction_P4_nemm0y544y ; real_T SFunction_P1_Size_h5egaqo4ey [ 2 ] ;
real_T SFunction_P1_m2tp4a5pke ; real_T SFunction_P2_Size_bihovjmkz2 [ 2 ] ;
real_T SFunction_P2_oevff5cms5 ; real_T SFunction_P3_Size_jkbiskfpyc [ 2 ] ;
real_T SFunction_P3_hjecudvy4y [ 174 ] ; real_T SFunction_P4_Size_c2u3sues1r
[ 2 ] ; real_T SFunction_P4_ftwub4ivck ; real_T uhZ_Gain_m4hahhc3cz [ 3 ] ;
real_T Gain3_Gain_g2ksz1f12h [ 3 ] ; real_T mode2phaseS_Gain [ 9 ] ; real_T
Gain4_Gain [ 3 ] ; real_T Gain5_Gain [ 3 ] ; real_T mode2phaseR_Gain [ 9 ] ;
real_T Constant_Value_n13py1cn2l [ 3 ] ; real_T SFunction_P1_Size_au4imovtxx
[ 2 ] ; real_T SFunction_P1_ipkxvf4g1l ; real_T SFunction_P2_Size_p0ny44agjc
[ 2 ] ; real_T SFunction_P2_l0fffb0cfk ; real_T SFunction_P3_Size_pvrdwmytrj
[ 2 ] ; real_T SFunction_P3_p5xm1bnz1b [ 63 ] ; real_T
SFunction_P4_Size_aan0milyrl [ 2 ] ; real_T SFunction_P4_gljve05gks ; real_T
uhZ_Gain_ldavx1hyde [ 3 ] ; real_T Constant1_Value_bo4z2xsjra [ 3 ] ; real_T
SFunction_P1_Size_jw2g4bpaoz [ 2 ] ; real_T SFunction_P1_gj2py1ar54 ; real_T
SFunction_P2_Size_nohqjs2fbl [ 2 ] ; real_T SFunction_P2_euivz3g2fa ; real_T
SFunction_P3_Size_g45xvxqq15 [ 2 ] ; real_T SFunction_P3_dajwgfk0b0 [ 63 ] ;
real_T SFunction_P4_Size_lmbbgj5ilo [ 2 ] ; real_T SFunction_P4_bxnk5id0yx ;
real_T Gain6_Gain_cnwwm5jxfb [ 3 ] ; real_T SFunction_P1_Size_ncamyki5at [ 2
] ; real_T SFunction_P1_kel4oaqysa ; real_T SFunction_P2_Size_cqci3pfmgh [ 2
] ; real_T SFunction_P2_evwmqif1gu ; real_T SFunction_P3_Size_ilng0qdwau [ 2
] ; real_T SFunction_P3_oiaycysvyl [ 63 ] ; real_T
SFunction_P4_Size_onn4qciyxh [ 2 ] ; real_T SFunction_P4_jatz5vsnx4 ; real_T
SFunction_P1_Size_pprijeqgwv [ 2 ] ; real_T SFunction_P1_dfibsl0oic ; real_T
SFunction_P2_Size_pbqrvyvwsu [ 2 ] ; real_T SFunction_P2_a30je1lq13 ; real_T
SFunction_P3_Size_kxjcudznis [ 2 ] ; real_T SFunction_P3_oiidf0epvs [ 63 ] ;
real_T SFunction_P4_Size_fka1xmnywj [ 2 ] ; real_T SFunction_P4_pet1q2rvk3 ;
real_T uhZ_Gain_ea1warj2pf [ 3 ] ; real_T Gain3_Gain_iaw3umtbfx [ 3 ] ;
real_T mode2phaseS_Gain_ph1mfferiz [ 9 ] ; real_T Gain4_Gain_ijr4if2n4i [ 3 ]
; real_T Gain5_Gain_e5lkbi3hrq [ 3 ] ; real_T mode2phaseR_Gain_f10wmgb5wy [ 9
] ; real_T FromWorkspace1_Time0 [ 744 ] ; real_T FromWorkspace1_Data0 [ 744 ]
; real_T u_K_Value ; real_T Tref_K_Value ; real_T alpha_Isc_Gain ; real_T
IL_module_Value ; real_T FromWorkspace_Time0 [ 744 ] ; real_T
FromWorkspace_Data0 [ 744 ] ; real_T uSref_Gain ; real_T
UnitDelay_InitialCondition_oe4c3ahrqy ; real_T SineWaveA_Amp ; real_T
SineWaveA_Bias ; real_T SineWaveA_Hsin ; real_T SineWaveA_HCos ; real_T
SineWaveA_PSin ; real_T SineWaveA_PCos ; real_T SineWaveB_Amp ; real_T
SineWaveB_Bias ; real_T SineWaveB_Hsin ; real_T SineWaveB_HCos ; real_T
SineWaveB_PSin ; real_T SineWaveB_PCos ; real_T SineWaveC_Amp ; real_T
SineWaveC_Bias ; real_T SineWaveC_Hsin ; real_T SineWaveC_HCos ; real_T
SineWaveC_PSin ; real_T SineWaveC_PCos ; real_T StateSpace_AS_param [ 1296 ]
; real_T StateSpace_BS_param [ 1332 ] ; real_T StateSpace_CS_param [ 1512 ] ;
real_T StateSpace_DS_param [ 1554 ] ; real_T StateSpace_X0_param [ 36 ] ;
real_T zerotogeneratedummydiodegateanddelaysignals_Value ; real_T
DeblockConverters_Time ; real_T DeblockConverters_Y0 ; real_T
DeblockConverters_YFinal ; real_T DiscreteTimeIntegrator_gainval ; real_T
DiscreteTimeIntegrator_IC ; real_T DiscreteTimeIntegrator_UpperSat ; real_T
DiscreteTimeIntegrator_LowerSat ; real_T DeblockMPPT_Time ; real_T
DeblockMPPT_Y0 ; real_T DeblockMPPT_YFinal ; real_T
Constant1_Value_day5k2tdhw ; real_T Switch1_Threshold ; real_T
donotdeletethisgain_Gain ; real_T sinwt_Amp ; real_T sinwt_Bias ; real_T
sinwt_Hsin ; real_T sinwt_HCos ; real_T sinwt_PSin ; real_T sinwt_PCos ;
real_T Integ4_gainval_acyknktfit ; real_T Integ4_IC_aouvv15ahb ; real_T
K1_Value ; real_T SFunction_P1_Size_edekkxu4yh [ 2 ] ; real_T
SFunction_P1_ap3v0p2ujs ; real_T SFunction_P2_Size_nx30efk4ge [ 2 ] ; real_T
SFunction_P2_ckc0134djg ; real_T SFunction_P3_Size_kpuffejruv [ 2 ] ; real_T
SFunction_P3_c0hwq3kt3o ; real_T SFunction_P4_Size_p4zqu5x0fk [ 2 ] ; real_T
SFunction_P4_bew5bppn1v ; real_T K2_Value ; real_T
UnitDelay_InitialCondition_hi5myw2wbs ; real_T
UnitDelay1_InitialCondition_jystgemzdu ; real_T coswt_Amp ; real_T coswt_Bias
; real_T coswt_Hsin ; real_T coswt_HCos ; real_T coswt_PSin ; real_T
coswt_PCos ; real_T Integ4_gainval_m34pjkoi4m ; real_T Integ4_IC_in1hdrx4qr ;
real_T K1_Value_igupijfdda ; real_T SFunction_P1_Size_jtx2hil2z3 [ 2 ] ;
real_T SFunction_P1_c2lr44xedy ; real_T SFunction_P2_Size_c0k5gmdptk [ 2 ] ;
real_T SFunction_P2_inokeujqpe ; real_T SFunction_P3_Size_fdkng2owrn [ 2 ] ;
real_T SFunction_P3_mo5thkovr0 ; real_T SFunction_P4_Size_npeueslym3 [ 2 ] ;
real_T SFunction_P4_fiqmdku2ea ; real_T K2_Value_jprflebzbm ; real_T
UnitDelay_InitialCondition_hef0pkfrpk ; real_T
UnitDelay1_InitialCondition_c1zc5jxdmy ; real_T RadDeg_Gain ; real_T
donotdeletethisgain_Gain_mnpduykn4i ; real_T sinwt_Amp_lhpdgz1f4p ; real_T
sinwt_Bias_pmyiopzank ; real_T sinwt_Hsin_mak1cz2jtq ; real_T
sinwt_HCos_asiwiduiyg ; real_T sinwt_PSin_iuufprpx4d ; real_T
sinwt_PCos_ldbj3guoow ; real_T Integ4_gainval_dma1zsooi4 ; real_T
Integ4_IC_amcixfh02i ; real_T K1_Value_blbch5to5c ; real_T
SFunction_P1_Size_kbcpedyncd [ 2 ] ; real_T SFunction_P1_jhupwuoqu3 ; real_T
SFunction_P2_Size_chpqhdnlw4 [ 2 ] ; real_T SFunction_P2_pliykihbkp ; real_T
SFunction_P3_Size_hiywv3v22g [ 2 ] ; real_T SFunction_P3_g2ylyvchbc ; real_T
SFunction_P4_Size_evcdk004im [ 2 ] ; real_T SFunction_P4_fvyak33v20 ; real_T
K2_Value_gqo2xfiqqa ; real_T UnitDelay_InitialCondition_gsydl4aczd ; real_T
UnitDelay1_InitialCondition_hlntujamzv ; real_T coswt_Amp_capd15k4h1 ; real_T
coswt_Bias_nfvvmsxu32 ; real_T coswt_Hsin_d2vrt0arhq ; real_T
coswt_HCos_n5n2bmm3oz ; real_T coswt_PSin_ip1flhvgpu ; real_T
coswt_PCos_cefmdsof5s ; real_T Integ4_gainval_hfda0chi2s ; real_T
Integ4_IC_buerkwsqzk ; real_T K1_Value_nn55xdcyte ; real_T
SFunction_P1_Size_fv0ovj4mok [ 2 ] ; real_T SFunction_P1_lozcbion4g ; real_T
SFunction_P2_Size_b0xbpne10w [ 2 ] ; real_T SFunction_P2_gwt1thx25u ; real_T
SFunction_P3_Size_kg3uwt024h [ 2 ] ; real_T SFunction_P3_kudczj5qz4 ; real_T
SFunction_P4_Size_i5j0wxj4uo [ 2 ] ; real_T SFunction_P4_hdub55ytoi ; real_T
K2_Value_mp20ez40ia ; real_T UnitDelay_InitialCondition_dd0zzmyaxa ; real_T
UnitDelay1_InitialCondition_ivg1jwgjgf ; real_T RadDeg_Gain_mxg2y3inss ;
real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T
deg2rad_Gain ; real_T Integ4_gainval_h3dnhx20ls ; real_T Integ4_IC_gjud0ypzut
; real_T K1_Value_apbsevdf4n ; real_T SFunction_P1_Size_eyhfaekx5p [ 2 ] ;
real_T SFunction_P1_lqmwfpx0vq ; real_T SFunction_P2_Size_hj41qqyuxq [ 2 ] ;
real_T SFunction_P2_ag0l4txku4 ; real_T SFunction_P3_Size_bsbcvbclne [ 2 ] ;
real_T SFunction_P3_odml4yuzte ; real_T SFunction_P4_Size_mmm0bn2303 [ 2 ] ;
real_T SFunction_P4_ikaqfq0csk ; real_T K2_Value_pvhiloavll ; real_T
UnitDelay_InitialCondition_j5vrlvgdfu ; real_T
UnitDelay1_InitialCondition_aqxfegphwq ; real_T Integ4_gainval_l5q1etraeb ;
real_T Integ4_IC_hghymu5o2d ; real_T K1_Value_gfk0vyatcd ; real_T
SFunction_P1_Size_mvpl3piin0 [ 2 ] ; real_T SFunction_P1_jc42c4bhge ; real_T
SFunction_P2_Size_mfqyqcbplz [ 2 ] ; real_T SFunction_P2_itooqo0gea ; real_T
SFunction_P3_Size_jeeot0bbg0 [ 2 ] ; real_T SFunction_P3_k1pxw4ly2h ; real_T
SFunction_P4_Size_jv4cqxrqm0 [ 2 ] ; real_T SFunction_P4_jbxyzxqgn3 ; real_T
K2_Value_gpemnsgryf ; real_T UnitDelay_InitialCondition_m1atbbxmdl ; real_T
UnitDelay1_InitialCondition_bvhpvt24hu ; real_T
Saturation_UpperSat_efuiqyy5v2 ; real_T Saturation_LowerSat_fm5f0kduq1 ;
real_T Constant_Value_n5vm51nwbz ; real_T Switch_Threshold ; real_T
DeadZone_Start ; real_T DeadZone_End ; real_T MPPTGain_Gain ; real_T
Saturation_UpperSat_laeib1jq35 ; real_T Saturation_LowerSat_g4eivppwfy ;
real_T Constant_Value_kuetp02hmz ; real_T Constant3_Value ; real_T
Constant2_Value ; real_T uib1_Gain_do31t30z52 ; real_T
Constant2_Value_iqex2uo240 ; real_T Constant6_Value ; real_T Constant5_Value
; real_T UnitDelay_InitialCondition_mgudbpcgtt ; real_T SineWave_Amp ; real_T
SineWave_Bias ; real_T SineWave_Freq ; real_T SineWave_Hsin [ 3 ] ; real_T
SineWave_HCos [ 3 ] ; real_T SineWave_PSin [ 3 ] ; real_T SineWave_PCos [ 3 ]
; real_T Constant4_Value ; real_T Gain1_Gain_iza01f01um ; real_T Gain2_Gain ;
real_T Constant1_Value_a4nlxyznsj ; real_T Constant3_Value_ed35vdft5z ;
real_T Constant1_Value_kqscwqq4vj ; real_T Constant2_Value_i0dlxfmxog ;
real_T Constant2_Value_id2ug4wnj0 ; real_T Constant12_Value [ 4 ] ; real_T
Constant13_Value [ 4 ] ; real_T Constant11_Value [ 4 ] ; real_T
donotdeletethisgain_Gain_kb2zb2sa4y ; real_T
donotdeletethisgain_Gain_kt5arp05v1 ; real_T
donotdeletethisgain_Gain_bukv5qr0ht ; real_T Kv1_Gain ; real_T Vpu_Gain ;
real_T Gain3_Gain_p1jkth5m13 [ 9 ] ; real_T Gain1_Gain_ozhyrxfmnh ; real_T
Constant4_Value_cdziwzfobx ; real_T Initial_Value ; real_T
DiscreteTimeIntegrator_gainval_brcl5xxl2q ; real_T
donotdeletethisgain_Gain_m3rdldqf5v ; real_T Vdc_ref1_Value ; real_T
Integrator_gainval ; real_T Integrator_IC ; real_T Rtot_pu1_Gain ; real_T
Iq_ref_Value ; real_T Ltot_pu1_Gain ; real_T Rtot_pu5_Gain ; real_T
Ltot_pu2_Gain ; real_T donotdeletethisgain_Gain_hd2lurzjs1 ; real_T
donotdeletethisgain_Gain_g0aitc3jds ; real_T
donotdeletethisgain_Gain_j0j522ufey ; real_T Kv_Gain ; real_T Vpu1_Gain ;
real_T Gain3_Gain_dyow2vdij1 [ 9 ] ; real_T Gain1_Gain_pnfzbhegxe ; real_T
Integrator_gainval_ozsadpowpb ; real_T Integrator_IC_kg0exmdii0 ; real_T
Saturation_UpperSat_dkga0zi5hq ; real_T Saturation_LowerSat_j5weoiqwmv ;
real_T UnitDelay_InitialCondition_hvmmrz5whh ; real_T
Constant1_Value_finlsj5cwk ; real_T Gain3_Gain_nwldjxxvlq [ 9 ] ; real_T
Gain1_Gain_op30pyxpek ; real_T Integ4_gainval_lotsoek0sk ; real_T
Integ4_IC_f03w4yglrt ; real_T Toavoiddivisionbyzero_UpperSat_fngqu4twkq ;
real_T Toavoiddivisionbyzero_LowerSat_nspiile1b5 ; real_T
SFunction_P1_Size_azl4fmid3u [ 2 ] ; real_T SFunction_P1_krpmwxbekp ; real_T
SFunction_P2_Size_dvmzlzudlq [ 2 ] ; real_T SFunction_P2_lji01cpuhb ; real_T
SFunction_P3_Size_fgok1k5lwp [ 2 ] ; real_T SFunction_P3_o5gzkun05y ; real_T
SFunction_P4_Size_nocru43ywt [ 2 ] ; real_T SFunction_P4_al55firpgj ; real_T
UnitDelay_InitialCondition_hw44anb1qk ; real_T Constant_Value_kkuzztqyci ;
real_T UnitDelay1_InitialCondition_dbtlgsoueo ; real_T
DiscreteDerivative_DenCoef [ 2 ] ; real_T DiscreteDerivative_InitialStates ;
real_T DiscreteTimeIntegrator_gainval_do3kgazujd ; real_T
DiscreteTimeIntegrator_UpperSat_fcaa0odsep ; real_T
DiscreteTimeIntegrator_LowerSat_gdzmh1fqac ; real_T
Saturation1_UpperSat_gtqpw40kq5 ; real_T Saturation1_LowerSat_k5nt0tnm2o ;
real_T Gain10_Gain ; real_T RateLimiter_RisingLim ; real_T
RateLimiter_FallingLim ; real_T RateLimiter_IC ; real_T
Delay_x1_InitialCondition ; real_T A11_Gain ; real_T
Delay_x2_InitialCondition ; real_T A12_Gain ; real_T A21_Gain ; real_T
A22_Gain ; real_T B11_Gain ; real_T B21_Gain ; real_T Duk_Gain ; real_T
C11_Gain ; real_T C12_Gain ; real_T Constant2_Value_lyii0iggwc [ 3 ] ; real_T
Constant_Value_prlpwr0gxs ; real_T Gain1_Gain_bfibyfcm43 ; real_T
Constant3_Value_o4ynzitq1a ; real_T Saturation_UpperSat_h1k5eb5g1b ; real_T
Saturation_LowerSat_h23x3ylqj0 ; real_T Tref_K2_Value ; real_T one_Value ;
real_T EgRef_Value ; real_T one1_Value ; real_T Tref_K1_Value ; real_T
dEgdT_Gain ; real_T EgRef_Gain ; real_T k1_Gain ; real_T
Rsh_array_5Sref_Value ; real_T donotdeletethisgain_Gain_fzvartv1ey ; real_T
sinwt_Amp_eyfyeyhg1z ; real_T sinwt_Bias_b1pimrbdub ; real_T
sinwt_Hsin_oqj105hayu ; real_T sinwt_HCos_heu1kx4sdg ; real_T
sinwt_PSin_ijekhyu50w ; real_T sinwt_PCos_ljjr3tckny ; real_T
Integ4_gainval_i0v3kwd3pb ; real_T Integ4_IC_pitekfoys0 ; real_T
K1_Value_mnxxbxkzc3 ; real_T SFunction_P1_Size_ibhpobj5mh [ 2 ] ; real_T
SFunction_P1_lg5pzzsa2d ; real_T SFunction_P2_Size_hndwfqeer1 [ 2 ] ; real_T
SFunction_P2_phvqmqyobr ; real_T SFunction_P3_Size_kqonwcz2dd [ 2 ] ; real_T
SFunction_P3_h2vg5ev1xh ; real_T SFunction_P4_Size_gljhqdhvcw [ 2 ] ; real_T
SFunction_P4_olzkwupxvh ; real_T K2_Value_ivipcgq0za ; real_T
UnitDelay_InitialCondition_du0hifmua4 ; real_T
UnitDelay1_InitialCondition_bxzmk5e5pe ; real_T coswt_Amp_anf4q5oxxa ; real_T
coswt_Bias_eb21lgn3q5 ; real_T coswt_Hsin_ebehquqc0i ; real_T
coswt_HCos_he1vypz4le ; real_T coswt_PSin_bf4ykyadoy ; real_T
coswt_PCos_imx1lvfr4u ; real_T Integ4_gainval_msuhv1zzxl ; real_T
Integ4_IC_p5hl13nikg ; real_T K1_Value_mgtlppjp42 ; real_T
SFunction_P1_Size_pfhrkjciej [ 2 ] ; real_T SFunction_P1_p5oafid3lr ; real_T
SFunction_P2_Size_mhope5jeqx [ 2 ] ; real_T SFunction_P2_g3zfut0ttz ; real_T
SFunction_P3_Size_ky0vccwnr2 [ 2 ] ; real_T SFunction_P3_ailj2rjtnm ; real_T
SFunction_P4_Size_di5ycaxh3v [ 2 ] ; real_T SFunction_P4_pgdix2di41 ; real_T
K2_Value_af05yiua5o ; real_T UnitDelay_InitialCondition_fluz1hs4rw ; real_T
UnitDelay1_InitialCondition_oxna4lbe4y ; real_T RadDeg_Gain_ggqrcue4an ;
real_T degrad_Gain ; real_T sinwt_Amp_kei0q2kps2 ; real_T
sinwt_Bias_d20x1us1zk ; real_T sinwt_Hsin_e0rgtjbjpx ; real_T
sinwt_HCos_cafhkcfovv ; real_T sinwt_PSin_modl3cgbwm ; real_T
sinwt_PCos_cyveu5wuih ; real_T Integ4_gainval_gtzjg23pll ; real_T
Integ4_IC_ln1mjxwhre ; real_T K1_Value_exdwlktlap ; real_T
SFunction_P1_Size_ptq3yp4fjx [ 2 ] ; real_T SFunction_P1_evblyies3u ; real_T
SFunction_P2_Size_ke5xzzx4kh [ 2 ] ; real_T SFunction_P2_gfwehstk0m ; real_T
SFunction_P3_Size_gp3iwgfnzr [ 2 ] ; real_T SFunction_P3_hc0kiipdev ; real_T
SFunction_P4_Size_fjvrmxlm3b [ 2 ] ; real_T SFunction_P4_py3bmltzky ; real_T
K2_Value_jy0nnlmsm2 ; real_T UnitDelay_InitialCondition_l3h1l0mohd ; real_T
UnitDelay1_InitialCondition_mxloi3dinr ; real_T coswt_Amp_nskemowyiu ; real_T
coswt_Bias_jk2fedlc5k ; real_T coswt_Hsin_omgodzfzvz ; real_T
coswt_HCos_oz23s2cxn2 ; real_T coswt_PSin_khvpsemk1b ; real_T
coswt_PCos_ontpys2zdd ; real_T Integ4_gainval_g3uamgfpqb ; real_T
Integ4_IC_g12toj1ern ; real_T K1_Value_g33io5pe2n ; real_T
SFunction_P1_Size_cjan5gzh5s [ 2 ] ; real_T SFunction_P1_lz1kvrqslv ; real_T
SFunction_P2_Size_jvanv0ykea [ 2 ] ; real_T SFunction_P2_m4zyizvnqv ; real_T
SFunction_P3_Size_jgylmcydz1 [ 2 ] ; real_T SFunction_P3_hsaxqamxsw ; real_T
SFunction_P4_Size_fcjx3ghw1g [ 2 ] ; real_T SFunction_P4_g2c4lhfo5n ; real_T
K2_Value_ox1txrzba0 ; real_T UnitDelay_InitialCondition_ictydfu5gx ; real_T
UnitDelay1_InitialCondition_ew2tfa0xiv ; real_T RadDeg_Gain_oothuzb2un ;
real_T degrad1_Gain ; real_T sinwt_Amp_gglawa5b0j ; real_T
sinwt_Bias_ftcgy00q1q ; real_T sinwt_Hsin_ltv4wuiu5i ; real_T
sinwt_HCos_lozsdsini2 ; real_T sinwt_PSin_ism3nzmned ; real_T
sinwt_PCos_esk52xey53 ; real_T Integ4_gainval_h0bygbtnao ; real_T
Integ4_IC_kpvxlhwixo ; real_T K1_Value_nofhnhfgqe ; real_T
SFunction_P1_Size_pejtedqyc4 [ 2 ] ; real_T SFunction_P1_lxyuxdb3mp ; real_T
SFunction_P2_Size_hlcp1ovx4k [ 2 ] ; real_T SFunction_P2_lvgbmfzfkf ; real_T
SFunction_P3_Size_ftrxnxhe1f [ 2 ] ; real_T SFunction_P3_cll0rk4ayt ; real_T
SFunction_P4_Size_jds5a2cbzo [ 2 ] ; real_T SFunction_P4_cdxkopokc1 ; real_T
K2_Value_cheibnriss ; real_T UnitDelay_InitialCondition_gbfuarhyw0 ; real_T
UnitDelay1_InitialCondition_ajpewtdlxk ; real_T coswt_Amp_ov5trykaai ; real_T
coswt_Bias_caz0b22m5s ; real_T coswt_Hsin_p0lqeycuo2 ; real_T
coswt_HCos_e1lcq0jydt ; real_T coswt_PSin_pzecylb5ie ; real_T
coswt_PCos_apooxuqtce ; real_T Integ4_gainval_lqadd2jned ; real_T
Integ4_IC_bcihf3qerl ; real_T K1_Value_piw4pfcum5 ; real_T
SFunction_P1_Size_n1ajy1bnud [ 2 ] ; real_T SFunction_P1_dkdy2k15zy ; real_T
SFunction_P2_Size_e0a1ljwhhh [ 2 ] ; real_T SFunction_P2_k3kgnekxzq ; real_T
SFunction_P3_Size_g2ktdcnint [ 2 ] ; real_T SFunction_P3_hck5ayelnn ; real_T
SFunction_P4_Size_ouyv0d4ulf [ 2 ] ; real_T SFunction_P4_frxx4pv3d4 ; real_T
K2_Value_luz1rwbbpa ; real_T UnitDelay_InitialCondition_c1mnajnz03 ; real_T
UnitDelay1_InitialCondition_fwlh0v4clc ; real_T RadDeg_Gain_kam5dohr3p ;
real_T degrad2_Gain ; real_T Constant_Value_gu00guxond ; real_T
Constant1_Value_d3fgit3q2y ; real_T Constant2_Value_dvfzdjynxb ; real_T
sinwt_Amp_a5iuycgbj5 ; real_T sinwt_Bias_o4hfny211d ; real_T
sinwt_Hsin_f4ff1jm01o ; real_T sinwt_HCos_ikm4ke3nt1 ; real_T
sinwt_PSin_mxp5pxyazu ; real_T sinwt_PCos_ffxrlya5uh ; real_T
Integ4_gainval_gvvjdr1enu ; real_T Integ4_IC_ljmxfnx2ig ; real_T
K1_Value_ly41q0lfne ; real_T SFunction_P1_Size_jukdwcj1bv [ 2 ] ; real_T
SFunction_P1_pa4jjhehiv ; real_T SFunction_P2_Size_psnzhais11 [ 2 ] ; real_T
SFunction_P2_bytfqwmq3y ; real_T SFunction_P3_Size_l30wnhs0mm [ 2 ] ; real_T
SFunction_P3_n2witgfr1i ; real_T SFunction_P4_Size_ktxkgaz1xj [ 2 ] ; real_T
SFunction_P4_k2rjx01pxg ; real_T K2_Value_peraggcnbk ; real_T
UnitDelay_InitialCondition_d4fsgzspon ; real_T
UnitDelay1_InitialCondition_nwwwd2tqrt ; real_T coswt_Amp_ph0slmkaz2 ; real_T
coswt_Bias_mxccsalmjx ; real_T coswt_Hsin_ki40gemxaa ; real_T
coswt_HCos_ih2fmjgzvo ; real_T coswt_PSin_ckpub3oin5 ; real_T
coswt_PCos_jgy3xycijn ; real_T Integ4_gainval_e3hymojevp ; real_T
Integ4_IC_b4moxyhjbs ; real_T K1_Value_odshxihjs1 ; real_T
SFunction_P1_Size_nmlo2jbnyf [ 2 ] ; real_T SFunction_P1_f3ypa2zb01 ; real_T
SFunction_P2_Size_lziftoqs2s [ 2 ] ; real_T SFunction_P2_hs0brjtvaq ; real_T
SFunction_P3_Size_izfvfjalyr [ 2 ] ; real_T SFunction_P3_csxyjaoi2n ; real_T
SFunction_P4_Size_gy1avcz5ha [ 2 ] ; real_T SFunction_P4_gtfhpmr5uy ; real_T
K2_Value_ca4rzsh0ua ; real_T UnitDelay_InitialCondition_iu5allnmxd ; real_T
UnitDelay1_InitialCondition_fsrsshkqoc ; real_T RadDeg_Gain_hfllzvpq3o ;
real_T degrad_Gain_num4oalqxy ; real_T sinwt_Amp_lmppjqm2un ; real_T
sinwt_Bias_i50qywn0ii ; real_T sinwt_Hsin_i0nd0ubqqg ; real_T
sinwt_HCos_c3em0todhq ; real_T sinwt_PSin_bllazdudnu ; real_T
sinwt_PCos_ilquu0arpw ; real_T Integ4_gainval_o4m2wju04m ; real_T
Integ4_IC_etee4cslmc ; real_T K1_Value_fascbhcv3t ; real_T
SFunction_P1_Size_i4ous05wd0 [ 2 ] ; real_T SFunction_P1_ampffu3m3c ; real_T
SFunction_P2_Size_nomaj1bgdp [ 2 ] ; real_T SFunction_P2_djfrqai1qz ; real_T
SFunction_P3_Size_n4gzbc3msr [ 2 ] ; real_T SFunction_P3_he0khbdhcb ; real_T
SFunction_P4_Size_g2xqkvldm0 [ 2 ] ; real_T SFunction_P4_cbbrphqo2f ; real_T
K2_Value_bqbhuqvuc2 ; real_T UnitDelay_InitialCondition_bh2031guu1 ; real_T
UnitDelay1_InitialCondition_gcar3snp12 ; real_T coswt_Amp_aqxb2j5jnu ; real_T
coswt_Bias_frzp530tnq ; real_T coswt_Hsin_fuzcqltv4d ; real_T
coswt_HCos_cs3y4qtzeb ; real_T coswt_PSin_bdolgwlxdg ; real_T
coswt_PCos_oqm4st2je0 ; real_T Integ4_gainval_dmsyi0ujpc ; real_T
Integ4_IC_lektlq1jie ; real_T K1_Value_okiumpl42l ; real_T
SFunction_P1_Size_cvpkxdvatx [ 2 ] ; real_T SFunction_P1_akvmkuhaw5 ; real_T
SFunction_P2_Size_fwn5zkbns1 [ 2 ] ; real_T SFunction_P2_dxmnlu0a5n ; real_T
SFunction_P3_Size_pedctzjhmg [ 2 ] ; real_T SFunction_P3_jhuhvxm5vq ; real_T
SFunction_P4_Size_nydreygcaq [ 2 ] ; real_T SFunction_P4_icb2jtdmvm ; real_T
K2_Value_gzomggch2d ; real_T UnitDelay_InitialCondition_nj2mac4354 ; real_T
UnitDelay1_InitialCondition_exqimte31v ; real_T RadDeg_Gain_lezhz3zr05 ;
real_T degrad1_Gain_gcrkcsbsjy ; real_T sinwt_Amp_oe50flwsvz ; real_T
sinwt_Bias_hpmk1ox4mk ; real_T sinwt_Hsin_kfaxcimxsb ; real_T
sinwt_HCos_lv5zpnsoyo ; real_T sinwt_PSin_bs1ts2ayri ; real_T
sinwt_PCos_owldbifmfn ; real_T Integ4_gainval_lqpuvz5try ; real_T
Integ4_IC_omqg2tqo15 ; real_T K1_Value_fl2t5hhsxt ; real_T
SFunction_P1_Size_pd353sj30r [ 2 ] ; real_T SFunction_P1_eo2zpwfgcc ; real_T
SFunction_P2_Size_a1y0oaqnrc [ 2 ] ; real_T SFunction_P2_mdi2o1yibz ; real_T
SFunction_P3_Size_er4czmynw5 [ 2 ] ; real_T SFunction_P3_akzr3coq0n ; real_T
SFunction_P4_Size_pk24ovu2kv [ 2 ] ; real_T SFunction_P4_o4gzym1ztl ; real_T
K2_Value_fl0eknqnzp ; real_T UnitDelay_InitialCondition_drj2csvrhz ; real_T
UnitDelay1_InitialCondition_lzsilqa4qy ; real_T coswt_Amp_ajaph324eb ; real_T
coswt_Bias_er20tnmo5c ; real_T coswt_Hsin_nt154hil4g ; real_T
coswt_HCos_dtrnnwyvoi ; real_T coswt_PSin_pc2mzqmykn ; real_T
coswt_PCos_exeoqhe2el ; real_T Integ4_gainval_ae24pre0oj ; real_T
Integ4_IC_fzbpruzddz ; real_T K1_Value_huwvvbdsqd ; real_T
SFunction_P1_Size_gt1yv20ls2 [ 2 ] ; real_T SFunction_P1_o30oihu332 ; real_T
SFunction_P2_Size_acjwavlpwb [ 2 ] ; real_T SFunction_P2_jub0nilfwr ; real_T
SFunction_P3_Size_k0opnt4gpv [ 2 ] ; real_T SFunction_P3_jyslu0v2kb ; real_T
SFunction_P4_Size_luydhi20rk [ 2 ] ; real_T SFunction_P4_lfuanfgbiu ; real_T
K2_Value_nuhsjmrzct ; real_T UnitDelay_InitialCondition_bp1tsi5gga ; real_T
UnitDelay1_InitialCondition_ovdhgn1wwe ; real_T RadDeg_Gain_bjvkdbizli ;
real_T degrad2_Gain_fvnkccap1v ; real_T Constant_Value_fal5u45x5b ; real_T
Constant1_Value_gerhfiv2al ; real_T Constant2_Value_h0okejydpk ; real_T
Gain1_Gain_b0ayny2lnu ; real_T raddeg1_Gain ; real_T raddeg1_Gain_joedyuhdkb
; real_T DegRad_Gain ; real_T W2kW_Gain ; real_T WkW_Gain ; real_T
Integ4_gainval_ky1qdbqrxe ; real_T Integ4_IC_hubvqsbw3v ; real_T
K1_Value_ksxou1md45 ; real_T SFunction_P1_Size_eznrwwwakz [ 2 ] ; real_T
SFunction_P1_eg0kpdtptk ; real_T SFunction_P2_Size_mng4gf0rcy [ 2 ] ; real_T
SFunction_P2_bzj01kwxem ; real_T SFunction_P3_Size_iiwgh5oham [ 2 ] ; real_T
SFunction_P3_jcoa4oso2x ; real_T SFunction_P4_Size_n2nlp4exzs [ 2 ] ; real_T
SFunction_P4_fhpglmrctr ; real_T K2_Value_a5zsikg0k0 ; real_T
UnitDelay_InitialCondition_pwcvpqdvoa ; real_T
UnitDelay1_InitialCondition_ix5vy4jhke ; real_T Gain7_Gain [ 3 ] ; real_T
Gain8_Gain [ 3 ] ; real_T phase2modeR_Gain [ 9 ] ; real_T phase2modeS_Gain [
9 ] ; real_T Gain7_Gain_i0zgc1rgb2 [ 3 ] ; real_T Gain8_Gain_edeoo4wuci [ 3 ]
; real_T phase2modeR_Gain_pqkaosz5ma [ 9 ] ; real_T
phase2modeS_Gain_an1doupart [ 9 ] ; real_T Gain_Gain_ax0trkdzic ; mirwlvnwva
ox1z1gld2w ; hcrgr2vy5z lbykfmi30w ; mirwlvnwva m1irskyirr ; hcrgr2vy5z
ochgqd2u0r ; mirwlvnwva dzyhdh21lm ; hcrgr2vy5z jgqfnbi2jt ; mirwlvnwva
klbd0xrbram ; hcrgr2vy5z fwds5waerqt ; c3xiexpag1 ojknbv4is1 ; oua4sf5ojz
n45kzzuand ; oua4sf5ojz dn2wcdma5d ; c3xiexpag1 g23t01ww0z0 ; oua4sf5ojz
gfc0o4gmcx ; oua4sf5ojz msv4qqksksf ; } ; extern const real_T
power_PVarray_grid_det_RGND ; extern const char * RT_MEMORY_ALLOCATION_ERROR
; extern B rtB ; extern DW rtDW ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * power_PVarray_grid_det_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif

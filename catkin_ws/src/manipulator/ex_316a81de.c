#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
size_t ex_FSBp3lkv5gpCXL2yT9vLNh(const real_T*x,const size_t n,const real_T t)
;void ex_kGRJvwU4WMthWL53sjRCpO(real_T*ex_F2l4p_g4sn02huHNflQjMH,const size_t
n1,const size_t n2,const size_t n3,const size_t n4,const size_t
ex_kyZWlRgyPY_nhaYrzhlz4N,const size_t ex_VSy0VE52bQSafuDoXEVasH,const size_t
ex_keXUKEfwn7pKd9Pw_tgV73,const size_t ex_FZiPJehSX8hycyX0BLEeoT);void
ex_FtfBZE2kLGxyWamCvlRfeQ(real_T*x,real_T*f,const size_t n);void
ex_F4LajttG6uGtbXBJgUNQpW(real_T*x1,real_T*x2,real_T*f,const size_t n1,const
size_t n2);void ex_kIBgcKPC9nhchTKovcabSa(real_T*x1,real_T*x2,real_T*x3,real_T
*f,const size_t n1,const size_t n2,const size_t n3);void
ex_F_6wSEEsvm_1cTAuvwDt9B(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*f,
const size_t n1,const size_t n2,const size_t n3,const size_t n4);size_t
ex_VzC4wVDNwRO2VyQZ1TOBFP(real_T*H,real_T*G,size_t*numEdges,const real_T*x,
const size_t n,const real_T t,const boolean_T*mode,const boolean_T
ex_V0dauSHHy5d6_D42s3Aeag);
#include "lang_std.h"
#include "string.h"
static void ex__XRlFJBXKftbhDMccAS5ma(real_T*fi,const real_T*H1,const real_T*
G1,const size_t*numEdges1,const size_t*bin1,const real_T*H2,const real_T*G2,
const size_t*numEdges2,const size_t*bin2,const real_T*H3,const real_T*G3,const
size_t*numEdges3,const size_t*bin3,const real_T*H4,const real_T*G4,const size_t
*numEdges4,const size_t*bin4,const real_T*f,const boolean_T*mode1,const
boolean_T*mode2,const boolean_T*mode3,const boolean_T*mode4,const size_t*n1,
const size_t*n2,const size_t*n3,const size_t*n4,const boolean_T
ex_F_tm5fod4xxuguhS49BSQm,const boolean_T ex_kMAXUIgm88xvaunhJ2st8X);static
void ex_VsRYme4f6atlj9wrOKGZwp(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*
f,real_T*bv1,real_T*bv2,real_T*bv3,real_T*bv4,const real_T*x1s,const real_T*
x2s,const real_T*x3s,const real_T*x4s,const real_T*fs,const size_t n1,const
size_t n2,const size_t n3,const size_t n4);void tlu2_4d_linear_nearest_process
(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*f,real_T*bv1,real_T*bv2,real_T
*bv3,real_T*bv4,const real_T*x1s,const real_T*x2s,const real_T*x3s,const real_T
*x4s,const real_T*fs,const size_t*n1,const size_t*n2,const size_t*n3,const
size_t*n4){ex_VsRYme4f6atlj9wrOKGZwp(x1,x2,x3,x4,f,bv1,bv2,bv3,bv4,x1s,x2s,x3s
,x4s,fs,*n1,*n2,*n3,*n4);}void tlu2_4d_linear_nearest_process_custom_function_
(void*out,const void*in){const real_T*x1s=(const real_T*)((const void*const*)
in)[0];const real_T*x2s=(const real_T*)((const void*const*)in)[1];const real_T
*x3s=(const real_T*)((const void*const*)in)[2];const real_T*x4s=(const real_T*
)((const void*const*)in)[3];const real_T*fs=(const real_T*)((const void*const*
)in)[4];const size_t*n1=(const size_t*)((const void*const*)in)[5];const size_t
*n2=(const size_t*)((const void*const*)in)[6];const size_t*n3=(const size_t*)(
(const void*const*)in)[7];const size_t*n4=(const size_t*)((const void*const*)
in)[8];real_T*x1=(real_T*)((void**)out)[0];real_T*x2=(real_T*)((void**)out)[1]
;real_T*x3=(real_T*)((void**)out)[2];real_T*x4=(real_T*)((void**)out)[3];
real_T*f=(real_T*)((void**)out)[4];real_T*bv1=(real_T*)((void**)out)[5];real_T
*bv2=(real_T*)((void**)out)[6];real_T*bv3=(real_T*)((void**)out)[7];real_T*bv4
=(real_T*)((void**)out)[8];tlu2_4d_linear_nearest_process(x1,x2,x3,x4,f,bv1,
bv2,bv3,bv4,x1s,x2s,x3s,x4s,fs,n1,n2,n3,n4);}void tlu2_4d_linear_linear_process
(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*f,real_T*bv1,real_T*bv2,real_T
*bv3,real_T*bv4,const real_T*x1s,const real_T*x2s,const real_T*x3s,const real_T
*x4s,const real_T*fs,const size_t*n1,const size_t*n2,const size_t*n3,const
size_t*n4){ex_VsRYme4f6atlj9wrOKGZwp(x1,x2,x3,x4,f,bv1,bv2,bv3,bv4,x1s,x2s,x3s
,x4s,fs,*n1,*n2,*n3,*n4);}void tlu2_4d_linear_linear_process_custom_function_(
void*out,const void*in){const real_T*x1s=(const real_T*)((const void*const*)in
)[0];const real_T*x2s=(const real_T*)((const void*const*)in)[1];const real_T*
x3s=(const real_T*)((const void*const*)in)[2];const real_T*x4s=(const real_T*)
((const void*const*)in)[3];const real_T*fs=(const real_T*)((const void*const*)
in)[4];const size_t*n1=(const size_t*)((const void*const*)in)[5];const size_t*
n2=(const size_t*)((const void*const*)in)[6];const size_t*n3=(const size_t*)((
const void*const*)in)[7];const size_t*n4=(const size_t*)((const void*const*)in
)[8];real_T*x1=(real_T*)((void**)out)[0];real_T*x2=(real_T*)((void**)out)[1];
real_T*x3=(real_T*)((void**)out)[2];real_T*x4=(real_T*)((void**)out)[3];real_T
*f=(real_T*)((void**)out)[4];real_T*bv1=(real_T*)((void**)out)[5];real_T*bv2=(
real_T*)((void**)out)[6];real_T*bv3=(real_T*)((void**)out)[7];real_T*bv4=(
real_T*)((void**)out)[8];tlu2_4d_linear_linear_process(x1,x2,x3,x4,f,bv1,bv2,
bv3,bv4,x1s,x2s,x3s,x4s,fs,n1,n2,n3,n4);}static void ex_VsRYme4f6atlj9wrOKGZwp
(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*f,real_T*bv1,real_T*bv2,real_T
*bv3,real_T*bv4,const real_T*x1s,const real_T*x2s,const real_T*x3s,const real_T
*x4s,const real_T*fs,const size_t n1,const size_t n2,const size_t n3,const
size_t n4){const size_t n=n1*n2*n3*n4;memcpy(x1,x1s,n1*sizeof(real_T));memcpy(
x2,x2s,n2*sizeof(real_T));memcpy(x3,x3s,n3*sizeof(real_T));memcpy(x4,x4s,n4*
sizeof(real_T));memcpy(f,fs,n*sizeof(real_T));ex_F_6wSEEsvm_1cTAuvwDt9B(x1,x2,
x3,x4,f,n1,n2,n3,n4);bv1[0]=x1[0];bv1[1]=x1[n1-1];bv2[0]=x2[0];bv2[1]=x2[n2-1]
;bv3[0]=x3[0];bv3[1]=x3[n3-1];bv4[0]=x4[0];bv4[1]=x4[n4-1];}void
tlu2_4d_linear_nearest_value(real_T*fi,const real_T*H1,const real_T*G1,const
size_t*numEdges1,const size_t*bin1,const real_T*H2,const real_T*G2,const size_t
*numEdges2,const size_t*bin2,const real_T*H3,const real_T*G3,const size_t*
numEdges3,const size_t*bin3,const real_T*H4,const real_T*G4,const size_t*
numEdges4,const size_t*bin4,const real_T*f,const boolean_T*mode1,const
boolean_T*mode2,const boolean_T*mode3,const boolean_T*mode4,const size_t*n1,
const size_t*n2,const size_t*n3,const size_t*n4){ex__XRlFJBXKftbhDMccAS5ma(fi,
H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,H3,G3,numEdges3,bin3,H4,G4,numEdges4
,bin4,f,mode1,mode2,mode3,mode4,n1,n2,n3,n4,false,false);}void
tlu2_4d_linear_nearest_value_custom_function_(void*out,const void*in){const
real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(const
real_T*)((const void*const*)in)[1];const size_t*numEdges1=(const size_t*)((
const void*const*)in)[2];const size_t*bin1=(const size_t*)((const void*const*)
in)[3];const real_T*H2=(const real_T*)((const void*const*)in)[4];const real_T*
G2=(const real_T*)((const void*const*)in)[5];const size_t*numEdges2=(const
size_t*)((const void*const*)in)[6];const size_t*bin2=(const size_t*)((const
void*const*)in)[7];const real_T*H3=(const real_T*)((const void*const*)in)[8];
const real_T*G3=(const real_T*)((const void*const*)in)[9];const size_t*
numEdges3=(const size_t*)((const void*const*)in)[10];const size_t*bin3=(const
size_t*)((const void*const*)in)[11];const real_T*H4=(const real_T*)((const void
*const*)in)[12];const real_T*G4=(const real_T*)((const void*const*)in)[13];
const size_t*numEdges4=(const size_t*)((const void*const*)in)[14];const size_t
*bin4=(const size_t*)((const void*const*)in)[15];const real_T*f=(const real_T*
)((const void*const*)in)[16];const boolean_T*mode1=(const boolean_T*)((const
void*const*)in)[17];const boolean_T*mode2=(const boolean_T*)((const void*const
*)in)[18];const boolean_T*mode3=(const boolean_T*)((const void*const*)in)[19];
const boolean_T*mode4=(const boolean_T*)((const void*const*)in)[20];const
size_t*n1=(const size_t*)((const void*const*)in)[21];const size_t*n2=(const
size_t*)((const void*const*)in)[22];const size_t*n3=(const size_t*)((const void
*const*)in)[23];const size_t*n4=(const size_t*)((const void*const*)in)[24];
real_T*fi=(real_T*)out;tlu2_4d_linear_nearest_value(fi,H1,G1,numEdges1,bin1,H2
,G2,numEdges2,bin2,H3,G3,numEdges3,bin3,H4,G4,numEdges4,bin4,f,mode1,mode2,
mode3,mode4,n1,n2,n3,n4);}void tlu2_4d_linear_linear_value(real_T*fi,const
real_T*H1,const real_T*G1,const size_t*numEdges1,const size_t*bin1,const real_T
*H2,const real_T*G2,const size_t*numEdges2,const size_t*bin2,const real_T*H3,
const real_T*G3,const size_t*numEdges3,const size_t*bin3,const real_T*H4,const
real_T*G4,const size_t*numEdges4,const size_t*bin4,const real_T*f,const
boolean_T*mode1,const boolean_T*mode2,const boolean_T*mode3,const boolean_T*
mode4,const size_t*n1,const size_t*n2,const size_t*n3,const size_t*n4){
ex__XRlFJBXKftbhDMccAS5ma(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,H3,G3,
numEdges3,bin3,H4,G4,numEdges4,bin4,f,mode1,mode2,mode3,mode4,n1,n2,n3,n4,true
,false);}void tlu2_4d_linear_linear_value_custom_function_(void*out,const void
*in){const real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1
=(const real_T*)((const void*const*)in)[1];const size_t*numEdges1=(const size_t
*)((const void*const*)in)[2];const size_t*bin1=(const size_t*)((const void*
const*)in)[3];const real_T*H2=(const real_T*)((const void*const*)in)[4];const
real_T*G2=(const real_T*)((const void*const*)in)[5];const size_t*numEdges2=(
const size_t*)((const void*const*)in)[6];const size_t*bin2=(const size_t*)((
const void*const*)in)[7];const real_T*H3=(const real_T*)((const void*const*)in
)[8];const real_T*G3=(const real_T*)((const void*const*)in)[9];const size_t*
numEdges3=(const size_t*)((const void*const*)in)[10];const size_t*bin3=(const
size_t*)((const void*const*)in)[11];const real_T*H4=(const real_T*)((const void
*const*)in)[12];const real_T*G4=(const real_T*)((const void*const*)in)[13];
const size_t*numEdges4=(const size_t*)((const void*const*)in)[14];const size_t
*bin4=(const size_t*)((const void*const*)in)[15];const real_T*f=(const real_T*
)((const void*const*)in)[16];const boolean_T*mode1=(const boolean_T*)((const
void*const*)in)[17];const boolean_T*mode2=(const boolean_T*)((const void*const
*)in)[18];const boolean_T*mode3=(const boolean_T*)((const void*const*)in)[19];
const boolean_T*mode4=(const boolean_T*)((const void*const*)in)[20];const
size_t*n1=(const size_t*)((const void*const*)in)[21];const size_t*n2=(const
size_t*)((const void*const*)in)[22];const size_t*n3=(const size_t*)((const void
*const*)in)[23];const size_t*n4=(const size_t*)((const void*const*)in)[24];
real_T*fi=(real_T*)out;tlu2_4d_linear_linear_value(fi,H1,G1,numEdges1,bin1,H2,
G2,numEdges2,bin2,H3,G3,numEdges3,bin3,H4,G4,numEdges4,bin4,f,mode1,mode2,
mode3,mode4,n1,n2,n3,n4);}void tlu2_4d_linear_nearest_derivatives(real_T*fi,
const real_T*H1,const real_T*G1,const size_t*numEdges1,const size_t*bin1,const
real_T*H2,const real_T*G2,const size_t*numEdges2,const size_t*bin2,const real_T
*H3,const real_T*G3,const size_t*numEdges3,const size_t*bin3,const real_T*H4,
const real_T*G4,const size_t*numEdges4,const size_t*bin4,const real_T*f,const
boolean_T*mode1,const boolean_T*mode2,const boolean_T*mode3,const boolean_T*
mode4,const size_t*n1,const size_t*n2,const size_t*n3,const size_t*n4){
ex__XRlFJBXKftbhDMccAS5ma(fi,H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,H3,G3,
numEdges3,bin3,H4,G4,numEdges4,bin4,f,mode1,mode2,mode3,mode4,n1,n2,n3,n4,
false,true);}void tlu2_4d_linear_nearest_derivatives_custom_function_(void*out
,const void*in){const real_T*H1=(const real_T*)((const void*const*)in)[0];
const real_T*G1=(const real_T*)((const void*const*)in)[1];const size_t*
numEdges1=(const size_t*)((const void*const*)in)[2];const size_t*bin1=(const
size_t*)((const void*const*)in)[3];const real_T*H2=(const real_T*)((const void
*const*)in)[4];const real_T*G2=(const real_T*)((const void*const*)in)[5];const
size_t*numEdges2=(const size_t*)((const void*const*)in)[6];const size_t*bin2=(
const size_t*)((const void*const*)in)[7];const real_T*H3=(const real_T*)((
const void*const*)in)[8];const real_T*G3=(const real_T*)((const void*const*)in
)[9];const size_t*numEdges3=(const size_t*)((const void*const*)in)[10];const
size_t*bin3=(const size_t*)((const void*const*)in)[11];const real_T*H4=(const
real_T*)((const void*const*)in)[12];const real_T*G4=(const real_T*)((const void
*const*)in)[13];const size_t*numEdges4=(const size_t*)((const void*const*)in)[
14];const size_t*bin4=(const size_t*)((const void*const*)in)[15];const real_T*
f=(const real_T*)((const void*const*)in)[16];const boolean_T*mode1=(const
boolean_T*)((const void*const*)in)[17];const boolean_T*mode2=(const boolean_T*
)((const void*const*)in)[18];const boolean_T*mode3=(const boolean_T*)((const
void*const*)in)[19];const boolean_T*mode4=(const boolean_T*)((const void*const
*)in)[20];const size_t*n1=(const size_t*)((const void*const*)in)[21];const
size_t*n2=(const size_t*)((const void*const*)in)[22];const size_t*n3=(const
size_t*)((const void*const*)in)[23];const size_t*n4=(const size_t*)((const void
*const*)in)[24];real_T*fi=(real_T*)out;tlu2_4d_linear_nearest_derivatives(fi,
H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,H3,G3,numEdges3,bin3,H4,G4,numEdges4
,bin4,f,mode1,mode2,mode3,mode4,n1,n2,n3,n4);}void
tlu2_4d_linear_linear_derivatives(real_T*fi,const real_T*H1,const real_T*G1,
const size_t*numEdges1,const size_t*bin1,const real_T*H2,const real_T*G2,const
size_t*numEdges2,const size_t*bin2,const real_T*H3,const real_T*G3,const size_t
*numEdges3,const size_t*bin3,const real_T*H4,const real_T*G4,const size_t*
numEdges4,const size_t*bin4,const real_T*f,const boolean_T*mode1,const
boolean_T*mode2,const boolean_T*mode3,const boolean_T*mode4,const size_t*n1,
const size_t*n2,const size_t*n3,const size_t*n4){ex__XRlFJBXKftbhDMccAS5ma(fi,
H1,G1,numEdges1,bin1,H2,G2,numEdges2,bin2,H3,G3,numEdges3,bin3,H4,G4,numEdges4
,bin4,f,mode1,mode2,mode3,mode4,n1,n2,n3,n4,true,true);}void
tlu2_4d_linear_linear_derivatives_custom_function_(void*out,const void*in){
const real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(
const real_T*)((const void*const*)in)[1];const size_t*numEdges1=(const size_t*
)((const void*const*)in)[2];const size_t*bin1=(const size_t*)((const void*
const*)in)[3];const real_T*H2=(const real_T*)((const void*const*)in)[4];const
real_T*G2=(const real_T*)((const void*const*)in)[5];const size_t*numEdges2=(
const size_t*)((const void*const*)in)[6];const size_t*bin2=(const size_t*)((
const void*const*)in)[7];const real_T*H3=(const real_T*)((const void*const*)in
)[8];const real_T*G3=(const real_T*)((const void*const*)in)[9];const size_t*
numEdges3=(const size_t*)((const void*const*)in)[10];const size_t*bin3=(const
size_t*)((const void*const*)in)[11];const real_T*H4=(const real_T*)((const void
*const*)in)[12];const real_T*G4=(const real_T*)((const void*const*)in)[13];
const size_t*numEdges4=(const size_t*)((const void*const*)in)[14];const size_t
*bin4=(const size_t*)((const void*const*)in)[15];const real_T*f=(const real_T*
)((const void*const*)in)[16];const boolean_T*mode1=(const boolean_T*)((const
void*const*)in)[17];const boolean_T*mode2=(const boolean_T*)((const void*const
*)in)[18];const boolean_T*mode3=(const boolean_T*)((const void*const*)in)[19];
const boolean_T*mode4=(const boolean_T*)((const void*const*)in)[20];const
size_t*n1=(const size_t*)((const void*const*)in)[21];const size_t*n2=(const
size_t*)((const void*const*)in)[22];const size_t*n3=(const size_t*)((const void
*const*)in)[23];const size_t*n4=(const size_t*)((const void*const*)in)[24];
real_T*fi=(real_T*)out;tlu2_4d_linear_linear_derivatives(fi,H1,G1,numEdges1,
bin1,H2,G2,numEdges2,bin2,H3,G3,numEdges3,bin3,H4,G4,numEdges4,bin4,f,mode1,
mode2,mode3,mode4,n1,n2,n3,n4);}static void ex__XRlFJBXKftbhDMccAS5ma(real_T*
fi,const real_T*H1,const real_T*G1,const size_t*ex_koMwWVZ5kdO_cmNynyQJr7,
const size_t*ex_V5M9clt1oOxmhHN3Ehciw4,const real_T*H2,const real_T*G2,const
size_t*ex___TPtFdMIMdka1RE4RrHK5,const size_t*ex_kwmw_QOG8uhxiTvKA_xa1Y,const
real_T*H3,const real_T*G3,const size_t*ex_VZ7ghYjIgM4UdqVbOYqmwq,const size_t*
ex_kqBPhXXIwWlQh5lks9Qd9B,const real_T*H4,const real_T*G4,const size_t*
ex_Vf8qMWz_JO_BVmppGkqrJK,const size_t*ex__Ae_aJ4EhNStWPqAuXpOgV,const real_T*
f,const boolean_T*mode1,const boolean_T*mode2,const boolean_T*mode3,const
boolean_T*mode4,const size_t*ex_VMjU_zotmLxndPNpPFuHG9,const size_t*
ex_VtVCgVxNcpd_YmPNQN4Ru7,const size_t*ex__6OOHGUUNBKPcaYip0O_Dj,const size_t*
ex_kj19QRcsJMpqg15OJAm0oc,const boolean_T ex_V0dauSHHy5d6_D42s3Aeag,const
boolean_T ex_kMAXUIgm88xvaunhJ2st8X){size_t n1= *ex_VMjU_zotmLxndPNpPFuHG9;
size_t n2= *ex_VtVCgVxNcpd_YmPNQN4Ru7;size_t n3= *ex__6OOHGUUNBKPcaYip0O_Dj;
size_t n4= *ex_kj19QRcsJMpqg15OJAm0oc;size_t numEdges1= *
ex_koMwWVZ5kdO_cmNynyQJr7;size_t numEdges2= *ex___TPtFdMIMdka1RE4RrHK5;size_t
numEdges3= *ex_VZ7ghYjIgM4UdqVbOYqmwq;size_t numEdges4= *
ex_Vf8qMWz_JO_BVmppGkqrJK;size_t bin1= *ex_V5M9clt1oOxmhHN3Ehciw4;size_t bin2=
*ex_kwmw_QOG8uhxiTvKA_xa1Y;size_t bin3= *ex_kqBPhXXIwWlQh5lks9Qd9B;size_t bin4
= *ex__Ae_aJ4EhNStWPqAuXpOgV;size_t ex_FQ8I1Oq4CShSeySHdok3C7=n1*n2;size_t
ex__f2__JfR9_hAeX8hDwMaow=ex_FQ8I1Oq4CShSeySHdok3C7*n3;size_t bin=bin1+n1*bin2
+ex_FQ8I1Oq4CShSeySHdok3C7*bin3+ex__f2__JfR9_hAeX8hDwMaow*bin4;size_t
ex_FnrjFNs9eQp9V5vCxPaoKw,ex_FRuIUemzxbdhfqkjXhoyK7,ex_kRXTNbOCUd0KeHaF5Udb_Y,
ex_Fz136CeCPW_CcPzKpIHjrJ;size_t ex_Fb8WfqABMs_vcqFzZf37Fa,
ex_k4UiAV7JSYpMjHsHDM_wV6,ex__Y8nRW2S0zdlXHnGSWOxB7,ex_k0tWTAAjJXlFYq0zTB2_9p;
fi[0]=0.0;if(ex_kMAXUIgm88xvaunhJ2st8X){fi[1]=0.0;fi[2]=0.0;fi[3]=0,0;}for(
ex_Fz136CeCPW_CcPzKpIHjrJ=0;ex_Fz136CeCPW_CcPzKpIHjrJ<numEdges4;++
ex_Fz136CeCPW_CcPzKpIHjrJ){ex_k0tWTAAjJXlFYq0zTB2_9p=ex__f2__JfR9_hAeX8hDwMaow
*ex_Fz136CeCPW_CcPzKpIHjrJ+bin;for(ex_kRXTNbOCUd0KeHaF5Udb_Y=0;
ex_kRXTNbOCUd0KeHaF5Udb_Y<numEdges3;++ex_kRXTNbOCUd0KeHaF5Udb_Y){
ex__Y8nRW2S0zdlXHnGSWOxB7=ex_FQ8I1Oq4CShSeySHdok3C7*ex_kRXTNbOCUd0KeHaF5Udb_Y+
ex_k0tWTAAjJXlFYq0zTB2_9p;for(ex_FRuIUemzxbdhfqkjXhoyK7=0;
ex_FRuIUemzxbdhfqkjXhoyK7<numEdges2;++ex_FRuIUemzxbdhfqkjXhoyK7){
ex_k4UiAV7JSYpMjHsHDM_wV6=n1*ex_FRuIUemzxbdhfqkjXhoyK7+
ex__Y8nRW2S0zdlXHnGSWOxB7;for(ex_FnrjFNs9eQp9V5vCxPaoKw=0;
ex_FnrjFNs9eQp9V5vCxPaoKw<numEdges1;++ex_FnrjFNs9eQp9V5vCxPaoKw){
ex_Fb8WfqABMs_vcqFzZf37Fa=ex_FnrjFNs9eQp9V5vCxPaoKw+ex_k4UiAV7JSYpMjHsHDM_wV6;
if(ex_kMAXUIgm88xvaunhJ2st8X){fi[0]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*G1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[ex_FRuIUemzxbdhfqkjXhoyK7]*H3[
ex_kRXTNbOCUd0KeHaF5Udb_Y]*H4[ex_Fz136CeCPW_CcPzKpIHjrJ];fi[1]+=f[
ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[ex_FnrjFNs9eQp9V5vCxPaoKw]*G2[
ex_FRuIUemzxbdhfqkjXhoyK7]*H3[ex_kRXTNbOCUd0KeHaF5Udb_Y]*H4[
ex_Fz136CeCPW_CcPzKpIHjrJ];fi[2]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[ex_FRuIUemzxbdhfqkjXhoyK7]*G3[
ex_kRXTNbOCUd0KeHaF5Udb_Y]*H4[ex_Fz136CeCPW_CcPzKpIHjrJ];fi[3]+=f[
ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[
ex_FRuIUemzxbdhfqkjXhoyK7]*H3[ex_kRXTNbOCUd0KeHaF5Udb_Y]*G4[
ex_Fz136CeCPW_CcPzKpIHjrJ];}else{fi[0]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[ex_FRuIUemzxbdhfqkjXhoyK7]*H3[
ex_kRXTNbOCUd0KeHaF5Udb_Y]*H4[ex_Fz136CeCPW_CcPzKpIHjrJ];}}}}}}

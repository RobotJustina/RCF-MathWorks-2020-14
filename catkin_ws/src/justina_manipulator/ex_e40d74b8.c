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
ex_VzC4wVDNwRO2VyQZ1TOBFP(real_T*H,real_T*G,const real_T*x,const size_t n,
const real_T t,const boolean_T ex_V0dauSHHy5d6_D42s3Aeag);
#include "lang_std.h"
#include "string.h"
static void ex__aHtP2BVh3GTdL9OJAJPQn(real_T*fi,const real_T*H1,const real_T*
G1,const size_t bin1,const real_T*H2,const real_T*G2,const size_t bin2,const
real_T*H3,const real_T*G3,const size_t bin3,const real_T*f,const size_t n1,
const size_t n2,const size_t n3,const boolean_T ex_F_tm5fod4xxuguhS49BSQm,
const boolean_T ex_kMAXUIgm88xvaunhJ2st8X);static void
ex_ksYC8da6QGWSjmLmtHDYLu(real_T*x1,real_T*x2,real_T*x3,real_T*f,const real_T*
x1s,const real_T*x2s,const real_T*x3s,const real_T*fs,const size_t n1,const
size_t n2,const size_t n3);void tlu2_3d_linear_nearest_process(real_T*x1,
real_T*x2,real_T*x3,real_T*f,const real_T*x1s,const real_T*x2s,const real_T*
x3s,const real_T*fs,const size_t*n1,const size_t*n2,const size_t*n3){
ex_ksYC8da6QGWSjmLmtHDYLu(x1,x2,x3,f,x1s,x2s,x3s,fs,*n1,*n2,*n3);}void
tlu2_3d_linear_nearest_process_custom_function_(void*out,const void*in){const
real_T*x1s=(const real_T*)((const void*const*)in)[0];const real_T*x2s=(const
real_T*)((const void*const*)in)[1];const real_T*x3s=(const real_T*)((const void
*const*)in)[2];const real_T*fs=(const real_T*)((const void*const*)in)[3];const
size_t*n1=(const size_t*)((const void*const*)in)[4];const size_t*n2=(const
size_t*)((const void*const*)in)[5];const size_t*n3=(const size_t*)((const void
*const*)in)[6];real_T*x1=(real_T*)((void**)out)[0];real_T*x2=(real_T*)((void**
)out)[1];real_T*x3=(real_T*)((void**)out)[2];real_T*f=(real_T*)((void**)out)[3
];tlu2_3d_linear_nearest_process(x1,x2,x3,f,x1s,x2s,x3s,fs,n1,n2,n3);}void
tlu2_3d_linear_linear_process(real_T*x1,real_T*x2,real_T*x3,real_T*f,const
real_T*x1s,const real_T*x2s,const real_T*x3s,const real_T*fs,const size_t*n1,
const size_t*n2,const size_t*n3){ex_ksYC8da6QGWSjmLmtHDYLu(x1,x2,x3,f,x1s,x2s,
x3s,fs,*n1,*n2,*n3);}void tlu2_3d_linear_linear_process_custom_function_(void*
out,const void*in){const real_T*x1s=(const real_T*)((const void*const*)in)[0];
const real_T*x2s=(const real_T*)((const void*const*)in)[1];const real_T*x3s=(
const real_T*)((const void*const*)in)[2];const real_T*fs=(const real_T*)((
const void*const*)in)[3];const size_t*n1=(const size_t*)((const void*const*)in
)[4];const size_t*n2=(const size_t*)((const void*const*)in)[5];const size_t*n3
=(const size_t*)((const void*const*)in)[6];real_T*x1=(real_T*)((void**)out)[0]
;real_T*x2=(real_T*)((void**)out)[1];real_T*x3=(real_T*)((void**)out)[2];
real_T*f=(real_T*)((void**)out)[3];tlu2_3d_linear_linear_process(x1,x2,x3,f,
x1s,x2s,x3s,fs,n1,n2,n3);}static void ex_ksYC8da6QGWSjmLmtHDYLu(real_T*x1,
real_T*x2,real_T*x3,real_T*f,const real_T*x1s,const real_T*x2s,const real_T*
x3s,const real_T*fs,const size_t n1,const size_t n2,const size_t n3){const
size_t n=n1*n2*n3;memcpy(x1,x1s,n1*sizeof(real_T));memcpy(x2,x2s,n2*sizeof(
real_T));memcpy(x3,x3s,n3*sizeof(real_T));memcpy(f,fs,n*sizeof(real_T));
ex_kIBgcKPC9nhchTKovcabSa(x1,x2,x3,f,n1,n2,n3);}void
tlu2_3d_linear_nearest_value(real_T*fi,const real_T*H1,const real_T*G1,const
size_t*bin1,const real_T*H2,const real_T*G2,const size_t*bin2,const real_T*H3,
const real_T*G3,const size_t*bin3,const real_T*f,const size_t*n1,const size_t*
n2,const size_t*n3){ex__aHtP2BVh3GTdL9OJAJPQn(fi,H1,G1,*bin1,H2,G2,*bin2,H3,G3
,*bin3,f,*n1,*n2,*n3,false,false);}void
tlu2_3d_linear_nearest_value_custom_function_(void*out,const void*in){const
real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(const
real_T*)((const void*const*)in)[1];const size_t*bin1=(const size_t*)((const
void*const*)in)[2];const real_T*H2=(const real_T*)((const void*const*)in)[3];
const real_T*G2=(const real_T*)((const void*const*)in)[4];const size_t*bin2=(
const size_t*)((const void*const*)in)[5];const real_T*H3=(const real_T*)((
const void*const*)in)[6];const real_T*G3=(const real_T*)((const void*const*)in
)[7];const size_t*bin3=(const size_t*)((const void*const*)in)[8];const real_T*
f=(const real_T*)((const void*const*)in)[9];const size_t*n1=(const size_t*)((
const void*const*)in)[10];const size_t*n2=(const size_t*)((const void*const*)
in)[11];const size_t*n3=(const size_t*)((const void*const*)in)[12];real_T*fi=(
real_T*)out;tlu2_3d_linear_nearest_value(fi,H1,G1,bin1,H2,G2,bin2,H3,G3,bin3,f
,n1,n2,n3);}void tlu2_3d_linear_linear_value(real_T*fi,const real_T*H1,const
real_T*G1,const size_t*bin1,const real_T*H2,const real_T*G2,const size_t*bin2,
const real_T*H3,const real_T*G3,const size_t*bin3,const real_T*f,const size_t*
n1,const size_t*n2,const size_t*n3){ex__aHtP2BVh3GTdL9OJAJPQn(fi,H1,G1,*bin1,
H2,G2,*bin2,H3,G3,*bin3,f,*n1,*n2,*n3,true,false);}void
tlu2_3d_linear_linear_value_custom_function_(void*out,const void*in){const
real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(const
real_T*)((const void*const*)in)[1];const size_t*bin1=(const size_t*)((const
void*const*)in)[2];const real_T*H2=(const real_T*)((const void*const*)in)[3];
const real_T*G2=(const real_T*)((const void*const*)in)[4];const size_t*bin2=(
const size_t*)((const void*const*)in)[5];const real_T*H3=(const real_T*)((
const void*const*)in)[6];const real_T*G3=(const real_T*)((const void*const*)in
)[7];const size_t*bin3=(const size_t*)((const void*const*)in)[8];const real_T*
f=(const real_T*)((const void*const*)in)[9];const size_t*n1=(const size_t*)((
const void*const*)in)[10];const size_t*n2=(const size_t*)((const void*const*)
in)[11];const size_t*n3=(const size_t*)((const void*const*)in)[12];real_T*fi=(
real_T*)out;tlu2_3d_linear_linear_value(fi,H1,G1,bin1,H2,G2,bin2,H3,G3,bin3,f,
n1,n2,n3);}void tlu2_3d_linear_nearest_derivatives(real_T*fi,const real_T*H1,
const real_T*G1,const size_t*bin1,const real_T*H2,const real_T*G2,const size_t
*bin2,const real_T*H3,const real_T*G3,const size_t*bin3,const real_T*f,const
size_t*n1,const size_t*n2,const size_t*n3){ex__aHtP2BVh3GTdL9OJAJPQn(fi,H1,G1,
*bin1,H2,G2,*bin2,H3,G3,*bin3,f,*n1,*n2,*n3,false,true);}void
tlu2_3d_linear_nearest_derivatives_custom_function_(void*out,const void*in){
const real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(
const real_T*)((const void*const*)in)[1];const size_t*bin1=(const size_t*)((
const void*const*)in)[2];const real_T*H2=(const real_T*)((const void*const*)in
)[3];const real_T*G2=(const real_T*)((const void*const*)in)[4];const size_t*
bin2=(const size_t*)((const void*const*)in)[5];const real_T*H3=(const real_T*)
((const void*const*)in)[6];const real_T*G3=(const real_T*)((const void*const*)
in)[7];const size_t*bin3=(const size_t*)((const void*const*)in)[8];const real_T
*f=(const real_T*)((const void*const*)in)[9];const size_t*n1=(const size_t*)((
const void*const*)in)[10];const size_t*n2=(const size_t*)((const void*const*)
in)[11];const size_t*n3=(const size_t*)((const void*const*)in)[12];real_T*fi=(
real_T*)out;tlu2_3d_linear_nearest_derivatives(fi,H1,G1,bin1,H2,G2,bin2,H3,G3,
bin3,f,n1,n2,n3);}void tlu2_3d_linear_linear_derivatives(real_T*fi,const real_T
*H1,const real_T*G1,const size_t*bin1,const real_T*H2,const real_T*G2,const
size_t*bin2,const real_T*H3,const real_T*G3,const size_t*bin3,const real_T*f,
const size_t*n1,const size_t*n2,const size_t*n3){ex__aHtP2BVh3GTdL9OJAJPQn(fi,
H1,G1,*bin1,H2,G2,*bin2,H3,G3,*bin3,f,*n1,*n2,*n3,true,true);}void
tlu2_3d_linear_linear_derivatives_custom_function_(void*out,const void*in){
const real_T*H1=(const real_T*)((const void*const*)in)[0];const real_T*G1=(
const real_T*)((const void*const*)in)[1];const size_t*bin1=(const size_t*)((
const void*const*)in)[2];const real_T*H2=(const real_T*)((const void*const*)in
)[3];const real_T*G2=(const real_T*)((const void*const*)in)[4];const size_t*
bin2=(const size_t*)((const void*const*)in)[5];const real_T*H3=(const real_T*)
((const void*const*)in)[6];const real_T*G3=(const real_T*)((const void*const*)
in)[7];const size_t*bin3=(const size_t*)((const void*const*)in)[8];const real_T
*f=(const real_T*)((const void*const*)in)[9];const size_t*n1=(const size_t*)((
const void*const*)in)[10];const size_t*n2=(const size_t*)((const void*const*)
in)[11];const size_t*n3=(const size_t*)((const void*const*)in)[12];real_T*fi=(
real_T*)out;tlu2_3d_linear_linear_derivatives(fi,H1,G1,bin1,H2,G2,bin2,H3,G3,
bin3,f,n1,n2,n3);}static void ex__aHtP2BVh3GTdL9OJAJPQn(real_T*fi,const real_T
*H1,const real_T*G1,const size_t bin1,const real_T*H2,const real_T*G2,const
size_t bin2,const real_T*H3,const real_T*G3,const size_t bin3,const real_T*f,
const size_t n1,const size_t n2,const size_t n3,const boolean_T
ex_V0dauSHHy5d6_D42s3Aeag,const boolean_T ex_kMAXUIgm88xvaunhJ2st8X){size_t
ex_FQ8I1Oq4CShSeySHdok3C7=n1*n2;size_t bin=bin1+n1*bin2+
ex_FQ8I1Oq4CShSeySHdok3C7*bin3;size_t ex_FnrjFNs9eQp9V5vCxPaoKw,
ex_FRuIUemzxbdhfqkjXhoyK7,ex_kRXTNbOCUd0KeHaF5Udb_Y;size_t
ex_Fb8WfqABMs_vcqFzZf37Fa,ex_k4UiAV7JSYpMjHsHDM_wV6,ex__Y8nRW2S0zdlXHnGSWOxB7;
fi[0]=0.0;if(ex_kMAXUIgm88xvaunhJ2st8X){fi[1]=0.0;fi[2]=0.0;}for(
ex_kRXTNbOCUd0KeHaF5Udb_Y=0;ex_kRXTNbOCUd0KeHaF5Udb_Y<2;++
ex_kRXTNbOCUd0KeHaF5Udb_Y){ex__Y8nRW2S0zdlXHnGSWOxB7=ex_FQ8I1Oq4CShSeySHdok3C7
*ex_kRXTNbOCUd0KeHaF5Udb_Y+bin;for(ex_FRuIUemzxbdhfqkjXhoyK7=0;
ex_FRuIUemzxbdhfqkjXhoyK7<2;++ex_FRuIUemzxbdhfqkjXhoyK7){
ex_k4UiAV7JSYpMjHsHDM_wV6=n1*ex_FRuIUemzxbdhfqkjXhoyK7+
ex__Y8nRW2S0zdlXHnGSWOxB7;for(ex_FnrjFNs9eQp9V5vCxPaoKw=0;
ex_FnrjFNs9eQp9V5vCxPaoKw<2;++ex_FnrjFNs9eQp9V5vCxPaoKw){
ex_Fb8WfqABMs_vcqFzZf37Fa=ex_FnrjFNs9eQp9V5vCxPaoKw+ex_k4UiAV7JSYpMjHsHDM_wV6;
if(ex_kMAXUIgm88xvaunhJ2st8X){fi[0]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*G1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[ex_FRuIUemzxbdhfqkjXhoyK7]*H3[
ex_kRXTNbOCUd0KeHaF5Udb_Y];fi[1]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*G2[ex_FRuIUemzxbdhfqkjXhoyK7]*H3[
ex_kRXTNbOCUd0KeHaF5Udb_Y];fi[2]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[ex_FRuIUemzxbdhfqkjXhoyK7]*G3[
ex_kRXTNbOCUd0KeHaF5Udb_Y];}else{fi[0]+=f[ex_Fb8WfqABMs_vcqFzZf37Fa]*H1[
ex_FnrjFNs9eQp9V5vCxPaoKw]*H2[ex_FRuIUemzxbdhfqkjXhoyK7]*H3[
ex_kRXTNbOCUd0KeHaF5Udb_Y];}}}}}

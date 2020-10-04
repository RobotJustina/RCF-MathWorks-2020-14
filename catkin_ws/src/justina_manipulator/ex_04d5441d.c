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
static void ex__UlvlrBcJyCQe9g1XKnQTy(real_T*fi,const real_T*H,const real_T*G,
const size_t bin,const real_T*f,const size_t n,const boolean_T
ex_F_tm5fod4xxuguhS49BSQm,const boolean_T ex_kMAXUIgm88xvaunhJ2st8X);static
void ex__KGvif9QwHdpbDAnE0QfcZ(real_T*x,real_T*f,const real_T*xs,const real_T*
fs,const size_t n);void tlu2_1d_linear_nearest_process(real_T*x,real_T*f,const
real_T*xs,const real_T*fs,const size_t*n){ex__KGvif9QwHdpbDAnE0QfcZ(x,f,xs,fs,
*n);}void tlu2_1d_linear_nearest_process_custom_function_(void*out,const void*
in){const real_T*xs=(const real_T*)((const void*const*)in)[0];const real_T*fs=
(const real_T*)((const void*const*)in)[1];const size_t*n=(const size_t*)((
const void*const*)in)[2];real_T*x=(real_T*)((void**)out)[0];real_T*f=(real_T*)
((void**)out)[1];tlu2_1d_linear_nearest_process(x,f,xs,fs,n);}void
tlu2_1d_linear_linear_process(real_T*x,real_T*f,const real_T*xs,const real_T*
fs,const size_t*n){ex__KGvif9QwHdpbDAnE0QfcZ(x,f,xs,fs,*n);}void
tlu2_1d_linear_linear_process_custom_function_(void*out,const void*in){const
real_T*xs=(const real_T*)((const void*const*)in)[0];const real_T*fs=(const
real_T*)((const void*const*)in)[1];const size_t*n=(const size_t*)((const void*
const*)in)[2];real_T*x=(real_T*)((void**)out)[0];real_T*f=(real_T*)((void**)
out)[1];tlu2_1d_linear_linear_process(x,f,xs,fs,n);}static void
ex__KGvif9QwHdpbDAnE0QfcZ(real_T*x,real_T*f,const real_T*xs,const real_T*fs,
const size_t n){memcpy(x,xs,n*sizeof(real_T));memcpy(f,fs,n*sizeof(real_T));
ex_FtfBZE2kLGxyWamCvlRfeQ(x,f,n);}void tlu2_1d_linear_nearest_value(real_T*fi,
const real_T*H,const real_T*G,const size_t*bin,const real_T*f,const size_t*n){
ex__UlvlrBcJyCQe9g1XKnQTy(fi,H,G,*bin,f,*n,false,false);}void
tlu2_1d_linear_nearest_value_custom_function_(void*out,const void*in){const
real_T*H=(const real_T*)((const void*const*)in)[0];const real_T*G=(const real_T
*)((const void*const*)in)[1];const size_t*bin=(const size_t*)((const void*
const*)in)[2];const real_T*f=(const real_T*)((const void*const*)in)[3];const
size_t*n=(const size_t*)((const void*const*)in)[4];real_T*fi=(real_T*)out;
tlu2_1d_linear_nearest_value(fi,H,G,bin,f,n);}void tlu2_1d_linear_linear_value
(real_T*fi,const real_T*H,const real_T*G,const size_t*bin,const real_T*f,const
size_t*n){ex__UlvlrBcJyCQe9g1XKnQTy(fi,H,G,*bin,f,*n,true,false);}void
tlu2_1d_linear_linear_value_custom_function_(void*out,const void*in){const
real_T*H=(const real_T*)((const void*const*)in)[0];const real_T*G=(const real_T
*)((const void*const*)in)[1];const size_t*bin=(const size_t*)((const void*
const*)in)[2];const real_T*f=(const real_T*)((const void*const*)in)[3];const
size_t*n=(const size_t*)((const void*const*)in)[4];real_T*fi=(real_T*)out;
tlu2_1d_linear_linear_value(fi,H,G,bin,f,n);}void
tlu2_1d_linear_nearest_derivatives(real_T*fi,const real_T*H,const real_T*G,
const size_t*bin,const real_T*f,const size_t*n){ex__UlvlrBcJyCQe9g1XKnQTy(fi,H
,G,*bin,f,*n,false,true);}void
tlu2_1d_linear_nearest_derivatives_custom_function_(void*out,const void*in){
const real_T*H=(const real_T*)((const void*const*)in)[0];const real_T*G=(const
real_T*)((const void*const*)in)[1];const size_t*bin=(const size_t*)((const void
*const*)in)[2];const real_T*f=(const real_T*)((const void*const*)in)[3];const
size_t*n=(const size_t*)((const void*const*)in)[4];real_T*fi=(real_T*)out;
tlu2_1d_linear_nearest_derivatives(fi,H,G,bin,f,n);}void
tlu2_1d_linear_linear_derivatives(real_T*fi,const real_T*H,const real_T*G,
const size_t*bin,const real_T*f,const size_t*n){ex__UlvlrBcJyCQe9g1XKnQTy(fi,H
,G,*bin,f,*n,true,true);}void
tlu2_1d_linear_linear_derivatives_custom_function_(void*out,const void*in){
const real_T*H=(const real_T*)((const void*const*)in)[0];const real_T*G=(const
real_T*)((const void*const*)in)[1];const size_t*bin=(const size_t*)((const void
*const*)in)[2];const real_T*f=(const real_T*)((const void*const*)in)[3];const
size_t*n=(const size_t*)((const void*const*)in)[4];real_T*fi=(real_T*)out;
tlu2_1d_linear_linear_derivatives(fi,H,G,bin,f,n);}static void
ex__UlvlrBcJyCQe9g1XKnQTy(real_T*fi,const real_T*H,const real_T*G,const size_t
bin,const real_T*f,const size_t n,const boolean_T ex_F_tm5fod4xxuguhS49BSQm,
const boolean_T ex_kMAXUIgm88xvaunhJ2st8X){if(ex_kMAXUIgm88xvaunhJ2st8X){if(f[
bin]==f[bin+1]){fi[0]=0.0;}else{fi[0]=f[bin]*G[0]+f[bin+1]*G[1];}}else{if(f[
bin]==f[bin+1]){fi[0]=f[bin];}else{fi[0]=f[bin]*H[0]+f[bin+1]*H[1];}}}

#include "pm_std.h"
#include "lang_std.h"
size_t ex_VzC4wVDNwRO2VyQZ1TOBFP(real_T*H,real_T*G,size_t*numEdges,const real_T
*x,const size_t n,const real_T t,const boolean_T*mode,const boolean_T
ex_V0dauSHHy5d6_D42s3Aeag);size_t ex_FSBp3lkv5gpCXL2yT9vLNh(const real_T*x,
const size_t n,const real_T t);void ex_kGRJvwU4WMthWL53sjRCpO(real_T*
ex_F2l4p_g4sn02huHNflQjMH,const size_t n1,const size_t n2,const size_t n3,
const size_t n4,const size_t ex_kyZWlRgyPY_nhaYrzhlz4N,const size_t
ex_VSy0VE52bQSafuDoXEVasH,const size_t ex_keXUKEfwn7pKd9Pw_tgV73,const size_t
ex_FZiPJehSX8hycyX0BLEeoT);void ex_FtfBZE2kLGxyWamCvlRfeQ(real_T*x,real_T*f,
const size_t n);void ex_F4LajttG6uGtbXBJgUNQpW(real_T*x1,real_T*x2,real_T*f,
const size_t n1,const size_t n2);void ex_kIBgcKPC9nhchTKovcabSa(real_T*x1,
real_T*x2,real_T*x3,real_T*f,const size_t n1,const size_t n2,const size_t n3);
void ex_F_6wSEEsvm_1cTAuvwDt9B(real_T*x1,real_T*x2,real_T*x3,real_T*x4,real_T*
f,const size_t n1,const size_t n2,const size_t n3,const size_t n4);size_t
ex_VzC4wVDNwRO2VyQZ1TOBFP(real_T*H,real_T*G,size_t*numEdges,const real_T*x,
const size_t n,const real_T t,const boolean_T*mode,const boolean_T
ex_V0dauSHHy5d6_D42s3Aeag){size_t bin;real_T ex__1EFbmUY_TlBhLJH5Hc_gX;real_T
ex_FfqZXxZ8jd0hY5oz1HhyOh,ex_FBrilljiwYdvbLmVDDMXd7;if(n<2){H[0]=1.0;H[1]=0.0;
G[0]=0.0;G[1]=0.0;*numEdges=1;return 0;}else{*numEdges=2;}if(mode[0]){bin=0;
ex_FfqZXxZ8jd0hY5oz1HhyOh=x[0];ex_FBrilljiwYdvbLmVDDMXd7=x[1];
ex__1EFbmUY_TlBhLJH5Hc_gX=ex_FBrilljiwYdvbLmVDDMXd7-ex_FfqZXxZ8jd0hY5oz1HhyOh;
if(ex__1EFbmUY_TlBhLJH5Hc_gX==0.0){H[0]=0.5;H[1]=0.5;G[0]=0.0;G[1]=0.0;return
bin;}if(ex_V0dauSHHy5d6_D42s3Aeag){H[0]=(ex_FBrilljiwYdvbLmVDDMXd7-t)/
ex__1EFbmUY_TlBhLJH5Hc_gX;H[1]=(t-ex_FfqZXxZ8jd0hY5oz1HhyOh)/
ex__1EFbmUY_TlBhLJH5Hc_gX;G[0]= -1.0/ex__1EFbmUY_TlBhLJH5Hc_gX;G[1]=1.0/
ex__1EFbmUY_TlBhLJH5Hc_gX;}else{H[0]=1.0;H[1]=0.0;G[0]=0.0;G[1]=0.0;}}else if(
!mode[1]){bin=n-2;ex_FfqZXxZ8jd0hY5oz1HhyOh=x[n-2];ex_FBrilljiwYdvbLmVDDMXd7=x
[n-1];ex__1EFbmUY_TlBhLJH5Hc_gX=ex_FBrilljiwYdvbLmVDDMXd7-
ex_FfqZXxZ8jd0hY5oz1HhyOh;if(ex__1EFbmUY_TlBhLJH5Hc_gX==0.0){H[0]=0.5;H[1]=0.5
;G[0]=0.0;G[1]=0.0;return bin;}if(ex_V0dauSHHy5d6_D42s3Aeag){H[0]=(
ex_FBrilljiwYdvbLmVDDMXd7-t)/ex__1EFbmUY_TlBhLJH5Hc_gX;H[1]=(t-
ex_FfqZXxZ8jd0hY5oz1HhyOh)/ex__1EFbmUY_TlBhLJH5Hc_gX;G[0]= -1.0/
ex__1EFbmUY_TlBhLJH5Hc_gX;G[1]=1.0/ex__1EFbmUY_TlBhLJH5Hc_gX;}else{H[0]=0.0;H[
1]=1.0;G[0]=0.0;G[1]=0.0;}}else{bin=ex_FSBp3lkv5gpCXL2yT9vLNh(x,n,t);if(bin<=0
){bin=0;}else if(bin>=n){bin=n-2;}else{--bin;}ex_FfqZXxZ8jd0hY5oz1HhyOh=x[bin]
;ex_FBrilljiwYdvbLmVDDMXd7=x[bin+1];ex__1EFbmUY_TlBhLJH5Hc_gX=
ex_FBrilljiwYdvbLmVDDMXd7-ex_FfqZXxZ8jd0hY5oz1HhyOh;if(
ex__1EFbmUY_TlBhLJH5Hc_gX==0.0){H[0]=0.5;H[1]=0.5;G[0]=0.0;G[1]=0.0;return bin
;}H[0]=(ex_FBrilljiwYdvbLmVDDMXd7-t)/ex__1EFbmUY_TlBhLJH5Hc_gX;H[1]=(t-
ex_FfqZXxZ8jd0hY5oz1HhyOh)/ex__1EFbmUY_TlBhLJH5Hc_gX;G[0]= -1.0/
ex__1EFbmUY_TlBhLJH5Hc_gX;G[1]=1.0/ex__1EFbmUY_TlBhLJH5Hc_gX;}return bin;}

#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
#include "pm_std.h"
static size_t ex__sMnyaZcmZhaWeUxrpgw3G(const real_T x,const real_T*
ex_Vz4Phbp_pz4JdH7ddplnHe,const size_t n){size_t ex_kwrB3ZoKf7OufTHWaHJV7a;if(
x<ex_Vz4Phbp_pz4JdH7ddplnHe[0]){ex_kwrB3ZoKf7OufTHWaHJV7a=0;}else if(x>
ex_Vz4Phbp_pz4JdH7ddplnHe[n-1]){ex_kwrB3ZoKf7OufTHWaHJV7a=n+1;}else{for(
ex_kwrB3ZoKf7OufTHWaHJV7a=1;((ex_kwrB3ZoKf7OufTHWaHJV7a<=n)&&(
ex_Vz4Phbp_pz4JdH7ddplnHe[ex_kwrB3ZoKf7OufTHWaHJV7a-1]<x));++
ex_kwrB3ZoKf7OufTHWaHJV7a);}return ex_kwrB3ZoKf7OufTHWaHJV7a;}static void
ex__qUHpyapw_t__T0XS0Mrgo(const real_T*freqs,const real_T*ys,const size_t*dims
,const size_t ex__wN5g_p_uwdVVLfRtx9szc,const real_T ex_VDtn8RqdwWhs_qgUJLEtPV
,const boolean_T ex_kGoKxM6L3OlEVTfUB_F_3D,real_T*out){const size_t n1=dims[0]
;const size_t n2=dims[1];const real_T*ex_Vz4Phbp_pz4JdH7ddplnHe=freqs;const
real_T*ex_VZgn6mspCZWDhXCUyVe84F=ys;const real_T ex_F2t4dRPejYtBbDb7D3qK7c=
ex_Vz4Phbp_pz4JdH7ddplnHe[ex__wN5g_p_uwdVVLfRtx9szc-2];const real_T
ex_FtMgSTgOes_PYihCyfu_hn=ex_Vz4Phbp_pz4JdH7ddplnHe[ex__wN5g_p_uwdVVLfRtx9szc-
1];size_t ex_kwrB3ZoKf7OufTHWaHJV7a;for(ex_kwrB3ZoKf7OufTHWaHJV7a=0;
ex_kwrB3ZoKf7OufTHWaHJV7a<n1*n2;++ex_kwrB3ZoKf7OufTHWaHJV7a){const real_T
ex__Uzvbo9F_XKie1NRF_kru_=ex_VZgn6mspCZWDhXCUyVe84F[n1*n2*(
ex__wN5g_p_uwdVVLfRtx9szc-2)+ex_kwrB3ZoKf7OufTHWaHJV7a];const real_T
ex_FduI9UN_IPh4eyGpCU7CGQ=ex_VZgn6mspCZWDhXCUyVe84F[n1*n2*(
ex__wN5g_p_uwdVVLfRtx9szc-1)+ex_kwrB3ZoKf7OufTHWaHJV7a];if(
ex_kGoKxM6L3OlEVTfUB_F_3D){out[ex_kwrB3ZoKf7OufTHWaHJV7a]=(
ex_FduI9UN_IPh4eyGpCU7CGQ-ex__Uzvbo9F_XKie1NRF_kru_)/(
ex_FtMgSTgOes_PYihCyfu_hn-ex_F2t4dRPejYtBbDb7D3qK7c);}else{const real_T
ex_kej2A2rxXOplXXdWgArNa_=(ex_VDtn8RqdwWhs_qgUJLEtPV-ex_F2t4dRPejYtBbDb7D3qK7c
)/(ex_FtMgSTgOes_PYihCyfu_hn-ex_F2t4dRPejYtBbDb7D3qK7c);out[
ex_kwrB3ZoKf7OufTHWaHJV7a]=(ex__Uzvbo9F_XKie1NRF_kru_+
ex_kej2A2rxXOplXXdWgArNa_*(ex_FduI9UN_IPh4eyGpCU7CGQ-ex__Uzvbo9F_XKie1NRF_kru_
));}}}void tlu_simrf_F(real_T*out,const real_T*freqs,const real_T*ys,const
real_T*ex_V92iMZ2QonheVPFK4uIVQD,const size_t*dims){const size_t n1=dims[0];
const size_t n2=dims[1];const size_t ex__Yovi3amp7hEjLglVC5SmX=dims[2];const
real_T freq= *ex_V92iMZ2QonheVPFK4uIVQD;const size_t ex__wN5g_p_uwdVVLfRtx9szc
=ex__sMnyaZcmZhaWeUxrpgw3G(freq,freqs,ex__Yovi3amp7hEjLglVC5SmX);if(
ex__wN5g_p_uwdVVLfRtx9szc>=ex__Yovi3amp7hEjLglVC5SmX+1){size_t
ex_kwrB3ZoKf7OufTHWaHJV7a;for(ex_kwrB3ZoKf7OufTHWaHJV7a=0;
ex_kwrB3ZoKf7OufTHWaHJV7a<n1*n2;++ex_kwrB3ZoKf7OufTHWaHJV7a){out[
ex_kwrB3ZoKf7OufTHWaHJV7a]=ys[n1*n2*(ex__Yovi3amp7hEjLglVC5SmX-1)+
ex_kwrB3ZoKf7OufTHWaHJV7a];}}else if(ex__wN5g_p_uwdVVLfRtx9szc<=1){size_t
ex_kwrB3ZoKf7OufTHWaHJV7a;for(ex_kwrB3ZoKf7OufTHWaHJV7a=0;
ex_kwrB3ZoKf7OufTHWaHJV7a<n1*n2;++ex_kwrB3ZoKf7OufTHWaHJV7a){out[
ex_kwrB3ZoKf7OufTHWaHJV7a]=ys[ex_kwrB3ZoKf7OufTHWaHJV7a];}}else{
ex__qUHpyapw_t__T0XS0Mrgo(freqs,ys,dims,ex__wN5g_p_uwdVVLfRtx9szc,freq,false,
out);}}void tlu_simrf_F_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){real_T*out=(real_T*)
ex_kBjdZCqdGxxriTLiPTxn4N;const real_T*freqs=(const real_T*)((const void*const
*)ex_VkFC2hfrNV8lYiAOFp8tS1)[0];const real_T*ys=(const real_T*)((const void*
const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[1];const real_T*freq=(const real_T*)((const
void*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[2];const size_t*dims=(const size_t*)((
const void*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[3];tlu_simrf_F(out,freqs,ys,freq,
dims);}void tlu_simrf_DF(real_T*out,const real_T*freqs,const real_T*ys,const
real_T*ex_V92iMZ2QonheVPFK4uIVQD,const size_t*dims){const size_t n1=dims[0];
const size_t n2=dims[1];const size_t ex__Yovi3amp7hEjLglVC5SmX=dims[2];const
real_T freq= *ex_V92iMZ2QonheVPFK4uIVQD;const size_t ex__wN5g_p_uwdVVLfRtx9szc
=ex__sMnyaZcmZhaWeUxrpgw3G(freq,freqs,ex__Yovi3amp7hEjLglVC5SmX);if((
ex__wN5g_p_uwdVVLfRtx9szc>=ex__Yovi3amp7hEjLglVC5SmX+1)||(
ex__wN5g_p_uwdVVLfRtx9szc<=1)){size_t ex_kwrB3ZoKf7OufTHWaHJV7a;for(
ex_kwrB3ZoKf7OufTHWaHJV7a=0;ex_kwrB3ZoKf7OufTHWaHJV7a<n1*n2;++
ex_kwrB3ZoKf7OufTHWaHJV7a){out[ex_kwrB3ZoKf7OufTHWaHJV7a]=0.0;}}else{
ex__qUHpyapw_t__T0XS0Mrgo(freqs,ys,dims,ex__wN5g_p_uwdVVLfRtx9szc,freq,true,
out);}}void tlu_simrf_DF_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){real_T*out=(real_T*)
ex_kBjdZCqdGxxriTLiPTxn4N;const real_T*freqs=(const real_T*)((const void*const
*)ex_VkFC2hfrNV8lYiAOFp8tS1)[0];const real_T*ys=(const real_T*)((const void*
const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[1];const real_T*freq=(const real_T*)((const
void*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[2];const size_t*dims=(const size_t*)((
const void*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[3];tlu_simrf_DF(out,freqs,ys,freq
,dims);}

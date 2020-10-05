#include "pm_std.h"
#include "lang_std.h"
#include "external_std.h"
extern int32_T ex_kAGatx_ZQ6OiVLnUjuqSAR(const int32_T);extern int32_T
ex_FaQw_ffuc7xT_q_mbYdzir(uint32_T);
#include "math.h"
static void ex_VdO_UbGQkxGTb1eqborJDZ(int32_T ex_kXqFOFSw4jlGWLYvFkyk1m,
int32_T*const out){int32_T ex__P62gPTDu_GtjP1J7m5AOp;int32_T
ex__CId_jRUNKCqWiTOyT1NQx;real_T ex_FhygHBqmHYx1jHeiQn8ZVj;real_T
ex_kNbvLmFI_EtAay5OpgNJFz;do{ex_kXqFOFSw4jlGWLYvFkyk1m=
ex_kAGatx_ZQ6OiVLnUjuqSAR(ex_kXqFOFSw4jlGWLYvFkyk1m);ex__P62gPTDu_GtjP1J7m5AOp
=ex_kXqFOFSw4jlGWLYvFkyk1m;ex_FhygHBqmHYx1jHeiQn8ZVj=2.0*
4.6566128752457969e-10*ex__P62gPTDu_GtjP1J7m5AOp-1.0;ex_kXqFOFSw4jlGWLYvFkyk1m
=ex_kAGatx_ZQ6OiVLnUjuqSAR(ex_kXqFOFSw4jlGWLYvFkyk1m);
ex__CId_jRUNKCqWiTOyT1NQx=ex_kXqFOFSw4jlGWLYvFkyk1m;ex_kNbvLmFI_EtAay5OpgNJFz=
2.0*4.6566128752457969e-10*ex__CId_jRUNKCqWiTOyT1NQx-1.0;}while(
ex_FhygHBqmHYx1jHeiQn8ZVj*ex_FhygHBqmHYx1jHeiQn8ZVj+ex_kNbvLmFI_EtAay5OpgNJFz*
ex_kNbvLmFI_EtAay5OpgNJFz>1.0);out[0]=ex__P62gPTDu_GtjP1J7m5AOp;out[1]=
ex__CId_jRUNKCqWiTOyT1NQx;}void compute_gaussian_value(real_T*out,const real_T
*mean,const real_T*sqrtvar,const int32_T*seed){real_T ex_FhygHBqmHYx1jHeiQn8ZVj
=2*4.6566128752457969e-10*seed[0]-1.0;real_T ex_kNbvLmFI_EtAay5OpgNJFz=2*
4.6566128752457969e-10*seed[1]-1.0;ex_kNbvLmFI_EtAay5OpgNJFz=
ex_kNbvLmFI_EtAay5OpgNJFz*ex_kNbvLmFI_EtAay5OpgNJFz+ex_FhygHBqmHYx1jHeiQn8ZVj*
ex_FhygHBqmHYx1jHeiQn8ZVj;out[0]=(sqrt(-2.0*log(ex_kNbvLmFI_EtAay5OpgNJFz)/
ex_kNbvLmFI_EtAay5OpgNJFz)*ex_FhygHBqmHYx1jHeiQn8ZVj)*sqrtvar[0]+mean[0];}void
compute_gaussian_value_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue in){const real_T*mean=(const real_T*)((const void*const*)in)[0];
const real_T*ex_VYo2Mm0MLwSwemVoyqJ3lF=(const real_T*)((const void*const*)in)[
1];const int32_T*seed=(const int32_T*)((const void*const*)in)[2];real_T*out=(
real_T*)ex_kBjdZCqdGxxriTLiPTxn4N;compute_gaussian_value(out,mean,
ex_VYo2Mm0MLwSwemVoyqJ3lF,seed);}void update_gaussian_seed(int32_T*out,const
int32_T*x){ex_VdO_UbGQkxGTb1eqborJDZ(x[1],out);}void
update_gaussian_seed_custom_function_(PMValue ex_kBjdZCqdGxxriTLiPTxn4N,
ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){const int32_T*x=(const int32_T*)((
const void*const*)ex_VkFC2hfrNV8lYiAOFp8tS1)[0];int32_T*out=(int32_T*)
ex_kBjdZCqdGxxriTLiPTxn4N;update_gaussian_seed(out,x);}void init_gaussian_seed
(int32_T*out,const uint32_T*x){int32_T ex_k9vhyFTMKOdYgysUqibCZU=
ex_FaQw_ffuc7xT_q_mbYdzir(x[0]);ex_VdO_UbGQkxGTb1eqborJDZ(
ex_k9vhyFTMKOdYgysUqibCZU,out);}void init_gaussian_seed_custom_function_(
PMValue ex_kBjdZCqdGxxriTLiPTxn4N,ConstPMValue ex_VkFC2hfrNV8lYiAOFp8tS1){
const uint32_T*x=(const uint32_T*)((const void*const*)
ex_VkFC2hfrNV8lYiAOFp8tS1)[0];int32_T*out=(int32_T*)ex_kBjdZCqdGxxriTLiPTxn4N;
init_gaussian_seed(out,x);}

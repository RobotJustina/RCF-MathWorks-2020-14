#include "pm_std.h"
#include "pm_std.h"
size_t ssc_sli_ksolb91lzZ4VaHxhziDoaQ(const PmSparsityPattern*
mc__srK5LmyWw42ZyPnbOWDWJ,const PmRealVector*x,size_t
ssc_sli_FKySES0vPzxeVPkVt80QKX);
#include "mc_std.h"
const McLinearAlgebraFactory*ssc_sli_Vo6yP2kZL8_UYHq0yxrj9D(size_t
ssc_sli__jwySfHyx1SXgXJeVWoIzb);
#include "pm_std.h"
#include "mc_std.h"
#include "limits.h"
size_t ssc_sli_ksolb91lzZ4VaHxhziDoaQ(const PmSparsityPattern*
mc__srK5LmyWw42ZyPnbOWDWJ,const PmRealVector*x,size_t
ssc_sli_FKySES0vPzxeVPkVt80QKX){const McLinearAlgebraFactory*
mc_FX_ivTD1E1K3Z16XUq1VHF=ssc_sli_Vo6yP2kZL8_UYHq0yxrj9D(
mc__srK5LmyWw42ZyPnbOWDWJ->mNumCol);McLinearAlgebra*
ssc_sli__0xU0_E8oSpudDd_rCbZZJ=NULL;int32_T ssc_sli_k4M7bSEmThKJbirXUDQgS6=
mc_FX_ivTD1E1K3Z16XUq1VHF->mCreateLinearAlgebra(mc_FX_ivTD1E1K3Z16XUq1VHF,&
ssc_sli__0xU0_E8oSpudDd_rCbZZJ,mc__srK5LmyWw42ZyPnbOWDWJ);size_t
mc_V2mBNcV1EqCifyH9UdCbkF=0;;ssc_sli_k4M7bSEmThKJbirXUDQgS6=
ssc_sli__0xU0_E8oSpudDd_rCbZZJ->mFactor(ssc_sli__0xU0_E8oSpudDd_rCbZZJ,x->mX);
if(ssc_sli_k4M7bSEmThKJbirXUDQgS6==MC_LA_OK){const size_t
ssc_sli_VNQzpLALKA_zfLFvcb_LsX=(size_t)-1;if(ssc_sli_FKySES0vPzxeVPkVt80QKX>
sizeof(size_t)*CHAR_BIT){mc_V2mBNcV1EqCifyH9UdCbkF=
ssc_sli_VNQzpLALKA_zfLFvcb_LsX;}else{size_t ssc_sli_kAl5DlN6chhWVi27H8xSg4=(
size_t)1<<(ssc_sli_FKySES0vPzxeVPkVt80QKX);size_t
ssc_sli_V1by6O3tkudiiujUtDbUaK=ssc_sli__0xU0_E8oSpudDd_rCbZZJ->mMemusage(
ssc_sli__0xU0_E8oSpudDd_rCbZZJ);size_t ssc_sli_kh3esLctKtOzXH7Y0LDG8B=
ssc_sli_kAl5DlN6chhWVi27H8xSg4*ssc_sli_V1by6O3tkudiiujUtDbUaK;;if(
ssc_sli_kh3esLctKtOzXH7Y0LDG8B/ssc_sli_V1by6O3tkudiiujUtDbUaK!=
ssc_sli_kAl5DlN6chhWVi27H8xSg4){mc_V2mBNcV1EqCifyH9UdCbkF=
ssc_sli_VNQzpLALKA_zfLFvcb_LsX;}else{mc_V2mBNcV1EqCifyH9UdCbkF=
ssc_sli_kh3esLctKtOzXH7Y0LDG8B;}}}else{mc_V2mBNcV1EqCifyH9UdCbkF=0;}
ssc_sli__0xU0_E8oSpudDd_rCbZZJ->mDestructor(ssc_sli__0xU0_E8oSpudDd_rCbZZJ);
return mc_V2mBNcV1EqCifyH9UdCbkF;}

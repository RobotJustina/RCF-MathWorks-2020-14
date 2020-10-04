#include "pm_std.h"
#include "lang_std.h"
extern int32_T ex_kAGatx_ZQ6OiVLnUjuqSAR(const int32_T);extern int32_T
ex_FaQw_ffuc7xT_q_mbYdzir(uint32_T);int32_T ex_kAGatx_ZQ6OiVLnUjuqSAR(const
int32_T seed){int32_T ex___aedK39Pax6Ziebprhh0i;int32_T
ex__7SfbnIfBcGZYinikDTuBC;int32_T ex__AcK71fm_9SHheABn1_QVs;
ex___aedK39Pax6Ziebprhh0i=seed%127773*16807;ex__7SfbnIfBcGZYinikDTuBC=seed/
127773*2836;if(ex___aedK39Pax6Ziebprhh0i<ex__7SfbnIfBcGZYinikDTuBC){
ex__AcK71fm_9SHheABn1_QVs=2147483647-(ex__7SfbnIfBcGZYinikDTuBC-
ex___aedK39Pax6Ziebprhh0i);}else{ex__AcK71fm_9SHheABn1_QVs=
ex___aedK39Pax6Ziebprhh0i-ex__7SfbnIfBcGZYinikDTuBC;}return
ex__AcK71fm_9SHheABn1_QVs;}int32_T ex_FaQw_ffuc7xT_q_mbYdzir(uint32_T
ex_FehRN7m_JSGYWPp1VElnVT){int32_T ex_kUQBO1dSP8_IVqRAUx4R8G=(int32_T)(
ex_FehRN7m_JSGYWPp1VElnVT>>16U);int32_T t=(int32_T)(ex_FehRN7m_JSGYWPp1VElnVT&
32768U);ex_FehRN7m_JSGYWPp1VElnVT=((((ex_FehRN7m_JSGYWPp1VElnVT-((uint32_T)
ex_kUQBO1dSP8_IVqRAUx4R8G<<16U))+(uint32_T)t)<<16U)+(uint32_T)t)+(uint32_T)
ex_kUQBO1dSP8_IVqRAUx4R8G;if(ex_FehRN7m_JSGYWPp1VElnVT<1U){
ex_FehRN7m_JSGYWPp1VElnVT=1144108930U;}else{if(ex_FehRN7m_JSGYWPp1VElnVT>
2147483646U){ex_FehRN7m_JSGYWPp1VElnVT=2147483646U;}}return(int32_T)
ex_FehRN7m_JSGYWPp1VElnVT;}

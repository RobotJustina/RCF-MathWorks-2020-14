#ifndef __sm_contactForceSupport_h__
#define __sm_contactForceSupport_h__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void sm_core_compiler_computeContactWrenches(real_T dist,const real_T*
extremePointBase,const real_T*extremePointFoll,const real_T*normalBase,const
real_T*normalFoll,const real_T*Bapp,const real_T*Fapp,const real_T*Bfull,const
real_T*Ffull,const real_T*VbBase,const real_T*VbFoll,int normalForceMode,int
frictionalForceMode,real_T springConstant,real_T damperConstant,real_T
transRegWidth,real_T coeffDynamicFric,real_T staticFricMult,real_T
velocityDivisor,real_T*baseContactWrench,real_T*follContactWrench);void
sm_core_compiler_computeContactOutputs(real_T dist,const real_T*
extremePointBase0,const real_T*extremePointFoll0,const real_T*normalBase0,
const real_T*normalFoll0,const real_T*Bapp,const real_T*Fapp,const real_T*
Bfull,const real_T*Ffull,const real_T*VbBase,const real_T*VbFoll,int
normalForceMode,int frictionalForceMode,real_T springConstant,real_T
damperConstant,real_T transRegWidth,real_T coeffDynamicFric,real_T
staticFricMult,real_T velocityDivisor,real_T*normalForce,real_T*
frictionalForceMag);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __sm_contactForceSupport_h__ */

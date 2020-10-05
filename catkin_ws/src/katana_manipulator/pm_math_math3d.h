#ifndef __pm_math_math3d_h__
#define __pm_math_math3d_h__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
struct pm_math_Vector3Tag{real_T x;real_T y;real_T z;};typedef struct
pm_math_Vector3Tag pm_math_Vector3;struct pm_math_QuaternionTag{real_T s;
real_T x;real_T y;real_T z;};typedef struct pm_math_QuaternionTag
pm_math_Quaternion;struct pm_math_Matrix3x3Tag{real_T xx,xy,xz;real_T yx,yy,yz
;real_T zx,zy,zz;};typedef struct pm_math_Matrix3x3Tag pm_math_Matrix3x3;
struct pm_math_Transform3Tag{pm_math_Quaternion Q;pm_math_Vector3 d;};typedef
struct pm_math_Transform3Tag pm_math_Transform3;struct pm_math_SpatialVectorTag
{pm_math_Vector3 angular;pm_math_Vector3 linear;};typedef struct
pm_math_SpatialVectorTag pm_math_SpatialVector;void pm_math_Vector3_add(const
pm_math_Vector3*v0,const pm_math_Vector3*v1,pm_math_Vector3*result);void
pm_math_Vector3_subtract(const pm_math_Vector3*v0,const pm_math_Vector3*v1,
pm_math_Vector3*result);void pm_math_Vector3_negate(const pm_math_Vector3*v,
pm_math_Vector3*result);void pm_math_Vector3_scale(const pm_math_Vector3*v,
real_T s,pm_math_Vector3*result);void pm_math_Vector3_divide(const
pm_math_Vector3*v,real_T s,pm_math_Vector3*result);void
pm_math_Vector3_guardedDivide(const pm_math_Vector3*v,real_T s,pm_math_Vector3
*result);real_T pm_math_Vector3_norm(const pm_math_Vector3*v);void
pm_math_Vector3_unit(const pm_math_Vector3*v,pm_math_Vector3*result);void
pm_math_Vector3_guardedUnit(const pm_math_Vector3*v,pm_math_Vector3*result);
real_T pm_math_Vector3_dot(const pm_math_Vector3*v0,const pm_math_Vector3*v1);
void pm_math_Vector3_cross(const pm_math_Vector3*v0,const pm_math_Vector3*v1,
pm_math_Vector3*result);void pm_math_Vector3_compOrthogonalBasis(const
pm_math_Vector3*v,pm_math_Vector3*i,pm_math_Vector3*j,pm_math_Vector3*k);void
pm_math_Quaternion_compose(const pm_math_Quaternion*Q0,const pm_math_Quaternion
*Q1,pm_math_Quaternion*result);void pm_math_Quaternion_composeInverse(const
pm_math_Quaternion*Q0,const pm_math_Quaternion*Q1,pm_math_Quaternion*result);
void pm_math_Quaternion_inverseCompose(const pm_math_Quaternion*Q0,const
pm_math_Quaternion*Q1,pm_math_Quaternion*result);void pm_math_Quaternion_xform
(const pm_math_Quaternion*Q,const pm_math_Vector3*v,pm_math_Vector3*result);
void pm_math_Quaternion_inverseXform(const pm_math_Quaternion*Q,const
pm_math_Vector3*v,pm_math_Vector3*result);void pm_math_Quaternion_Matrix3x3Ctor
(const pm_math_Matrix3x3*R,pm_math_Quaternion*Q);void pm_math_Matrix3x3_compose
(const pm_math_Matrix3x3*A0,const pm_math_Matrix3x3*A1,pm_math_Matrix3x3*
result);void pm_math_Matrix3x3_composeTranspose(const pm_math_Matrix3x3*A0,
const pm_math_Matrix3x3*A1,pm_math_Matrix3x3*result);void
pm_math_Matrix3x3_transposeCompose(const pm_math_Matrix3x3*A0,const
pm_math_Matrix3x3*A1,pm_math_Matrix3x3*result);void pm_math_Matrix3x3_preCross
(const pm_math_Matrix3x3*A,const pm_math_Vector3*v,pm_math_Matrix3x3*result);
void pm_math_Matrix3x3_postCross(const pm_math_Matrix3x3*A,const
pm_math_Vector3*v,pm_math_Matrix3x3*result);void pm_math_Matrix3x3_xform(const
pm_math_Matrix3x3*A,const pm_math_Vector3*v,pm_math_Vector3*result);void
pm_math_Matrix3x3_transposeXform(const pm_math_Matrix3x3*A,const
pm_math_Vector3*v,pm_math_Vector3*result);void pm_math_Transform3_compose(
const pm_math_Transform3*T0,const pm_math_Transform3*T1,pm_math_Transform3*
result);void pm_math_Transform3_composeInverse(const pm_math_Transform3*T0,
const pm_math_Transform3*T1,pm_math_Transform3*result);void
pm_math_Transform3_inverseCompose(const pm_math_Transform3*T0,const
pm_math_Transform3*T1,pm_math_Transform3*result);void
pm_math_Transform3_xformDir(const pm_math_Transform3*T,const pm_math_Vector3*u
,pm_math_Vector3*result);void pm_math_Transform3_inverseXformDir(const
pm_math_Transform3*T,const pm_math_Vector3*u,pm_math_Vector3*result);void
pm_math_Transform3_xformPoint(const pm_math_Transform3*T,const pm_math_Vector3
*p,pm_math_Vector3*result);void pm_math_Transform3_inverseXformPoint(const
pm_math_Transform3*T,const pm_math_Vector3*p,pm_math_Vector3*result);void
pm_math_SpatialVector_add(const pm_math_SpatialVector*v0,const
pm_math_SpatialVector*v1,pm_math_SpatialVector*result);void
pm_math_SpatialVector_subtract(const pm_math_SpatialVector*v0,const
pm_math_SpatialVector*v1,pm_math_SpatialVector*result);void
pm_math_SpatialVector_xform(const pm_math_SpatialVector*v,const
pm_math_Transform3*T,pm_math_SpatialVector*result);void
pm_math_SpatialVector_inverseXform(const pm_math_SpatialVector*v,const
pm_math_Transform3*T,pm_math_SpatialVector*result);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __pm_math_math3d_h__ */

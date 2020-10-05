#ifndef __sm_geometrySupportFunctions_h__
#define __sm_geometrySupportFunctions_h__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
void polyhedronSupport(const void*geom,const pm_math_Vector3*dir_vec,
pm_math_Vector3*point);void brickSupport(const void*geom,const pm_math_Vector3
*dir,pm_math_Vector3*point);void cylinderSupport(const void*geom,const
pm_math_Vector3*dir,pm_math_Vector3*point);void sphereSupport(const void*geom,
const pm_math_Vector3*dir,pm_math_Vector3*point);void ellipsoidSupport(const
void*geom,const pm_math_Vector3*dir,pm_math_Vector3*point);void
cylinderSupportAnalytical(const void*geom,const pm_math_Vector3*dir,
pm_math_Vector3*point);real_T polyhedronScale(const
sm_core_compiler_ConvexPolyhedron*cxpoly);real_T brickScale(const
sm_core_compiler_Brick*brick);real_T cylinderScale(const
sm_core_compiler_Cylinder*cylinder);real_T sphereScale(const
sm_core_compiler_Sphere*sphere);real_T ellipsoidScale(const
sm_core_compiler_Ellipsoid*ellipsoid);void improveCylinderAccuracy(real_T*
min_dist,const sm_core_compiler_Cylinder*cylinder,const pm_math_Transform3*
tCylinder,const pm_math_Transform3*tOther,pm_math_Vector3*extremePointCylinder
,pm_math_Vector3*extremePointOther,pm_math_Vector3*normalCylinder,
pm_math_Vector3*normalOther);void improveSphereAccuracy(real_T*min_dist,const
sm_core_compiler_Sphere*sphere,const pm_math_Transform3*tSphere,const
pm_math_Transform3*tOther,pm_math_Vector3*extremePointSphere,pm_math_Vector3*
extremePointOther,pm_math_Vector3*normalSphere,pm_math_Vector3*normalOther);
void improveEllipsoidAccuracy(real_T*min_dist,const sm_core_compiler_Ellipsoid
*ellipsoid,const pm_math_Transform3*tEllipsoid,const pm_math_Transform3*tOther
,pm_math_Vector3*extremePointEllipsoid,pm_math_Vector3*extremePointOther,
pm_math_Vector3*normalEllipsoid,pm_math_Vector3*normalOther);boolean_T
improveBrickFaceNormal(const sm_core_compiler_Brick*brick,const
pm_math_Transform3*tBrick,const pm_math_Transform3*tOther,const pm_math_Vector3
*extremePointBrick,pm_math_Vector3*normalBrick,pm_math_Vector3*normalOther);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __sm_geometrySupportFunctions_h__ */

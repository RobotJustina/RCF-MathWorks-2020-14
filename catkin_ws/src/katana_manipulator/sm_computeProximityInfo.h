#ifndef __sm_computeProximityInfo_h__
#define __sm_computeProximityInfo_h__
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
struct sm_core_compiler_SphereTag{double radius;};typedef struct
sm_core_compiler_SphereTag sm_core_compiler_Sphere;struct
sm_core_compiler_BrickTag{pm_math_Vector3 size;};typedef struct
sm_core_compiler_BrickTag sm_core_compiler_Brick;struct
sm_core_compiler_CylinderTag{double radius;double length;};typedef struct
sm_core_compiler_CylinderTag sm_core_compiler_Cylinder;struct
sm_core_compiler_EllipsoidTag{pm_math_Vector3 halfSize;};typedef struct
sm_core_compiler_EllipsoidTag sm_core_compiler_Ellipsoid;struct
sm_core_compiler_ConvexPolyhedronTag{const double*hullPoints;const int*vxIndex
;const int*vxValency;int numHullPoints;const int*vxAdjacencyGraph;int graphSize
;const int*seedVxIds;double diagonalAABB;};typedef struct
sm_core_compiler_ConvexPolyhedronTag sm_core_compiler_ConvexPolyhedron;real_T
sm_core_compiler_computeSignedDistanceSphereSphere(const
sm_core_compiler_Sphere*sphere0,const sm_core_compiler_Sphere*sphere1,const
pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoSphereSphere(const sm_core_compiler_Sphere
*sphere0,const sm_core_compiler_Sphere*sphere1,const pm_math_Transform3*T0,
const pm_math_Transform3*T1,pm_math_Vector3*extremePoint0,pm_math_Vector3*
extremePoint1,pm_math_Vector3*normal0,pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceBrickSphere(const sm_core_compiler_Brick
*brick,const sm_core_compiler_Sphere*sphere,const pm_math_Transform3*TBrick,
const pm_math_Transform3*TSphere);real_T
sm_core_compiler_computeProximityInfoBrickSphere(const sm_core_compiler_Brick*
brick,const sm_core_compiler_Sphere*sphere,const pm_math_Transform3*TBrick,
const pm_math_Transform3*TSphere,pm_math_Vector3*extremePointBrick,
pm_math_Vector3*extremePointSphere,pm_math_Vector3*normalBrick,pm_math_Vector3
*normalSphere);real_T sm_core_compiler_computeSignedDistanceCylinderSphere(
const sm_core_compiler_Cylinder*cylinder,const sm_core_compiler_Sphere*sphere,
const pm_math_Transform3*TCylinder,const pm_math_Transform3*TSphere);real_T
sm_core_compiler_computeProximityInfoCylinderSphere(const
sm_core_compiler_Cylinder*cylinder,const sm_core_compiler_Sphere*sphere,const
pm_math_Transform3*TCylinder,const pm_math_Transform3*TSphere,pm_math_Vector3*
extremePointCylinder,pm_math_Vector3*extremePointSphere,pm_math_Vector3*
normalCylinder,pm_math_Vector3*normalSphere);real_T
sm_core_compiler_computeSignedDistanceCylinderCylinder(const
sm_core_compiler_Cylinder*cylinderA,const sm_core_compiler_Cylinder*cylinderB,
const pm_math_Transform3*TCylA,const pm_math_Transform3*TCylb);real_T
sm_core_compiler_computeProximityInfoCylinderCylinder(const
sm_core_compiler_Cylinder*cylinderA,const sm_core_compiler_Cylinder*cylinderB,
const pm_math_Transform3*TCylA,const pm_math_Transform3*TCylb,pm_math_Vector3*
extremePointCylA,pm_math_Vector3*extremePointCylB,pm_math_Vector3*normalCylA,
pm_math_Vector3*normalCylB);real_T
sm_core_compiler_computeSignedDistanceBrickCylinder(const
sm_core_compiler_Brick*brick,const sm_core_compiler_Cylinder*cylinder,const
pm_math_Transform3*TBrick,const pm_math_Transform3*TCylinder);real_T
sm_core_compiler_computeProximityInfoBrickCylinder(const sm_core_compiler_Brick
*brick,const sm_core_compiler_Cylinder*cylinder,const pm_math_Transform3*
TBrick,const pm_math_Transform3*TCylinder,pm_math_Vector3*extremePointBrick,
pm_math_Vector3*extremePointCylinder,pm_math_Vector3*normalBrick,
pm_math_Vector3*normalCylinder);real_T
sm_core_compiler_computeSignedDistanceBrickBrick(const sm_core_compiler_Brick*
brick0,const sm_core_compiler_Brick*brick1,const pm_math_Transform3*T0,const
pm_math_Transform3*T1);real_T sm_core_compiler_computeProximityInfoBrickBrick(
const sm_core_compiler_Brick*brick0,const sm_core_compiler_Brick*brick1,const
pm_math_Transform3*T0,const pm_math_Transform3*T1,pm_math_Vector3*
extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*normal0,
pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceCxpolyCxpoly(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const
sm_core_compiler_ConvexPolyhedron*cxpoly1,const pm_math_Transform3*T0,const
pm_math_Transform3*T1);real_T sm_core_compiler_computeProximityInfoCxpolyCxpoly
(const sm_core_compiler_ConvexPolyhedron*cxpoly0,const
sm_core_compiler_ConvexPolyhedron*cxpoly1,const pm_math_Transform3*T0,const
pm_math_Transform3*T1,pm_math_Vector3*extremePoint0,pm_math_Vector3*
extremePoint1,pm_math_Vector3*normal0,pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceCxpolyBrick(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Brick*brick1,
const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoCxpolyBrick(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Brick*brick1,
const pm_math_Transform3*T0,const pm_math_Transform3*T1,pm_math_Vector3*
extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*normal0,
pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceBrickEllipsoid(const
sm_core_compiler_Brick*brick0,const sm_core_compiler_Ellipsoid*ellipsoid1,
const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoBrickEllipsoid(const
sm_core_compiler_Brick*brick0,const sm_core_compiler_Ellipsoid*ellipsoid1,
const pm_math_Transform3*T0,const pm_math_Transform3*T1,pm_math_Vector3*
extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*normal0,
pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceCxpolyCylinder(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Cylinder*
cylinder1,const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoCxpolyCylinder(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Cylinder*
cylinder1,const pm_math_Transform3*T0,const pm_math_Transform3*T1,
pm_math_Vector3*extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*
normal0,pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceCylinderEllipsoid(const
sm_core_compiler_Cylinder*cylinder0,const sm_core_compiler_Ellipsoid*
ellipsoid1,const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoCylinderEllipsoid(const
sm_core_compiler_Cylinder*cylinder0,const sm_core_compiler_Ellipsoid*
ellipsoid1,const pm_math_Transform3*T0,const pm_math_Transform3*T1,
pm_math_Vector3*extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*
normal0,pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceCxpolySphere(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Sphere*
sphere1,const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoCxpolySphere(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Sphere*
sphere1,const pm_math_Transform3*T0,const pm_math_Transform3*T1,
pm_math_Vector3*extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*
normal0,pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceSphereEllipsoid(const
sm_core_compiler_Sphere*sphere0,const sm_core_compiler_Ellipsoid*ellipsoid1,
const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoSphereEllipsoid(const
sm_core_compiler_Sphere*sphere0,const sm_core_compiler_Ellipsoid*ellipsoid1,
const pm_math_Transform3*T0,const pm_math_Transform3*T1,pm_math_Vector3*
extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*normal0,
pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceCxpolyEllipsoid(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Ellipsoid*
ellipsoid1,const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoCxpolyEllipsoid(const
sm_core_compiler_ConvexPolyhedron*cxpoly0,const sm_core_compiler_Ellipsoid*
ellipsoid1,const pm_math_Transform3*T0,const pm_math_Transform3*T1,
pm_math_Vector3*extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*
normal0,pm_math_Vector3*normal1);real_T
sm_core_compiler_computeSignedDistanceEllipsoidEllipsoid(const
sm_core_compiler_Ellipsoid*ellipsoid0,const sm_core_compiler_Ellipsoid*
ellipsoid1,const pm_math_Transform3*T0,const pm_math_Transform3*T1);real_T
sm_core_compiler_computeProximityInfoEllipsoidEllipsoid(const
sm_core_compiler_Ellipsoid*ellipsoid0,const sm_core_compiler_Ellipsoid*
ellipsoid1,const pm_math_Transform3*T0,const pm_math_Transform3*T1,
pm_math_Vector3*extremePoint0,pm_math_Vector3*extremePoint1,pm_math_Vector3*
normal0,pm_math_Vector3*normal1);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __sm_computeProximityInfo_h__ */

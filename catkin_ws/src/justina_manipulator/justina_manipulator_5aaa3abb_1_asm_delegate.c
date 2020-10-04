/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'justina_manipulator/Manipulator/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"

void justina_manipulator_5aaa3abb_1_setTargets(const RuntimeDerivedValuesBundle *
  rtdv, CTarget *targets)
{
  (void) rtdv;
  (void) targets;
}

void justina_manipulator_5aaa3abb_1_resetAsmStateVector(const void *mech, double
  *state)
{
  double xx[1];
  (void) mech;
  xx[0] = 0.0;
  state[0] = xx[0];
  state[1] = xx[0];
  state[2] = xx[0];
  state[3] = xx[0];
  state[4] = xx[0];
  state[5] = xx[0];
  state[6] = xx[0];
  state[7] = xx[0];
  state[8] = xx[0];
  state[9] = xx[0];
  state[10] = xx[0];
  state[11] = xx[0];
  state[12] = xx[0];
  state[13] = xx[0];
}

void justina_manipulator_5aaa3abb_1_initializeTrackedAngleState(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const int *modeVector, const double
  *motionData, double *state, void *neDiagMgr0)
{
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) rtdv;
  (void) modeVector;
  (void) motionData;
  (void) state;
  (void) neDiagMgr;
}

void justina_manipulator_5aaa3abb_1_computeDiscreteState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
}

void justina_manipulator_5aaa3abb_1_adjustPosition(const void *mech, const
  double *dofDeltas, double *state)
{
  (void) mech;
  state[0] = state[0] + dofDeltas[0];
  state[2] = state[2] + dofDeltas[1];
  state[4] = state[4] + dofDeltas[2];
  state[6] = state[6] + dofDeltas[3];
  state[8] = state[8] + dofDeltas[4];
  state[10] = state[10] + dofDeltas[5];
  state[12] = state[12] + dofDeltas[6];
}

static void perturbAsmJointPrimitiveState_0_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbAsmJointPrimitiveState_0_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[1] = state[1] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_1_0(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbAsmJointPrimitiveState_1_0v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_2_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbAsmJointPrimitiveState_2_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[5] = state[5] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_0(double mag, double *state)
{
  state[6] = state[6] + mag;
}

static void perturbAsmJointPrimitiveState_3_0v(double mag, double *state)
{
  state[6] = state[6] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_4_0(double mag, double *state)
{
  state[8] = state[8] + mag;
}

static void perturbAsmJointPrimitiveState_4_0v(double mag, double *state)
{
  state[8] = state[8] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_0(double mag, double *state)
{
  state[10] = state[10] + mag;
}

static void perturbAsmJointPrimitiveState_5_0v(double mag, double *state)
{
  state[10] = state[10] + mag;
  state[11] = state[11] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_6_0(double mag, double *state)
{
  state[12] = state[12] + mag;
}

static void perturbAsmJointPrimitiveState_6_0v(double mag, double *state)
{
  state[12] = state[12] + mag;
  state[13] = state[13] - 0.875 * mag;
}

void justina_manipulator_5aaa3abb_1_perturbAsmJointPrimitiveState(const void
  *mech, size_t stageIdx, size_t primIdx, double mag, boolean_T
  doPerturbVelocity, double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch ((stageIdx * 6 + primIdx) * 2 + (doPerturbVelocity ? 1 : 0))
  {
   case 0:
    perturbAsmJointPrimitiveState_0_0(mag, state);
    break;

   case 1:
    perturbAsmJointPrimitiveState_0_0v(mag, state);
    break;

   case 12:
    perturbAsmJointPrimitiveState_1_0(mag, state);
    break;

   case 13:
    perturbAsmJointPrimitiveState_1_0v(mag, state);
    break;

   case 24:
    perturbAsmJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbAsmJointPrimitiveState_2_0v(mag, state);
    break;

   case 36:
    perturbAsmJointPrimitiveState_3_0(mag, state);
    break;

   case 37:
    perturbAsmJointPrimitiveState_3_0v(mag, state);
    break;

   case 48:
    perturbAsmJointPrimitiveState_4_0(mag, state);
    break;

   case 49:
    perturbAsmJointPrimitiveState_4_0v(mag, state);
    break;

   case 60:
    perturbAsmJointPrimitiveState_5_0(mag, state);
    break;

   case 61:
    perturbAsmJointPrimitiveState_5_0v(mag, state);
    break;

   case 72:
    perturbAsmJointPrimitiveState_6_0(mag, state);
    break;

   case 73:
    perturbAsmJointPrimitiveState_6_0v(mag, state);
    break;
  }
}

void justina_manipulator_5aaa3abb_1_computePosDofBlendMatrix(const void *mech,
  size_t stageIdx, size_t primIdx, const double *state, int partialType, double *
  matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void justina_manipulator_5aaa3abb_1_computeVelDofBlendMatrix(const void *mech,
  size_t stageIdx, size_t primIdx, const double *state, int partialType, double *
  matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void justina_manipulator_5aaa3abb_1_projectPartiallyTargetedPos(const void *mech,
  size_t stageIdx, size_t primIdx, const double *origState, int partialType,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) origState;
  (void) partialType;
  (void) state;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void justina_manipulator_5aaa3abb_1_propagateMotion(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[114];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = 0.7071054825112363;
  xx[1] = 0.5;
  xx[2] = xx[1] * state[0];
  xx[3] = cos(xx[2]);
  xx[4] = xx[0] * xx[3];
  xx[5] = 0.7071080798594735;
  xx[6] = - (xx[5] * xx[3]);
  xx[7] = sin(xx[2]);
  xx[2] = xx[5] * xx[7];
  xx[8] = - (xx[0] * xx[7]);
  xx[9] = 2.0;
  xx[10] = xx[6];
  xx[11] = xx[2];
  xx[12] = xx[8];
  xx[13] = 0.015;
  xx[14] = xx[13] * xx[2];
  xx[15] = 0.02849635094520282 * xx[7] - 0.0106066211978921 * xx[3];
  xx[3] = 0.0403;
  xx[7] = xx[3] * xx[2];
  xx[16] = - xx[14];
  xx[17] = xx[15];
  xx[18] = xx[7];
  pm_math_Vector3_cross_ra(xx + 10, xx + 16, xx + 19);
  xx[10] = 0.09;
  xx[11] = xx[1] * state[2];
  xx[12] = cos(xx[11]);
  xx[16] = xx[0] * xx[12];
  xx[17] = xx[5] * xx[12];
  xx[12] = - xx[17];
  xx[18] = sin(xx[11]);
  xx[11] = xx[5] * xx[18];
  xx[22] = xx[0] * xx[18];
  xx[18] = - xx[22];
  xx[23] = 0.105;
  xx[24] = xx[23] * xx[11];
  xx[25] = xx[23] * xx[22];
  xx[26] = 0.02 - (xx[9] * (xx[24] * xx[11] + xx[25] * xx[22]) - xx[23]);
  xx[27] = xx[9] * (xx[24] * xx[17] - xx[25] * xx[16]);
  xx[28] = 0.4999999999966269;
  xx[29] = xx[1] * state[4];
  xx[30] = sin(xx[29]);
  xx[31] = xx[28] * xx[30];
  xx[32] = 0.4999981633974483;
  xx[33] = cos(xx[29]);
  xx[29] = xx[31] - xx[32] * xx[33];
  xx[34] = xx[28] * xx[33];
  xx[35] = 0.5000018366025516;
  xx[36] = xx[34] + xx[35] * xx[30];
  xx[37] = - xx[36];
  xx[38] = xx[31] - xx[35] * xx[33];
  xx[31] = xx[32] * xx[30] + xx[34];
  xx[30] = - xx[31];
  xx[33] = 0.21;
  xx[34] = xx[33] * xx[38];
  xx[39] = xx[33] * xx[36];
  xx[40] = xx[9] * (xx[34] * xx[29] + xx[39] * xx[31]) - xx[23];
  xx[41] = - (xx[9] * (xx[34] * xx[31] - xx[39] * xx[29]));
  xx[31] = - (xx[9] * (xx[39] * xx[36] + xx[34] * xx[38]) - xx[33]);
  xx[33] = xx[1] * state[6];
  xx[34] = cos(xx[33]);
  xx[36] = sin(xx[33]);
  xx[33] = xx[28] * xx[36];
  xx[39] = xx[32] * xx[34] + xx[33];
  xx[42] = - xx[39];
  xx[43] = xx[28] * xx[34];
  xx[28] = xx[43] - xx[35] * xx[36];
  xx[44] = xx[35] * xx[34] + xx[33];
  xx[33] = - xx[44];
  xx[34] = xx[43] - xx[32] * xx[36];
  xx[32] = xx[10] * xx[34];
  xx[35] = xx[10] * xx[28];
  xx[36] = - (xx[9] * (xx[32] * xx[39] - xx[35] * xx[44]));
  xx[43] = - (xx[10] - xx[9] * (xx[32] * xx[34] + xx[35] * xx[28]));
  xx[45] = 0.06 + xx[9] * (xx[35] * xx[39] + xx[32] * xx[44]);
  xx[32] = xx[1] * state[8];
  xx[35] = cos(xx[32]);
  xx[39] = xx[0] * xx[35];
  xx[44] = - xx[39];
  xx[46] = xx[5] * xx[35];
  xx[35] = - xx[46];
  xx[47] = sin(xx[32]);
  xx[32] = xx[5] * xx[47];
  xx[48] = xx[0] * xx[47];
  xx[47] = - xx[48];
  xx[49] = 0.18;
  xx[50] = xx[49] * xx[32];
  xx[51] = xx[49] * xx[46];
  xx[52] = - (xx[9] * (xx[50] * xx[39] - xx[51] * xx[48]));
  xx[53] = xx[10] - xx[9] * (xx[51] * xx[39] + xx[50] * xx[48]);
  xx[39] = - (xx[9] * (xx[51] * xx[46] + xx[50] * xx[32]) - xx[49]);
  xx[46] = xx[1] * state[10];
  xx[48] = cos(xx[46]);
  xx[49] = xx[0] * xx[48];
  xx[50] = - xx[49];
  xx[51] = xx[5] * xx[48];
  xx[48] = sin(xx[46]);
  xx[46] = xx[5] * xx[48];
  xx[54] = - xx[46];
  xx[55] = xx[0] * xx[48];
  xx[48] = - xx[55];
  xx[56] = 0.05;
  xx[57] = xx[56] * xx[55];
  xx[58] = xx[56] * xx[51];
  xx[59] = xx[9] * (xx[57] * xx[49] + xx[58] * xx[46]);
  xx[60] = - (xx[56] - xx[9] * (xx[57] * xx[55] + xx[58] * xx[51]));
  xx[55] = 0.03260000000000002 - xx[9] * (xx[57] * xx[46] - xx[58] * xx[49]);
  xx[46] = xx[1] * state[12];
  xx[1] = cos(xx[46]);
  xx[49] = xx[0] * xx[1];
  xx[57] = - xx[49];
  xx[58] = xx[5] * xx[1];
  xx[1] = - xx[58];
  xx[61] = sin(xx[46]);
  xx[46] = xx[5] * xx[61];
  xx[62] = xx[0] * xx[61];
  xx[61] = - xx[62];
  xx[63] = 0.1;
  xx[64] = xx[63] * xx[46];
  xx[65] = xx[63] * xx[58];
  xx[66] = - (xx[9] * (xx[64] * xx[49] - xx[65] * xx[62]));
  xx[67] = xx[56] - xx[9] * (xx[65] * xx[49] + xx[64] * xx[62]);
  xx[49] = - (xx[9] * (xx[65] * xx[58] + xx[64] * xx[46]) - xx[63]);
  xx[58] = 0.0;
  xx[62] = 0.03;
  xx[63] = - xx[0];
  xx[64] = 0.04;
  xx[65] = xx[3] * state[1];
  xx[3] = xx[11] * state[1];
  xx[68] = xx[17] * state[1];
  xx[69] = xx[9] * (xx[16] * xx[3] + xx[22] * xx[68]);
  xx[70] = xx[9] * (xx[16] * xx[68] - xx[22] * xx[3]);
  xx[71] = state[1] - xx[9] * (xx[17] * xx[68] + xx[11] * xx[3]) + state[3];
  xx[3] = xx[27] * state[1];
  xx[68] = xx[26] * state[1] + xx[65];
  xx[72] = xx[22] * xx[68];
  xx[73] = xx[12];
  xx[74] = xx[11];
  xx[75] = xx[18];
  xx[76] = xx[22] * xx[3];
  xx[22] = xx[17] * xx[68] + xx[11] * xx[3];
  xx[77] = xx[72];
  xx[78] = - xx[76];
  xx[79] = - xx[22];
  pm_math_Vector3_cross_ra(xx + 73, xx + 77, xx + 80);
  xx[73] = xx[3] + xx[9] * (xx[16] * xx[72] + xx[80]);
  xx[3] = xx[68] + xx[9] * (xx[81] - xx[16] * xx[76]) + xx[23] * state[3];
  xx[23] = xx[9] * (xx[82] - xx[16] * xx[22]);
  xx[74] = xx[29];
  xx[75] = xx[37];
  xx[76] = xx[38];
  xx[77] = xx[30];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 69, xx + 78);
  xx[22] = xx[80] + state[5];
  xx[80] = xx[40];
  xx[81] = xx[41];
  xx[82] = xx[31];
  pm_math_Vector3_cross_ra(xx + 69, xx + 80, xx + 83);
  xx[80] = xx[83] + xx[73];
  xx[81] = xx[84] + xx[3];
  xx[82] = xx[85] + xx[23];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 83);
  xx[74] = xx[42];
  xx[75] = xx[28];
  xx[76] = xx[33];
  xx[77] = xx[34];
  xx[80] = xx[78];
  xx[81] = xx[79];
  xx[82] = xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 86);
  xx[68] = xx[88] + state[7];
  xx[88] = xx[36];
  xx[89] = xx[43];
  xx[90] = xx[45];
  pm_math_Vector3_cross_ra(xx + 80, xx + 88, xx + 91);
  xx[80] = xx[91] + xx[83];
  xx[81] = xx[92] + xx[84];
  xx[82] = xx[93] + xx[85];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 88);
  xx[72] = xx[88] + xx[10] * state[7];
  xx[74] = xx[44];
  xx[75] = xx[35];
  xx[76] = xx[32];
  xx[77] = xx[47];
  xx[80] = xx[86];
  xx[81] = xx[87];
  xx[82] = xx[68];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 91);
  xx[88] = xx[93] + state[9];
  xx[93] = xx[52];
  xx[94] = xx[53];
  xx[95] = xx[39];
  pm_math_Vector3_cross_ra(xx + 80, xx + 93, xx + 96);
  xx[80] = xx[96] + xx[72];
  xx[81] = xx[97] + xx[89];
  xx[82] = xx[98] + xx[90];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 93);
  xx[74] = xx[50];
  xx[75] = xx[51];
  xx[76] = xx[54];
  xx[77] = xx[48];
  xx[80] = xx[91];
  xx[81] = xx[92];
  xx[82] = xx[88];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 96);
  xx[99] = xx[98] + state[11];
  xx[100] = xx[59];
  xx[101] = xx[60];
  xx[102] = xx[55];
  pm_math_Vector3_cross_ra(xx + 80, xx + 100, xx + 103);
  xx[80] = xx[103] + xx[93];
  xx[81] = xx[104] + xx[94];
  xx[82] = xx[105] + xx[95];
  pm_math_Quaternion_inverseXform_ra(xx + 74, xx + 80, xx + 100);
  xx[74] = xx[100] + xx[56] * state[11];
  xx[103] = xx[57];
  xx[104] = xx[1];
  xx[105] = xx[46];
  xx[106] = xx[61];
  xx[75] = xx[96];
  xx[76] = xx[97];
  xx[77] = xx[99];
  pm_math_Quaternion_inverseXform_ra(xx + 103, xx + 75, xx + 80);
  xx[56] = xx[82] + state[13];
  xx[107] = xx[66];
  xx[108] = xx[67];
  xx[109] = xx[49];
  pm_math_Vector3_cross_ra(xx + 75, xx + 107, xx + 110);
  xx[75] = xx[110] + xx[74];
  xx[76] = xx[111] + xx[101];
  xx[77] = xx[112] + xx[102];
  pm_math_Quaternion_inverseXform_ra(xx + 103, xx + 75, xx + 107);
  xx[75] = xx[62] * xx[81] + xx[107];
  xx[76] = xx[108] - xx[62] * xx[80];
  xx[77] = xx[5] * xx[56];
  xx[82] = xx[0] * xx[77];
  xx[98] = xx[5] * xx[80];
  xx[100] = xx[5] * xx[98];
  xx[103] = xx[5] * xx[77];
  xx[77] = xx[0] * xx[98];
  xx[98] = xx[64] * xx[56];
  xx[104] = xx[75] + xx[98];
  xx[105] = xx[64] * xx[80];
  xx[106] = xx[109] - xx[105];
  xx[110] = xx[5] * xx[106];
  xx[111] = xx[5] * xx[104];
  xx[112] = xx[75] - xx[98];
  xx[98] = xx[105] + xx[109];
  xx[105] = xx[5] * xx[98];
  xx[113] = xx[5] * xx[112];
  motionData[0] = - xx[4];
  motionData[1] = xx[6];
  motionData[2] = xx[2];
  motionData[3] = xx[8];
  motionData[4] = 0.0953 - xx[9] * (xx[19] + xx[14] * xx[4]);
  motionData[5] = xx[10] - xx[9] * (xx[20] - xx[4] * xx[15]);
  motionData[6] = - (xx[9] * (xx[21] - xx[7] * xx[4]) - xx[13]);
  motionData[7] = - xx[16];
  motionData[8] = xx[12];
  motionData[9] = xx[11];
  motionData[10] = xx[18];
  motionData[11] = xx[26];
  motionData[12] = - xx[27];
  motionData[13] = xx[9] * (xx[24] * xx[16] + xx[25] * xx[17]) - xx[13];
  motionData[14] = xx[29];
  motionData[15] = xx[37];
  motionData[16] = xx[38];
  motionData[17] = xx[30];
  motionData[18] = xx[40];
  motionData[19] = xx[41];
  motionData[20] = xx[31];
  motionData[21] = xx[42];
  motionData[22] = xx[28];
  motionData[23] = xx[33];
  motionData[24] = xx[34];
  motionData[25] = xx[36];
  motionData[26] = xx[43];
  motionData[27] = xx[45];
  motionData[28] = xx[44];
  motionData[29] = xx[35];
  motionData[30] = xx[32];
  motionData[31] = xx[47];
  motionData[32] = xx[52];
  motionData[33] = xx[53];
  motionData[34] = xx[39];
  motionData[35] = xx[50];
  motionData[36] = xx[51];
  motionData[37] = xx[54];
  motionData[38] = xx[48];
  motionData[39] = xx[59];
  motionData[40] = xx[60];
  motionData[41] = xx[55];
  motionData[42] = xx[57];
  motionData[43] = xx[1];
  motionData[44] = xx[46];
  motionData[45] = xx[61];
  motionData[46] = xx[66];
  motionData[47] = xx[67];
  motionData[48] = xx[49];
  motionData[49] = - 1.0;
  motionData[50] = xx[58];
  motionData[51] = xx[58];
  motionData[52] = xx[58];
  motionData[53] = xx[58];
  motionData[54] = xx[58];
  motionData[55] = xx[62];
  motionData[56] = xx[63];
  motionData[57] = xx[58];
  motionData[58] = - xx[5];
  motionData[59] = xx[58];
  motionData[60] = xx[58];
  motionData[61] = - xx[64];
  motionData[62] = xx[58];
  motionData[63] = xx[63];
  motionData[64] = xx[58];
  motionData[65] = xx[5];
  motionData[66] = xx[58];
  motionData[67] = xx[58];
  motionData[68] = xx[64];
  motionData[69] = xx[58];
  motionData[70] = xx[58];
  motionData[71] = xx[58];
  motionData[72] = state[1];
  motionData[73] = xx[58];
  motionData[74] = xx[65];
  motionData[75] = xx[58];
  motionData[76] = xx[69];
  motionData[77] = xx[70];
  motionData[78] = xx[71];
  motionData[79] = xx[73];
  motionData[80] = xx[3];
  motionData[81] = xx[23];
  motionData[82] = xx[78];
  motionData[83] = xx[79];
  motionData[84] = xx[22];
  motionData[85] = xx[83];
  motionData[86] = xx[84];
  motionData[87] = xx[85];
  motionData[88] = xx[86];
  motionData[89] = xx[87];
  motionData[90] = xx[68];
  motionData[91] = xx[72];
  motionData[92] = xx[89];
  motionData[93] = xx[90];
  motionData[94] = xx[91];
  motionData[95] = xx[92];
  motionData[96] = xx[88];
  motionData[97] = xx[93];
  motionData[98] = xx[94];
  motionData[99] = xx[95];
  motionData[100] = xx[96];
  motionData[101] = xx[97];
  motionData[102] = xx[99];
  motionData[103] = xx[74];
  motionData[104] = xx[101];
  motionData[105] = xx[102];
  motionData[106] = xx[80];
  motionData[107] = xx[81];
  motionData[108] = xx[56];
  motionData[109] = xx[107];
  motionData[110] = xx[108];
  motionData[111] = xx[109];
  motionData[112] = xx[80];
  motionData[113] = xx[81];
  motionData[114] = xx[56];
  motionData[115] = xx[75];
  motionData[116] = xx[76];
  motionData[117] = xx[109];
  motionData[118] = xx[80] - xx[9] * (xx[82] + xx[100]);
  motionData[119] = xx[81];
  motionData[120] = xx[56] - xx[9] * (xx[103] - xx[77]);
  motionData[121] = xx[104] - xx[9] * (xx[0] * xx[110] + xx[5] * xx[111]);
  motionData[122] = xx[76];
  motionData[123] = xx[106] - xx[9] * (xx[5] * xx[110] - xx[0] * xx[111]);
  motionData[124] = xx[80] + xx[9] * (xx[82] - xx[100]);
  motionData[125] = xx[81];
  motionData[126] = xx[56] - xx[9] * (xx[77] + xx[103]);
  motionData[127] = xx[112] + xx[9] * (xx[0] * xx[105] - xx[5] * xx[113]);
  motionData[128] = xx[76];
  motionData[129] = xx[98] - xx[9] * (xx[0] * xx[113] + xx[5] * xx[105]);
}

size_t justina_manipulator_5aaa3abb_1_computeAssemblyError(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const double
  *state, const int *modeVector, const double *motionData, double *error)
{
  (void) mech;
  (void)rtdv;
  (void) state;
  (void) modeVector;
  (void) motionData;
  (void) error;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t justina_manipulator_5aaa3abb_1_computeAssemblyJacobian(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, boolean_T
  forVelocitySatisfaction, const double *state, const int *modeVector, const
  double *motionData, double *J)
{
  (void) mech;
  (void) rtdv;
  (void) state;
  (void) modeVector;
  (void) forVelocitySatisfaction;
  (void) motionData;
  (void) J;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t justina_manipulator_5aaa3abb_1_computeFullAssemblyJacobian(const void
  *mech, const RuntimeDerivedValuesBundle *rtdv, const double *state, const int *
  modeVector, const double *motionData, double *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) modeVector;
  (void) motionData;
  (void) J;
  return 0;
}

int justina_manipulator_5aaa3abb_1_isInKinematicSingularity(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const int
  *modeVector, const double *motionData)
{
  (void) mech;
  (void) rtdv
    ;
  (void) modeVector;
  (void) motionData;
  switch (constraintIdx)
  {
  }

  return 0;
}

PmfMessageId justina_manipulator_5aaa3abb_1_convertStateVector(const void
  *asmMech, const RuntimeDerivedValuesBundle *rtdv, const void *simMech, const
  double *asmState, const int *asmModeVector, const int *simModeVector, double
  *simState, void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) asmMech;
  (void) rtdvd;
  (void) rtdvi;
  (void) simMech;
  (void) asmModeVector;
  (void) simModeVector;
  (void) neDiagMgr;
  simState[0] = asmState[0];
  simState[1] = asmState[1];
  simState[2] = asmState[2];
  simState[3] = asmState[3];
  simState[4] = asmState[4];
  simState[5] = asmState[5];
  simState[6] = asmState[6];
  simState[7] = asmState[7];
  simState[8] = asmState[8];
  simState[9] = asmState[9];
  simState[10] = asmState[10];
  simState[11] = asmState[11];
  simState[12] = asmState[12];
  simState[13] = asmState[13];
  return NULL;
}

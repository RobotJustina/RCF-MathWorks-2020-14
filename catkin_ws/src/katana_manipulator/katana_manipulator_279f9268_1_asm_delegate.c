/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'katana_manipulator/Subsystem/Solver Configuration'.
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

void katana_manipulator_279f9268_1_setTargets(const RuntimeDerivedValuesBundle
  *rtdv, CTarget *targets)
{
  (void) rtdv;
  (void) targets;
}

void katana_manipulator_279f9268_1_resetAsmStateVector(const void *mech, double *
  state)
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

void katana_manipulator_279f9268_1_initializeTrackedAngleState(const void *mech,
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

void katana_manipulator_279f9268_1_computeDiscreteState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
}

void katana_manipulator_279f9268_1_adjustPosition(const void *mech, const double
  *dofDeltas, double *state)
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

static void perturbAsmJointPrimitiveState_1_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbAsmJointPrimitiveState_1_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[1] = state[1] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_2_0(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbAsmJointPrimitiveState_2_0v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_3_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbAsmJointPrimitiveState_3_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[5] = state[5] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_4_0(double mag, double *state)
{
  state[6] = state[6] + mag;
}

static void perturbAsmJointPrimitiveState_4_0v(double mag, double *state)
{
  state[6] = state[6] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_5_0(double mag, double *state)
{
  state[8] = state[8] + mag;
}

static void perturbAsmJointPrimitiveState_5_0v(double mag, double *state)
{
  state[8] = state[8] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_7_0(double mag, double *state)
{
  state[10] = state[10] + mag;
}

static void perturbAsmJointPrimitiveState_7_0v(double mag, double *state)
{
  state[10] = state[10] + mag;
  state[11] = state[11] - 0.875 * mag;
}

static void perturbAsmJointPrimitiveState_8_0(double mag, double *state)
{
  state[12] = state[12] + mag;
}

static void perturbAsmJointPrimitiveState_8_0v(double mag, double *state)
{
  state[12] = state[12] + mag;
  state[13] = state[13] - 0.875 * mag;
}

void katana_manipulator_279f9268_1_perturbAsmJointPrimitiveState(const void
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

   case 84:
    perturbAsmJointPrimitiveState_7_0(mag, state);
    break;

   case 85:
    perturbAsmJointPrimitiveState_7_0v(mag, state);
    break;

   case 96:
    perturbAsmJointPrimitiveState_8_0(mag, state);
    break;

   case 97:
    perturbAsmJointPrimitiveState_8_0v(mag, state);
    break;
  }
}

void katana_manipulator_279f9268_1_computePosDofBlendMatrix(const void *mech,
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

void katana_manipulator_279f9268_1_computeVelDofBlendMatrix(const void *mech,
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

void katana_manipulator_279f9268_1_projectPartiallyTargetedPos(const void *mech,
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

void katana_manipulator_279f9268_1_propagateMotion(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[136];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = 0.0;
  xx[1] = 0.2015;
  xx[2] = - 0.9997367287032266;
  xx[3] = 0.0229272430705558;
  xx[4] = 8.568154706743917e-4;
  xx[5] = - 2.840320475428412e-4;
  xx[6] = 0.5;
  xx[7] = xx[6] * state[0];
  xx[8] = 1.700155647920979e-3;
  xx[9] = sin(xx[7]);
  xx[10] = 0.04584290069718736;
  xx[11] = 0.9989472147848657;
  xx[12] = cos(xx[7]);
  xx[13] = xx[8] * xx[9];
  xx[14] = - (xx[10] * xx[9]);
  xx[15] = xx[11] * xx[9];
  pm_math_Quaternion_compose_ra(xx + 2, xx + 12, xx + 16);
  xx[2] = 4.392979990311373e-4;
  xx[3] = 5.144632975525311e-4;
  xx[4] = 0.01681453971369774;
  pm_math_Quaternion_xform_ra(xx + 16, xx + 2, xx + 12);
  xx[20] = - 0.6911436200065405;
  xx[21] = - 0.7226271558890502;
  xx[22] = - 8.384129088760706e-3;
  xx[23] = 7.758638758187818e-3;
  xx[5] = xx[6] * state[2];
  xx[7] = 9.528023847316104e-4;
  xx[9] = sin(xx[5]);
  xx[15] = 1.344797286275369e-3;
  xx[24] = 0.9999986418430149;
  xx[25] = cos(xx[5]);
  xx[26] = - (xx[7] * xx[9]);
  xx[27] = - (xx[15] * xx[9]);
  xx[28] = xx[24] * xx[9];
  pm_math_Quaternion_compose_ra(xx + 20, xx + 25, xx + 29);
  xx[20] = - 0.09228743917947596;
  xx[21] = - 7.235463008281073e-3;
  xx[22] = - 2.696622893931823e-4;
  pm_math_Quaternion_xform_ra(xx + 29, xx + 20, xx + 25);
  xx[5] = xx[2] - xx[25];
  xx[2] = xx[3] - xx[26];
  xx[3] = xx[4] - xx[27];
  xx[20] = - 0.9992799581208153;
  xx[21] = - 9.321951079367518e-4;
  xx[22] = 1.563087828683448e-3;
  xx[23] = 0.03789792958437593;
  xx[4] = xx[6] * state[4];
  xx[9] = 2.205063796675487e-3;
  xx[25] = sin(xx[4]);
  xx[26] = 5.684249615729751e-4;
  xx[27] = 0.9999974072899968;
  xx[33] = cos(xx[4]);
  xx[34] = xx[9] * xx[25];
  xx[35] = xx[26] * xx[25];
  xx[36] = xx[27] * xx[25];
  pm_math_Quaternion_compose_ra(xx + 20, xx + 33, xx + 37);
  xx[20] = - 0.05689521002921627;
  xx[21] = - 0.0145389080296778;
  xx[22] = 3.207226776186501e-4;
  pm_math_Quaternion_xform_ra(xx + 37, xx + 20, xx + 33);
  xx[4] = 0.0976700039030166 - xx[33];
  xx[20] = - (3.218614139284329e-3 + xx[34]);
  xx[21] = - (8.326828401593877e-5 + xx[35]);
  xx[33] = - 3.346189319305779e-4;
  xx[34] = - 0.9968808760112428;
  xx[35] = - 0.07890293436522287;
  xx[36] = 1.653487763724648e-3;
  xx[22] = xx[6] * state[6];
  xx[23] = 1.08244070307682e-3;
  xx[25] = sin(xx[22]);
  xx[28] = 1.917612039156894e-4;
  xx[41] = 0.9999993957747;
  xx[42] = cos(xx[22]);
  xx[43] = xx[23] * xx[25];
  xx[44] = - (xx[28] * xx[25]);
  xx[45] = xx[41] * xx[25];
  pm_math_Quaternion_compose_ra(xx + 33, xx + 42, xx + 46);
  xx[33] = - 0.04995309968048029;
  xx[34] = - 8.869449793783499e-3;
  xx[35] = 5.237048361205106e-5;
  pm_math_Quaternion_xform_ra(xx + 46, xx + 33, xx + 42);
  xx[22] = 0.08145161950094873 - xx[42];
  xx[25] = - (1.083166892651002e-3 + xx[43]);
  xx[33] = 8.009702524039035e-6 - xx[44];
  xx[42] = - 0.5253100883175446;
  xx[43] = - 0.5240402295380637;
  xx[44] = 0.4725020424364453;
  xx[45] = 0.4755764595003572;
  xx[34] = xx[6] * state[8];
  xx[35] = 0.04028831528877438;
  xx[36] = sin(xx[34]);
  xx[50] = 3.256618430792202e-3;
  xx[51] = 0.9991827891269888;
  xx[52] = cos(xx[34]);
  xx[53] = - (xx[35] * xx[36]);
  xx[54] = - (xx[50] * xx[36]);
  xx[55] = xx[51] * xx[36];
  pm_math_Quaternion_compose_ra(xx + 42, xx + 52, xx + 56);
  xx[42] = 3.206058372755476e-3;
  xx[43] = - 3.447882694857199e-6;
  xx[44] = - 1.552257059229054e-3;
  pm_math_Quaternion_xform_ra(xx + 56, xx + 42, xx + 52);
  xx[34] = 0.1020634175428304 - xx[52];
  xx[36] = 4.172071841776238e-4 - xx[53];
  xx[42] = - (1.103976599966235e-4 + xx[54]);
  xx[43] = - 0.7346630751601042;
  xx[44] = - 5.876121419582161e-4;
  xx[45] = - 0.6784297170278516;
  xx[52] = - 1.714573352007363e-3;
  xx[53] = 3.934060390649968e-3;
  xx[54] = 5.492352844533721e-5;
  xx[55] = - 0.01945837006122647;
  xx[60] = - 0.3348646588703533;
  xx[61] = - 0.9159133683601151;
  xx[62] = - 0.1989759720656971;
  xx[63] = - 0.09683452090748026;
  xx[64] = xx[6] * state[10];
  xx[65] = 0.07948248029124094;
  xx[66] = sin(xx[64]);
  xx[67] = 0.6632037626770967;
  xx[68] = 0.7442064931843135;
  xx[69] = cos(xx[64]);
  xx[70] = - (xx[65] * xx[66]);
  xx[71] = - (xx[67] * xx[66]);
  xx[72] = xx[68] * xx[66];
  pm_math_Quaternion_compose_ra(xx + 60, xx + 69, xx + 73);
  xx[60] = 0.04834151333136322;
  xx[61] = 9.072897061515848e-3;
  xx[62] = - 0.01908165709777362;
  xx[63] = - 0.01388175260239581;
  pm_math_Quaternion_xform_ra(xx + 73, xx + 61, xx + 69);
  xx[64] = xx[60] - xx[69];
  xx[66] = - xx[70];
  xx[72] = 1.904144383609873e-3;
  xx[69] = - (xx[72] + xx[71]);
  xx[77] = - 0.911408825577855;
  xx[78] = 0.3424136349352726;
  xx[79] = - 0.1326958003817312;
  xx[80] = 0.1856843553729313;
  xx[70] = xx[6] * state[12];
  xx[6] = sin(xx[70]);
  xx[81] = cos(xx[70]);
  xx[82] = - (xx[65] * xx[6]);
  xx[83] = - (xx[67] * xx[6]);
  xx[84] = xx[68] * xx[6];
  pm_math_Quaternion_compose_ra(xx + 77, xx + 81, xx + 85);
  pm_math_Quaternion_xform_ra(xx + 85, xx + 61, xx + 77);
  xx[6] = xx[60] - xx[77];
  xx[60] = - xx[78];
  xx[61] = - (xx[72] + xx[79]);
  xx[62] = - 0.7212099908413286;
  xx[63] = - 5.538569169141679e-4;
  xx[70] = - 0.6927141286713028;
  xx[71] = - 1.725772964319705e-3;
  xx[72] = 9.269449823716018e-3;
  xx[77] = 4.866731911393691e-4;
  xx[78] = - 0.1519292668228409;
  xx[79] = xx[8] * state[1];
  xx[8] = - (xx[10] * state[1]);
  xx[10] = xx[11] * state[1];
  xx[11] = 1.284748952563097e-3 * state[1];
  xx[80] = 4.102481779312844e-4 * state[1];
  xx[81] = 2.101336222703952e-5 * state[1];
  xx[82] = xx[79];
  xx[83] = xx[8];
  xx[84] = xx[10];
  pm_math_Quaternion_inverseXform_ra(xx + 29, xx + 82, xx + 89);
  xx[92] = xx[89] - xx[7] * state[3];
  xx[7] = xx[90] - xx[15] * state[3];
  xx[15] = xx[91] + xx[24] * state[3];
  xx[89] = xx[5];
  xx[90] = xx[2];
  xx[91] = xx[3];
  pm_math_Vector3_cross_ra(xx + 82, xx + 89, xx + 93);
  xx[82] = xx[93] + xx[11];
  xx[83] = xx[94] - xx[80];
  xx[84] = xx[95] - xx[81];
  pm_math_Quaternion_inverseXform_ra(xx + 29, xx + 82, xx + 89);
  xx[24] = xx[89] - 7.235815822501435e-3 * state[3];
  xx[82] = xx[90] + 0.09228757077351821 * state[3];
  xx[83] = xx[91] + 1.172139313569349e-4 * state[3];
  xx[89] = xx[92];
  xx[90] = xx[7];
  xx[91] = xx[15];
  pm_math_Quaternion_inverseXform_ra(xx + 37, xx + 89, xx + 93);
  xx[84] = xx[93] + xx[9] * state[5];
  xx[9] = xx[94] + xx[26] * state[5];
  xx[26] = xx[95] + xx[27] * state[5];
  xx[93] = xx[4];
  xx[94] = xx[20];
  xx[95] = xx[21];
  pm_math_Vector3_cross_ra(xx + 89, xx + 93, xx + 96);
  xx[89] = xx[96] + xx[24];
  xx[90] = xx[97] + xx[82];
  xx[91] = xx[98] + xx[83];
  pm_math_Quaternion_inverseXform_ra(xx + 37, xx + 89, xx + 93);
  xx[27] = xx[93] - 0.01453905264128121 * state[5];
  xx[89] = xx[94] + 0.05689576973040128 * state[5];
  xx[90] = xx[95] - 2.814378351065623e-7 * state[5];
  xx[93] = xx[84];
  xx[94] = xx[9];
  xx[95] = xx[26];
  pm_math_Quaternion_inverseXform_ra(xx + 46, xx + 93, xx + 96);
  xx[91] = xx[96] + xx[23] * state[7];
  xx[23] = xx[97] - xx[28] * state[7];
  xx[28] = xx[98] + xx[41] * state[7];
  xx[96] = xx[22];
  xx[97] = xx[25];
  xx[98] = xx[33];
  pm_math_Vector3_cross_ra(xx + 93, xx + 96, xx + 99);
  xx[93] = xx[99] + xx[27];
  xx[94] = xx[100] + xx[89];
  xx[95] = xx[101] + xx[90];
  pm_math_Quaternion_inverseXform_ra(xx + 46, xx + 93, xx + 96);
  xx[41] = xx[96] - 8.86943439201055e-3 * state[7];
  xx[93] = xx[97] + 0.04995312618549675 * state[7];
  xx[94] = xx[98] + 1.917972000473691e-5 * state[7];
  xx[95] = xx[91];
  xx[96] = xx[23];
  xx[97] = xx[28];
  pm_math_Quaternion_inverseXform_ra(xx + 56, xx + 95, xx + 98);
  xx[101] = xx[98] - xx[35] * state[9];
  xx[35] = xx[99] - xx[50] * state[9];
  xx[50] = xx[100] + xx[51] * state[9];
  xx[98] = xx[34];
  xx[99] = xx[36];
  xx[100] = xx[42];
  pm_math_Vector3_cross_ra(xx + 95, xx + 98, xx + 102);
  xx[95] = xx[102] + xx[41];
  xx[96] = xx[103] + xx[93];
  xx[97] = xx[104] + xx[94];
  pm_math_Quaternion_inverseXform_ra(xx + 56, xx + 95, xx + 98);
  xx[51] = xx[98] - 8.500173996042734e-6 * state[9];
  xx[95] = xx[99] - 3.140900525182306e-3 * state[9];
  xx[96] = xx[100] - 1.057981817200025e-5 * state[9];
  xx[97] = xx[43];
  xx[98] = xx[44];
  xx[99] = xx[45];
  xx[100] = xx[52];
  xx[102] = xx[101];
  xx[103] = xx[35];
  xx[104] = xx[50];
  pm_math_Quaternion_inverseXform_ra(xx + 97, xx + 102, xx + 105);
  pm_math_Vector3_cross_ra(xx + 102, xx + 53, xx + 108);
  xx[111] = xx[108] + xx[51];
  xx[112] = xx[109] + xx[95];
  xx[113] = xx[110] + xx[96];
  pm_math_Quaternion_inverseXform_ra(xx + 97, xx + 111, xx + 108);
  pm_math_Quaternion_inverseXform_ra(xx + 73, xx + 105, xx + 97);
  xx[111] = xx[64];
  xx[112] = xx[66];
  xx[113] = xx[69];
  pm_math_Vector3_cross_ra(xx + 105, xx + 111, xx + 114);
  xx[111] = xx[114] + xx[108];
  xx[112] = xx[115] + xx[109];
  xx[113] = xx[116] + xx[110];
  pm_math_Quaternion_inverseXform_ra(xx + 73, xx + 111, xx + 114);
  xx[100] = 0.02340712367134115;
  xx[111] = 5.648752777545164e-3;
  xx[112] = 7.533836903777294e-3;
  pm_math_Quaternion_inverseXform_ra(xx + 85, xx + 105, xx + 117);
  xx[120] = xx[6];
  xx[121] = xx[60];
  xx[122] = xx[61];
  pm_math_Vector3_cross_ra(xx + 105, xx + 120, xx + 123);
  xx[120] = xx[123] + xx[108];
  xx[121] = xx[124] + xx[109];
  xx[122] = xx[125] + xx[110];
  pm_math_Quaternion_inverseXform_ra(xx + 85, xx + 120, xx + 123);
  xx[126] = xx[62];
  xx[127] = xx[63];
  xx[128] = xx[70];
  xx[129] = xx[71];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 102, xx + 120);
  xx[130] = xx[72];
  xx[131] = xx[77];
  xx[132] = xx[78];
  pm_math_Vector3_cross_ra(xx + 102, xx + 130, xx + 133);
  xx[102] = xx[133] + xx[51];
  xx[103] = xx[134] + xx[95];
  xx[104] = xx[135] + xx[96];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 102, xx + 130);
  motionData[0] = - 1.0;
  motionData[1] = xx[0];
  motionData[2] = xx[0];
  motionData[3] = xx[0];
  motionData[4] = xx[0];
  motionData[5] = xx[0];
  motionData[6] = xx[1];
  motionData[7] = xx[16];
  motionData[8] = xx[17];
  motionData[9] = xx[18];
  motionData[10] = xx[19];
  motionData[11] = - xx[12];
  motionData[12] = - xx[13];
  motionData[13] = xx[1] - xx[14];
  motionData[14] = xx[29];
  motionData[15] = xx[30];
  motionData[16] = xx[31];
  motionData[17] = xx[32];
  motionData[18] = xx[5];
  motionData[19] = xx[2];
  motionData[20] = xx[3];
  motionData[21] = xx[37];
  motionData[22] = xx[38];
  motionData[23] = xx[39];
  motionData[24] = xx[40];
  motionData[25] = xx[4];
  motionData[26] = xx[20];
  motionData[27] = xx[21];
  motionData[28] = xx[46];
  motionData[29] = xx[47];
  motionData[30] = xx[48];
  motionData[31] = xx[49];
  motionData[32] = xx[22];
  motionData[33] = xx[25];
  motionData[34] = xx[33];
  motionData[35] = xx[56];
  motionData[36] = xx[57];
  motionData[37] = xx[58];
  motionData[38] = xx[59];
  motionData[39] = xx[34];
  motionData[40] = xx[36];
  motionData[41] = xx[42];
  motionData[42] = xx[43];
  motionData[43] = xx[44];
  motionData[44] = xx[45];
  motionData[45] = xx[52];
  motionData[46] = xx[53];
  motionData[47] = xx[54];
  motionData[48] = xx[55];
  motionData[49] = xx[73];
  motionData[50] = xx[74];
  motionData[51] = xx[75];
  motionData[52] = xx[76];
  motionData[53] = xx[64];
  motionData[54] = xx[66];
  motionData[55] = xx[69];
  motionData[56] = xx[85];
  motionData[57] = xx[86];
  motionData[58] = xx[87];
  motionData[59] = xx[88];
  motionData[60] = xx[6];
  motionData[61] = xx[60];
  motionData[62] = xx[61];
  motionData[63] = xx[62];
  motionData[64] = xx[63];
  motionData[65] = xx[70];
  motionData[66] = xx[71];
  motionData[67] = xx[72];
  motionData[68] = xx[77];
  motionData[69] = xx[78];
  motionData[70] = xx[0];
  motionData[71] = xx[0];
  motionData[72] = xx[0];
  motionData[73] = xx[0];
  motionData[74] = xx[0];
  motionData[75] = xx[0];
  motionData[76] = xx[79];
  motionData[77] = xx[8];
  motionData[78] = xx[10];
  motionData[79] = xx[11];
  motionData[80] = - xx[80];
  motionData[81] = - xx[81];
  motionData[82] = xx[92];
  motionData[83] = xx[7];
  motionData[84] = xx[15];
  motionData[85] = xx[24];
  motionData[86] = xx[82];
  motionData[87] = xx[83];
  motionData[88] = xx[84];
  motionData[89] = xx[9];
  motionData[90] = xx[26];
  motionData[91] = xx[27];
  motionData[92] = xx[89];
  motionData[93] = xx[90];
  motionData[94] = xx[91];
  motionData[95] = xx[23];
  motionData[96] = xx[28];
  motionData[97] = xx[41];
  motionData[98] = xx[93];
  motionData[99] = xx[94];
  motionData[100] = xx[101];
  motionData[101] = xx[35];
  motionData[102] = xx[50];
  motionData[103] = xx[51];
  motionData[104] = xx[95];
  motionData[105] = xx[96];
  motionData[106] = xx[105];
  motionData[107] = xx[106];
  motionData[108] = xx[107];
  motionData[109] = xx[108];
  motionData[110] = xx[109];
  motionData[111] = xx[110];
  motionData[112] = xx[97] - xx[65] * state[11];
  motionData[113] = xx[98] - xx[67] * state[11];
  motionData[114] = xx[99] + xx[68] * state[11];
  motionData[115] = xx[114] - xx[100] * state[11];
  motionData[116] = xx[115] - xx[111] * state[11];
  motionData[117] = xx[116] - xx[112] * state[11];
  motionData[118] = xx[117] - xx[65] * state[13];
  motionData[119] = xx[118] - xx[67] * state[13];
  motionData[120] = xx[119] + xx[68] * state[13];
  motionData[121] = xx[123] - xx[100] * state[13];
  motionData[122] = xx[124] - xx[111] * state[13];
  motionData[123] = xx[125] - xx[112] * state[13];
  motionData[124] = xx[120];
  motionData[125] = xx[121];
  motionData[126] = xx[122];
  motionData[127] = xx[130];
  motionData[128] = xx[131];
  motionData[129] = xx[132];
}

size_t katana_manipulator_279f9268_1_computeAssemblyError(const void *mech,
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

size_t katana_manipulator_279f9268_1_computeAssemblyJacobian(const void *mech,
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

size_t katana_manipulator_279f9268_1_computeFullAssemblyJacobian(const void
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

int katana_manipulator_279f9268_1_isInKinematicSingularity(const void *mech,
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

PmfMessageId katana_manipulator_279f9268_1_convertStateVector(const void
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

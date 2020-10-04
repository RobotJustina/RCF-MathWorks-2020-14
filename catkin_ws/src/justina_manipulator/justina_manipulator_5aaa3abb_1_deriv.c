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
#include "justina_manipulator_5aaa3abb_1_geometries.h"

PmfMessageId justina_manipulator_5aaa3abb_1_compDerivs(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *deriv, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[217];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 1.5;
  xx[1] = 0.7071054825112363;
  xx[2] = 0.5;
  xx[3] = xx[2] * state[2];
  xx[4] = cos(xx[3]);
  xx[5] = xx[1] * xx[4];
  xx[6] = 0.7071080798594735;
  xx[7] = xx[6] * xx[4];
  xx[4] = - xx[7];
  xx[8] = sin(xx[3]);
  xx[3] = xx[6] * xx[8];
  xx[9] = xx[1] * xx[8];
  xx[8] = - xx[9];
  xx[10] = - xx[5];
  xx[11] = xx[4];
  xx[12] = xx[3];
  xx[13] = xx[8];
  xx[14] = 2.0;
  xx[15] = xx[3] * state[1];
  xx[16] = xx[7] * state[1];
  xx[17] = xx[14] * (xx[5] * xx[15] + xx[9] * xx[16]);
  xx[18] = xx[14] * (xx[5] * xx[16] - xx[9] * xx[15]);
  xx[19] = state[1] - xx[14] * (xx[7] * xx[16] + xx[3] * xx[15]);
  xx[15] = xx[19] + state[3];
  xx[20] = xx[17];
  xx[21] = xx[18];
  xx[22] = xx[15];
  xx[16] = 0.3;
  xx[23] = xx[16] * xx[17];
  xx[24] = xx[16] * xx[18];
  xx[25] = xx[16] * xx[15];
  pm_math_Vector3_cross_ra(xx + 20, xx + 23, xx + 26);
  xx[23] = 0.4999999999966269;
  xx[24] = xx[2] * state[4];
  xx[25] = sin(xx[24]);
  xx[29] = xx[23] * xx[25];
  xx[30] = 0.4999981633974483;
  xx[31] = cos(xx[24]);
  xx[24] = xx[29] - xx[30] * xx[31];
  xx[32] = xx[23] * xx[31];
  xx[33] = 0.5000018366025516;
  xx[34] = xx[32] + xx[33] * xx[25];
  xx[35] = xx[29] - xx[33] * xx[31];
  xx[29] = xx[30] * xx[25] + xx[32];
  xx[36] = xx[24];
  xx[37] = - xx[34];
  xx[38] = xx[35];
  xx[39] = - xx[29];
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 20, xx + 40);
  xx[25] = xx[42] + state[5];
  xx[42] = xx[40];
  xx[43] = xx[41];
  xx[44] = xx[25];
  xx[45] = xx[16] * xx[40];
  xx[46] = xx[16] * xx[41];
  xx[47] = xx[16] * xx[25];
  pm_math_Vector3_cross_ra(xx + 42, xx + 45, xx + 48);
  xx[25] = xx[2] * state[6];
  xx[31] = cos(xx[25]);
  xx[32] = sin(xx[25]);
  xx[25] = xx[23] * xx[32];
  xx[45] = xx[30] * xx[31] + xx[25];
  xx[46] = xx[23] * xx[31];
  xx[23] = xx[46] - xx[33] * xx[32];
  xx[47] = xx[33] * xx[31] + xx[25];
  xx[25] = xx[46] - xx[30] * xx[32];
  xx[30] = - xx[45];
  xx[31] = xx[23];
  xx[32] = - xx[47];
  xx[33] = xx[25];
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 42, xx + 51);
  xx[46] = xx[53] + state[7];
  xx[54] = xx[51];
  xx[55] = xx[52];
  xx[56] = xx[46];
  xx[57] = xx[16] * xx[51];
  xx[58] = xx[16] * xx[52];
  xx[59] = xx[16] * xx[46];
  pm_math_Vector3_cross_ra(xx + 54, xx + 57, xx + 60);
  xx[57] = xx[2] * state[8];
  xx[58] = cos(xx[57]);
  xx[59] = xx[1] * xx[58];
  xx[63] = xx[6] * xx[58];
  xx[58] = sin(xx[57]);
  xx[57] = xx[6] * xx[58];
  xx[64] = xx[1] * xx[58];
  xx[65] = - xx[59];
  xx[66] = - xx[63];
  xx[67] = xx[57];
  xx[68] = - xx[64];
  pm_math_Quaternion_inverseXform_ra(xx + 65, xx + 54, xx + 69);
  xx[58] = xx[71] + state[9];
  xx[71] = xx[69];
  xx[72] = xx[70];
  xx[73] = xx[58];
  xx[74] = xx[16] * xx[69];
  xx[75] = xx[16] * xx[70];
  xx[76] = xx[16] * xx[58];
  pm_math_Vector3_cross_ra(xx + 71, xx + 74, xx + 77);
  xx[58] = xx[2] * state[10];
  xx[74] = cos(xx[58]);
  xx[75] = xx[1] * xx[74];
  xx[76] = xx[6] * xx[74];
  xx[74] = sin(xx[58]);
  xx[58] = xx[6] * xx[74];
  xx[80] = xx[1] * xx[74];
  xx[81] = - xx[75];
  xx[82] = xx[76];
  xx[83] = - xx[58];
  xx[84] = - xx[80];
  pm_math_Quaternion_inverseXform_ra(xx + 81, xx + 71, xx + 85);
  xx[74] = xx[87] + state[11];
  xx[88] = xx[85];
  xx[89] = xx[86];
  xx[90] = xx[74];
  xx[91] = xx[16] * xx[85];
  xx[92] = xx[16] * xx[86];
  xx[93] = xx[16] * xx[74];
  pm_math_Vector3_cross_ra(xx + 88, xx + 91, xx + 94);
  xx[91] = xx[2] * state[12];
  xx[92] = cos(xx[91]);
  xx[93] = xx[1] * xx[92];
  xx[97] = xx[6] * xx[92];
  xx[92] = sin(xx[91]);
  xx[91] = xx[6] * xx[92];
  xx[98] = xx[1] * xx[92];
  xx[99] = - xx[93];
  xx[100] = - xx[97];
  xx[101] = xx[91];
  xx[102] = - xx[98];
  pm_math_Quaternion_inverseXform_ra(xx + 99, xx + 88, xx + 103);
  xx[92] = xx[105] + state[13];
  xx[105] = xx[103];
  xx[106] = xx[104];
  xx[107] = xx[92];
  xx[108] = xx[16] * xx[103];
  xx[109] = xx[16] * xx[104];
  xx[110] = xx[16] * xx[92];
  pm_math_Vector3_cross_ra(xx + 105, xx + 108, xx + 111);
  xx[108] = 0.0;
  xx[109] = 0.07000000000000001;
  if (0 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:ZeroLengthDivision",
      "The Length parameter of the 'justina_manipulator/Manipulator/Variable Brick Solid' block is zero. For the calculation of solid dimensions from mass, the block requires a nonzero value.",
      neDiagMgr);
  }

  memcpy(xx + 110, xx + 109, 1 * sizeof(double));
  if (0 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:ZeroWidthDivision",
      "The Width parameter of the 'justina_manipulator/Manipulator/Variable Brick Solid' block is zero. For the calculation of solid dimensions from mass, the block requires a nonzero value.",
      neDiagMgr);
  }

  xx[114] = 1.0e4 * xx[110] * xx[109];
  xx[114] = xx[114] == 0.0 ? 0.0 : input[0] / xx[114];
  xx[109] = fabs(xx[114]);
  xx[110] = xx[2] * xx[109];
  xx[114] = input[0] / 12.0;
  xx[115] = (4.900000000000001e-3 + xx[109] * xx[109]) * xx[114];
  xx[116] = input[0];
  xx[117] = xx[108];
  xx[118] = xx[108];
  xx[119] = xx[110];
  xx[120] = xx[115];
  xx[121] = xx[115];
  xx[122] = 9.800000000000001e-3 * xx[114];
  xx[123] = xx[108];
  xx[124] = xx[108];
  xx[125] = xx[108];
  if (!(input[0] != xx[108] || xx[110] == xx[108]) ? 1 : 0 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:InvalidZeroMass",
      "The zero mass of 'justina_manipulator/Manipulator/Variable Brick Solid' is incompatible with the nonzero center of mass.",
      neDiagMgr);
  }

  xx[109] = xx[116] * xx[117];
  xx[110] = xx[116] * xx[119];
  xx[114] = xx[6] * xx[110];
  xx[115] = xx[6] * xx[109];
  xx[126] = xx[109] + xx[14] * (xx[1] * xx[114] - xx[6] * xx[115]);
  xx[109] = xx[116] * xx[118];
  xx[127] = xx[110] - xx[14] * (xx[1] * xx[115] + xx[6] * xx[114]);
  xx[110] = 0.075;
  xx[114] = xx[127] + xx[110] * xx[116];
  xx[115] = 0.9999999999932537;
  xx[128] = xx[2] * (xx[120] + xx[121] - xx[122]) + xx[119] * xx[119] * xx[116];
  xx[129] = 3.673205103416066e-6;
  xx[130] = xx[117] * xx[119] * xx[116] - xx[124];
  xx[131] = xx[129] * xx[130];
  xx[132] = xx[115] * xx[128] - xx[131];
  xx[133] = xx[115] * xx[130];
  xx[130] = xx[2] * (xx[121] + xx[122] - xx[120]) + xx[117] * xx[117] * xx[116];
  xx[134] = xx[133] - xx[129] * xx[130];
  xx[135] = xx[115] * xx[130] + xx[131];
  xx[130] = xx[133] + xx[129] * xx[128];
  xx[128] = xx[110] * xx[127];
  xx[127] = xx[110] * xx[109];
  xx[131] = 0.9999999999999998;
  xx[133] = xx[117] * xx[118] * xx[116] - xx[125];
  xx[136] = xx[131] * xx[133];
  xx[117] = xx[118] * xx[119] * xx[116] - xx[123];
  xx[119] = xx[131] * xx[117];
  xx[123] = xx[110] * xx[126];
  xx[137] = xx[116];
  xx[138] = xx[126];
  xx[139] = xx[109];
  xx[140] = xx[114];
  xx[141] = xx[115] * xx[132] - xx[129] * xx[134];
  xx[142] = 0.9999999999999996 * (xx[2] * (xx[122] + xx[120] - xx[121]) + xx[118]
    * xx[118] * xx[116]);
  xx[143] = xx[115] * xx[135] + xx[129] * xx[130] + xx[128] + xx[128] + 5.625e-3
    * xx[116];
  xx[144] = xx[2] * (xx[127] - (xx[115] * xx[136] + xx[129] * xx[119]) + xx[127]
                     - xx[131] * (xx[115] * xx[133] + xx[129] * xx[117]));
  xx[145] = xx[2] * (xx[129] * xx[135] - xx[115] * xx[130] + xx[123] + xx[123] -
                     (xx[115] * xx[134] + xx[129] * xx[132]));
  xx[146] = xx[2] * (xx[131] * (xx[115] * xx[117] - xx[129] * xx[133]) + xx[115]
                     * xx[119] - xx[129] * xx[136]);
  if (xx[116] != xx[108] || (xx[126] == xx[108] && xx[109] == xx[108] && xx[114]
       == xx[108]) ? 0 : 1 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:InvalidMassDistribution",
      "The rigid component containing 'justina_manipulator/Manipulator/Variable Brick Solid' has invalid zero total mass and nonzero first moment of mass.",
      neDiagMgr);
  }

  xx[109] = xx[142] + xx[143];
  xx[110] = - xx[146];
  xx[114] = - xx[145];
  xx[115] = xx[143] + xx[141];
  xx[116] = - xx[144];
  xx[117] = xx[141] + xx[142];
  xx[118] = xx[109];
  xx[119] = xx[110];
  xx[120] = xx[114];
  xx[121] = xx[110];
  xx[122] = xx[115];
  xx[123] = xx[116];
  xx[124] = xx[114];
  xx[125] = xx[116];
  xx[126] = xx[117];
  pm_math_Matrix3x3_xform_ra(xx + 118, xx + 105, xx + 127);
  pm_math_Vector3_cross_ra(xx + 105, xx + 127, xx + 118);
  xx[110] = 0.03;
  xx[114] = xx[110] * xx[104];
  xx[116] = xx[114] * xx[92];
  xx[121] = xx[137] == 0.0 ? 0.0 : xx[140] / xx[137];
  xx[122] = xx[121] * xx[137];
  xx[123] = xx[137] == 0.0 ? 0.0 : xx[139] / xx[137];
  xx[124] = xx[123] * xx[137];
  xx[125] = xx[110] * xx[103];
  xx[126] = xx[125] * xx[103] + xx[114] * xx[104];
  xx[114] = xx[137] == 0.0 ? 0.0 : xx[138] / xx[137];
  xx[127] = xx[114];
  xx[128] = xx[123];
  xx[129] = xx[121];
  pm_math_Vector3_cross_ra(xx + 105, xx + 127, xx + 130);
  pm_math_Vector3_cross_ra(xx + 105, xx + 130, xx + 127);
  xx[105] = xx[137] * xx[128] + xx[116] * xx[137];
  xx[106] = state[13] * xx[104];
  xx[104] = xx[110] * xx[122];
  xx[107] = xx[110] * xx[137];
  xx[121] = xx[110] * xx[107];
  xx[123] = xx[16] + xx[109] + xx[104] + xx[104] + xx[121];
  xx[109] = state[13] * xx[103];
  xx[103] = 0.1;
  xx[130] = xx[103] * xx[91];
  xx[131] = xx[103] * xx[97];
  xx[132] = 0.05;
  xx[133] = - (xx[14] * (xx[130] * xx[93] - xx[131] * xx[98]));
  xx[134] = xx[132] - xx[14] * (xx[131] * xx[93] + xx[130] * xx[98]);
  xx[135] = - (xx[14] * (xx[131] * xx[97] + xx[130] * xx[91]) - xx[103]);
  pm_math_Vector3_cross_ra(xx + 88, xx + 133, xx + 138);
  pm_math_Vector3_cross_ra(xx + 88, xx + 138, xx + 141);
  pm_math_Quaternion_inverseXform_ra(xx + 99, xx + 141, xx + 88);
  xx[103] = xx[122] + xx[107];
  xx[107] = xx[114] * xx[137];
  xx[114] = xx[145] + xx[110] * xx[107];
  xx[130] = xx[125] * xx[92];
  xx[92] = xx[144] + xx[110] * xx[124];
  xx[125] = xx[113] + xx[120] + xx[116] * xx[107] - xx[130] * xx[124] + xx[109] *
    xx[92] - xx[106] * xx[114] + xx[107] * xx[89] - xx[124] * xx[88];
  xx[131] = xx[16] + xx[117];
  memcpy(xx + 117, xx + 131, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 117, 1, xx + 136);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_7_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[136] = (input[7] - xx[0] * state[13] - xx[125]) / xx[117];
  xx[113] = xx[137] * xx[127] + xx[130] * xx[137];
  xx[120] = xx[16] + xx[115] + xx[104] + xx[104] + xx[121];
  xx[138] = xx[111] + xx[118] - (xx[116] * xx[122] + xx[124] * xx[126]) - xx[110]
    * xx[105] + xx[106] * xx[123] + xx[109] * xx[146] + xx[124] * xx[90] - xx
    [103] * xx[89] - xx[114] * xx[136];
  xx[139] = xx[112] + xx[119] + xx[130] * xx[122] + xx[107] * xx[126] + xx[110] *
    xx[113] + xx[103] * xx[88] - xx[107] * xx[90] - (xx[106] * xx[146] + xx[109]
    * xx[120]) - xx[92] * xx[136];
  xx[140] = xx[125] + xx[131] * xx[136];
  pm_math_Quaternion_xform_ra(xx + 99, xx + 138, xx + 110);
  xx[104] = 0.15;
  xx[115] = xx[104] + xx[137];
  xx[138] = xx[113] + xx[115] * xx[88] - xx[109] * xx[103] - xx[124] * xx[136];
  xx[139] = xx[105] + xx[115] * xx[89] - xx[106] * xx[103] + xx[107] * xx[136];
  xx[140] = xx[137] * xx[129] - xx[126] * xx[137] + xx[106] * xx[124] + xx[109] *
    xx[107] + xx[115] * xx[90];
  pm_math_Quaternion_xform_ra(xx + 99, xx + 138, xx + 88);
  pm_math_Vector3_cross_ra(xx + 133, xx + 88, xx + 125);
  xx[105] = state[11] * xx[86];
  xx[106] = xx[93] * xx[93];
  xx[109] = 1.0;
  xx[113] = xx[14] * (xx[106] + xx[97] * xx[97]) - xx[109];
  xx[116] = xx[97] * xx[91];
  xx[118] = xx[93] * xx[98];
  xx[119] = xx[14] * (xx[116] + xx[118]);
  xx[121] = xx[98] * xx[97];
  xx[122] = xx[93] * xx[91];
  xx[128] = xx[14] * (xx[121] - xx[122]);
  xx[129] = xx[14] * (xx[118] - xx[116]);
  xx[116] = xx[14] * (xx[106] + xx[91] * xx[91]) - xx[109];
  xx[118] = xx[98] * xx[91];
  xx[91] = xx[93] * xx[97];
  xx[93] = xx[14] * (xx[118] + xx[91]);
  xx[97] = xx[14] * (xx[121] + xx[122]);
  xx[121] = xx[14] * (xx[91] - xx[118]);
  xx[91] = xx[14] * (xx[106] + xx[98] * xx[98]) - xx[109];
  xx[137] = xx[113];
  xx[138] = - xx[119];
  xx[139] = xx[128];
  xx[140] = xx[129];
  xx[141] = xx[116];
  xx[142] = - xx[93];
  xx[143] = xx[97];
  xx[144] = xx[121];
  xx[145] = xx[91];
  xx[98] = xx[114] / xx[117];
  xx[106] = - (xx[146] + xx[92] * xx[98]);
  xx[118] = xx[131] * xx[98] - xx[114];
  xx[122] = xx[92] / xx[117];
  xx[130] = xx[131] * xx[122] - xx[92];
  xx[146] = xx[131] / xx[117];
  xx[147] = xx[123] - xx[114] * xx[98];
  xx[148] = xx[106];
  xx[149] = xx[118];
  xx[150] = xx[106];
  xx[151] = xx[120] - xx[92] * xx[122];
  xx[152] = xx[130];
  xx[153] = xx[118];
  xx[154] = xx[130];
  xx[155] = xx[131] - xx[131] * xx[146];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 147, xx + 137, xx + 156);
  pm_math_Matrix3x3_compose_ra(xx + 137, xx + 156, xx + 147);
  xx[106] = xx[124] / xx[117];
  xx[118] = xx[114] * xx[106];
  xx[120] = xx[107] / xx[117];
  xx[117] = xx[114] * xx[120] - xx[103];
  xx[114] = xx[103] - xx[92] * xx[106];
  xx[103] = xx[92] * xx[120];
  xx[92] = xx[131] * xx[106] - xx[124];
  xx[123] = xx[107] - xx[131] * xx[120];
  xx[156] = xx[128] * xx[124] - (xx[118] * xx[113] + xx[119] * xx[117]);
  xx[157] = xx[116] * xx[117] - xx[129] * xx[118] - xx[93] * xx[124];
  xx[158] = xx[121] * xx[117] - xx[97] * xx[118] + xx[124] * xx[91];
  xx[159] = xx[113] * xx[114] - xx[119] * xx[103] - xx[128] * xx[107];
  xx[160] = xx[129] * xx[114] + xx[103] * xx[116] + xx[93] * xx[107];
  xx[161] = xx[97] * xx[114] + xx[121] * xx[103] - xx[107] * xx[91];
  xx[162] = xx[113] * xx[92] - xx[119] * xx[123];
  xx[163] = xx[129] * xx[92] + xx[116] * xx[123];
  xx[164] = xx[97] * xx[92] + xx[121] * xx[123];
  pm_math_Matrix3x3_compose_ra(xx + 137, xx + 156, xx + 165);
  pm_math_Matrix3x3_postCross_ra(xx + 165, xx + 133, xx + 156);
  xx[92] = xx[115] - xx[124] * xx[106];
  xx[103] = xx[107] * xx[106];
  xx[114] = xx[115] - xx[107] * xx[120];
  xx[174] = xx[113] * xx[92] - xx[119] * xx[103];
  xx[175] = xx[129] * xx[92] + xx[103] * xx[116];
  xx[176] = xx[97] * xx[92] + xx[121] * xx[103];
  xx[177] = xx[103] * xx[113] - xx[119] * xx[114];
  xx[178] = xx[129] * xx[103] + xx[116] * xx[114];
  xx[179] = xx[97] * xx[103] + xx[121] * xx[114];
  xx[180] = xx[128] * xx[115];
  xx[181] = - (xx[93] * xx[115]);
  xx[182] = xx[91] * xx[115];
  pm_math_Matrix3x3_compose_ra(xx + 137, xx + 174, xx + 183);
  pm_math_Matrix3x3_postCross_ra(xx + 183, xx + 133, xx + 137);
  pm_math_Matrix3x3_preCross_ra(xx + 137, xx + 133, xx + 174);
  xx[91] = xx[16] + xx[147] - xx[156] - xx[156] - xx[174];
  xx[92] = state[11] * xx[85];
  xx[85] = xx[148] - xx[157] - xx[159] - xx[175];
  xx[93] = xx[165] - xx[137];
  xx[97] = xx[166] - xx[140];
  xx[103] = xx[167] - xx[143];
  xx[107] = xx[168] - xx[138];
  xx[113] = xx[169] - xx[141];
  xx[114] = xx[170] - xx[144];
  xx[115] = xx[171] - xx[139];
  xx[116] = xx[172] - xx[142];
  xx[117] = xx[173] - xx[145];
  xx[137] = xx[93];
  xx[138] = xx[97];
  xx[139] = xx[103];
  xx[140] = xx[107];
  xx[141] = xx[113];
  xx[142] = xx[114];
  xx[143] = xx[115];
  xx[144] = xx[116];
  xx[145] = xx[117];
  xx[118] = xx[132] * xx[80];
  xx[119] = xx[132] * xx[76];
  xx[128] = xx[14] * (xx[118] * xx[75] + xx[119] * xx[58]);
  xx[129] = - (xx[132] - xx[14] * (xx[118] * xx[80] + xx[119] * xx[76]));
  xx[130] = 0.03260000000000002 - xx[14] * (xx[118] * xx[58] - xx[119] * xx[75]);
  pm_math_Vector3_cross_ra(xx + 71, xx + 128, xx + 165);
  pm_math_Vector3_cross_ra(xx + 71, xx + 165, xx + 168);
  pm_math_Quaternion_inverseXform_ra(xx + 81, xx + 168, xx + 71);
  xx[118] = xx[132] * state[11];
  xx[119] = xx[118] * (xx[87] + xx[74]) + xx[72];
  xx[72] = xx[73] - xx[118] * (xx[86] + xx[86]);
  xx[165] = xx[71];
  xx[166] = xx[119];
  xx[167] = xx[72];
  pm_math_Matrix3x3_xform_ra(xx + 137, xx + 165, xx + 168);
  xx[73] = xx[149] - xx[158] - xx[162] - xx[176];
  xx[74] = xx[73] + xx[132] * xx[93];
  xx[86] = xx[153] - xx[162] - xx[158] - xx[180];
  xx[87] = xx[154] - xx[163] - xx[161] - xx[181];
  xx[118] = xx[96] + xx[112] + xx[127] + xx[105] * xx[86] - xx[92] * xx[87] +
    xx[170];
  xx[121] = xx[104] + xx[183];
  xx[137] = xx[121];
  xx[138] = xx[184];
  xx[139] = xx[185];
  xx[140] = xx[186];
  xx[141] = xx[104] + xx[187];
  xx[142] = xx[188];
  xx[143] = xx[189];
  xx[144] = xx[190];
  xx[145] = xx[104] + xx[191];
  pm_math_Matrix3x3_xform_ra(xx + 137, xx + 165, xx + 171);
  xx[123] = xx[88] + xx[105] * xx[93] - xx[92] * xx[107] + xx[171];
  xx[88] = xx[16] + xx[155] - xx[164] - xx[164] - xx[182];
  xx[124] = xx[88] + xx[132] * xx[115];
  xx[131] = xx[115] + xx[132] * xx[121];
  xx[137] = xx[124] + xx[132] * xx[131];
  ii[0] = factorSymmetricPosDef(xx + 137, 1, xx + 138);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_6_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[138] = (input[6] - xx[0] * state[11] - (xx[118] + xx[132] * xx[123])) / xx
    [137];
  xx[96] = xx[150] - xx[159] - xx[157] - xx[177];
  xx[112] = xx[16] + xx[151] - xx[160] - xx[160] - xx[178];
  xx[127] = xx[152] - xx[161] - xx[163] - xx[179];
  xx[139] = xx[127] + xx[132] * xx[107];
  xx[140] = xx[94] + xx[110] + xx[125] + xx[105] * xx[91] - xx[92] * xx[85] +
    xx[168] + xx[74] * xx[138];
  xx[141] = xx[95] + xx[111] + xx[126] + xx[105] * xx[96] - xx[92] * xx[112] +
    xx[169] + xx[139] * xx[138];
  xx[142] = xx[118] + xx[124] * xx[138];
  pm_math_Quaternion_xform_ra(xx + 81, xx + 140, xx + 143);
  xx[94] = xx[116] + xx[132] * xx[186];
  xx[95] = xx[117] + xx[132] * xx[189];
  xx[140] = xx[123] + xx[131] * xx[138];
  xx[141] = xx[89] + xx[105] * xx[97] - xx[92] * xx[113] + xx[172] + xx[94] *
    xx[138];
  xx[142] = xx[90] + xx[105] * xx[103] - xx[92] * xx[114] + xx[173] + xx[95] *
    xx[138];
  pm_math_Quaternion_xform_ra(xx + 81, xx + 140, xx + 147);
  pm_math_Vector3_cross_ra(xx + 128, xx + 147, xx + 140);
  xx[89] = state[9] * xx[70];
  xx[70] = xx[75] * xx[75];
  xx[90] = xx[76] * xx[58];
  xx[110] = xx[75] * xx[80];
  xx[111] = xx[75] * xx[58];
  xx[118] = xx[80] * xx[76];
  xx[123] = xx[80] * xx[58];
  xx[125] = xx[75] * xx[76];
  xx[150] = xx[14] * (xx[70] + xx[76] * xx[76]) - xx[109];
  xx[151] = - (xx[14] * (xx[90] + xx[110]));
  xx[152] = xx[14] * (xx[111] - xx[118]);
  xx[153] = xx[14] * (xx[110] - xx[90]);
  xx[154] = xx[14] * (xx[70] + xx[58] * xx[58]) - xx[109];
  xx[155] = xx[14] * (xx[123] + xx[125]);
  xx[156] = - (xx[14] * (xx[118] + xx[111]));
  xx[157] = xx[14] * (xx[123] - xx[125]);
  xx[158] = xx[14] * (xx[70] + xx[80] * xx[80]) - xx[109];
  xx[58] = xx[74] / xx[137];
  xx[70] = xx[139] * xx[58];
  xx[75] = xx[124] * xx[58];
  xx[76] = xx[139] / xx[137];
  xx[80] = xx[124] * xx[76];
  xx[90] = xx[124] / xx[137];
  xx[159] = xx[91] - xx[74] * xx[58];
  xx[160] = xx[85] - xx[70];
  xx[161] = xx[73] - xx[75];
  xx[162] = xx[96] - xx[70];
  xx[163] = xx[112] - xx[139] * xx[76];
  xx[164] = xx[127] - xx[80];
  xx[165] = xx[86] - xx[75];
  xx[166] = xx[87] - xx[80];
  xx[167] = xx[88] - xx[124] * xx[90];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 159, xx + 150, xx + 168);
  pm_math_Matrix3x3_compose_ra(xx + 150, xx + 168, xx + 159);
  xx[70] = xx[131] / xx[137];
  xx[73] = xx[94] / xx[137];
  xx[75] = xx[95] / xx[137];
  xx[168] = xx[93] - xx[74] * xx[70];
  xx[169] = xx[97] - xx[74] * xx[73];
  xx[170] = xx[103] - xx[74] * xx[75];
  xx[171] = xx[107] - xx[139] * xx[70];
  xx[172] = xx[113] - xx[139] * xx[73];
  xx[173] = xx[114] - xx[139] * xx[75];
  xx[174] = xx[115] - xx[124] * xx[70];
  xx[175] = xx[116] - xx[124] * xx[73];
  xx[176] = xx[117] - xx[124] * xx[75];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 168, xx + 150, xx + 110);
  pm_math_Matrix3x3_compose_ra(xx + 150, xx + 110, xx + 168);
  pm_math_Matrix3x3_postCross_ra(xx + 168, xx + 128, xx + 110);
  xx[74] = xx[94] * xx[70];
  xx[80] = xx[95] * xx[70];
  xx[85] = xx[95] * xx[73];
  xx[192] = xx[121] - xx[131] * xx[70];
  xx[193] = xx[184] - xx[74];
  xx[194] = xx[185] - xx[80];
  xx[195] = xx[186] - xx[74];
  xx[196] = xx[187] - xx[94] * xx[73] + xx[104];
  xx[197] = xx[188] - xx[85];
  xx[198] = xx[189] - xx[80];
  xx[199] = xx[190] - xx[85];
  xx[200] = xx[191] - xx[95] * xx[75] + xx[104];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 192, xx + 150, xx + 177);
  pm_math_Matrix3x3_compose_ra(xx + 150, xx + 177, xx + 186);
  pm_math_Matrix3x3_postCross_ra(xx + 186, xx + 128, xx + 150);
  pm_math_Matrix3x3_preCross_ra(xx + 150, xx + 128, xx + 177);
  xx[74] = xx[16] + xx[159] - xx[110] - xx[110] - xx[177];
  xx[80] = state[9] * xx[69];
  xx[69] = xx[160] - xx[111] - xx[113] - xx[178];
  xx[85] = xx[168] - xx[150];
  xx[86] = xx[169] - xx[153];
  xx[87] = xx[170] - xx[156];
  xx[88] = xx[171] - xx[151];
  xx[91] = xx[172] - xx[154];
  xx[93] = xx[173] - xx[157];
  xx[94] = xx[174] - xx[152];
  xx[95] = xx[175] - xx[155];
  xx[96] = xx[176] - xx[158];
  xx[150] = xx[85];
  xx[151] = xx[86];
  xx[152] = xx[87];
  xx[153] = xx[88];
  xx[154] = xx[91];
  xx[155] = xx[93];
  xx[156] = xx[94];
  xx[157] = xx[95];
  xx[158] = xx[96];
  xx[97] = 0.18;
  xx[103] = xx[97] * xx[57];
  xx[104] = xx[97] * xx[63];
  xx[107] = 0.09;
  xx[123] = - (xx[14] * (xx[103] * xx[59] - xx[104] * xx[64]));
  xx[124] = xx[107] - xx[14] * (xx[104] * xx[59] + xx[103] * xx[64]);
  xx[125] = - (xx[14] * (xx[104] * xx[63] + xx[103] * xx[57]) - xx[97]);
  pm_math_Vector3_cross_ra(xx + 54, xx + 123, xx + 168);
  pm_math_Vector3_cross_ra(xx + 54, xx + 168, xx + 171);
  pm_math_Quaternion_inverseXform_ra(xx + 65, xx + 171, xx + 54);
  pm_math_Matrix3x3_xform_ra(xx + 150, xx + 54, xx + 168);
  xx[103] = xx[161] - xx[112] - xx[116] - xx[179];
  xx[104] = xx[165] - xx[116] - xx[112] - xx[183];
  xx[121] = xx[166] - xx[117] - xx[115] - xx[184];
  xx[126] = xx[79] + xx[145] + xx[142] + xx[89] * xx[104] - xx[80] * xx[121] +
    xx[170];
  xx[127] = xx[16] + xx[167] - xx[118] - xx[118] - xx[185];
  memcpy(xx + 131, xx + 127, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 131, 1, xx + 137);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_5_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[137] = (input[5] - xx[0] * state[9] - xx[126]) / xx[131];
  xx[79] = xx[162] - xx[113] - xx[111] - xx[180];
  xx[110] = xx[16] + xx[163] - xx[114] - xx[114] - xx[181];
  xx[111] = xx[164] - xx[115] - xx[117] - xx[182];
  xx[112] = xx[77] + xx[143] + xx[140] + xx[89] * xx[74] - xx[80] * xx[69] + xx
    [168] + xx[103] * xx[137];
  xx[113] = xx[78] + xx[144] + xx[141] + xx[89] * xx[79] - xx[80] * xx[110] +
    xx[169] + xx[111] * xx[137];
  xx[114] = xx[126] + xx[127] * xx[137];
  pm_math_Quaternion_xform_ra(xx + 65, xx + 112, xx + 115);
  xx[150] = xx[97] + xx[186];
  xx[151] = xx[187];
  xx[152] = xx[188];
  xx[153] = xx[189];
  xx[154] = xx[97] + xx[190];
  xx[155] = xx[191];
  xx[156] = xx[192];
  xx[157] = xx[193];
  xx[158] = xx[97] + xx[194];
  pm_math_Matrix3x3_xform_ra(xx + 150, xx + 54, xx + 112);
  xx[139] = xx[147] + xx[89] * xx[85] - xx[80] * xx[88] + xx[112] + xx[94] * xx
    [137];
  xx[140] = xx[148] + xx[89] * xx[86] - xx[80] * xx[91] + xx[113] + xx[95] * xx
    [137];
  xx[141] = xx[149] + xx[89] * xx[87] - xx[80] * xx[93] + xx[114] + xx[96] * xx
    [137];
  pm_math_Quaternion_xform_ra(xx + 65, xx + 139, xx + 112);
  pm_math_Vector3_cross_ra(xx + 123, xx + 112, xx + 139);
  xx[77] = state[7] * xx[52];
  xx[78] = xx[59] * xx[59];
  xx[118] = xx[63] * xx[57];
  xx[126] = xx[59] * xx[64];
  xx[142] = xx[64] * xx[63];
  xx[143] = xx[59] * xx[57];
  xx[144] = xx[64] * xx[57];
  xx[145] = xx[59] * xx[63];
  xx[147] = xx[14] * (xx[78] + xx[63] * xx[63]) - xx[109];
  xx[148] = - (xx[14] * (xx[118] + xx[126]));
  xx[149] = xx[14] * (xx[142] - xx[143]);
  xx[150] = xx[14] * (xx[126] - xx[118]);
  xx[151] = xx[14] * (xx[78] + xx[57] * xx[57]) - xx[109];
  xx[152] = - (xx[14] * (xx[144] + xx[145]));
  xx[153] = xx[14] * (xx[142] + xx[143]);
  xx[154] = xx[14] * (xx[145] - xx[144]);
  xx[155] = xx[14] * (xx[78] + xx[64] * xx[64]) - xx[109];
  xx[57] = xx[103] / xx[131];
  xx[59] = xx[111] * xx[57];
  xx[63] = xx[127] * xx[57];
  xx[64] = xx[111] / xx[131];
  xx[78] = xx[127] * xx[64];
  xx[118] = xx[127] / xx[131];
  xx[156] = xx[74] - xx[103] * xx[57];
  xx[157] = xx[69] - xx[59];
  xx[158] = xx[103] - xx[63];
  xx[159] = xx[79] - xx[59];
  xx[160] = xx[110] - xx[111] * xx[64];
  xx[161] = xx[111] - xx[78];
  xx[162] = xx[104] - xx[63];
  xx[163] = xx[121] - xx[78];
  xx[164] = xx[127] - xx[127] * xx[118];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 156, xx + 147, xx + 165);
  pm_math_Matrix3x3_compose_ra(xx + 147, xx + 165, xx + 156);
  xx[59] = xx[94] / xx[131];
  xx[63] = xx[95] / xx[131];
  xx[69] = xx[96] / xx[131];
  xx[165] = xx[85] - xx[103] * xx[59];
  xx[166] = xx[86] - xx[103] * xx[63];
  xx[167] = xx[87] - xx[103] * xx[69];
  xx[168] = xx[88] - xx[111] * xx[59];
  xx[169] = xx[91] - xx[111] * xx[63];
  xx[170] = xx[93] - xx[111] * xx[69];
  xx[171] = xx[94] - xx[127] * xx[59];
  xx[172] = xx[95] - xx[127] * xx[63];
  xx[173] = xx[96] - xx[127] * xx[69];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 165, xx + 147, xx + 174);
  pm_math_Matrix3x3_compose_ra(xx + 147, xx + 174, xx + 165);
  pm_math_Matrix3x3_postCross_ra(xx + 165, xx + 123, xx + 174);
  xx[74] = xx[95] * xx[59];
  xx[78] = xx[96] * xx[59];
  xx[79] = xx[96] * xx[63];
  xx[195] = xx[186] - xx[94] * xx[59] + xx[97];
  xx[196] = xx[187] - xx[74];
  xx[197] = xx[188] - xx[78];
  xx[198] = xx[189] - xx[74];
  xx[199] = xx[190] - xx[95] * xx[63] + xx[97];
  xx[200] = xx[191] - xx[79];
  xx[201] = xx[192] - xx[78];
  xx[202] = xx[193] - xx[79];
  xx[203] = xx[194] - xx[96] * xx[69] + xx[97];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 195, xx + 147, xx + 183);
  pm_math_Matrix3x3_compose_ra(xx + 147, xx + 183, xx + 192);
  pm_math_Matrix3x3_postCross_ra(xx + 192, xx + 123, xx + 147);
  pm_math_Matrix3x3_preCross_ra(xx + 147, xx + 123, xx + 183);
  xx[74] = xx[16] + xx[156] - xx[174] - xx[174] - xx[183];
  xx[78] = state[7] * xx[51];
  xx[51] = xx[157] - xx[175] - xx[177] - xx[184];
  xx[79] = xx[165] - xx[147];
  xx[85] = xx[166] - xx[150];
  xx[86] = xx[167] - xx[153];
  xx[87] = xx[168] - xx[148];
  xx[88] = xx[169] - xx[151];
  xx[91] = xx[170] - xx[154];
  xx[93] = xx[171] - xx[149];
  xx[94] = xx[172] - xx[152];
  xx[95] = xx[173] - xx[155];
  xx[147] = xx[79];
  xx[148] = xx[85];
  xx[149] = xx[86];
  xx[150] = xx[87];
  xx[151] = xx[88];
  xx[152] = xx[91];
  xx[153] = xx[93];
  xx[154] = xx[94];
  xx[155] = xx[95];
  xx[96] = xx[107] * xx[25];
  xx[103] = xx[107] * xx[23];
  xx[142] = - (xx[14] * (xx[96] * xx[45] - xx[103] * xx[47]));
  xx[143] = - (xx[107] - xx[14] * (xx[96] * xx[25] + xx[103] * xx[23]));
  xx[144] = 0.06 + xx[14] * (xx[103] * xx[45] + xx[96] * xx[47]);
  pm_math_Vector3_cross_ra(xx + 42, xx + 142, xx + 165);
  pm_math_Vector3_cross_ra(xx + 42, xx + 165, xx + 168);
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 168, xx + 42);
  xx[96] = xx[107] * state[7];
  xx[103] = xx[96] * (xx[53] + xx[46]) + xx[43];
  xx[43] = xx[44] - xx[96] * (xx[52] + xx[52]);
  xx[165] = xx[42];
  xx[166] = xx[103];
  xx[167] = xx[43];
  pm_math_Matrix3x3_xform_ra(xx + 147, xx + 165, xx + 168);
  xx[44] = xx[158] - xx[176] - xx[180] - xx[185];
  xx[46] = xx[44] + xx[107] * xx[79];
  xx[52] = xx[162] - xx[180] - xx[176] - xx[189];
  xx[53] = xx[163] - xx[181] - xx[179] - xx[190];
  xx[96] = xx[62] + xx[117] + xx[141] + xx[77] * xx[52] - xx[78] * xx[53] + xx
    [170];
  xx[104] = xx[97] + xx[192];
  xx[147] = xx[104];
  xx[148] = xx[193];
  xx[149] = xx[194];
  xx[150] = xx[195];
  xx[151] = xx[97] + xx[196];
  xx[152] = xx[197];
  xx[153] = xx[198];
  xx[154] = xx[199];
  xx[155] = xx[97] + xx[200];
  pm_math_Matrix3x3_xform_ra(xx + 147, xx + 165, xx + 171);
  xx[110] = xx[112] + xx[77] * xx[79] - xx[78] * xx[87] + xx[171];
  xx[111] = xx[16] + xx[164] - xx[182] - xx[182] - xx[191];
  xx[112] = xx[111] + xx[107] * xx[93];
  xx[121] = xx[93] + xx[107] * xx[104];
  xx[126] = xx[112] + xx[107] * xx[121];
  ii[0] = factorSymmetricPosDef(xx + 126, 1, xx + 127);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_4_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[127] = (input[4] - xx[0] * state[7] - (xx[96] + xx[107] * xx[110])) / xx
    [126];
  xx[62] = xx[159] - xx[177] - xx[175] - xx[186];
  xx[117] = xx[16] + xx[160] - xx[178] - xx[178] - xx[187];
  xx[131] = xx[161] - xx[179] - xx[181] - xx[188];
  xx[141] = xx[131] + xx[107] * xx[87];
  xx[147] = xx[60] + xx[115] + xx[139] + xx[77] * xx[74] - xx[78] * xx[51] + xx
    [168] + xx[46] * xx[127];
  xx[148] = xx[61] + xx[116] + xx[140] + xx[77] * xx[62] - xx[78] * xx[117] +
    xx[169] + xx[141] * xx[127];
  xx[149] = xx[96] + xx[112] * xx[127];
  pm_math_Quaternion_xform_ra(xx + 30, xx + 147, xx + 150);
  xx[60] = xx[94] + xx[107] * xx[195];
  xx[61] = xx[95] + xx[107] * xx[198];
  xx[147] = xx[110] + xx[121] * xx[127];
  xx[148] = xx[113] + xx[77] * xx[85] - xx[78] * xx[88] + xx[172] + xx[60] * xx
    [127];
  xx[149] = xx[114] + xx[77] * xx[86] - xx[78] * xx[91] + xx[173] + xx[61] * xx
    [127];
  pm_math_Quaternion_xform_ra(xx + 30, xx + 147, xx + 113);
  pm_math_Vector3_cross_ra(xx + 142, xx + 113, xx + 147);
  xx[96] = state[5] * xx[41];
  xx[41] = xx[45] * xx[45];
  xx[110] = xx[45] * xx[25];
  xx[116] = xx[47] * xx[23];
  xx[139] = xx[23] * xx[25];
  xx[140] = xx[45] * xx[47];
  xx[145] = xx[45] * xx[23];
  xx[45] = xx[47] * xx[25];
  xx[153] = xx[14] * (xx[41] + xx[23] * xx[23]) - xx[109];
  xx[154] = xx[14] * (xx[110] - xx[116]);
  xx[155] = xx[14] * (xx[139] + xx[140]);
  xx[156] = - (xx[14] * (xx[116] + xx[110]));
  xx[157] = xx[14] * (xx[41] + xx[47] * xx[47]) - xx[109];
  xx[158] = xx[14] * (xx[145] - xx[45]);
  xx[159] = xx[14] * (xx[139] - xx[140]);
  xx[160] = - (xx[14] * (xx[45] + xx[145]));
  xx[161] = xx[14] * (xx[41] + xx[25] * xx[25]) - xx[109];
  xx[23] = xx[46] / xx[126];
  xx[25] = xx[141] * xx[23];
  xx[41] = xx[112] * xx[23];
  xx[45] = xx[141] / xx[126];
  xx[47] = xx[112] * xx[45];
  xx[110] = xx[112] / xx[126];
  xx[162] = xx[74] - xx[46] * xx[23];
  xx[163] = xx[51] - xx[25];
  xx[164] = xx[44] - xx[41];
  xx[165] = xx[62] - xx[25];
  xx[166] = xx[117] - xx[141] * xx[45];
  xx[167] = xx[131] - xx[47];
  xx[168] = xx[52] - xx[41];
  xx[169] = xx[53] - xx[47];
  xx[170] = xx[111] - xx[112] * xx[110];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 162, xx + 153, xx + 171);
  pm_math_Matrix3x3_compose_ra(xx + 153, xx + 171, xx + 162);
  xx[25] = xx[121] / xx[126];
  xx[41] = xx[60] / xx[126];
  xx[44] = xx[61] / xx[126];
  xx[171] = xx[79] - xx[46] * xx[25];
  xx[172] = xx[85] - xx[46] * xx[41];
  xx[173] = xx[86] - xx[46] * xx[44];
  xx[174] = xx[87] - xx[141] * xx[25];
  xx[175] = xx[88] - xx[141] * xx[41];
  xx[176] = xx[91] - xx[141] * xx[44];
  xx[177] = xx[93] - xx[112] * xx[25];
  xx[178] = xx[94] - xx[112] * xx[41];
  xx[179] = xx[95] - xx[112] * xx[44];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 171, xx + 153, xx + 180);
  pm_math_Matrix3x3_compose_ra(xx + 153, xx + 180, xx + 171);
  pm_math_Matrix3x3_postCross_ra(xx + 171, xx + 142, xx + 180);
  xx[46] = xx[60] * xx[25];
  xx[47] = xx[61] * xx[25];
  xx[51] = xx[61] * xx[41];
  xx[201] = xx[104] - xx[121] * xx[25];
  xx[202] = xx[193] - xx[46];
  xx[203] = xx[194] - xx[47];
  xx[204] = xx[195] - xx[46];
  xx[205] = xx[196] - xx[60] * xx[41] + xx[97];
  xx[206] = xx[197] - xx[51];
  xx[207] = xx[198] - xx[47];
  xx[208] = xx[199] - xx[51];
  xx[209] = xx[200] - xx[61] * xx[44] + xx[97];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 201, xx + 153, xx + 189);
  pm_math_Matrix3x3_compose_ra(xx + 153, xx + 189, xx + 198);
  pm_math_Matrix3x3_postCross_ra(xx + 198, xx + 142, xx + 153);
  pm_math_Matrix3x3_preCross_ra(xx + 153, xx + 142, xx + 189);
  xx[46] = xx[16] + xx[162] - xx[180] - xx[180] - xx[189];
  xx[47] = state[5] * xx[40];
  xx[40] = xx[163] - xx[181] - xx[183] - xx[190];
  xx[51] = xx[171] - xx[153];
  xx[52] = xx[172] - xx[156];
  xx[53] = xx[173] - xx[159];
  xx[60] = xx[174] - xx[154];
  xx[61] = xx[175] - xx[157];
  xx[62] = xx[176] - xx[160];
  xx[74] = xx[177] - xx[155];
  xx[79] = xx[178] - xx[158];
  xx[85] = xx[179] - xx[161];
  xx[153] = xx[51];
  xx[154] = xx[52];
  xx[155] = xx[53];
  xx[156] = xx[60];
  xx[157] = xx[61];
  xx[158] = xx[62];
  xx[159] = xx[74];
  xx[160] = xx[79];
  xx[161] = xx[85];
  xx[86] = 0.21;
  xx[87] = xx[86] * xx[35];
  xx[88] = xx[86] * xx[34];
  xx[91] = 0.105;
  xx[93] = xx[14] * (xx[87] * xx[24] + xx[88] * xx[29]) - xx[91];
  xx[94] = - (xx[14] * (xx[87] * xx[29] - xx[88] * xx[24]));
  xx[95] = - (xx[14] * (xx[88] * xx[34] + xx[87] * xx[35]) - xx[86]);
  pm_math_Vector3_cross_ra(xx + 20, xx + 93, xx + 86);
  pm_math_Vector3_cross_ra(xx + 20, xx + 86, xx + 139);
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 139, xx + 20);
  pm_math_Matrix3x3_xform_ra(xx + 153, xx + 20, xx + 86);
  xx[104] = xx[164] - xx[182] - xx[186] - xx[191];
  xx[111] = xx[168] - xx[186] - xx[182] - xx[195];
  xx[112] = xx[169] - xx[187] - xx[185] - xx[196];
  xx[116] = xx[50] + xx[152] + xx[149] + xx[96] * xx[111] - xx[47] * xx[112] +
    xx[88];
  xx[117] = xx[16] + xx[170] - xx[188] - xx[188] - xx[197];
  memcpy(xx + 121, xx + 117, 1 * sizeof(double));
  ii[0] = factorSymmetricPosDef(xx + 121, 1, xx + 126);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_3_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[126] = (input[3] - xx[0] * state[5] - xx[116]) / xx[121];
  xx[50] = xx[165] - xx[183] - xx[181] - xx[192];
  xx[131] = xx[16] + xx[166] - xx[184] - xx[184] - xx[193];
  xx[88] = xx[167] - xx[185] - xx[187] - xx[194];
  xx[139] = xx[48] + xx[150] + xx[147] + xx[96] * xx[46] - xx[47] * xx[40] + xx
    [86] + xx[104] * xx[126];
  xx[140] = xx[49] + xx[151] + xx[148] + xx[96] * xx[50] - xx[47] * xx[131] +
    xx[87] + xx[88] * xx[126];
  xx[141] = xx[116] + xx[117] * xx[126];
  pm_math_Quaternion_xform_ra(xx + 36, xx + 139, xx + 147);
  xx[150] = xx[97] + xx[198];
  xx[151] = xx[199];
  xx[152] = xx[200];
  xx[153] = xx[201];
  xx[154] = xx[97] + xx[202];
  xx[155] = xx[203];
  xx[156] = xx[204];
  xx[157] = xx[205];
  xx[158] = xx[97] + xx[206];
  pm_math_Matrix3x3_xform_ra(xx + 150, xx + 20, xx + 139);
  xx[150] = xx[113] + xx[96] * xx[51] - xx[47] * xx[60] + xx[139] + xx[74] * xx
    [126];
  xx[151] = xx[114] + xx[96] * xx[52] - xx[47] * xx[61] + xx[140] + xx[79] * xx
    [126];
  xx[152] = xx[115] + xx[96] * xx[53] - xx[47] * xx[62] + xx[141] + xx[85] * xx
    [126];
  pm_math_Quaternion_xform_ra(xx + 36, xx + 150, xx + 113);
  pm_math_Vector3_cross_ra(xx + 93, xx + 113, xx + 139);
  xx[48] = xx[18] * state[3];
  xx[18] = xx[24] * xx[24];
  xx[49] = xx[24] * xx[29];
  xx[86] = xx[35] * xx[34];
  xx[87] = xx[29] * xx[34];
  xx[116] = xx[24] * xx[35];
  xx[145] = xx[24] * xx[34];
  xx[24] = xx[35] * xx[29];
  xx[150] = xx[14] * (xx[18] + xx[34] * xx[34]) - xx[109];
  xx[151] = xx[14] * (xx[49] - xx[86]);
  xx[152] = xx[14] * (xx[87] + xx[116]);
  xx[153] = - (xx[14] * (xx[86] + xx[49]));
  xx[154] = xx[14] * (xx[18] + xx[35] * xx[35]) - xx[109];
  xx[155] = xx[14] * (xx[145] - xx[24]);
  xx[156] = xx[14] * (xx[87] - xx[116]);
  xx[157] = - (xx[14] * (xx[24] + xx[145]));
  xx[158] = xx[14] * (xx[18] + xx[29] * xx[29]) - xx[109];
  xx[18] = xx[104] / xx[121];
  xx[24] = xx[88] * xx[18];
  xx[29] = xx[117] * xx[18];
  xx[34] = xx[88] / xx[121];
  xx[35] = xx[117] * xx[34];
  xx[49] = xx[117] / xx[121];
  xx[159] = xx[46] - xx[104] * xx[18];
  xx[160] = xx[40] - xx[24];
  xx[161] = xx[104] - xx[29];
  xx[162] = xx[50] - xx[24];
  xx[163] = xx[131] - xx[88] * xx[34];
  xx[164] = xx[88] - xx[35];
  xx[165] = xx[111] - xx[29];
  xx[166] = xx[112] - xx[35];
  xx[167] = xx[117] - xx[117] * xx[49];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 159, xx + 150, xx + 168);
  pm_math_Matrix3x3_compose_ra(xx + 150, xx + 168, xx + 159);
  xx[24] = xx[74] / xx[121];
  xx[29] = xx[79] / xx[121];
  xx[35] = xx[85] / xx[121];
  xx[168] = xx[51] - xx[104] * xx[24];
  xx[169] = xx[52] - xx[104] * xx[29];
  xx[170] = xx[53] - xx[104] * xx[35];
  xx[171] = xx[60] - xx[88] * xx[24];
  xx[172] = xx[61] - xx[88] * xx[29];
  xx[173] = xx[62] - xx[88] * xx[35];
  xx[174] = xx[74] - xx[117] * xx[24];
  xx[175] = xx[79] - xx[117] * xx[29];
  xx[176] = xx[85] - xx[117] * xx[35];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 168, xx + 150, xx + 177);
  pm_math_Matrix3x3_compose_ra(xx + 150, xx + 177, xx + 168);
  pm_math_Matrix3x3_postCross_ra(xx + 168, xx + 93, xx + 177);
  xx[40] = xx[79] * xx[24];
  xx[46] = xx[85] * xx[24];
  xx[50] = xx[85] * xx[29];
  xx[186] = xx[198] - xx[74] * xx[24] + xx[97];
  xx[187] = xx[199] - xx[40];
  xx[188] = xx[200] - xx[46];
  xx[189] = xx[201] - xx[40];
  xx[190] = xx[202] - xx[79] * xx[29] + xx[97];
  xx[191] = xx[203] - xx[50];
  xx[192] = xx[204] - xx[46];
  xx[193] = xx[205] - xx[50];
  xx[194] = xx[206] - xx[85] * xx[35] + xx[97];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 186, xx + 150, xx + 195);
  pm_math_Matrix3x3_compose_ra(xx + 150, xx + 195, xx + 186);
  pm_math_Matrix3x3_postCross_ra(xx + 186, xx + 93, xx + 150);
  pm_math_Matrix3x3_preCross_ra(xx + 150, xx + 93, xx + 195);
  xx[40] = xx[16] + xx[159] - xx[177] - xx[177] - xx[195];
  xx[46] = xx[17] * state[3];
  xx[50] = xx[160] - xx[178] - xx[180] - xx[196];
  xx[51] = xx[168] - xx[150];
  xx[52] = xx[169] - xx[153];
  xx[53] = xx[170] - xx[156];
  xx[60] = xx[171] - xx[151];
  xx[61] = xx[172] - xx[154];
  xx[62] = xx[173] - xx[157];
  xx[74] = xx[174] - xx[152];
  xx[79] = xx[175] - xx[155];
  xx[85] = xx[176] - xx[158];
  xx[150] = xx[51];
  xx[151] = xx[52];
  xx[152] = xx[53];
  xx[153] = xx[60];
  xx[154] = xx[61];
  xx[155] = xx[62];
  xx[156] = xx[74];
  xx[157] = xx[79];
  xx[158] = xx[85];
  xx[86] = xx[91] * xx[3];
  xx[87] = xx[91] * xx[9];
  xx[88] = xx[14] * (xx[86] * xx[7] - xx[87] * xx[5]);
  xx[97] = xx[88] * state[1] * state[1];
  xx[104] = xx[9] * xx[97];
  xx[168] = xx[4];
  xx[169] = xx[3];
  xx[170] = xx[8];
  xx[4] = 0.02 - (xx[14] * (xx[86] * xx[3] + xx[87] * xx[9]) - xx[91]);
  xx[8] = xx[4] * state[1] * state[1];
  xx[111] = xx[9] * xx[8];
  xx[112] = xx[3] * xx[8] - xx[7] * xx[97];
  xx[171] = xx[104];
  xx[172] = xx[111];
  xx[173] = xx[112];
  pm_math_Vector3_cross_ra(xx + 168, xx + 171, xx + 174);
  xx[116] = xx[91] * state[3];
  xx[117] = xx[14] * (xx[5] * xx[104] + xx[174]) - xx[8] - xx[116] * (xx[19] +
    xx[15]);
  xx[8] = xx[97] + xx[14] * (xx[5] * xx[111] + xx[175]);
  xx[15] = xx[116] * (xx[17] + xx[17]) + xx[14] * (xx[176] + xx[5] * xx[112]);
  xx[168] = xx[117];
  xx[169] = xx[8];
  xx[170] = xx[15];
  pm_math_Matrix3x3_xform_ra(xx + 150, xx + 168, xx + 171);
  xx[17] = xx[161] - xx[179] - xx[183] - xx[197];
  xx[19] = xx[17] + xx[91] * xx[52];
  xx[97] = xx[165] - xx[183] - xx[179] - xx[201];
  xx[104] = xx[166] - xx[184] - xx[182] - xx[202];
  xx[111] = xx[28] + xx[149] + xx[141] + xx[48] * xx[97] - xx[46] * xx[104] +
    xx[173];
  xx[112] = 0.2;
  xx[116] = xx[112] + xx[190];
  xx[150] = xx[112] + xx[186];
  xx[151] = xx[187];
  xx[152] = xx[188];
  xx[153] = xx[189];
  xx[154] = xx[116];
  xx[155] = xx[191];
  xx[156] = xx[192];
  xx[157] = xx[193];
  xx[158] = xx[112] + xx[194];
  pm_math_Matrix3x3_xform_ra(xx + 150, xx + 168, xx + 174);
  xx[121] = xx[114] + xx[48] * xx[52] - xx[46] * xx[61] + xx[175];
  xx[114] = xx[16] + xx[167] - xx[185] - xx[185] - xx[203];
  xx[131] = xx[114] + xx[91] * xx[79];
  xx[145] = xx[79] + xx[91] * xx[116];
  xx[150] = xx[131] + xx[91] * xx[145];
  ii[0] = factorSymmetricPosDef(xx + 150, 1, xx + 151);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_2_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[151] = (input[2] - xx[0] * state[3] - (xx[111] + xx[91] * xx[121])) / xx
    [150];
  xx[28] = xx[162] - xx[180] - xx[178] - xx[198];
  xx[141] = xx[16] + xx[163] - xx[181] - xx[181] - xx[199];
  xx[149] = xx[164] - xx[182] - xx[184] - xx[200];
  xx[152] = xx[149] + xx[91] * xx[61];
  xx[153] = xx[26] + xx[147] + xx[139] + xx[48] * xx[40] - xx[46] * xx[50] + xx
    [171] + xx[19] * xx[151];
  xx[154] = xx[27] + xx[148] + xx[140] + xx[48] * xx[28] - xx[46] * xx[141] +
    xx[172] + xx[152] * xx[151];
  xx[155] = xx[111] + xx[131] * xx[151];
  pm_math_Quaternion_xform_ra(xx + 10, xx + 153, xx + 156);
  xx[153] = xx[4];
  xx[154] = - xx[88];
  xx[155] = xx[14] * (xx[86] * xx[5] + xx[87] * xx[7]) - 0.015;
  xx[26] = xx[74] + xx[91] * xx[187];
  xx[27] = xx[85] + xx[91] * xx[193];
  xx[159] = xx[113] + xx[48] * xx[51] - xx[46] * xx[60] + xx[174] + xx[26] * xx
    [151];
  xx[160] = xx[121] + xx[145] * xx[151];
  xx[161] = xx[115] + xx[48] * xx[53] - xx[46] * xx[62] + xx[176] + xx[27] * xx
    [151];
  pm_math_Quaternion_xform_ra(xx + 10, xx + 159, xx + 162);
  pm_math_Vector3_cross_ra(xx + 153, xx + 162, xx + 159);
  xx[86] = 0.0403;
  xx[87] = xx[86] * state[1] * state[1];
  xx[111] = xx[5] * xx[5];
  xx[113] = xx[7] * xx[3];
  xx[115] = xx[5] * xx[9];
  xx[121] = xx[9] * xx[7];
  xx[139] = xx[5] * xx[3];
  xx[140] = xx[9] * xx[3];
  xx[147] = xx[5] * xx[7];
  xx[164] = xx[14] * (xx[111] + xx[7] * xx[7]) - xx[109];
  xx[165] = - (xx[14] * (xx[113] + xx[115]));
  xx[166] = xx[14] * (xx[121] - xx[139]);
  xx[167] = xx[14] * (xx[115] - xx[113]);
  xx[168] = xx[14] * (xx[111] + xx[3] * xx[3]) - xx[109];
  xx[169] = - (xx[14] * (xx[140] + xx[147]));
  xx[170] = xx[14] * (xx[121] + xx[139]);
  xx[171] = xx[14] * (xx[147] - xx[140]);
  xx[172] = xx[14] * (xx[111] + xx[9] * xx[9]) - xx[109];
  xx[109] = xx[26] / xx[150];
  xx[111] = xx[145] / xx[150];
  xx[113] = xx[27] / xx[150];
  xx[173] = xx[51] - xx[19] * xx[109];
  xx[174] = xx[52] - xx[19] * xx[111];
  xx[175] = xx[53] - xx[19] * xx[113];
  xx[176] = xx[60] - xx[152] * xx[109];
  xx[177] = xx[61] - xx[152] * xx[111];
  xx[178] = xx[62] - xx[152] * xx[113];
  xx[179] = xx[74] - xx[131] * xx[109];
  xx[180] = xx[79] - xx[131] * xx[111];
  xx[181] = xx[85] - xx[131] * xx[113];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 173, xx + 164, xx + 195);
  pm_math_Matrix3x3_compose_ra(xx + 164, xx + 195, xx + 173);
  xx[51] = xx[145] * xx[109];
  xx[52] = xx[27] * xx[109];
  xx[53] = xx[27] * xx[111];
  xx[195] = xx[186] - xx[26] * xx[109] + xx[112];
  xx[196] = xx[187] - xx[51];
  xx[197] = xx[188] - xx[52];
  xx[198] = xx[189] - xx[51];
  xx[199] = xx[116] - xx[145] * xx[111];
  xx[200] = xx[191] - xx[53];
  xx[201] = xx[192] - xx[52];
  xx[202] = xx[193] - xx[53];
  xx[203] = xx[194] - xx[27] * xx[113] + xx[112];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 195, xx + 164, xx + 182);
  pm_math_Matrix3x3_compose_ra(xx + 164, xx + 182, xx + 191);
  pm_math_Matrix3x3_postCross_ra(xx + 191, xx + 153, xx + 182);
  xx[26] = xx[179] - xx[184];
  xx[27] = xx[19] / xx[150];
  xx[51] = xx[152] * xx[27];
  xx[52] = xx[131] * xx[27];
  xx[53] = xx[152] / xx[150];
  xx[60] = xx[131] * xx[53];
  xx[61] = xx[131] / xx[150];
  xx[199] = xx[40] - xx[19] * xx[27];
  xx[200] = xx[50] - xx[51];
  xx[201] = xx[17] - xx[52];
  xx[202] = xx[28] - xx[51];
  xx[203] = xx[141] - xx[152] * xx[53];
  xx[204] = xx[149] - xx[60];
  xx[205] = xx[97] - xx[52];
  xx[206] = xx[104] - xx[60];
  xx[207] = xx[114] - xx[131] * xx[61];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 199, xx + 164, xx + 208);
  pm_math_Matrix3x3_compose_ra(xx + 164, xx + 208, xx + 199);
  pm_math_Matrix3x3_postCross_ra(xx + 173, xx + 153, xx + 164);
  pm_math_Matrix3x3_preCross_ra(xx + 182, xx + 153, xx + 208);
  xx[17] = xx[180] - xx[187];
  xx[19] = xx[17] + xx[86] * (0.35 + xx[195]);
  xx[28] = xx[207] - xx[172] - xx[172] - xx[216] + xx[86] * xx[17] + xx[86] *
    xx[19] + xx[16];
  ii[0] = factorSymmetricPosDef(xx + 28, 1, xx + 16);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'justina_manipulator/Manipulator/la_1_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[50] = (xx[26] + xx[86] * xx[192]) / xx[28];
  xx[51] = xx[19] / xx[28];
  xx[52] = (xx[181] - xx[190] + xx[86] * xx[198]) / xx[28];
  xx[16] = xx[2] * state[0];
  xx[2] = sin(xx[16]);
  xx[17] = xx[6] * xx[2];
  xx[19] = 9.806649999999999;
  xx[40] = xx[19] * xx[17];
  xx[60] = xx[1] * xx[2];
  xx[2] = xx[19] * xx[60];
  xx[62] = xx[14] * (xx[17] * xx[40] + xx[60] * xx[2]) - xx[19];
  xx[17] = cos(xx[16]);
  xx[16] = xx[1] * xx[17];
  xx[1] = xx[6] * xx[17];
  xx[6] = xx[14] * (xx[16] * xx[2] + xx[1] * xx[40]);
  xx[17] = xx[14] * (xx[16] * xx[40] - xx[1] * xx[2]);
  xx[114] = xx[62];
  xx[115] = xx[6];
  xx[116] = xx[17];
  xx[1] = (input[1] - xx[0] * state[1] - (xx[158] + xx[161] - xx[87] * xx[26] +
            xx[86] * (xx[163] - xx[87] * xx[194]))) / xx[28] -
    pm_math_Vector3_dot_ra(xx + 50, xx + 114);
  xx[50] = xx[27];
  xx[51] = xx[53];
  xx[52] = xx[61];
  xx[0] = xx[3] * xx[1];
  xx[2] = xx[7] * xx[1];
  xx[16] = xx[14] * (xx[5] * xx[0] + xx[9] * xx[2]);
  xx[19] = xx[14] * (xx[5] * xx[2] - xx[9] * xx[0]);
  xx[5] = xx[1] - xx[14] * (xx[7] * xx[2] + xx[3] * xx[0]);
  xx[26] = xx[16];
  xx[27] = xx[19];
  xx[28] = xx[5];
  xx[114] = xx[109];
  xx[115] = xx[111];
  xx[116] = xx[113];
  xx[111] = xx[62] - xx[87] + xx[88] * xx[1];
  xx[112] = xx[86] * xx[1] + xx[6] + xx[4] * xx[1];
  xx[113] = xx[17];
  pm_math_Quaternion_inverseXform_ra(xx + 10, xx + 111, xx + 2);
  xx[0] = xx[151] - (pm_math_Vector3_dot_ra(xx + 50, xx + 26) +
                     pm_math_Vector3_dot_ra(xx + 114, xx + 2));
  xx[9] = xx[18];
  xx[10] = xx[34];
  xx[11] = xx[49];
  xx[12] = xx[16] + xx[48];
  xx[13] = xx[19] - xx[46];
  xx[14] = xx[5] + xx[0];
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 12, xx + 5);
  xx[16] = xx[24];
  xx[17] = xx[29];
  xx[18] = xx[35];
  pm_math_Vector3_cross_ra(xx + 12, xx + 93, xx + 26);
  xx[12] = xx[2] + xx[117] + xx[26];
  xx[13] = xx[3] + xx[91] * xx[0] + xx[8] + xx[27];
  xx[14] = xx[4] + xx[15] + xx[28];
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 12, xx + 2);
  xx[8] = xx[126] - (pm_math_Vector3_dot_ra(xx + 9, xx + 5) +
                     pm_math_Vector3_dot_ra(xx + 16, xx + 2));
  xx[9] = xx[23];
  xx[10] = xx[45];
  xx[11] = xx[110];
  xx[12] = xx[5] + xx[96];
  xx[13] = xx[6] - xx[47];
  xx[14] = xx[7] + xx[8];
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 12, xx + 5);
  xx[15] = xx[25];
  xx[16] = xx[41];
  xx[17] = xx[44];
  pm_math_Vector3_cross_ra(xx + 12, xx + 142, xx + 23);
  xx[12] = xx[2] + xx[20] + xx[23];
  xx[13] = xx[3] + xx[21] + xx[24];
  xx[14] = xx[4] + xx[22] + xx[25];
  pm_math_Quaternion_inverseXform_ra(xx + 30, xx + 12, xx + 2);
  xx[12] = xx[127] - (pm_math_Vector3_dot_ra(xx + 9, xx + 5) +
                      pm_math_Vector3_dot_ra(xx + 15, xx + 2));
  xx[9] = xx[57];
  xx[10] = xx[64];
  xx[11] = xx[118];
  xx[13] = xx[5] + xx[77];
  xx[14] = xx[6] - xx[78];
  xx[15] = xx[7] + xx[12];
  pm_math_Quaternion_inverseXform_ra(xx + 65, xx + 13, xx + 5);
  xx[16] = xx[59];
  xx[17] = xx[63];
  xx[18] = xx[69];
  pm_math_Vector3_cross_ra(xx + 13, xx + 123, xx + 19);
  xx[13] = xx[2] + xx[107] * xx[12] + xx[42] + xx[19];
  xx[14] = xx[3] + xx[103] + xx[20];
  xx[15] = xx[4] + xx[43] + xx[21];
  pm_math_Quaternion_inverseXform_ra(xx + 65, xx + 13, xx + 2);
  xx[13] = xx[137] - (pm_math_Vector3_dot_ra(xx + 9, xx + 5) +
                      pm_math_Vector3_dot_ra(xx + 16, xx + 2));
  xx[9] = xx[58];
  xx[10] = xx[76];
  xx[11] = xx[90];
  xx[14] = xx[5] + xx[89];
  xx[15] = xx[6] - xx[80];
  xx[16] = xx[7] + xx[13];
  pm_math_Quaternion_inverseXform_ra(xx + 81, xx + 14, xx + 5);
  xx[17] = xx[70];
  xx[18] = xx[73];
  xx[19] = xx[75];
  pm_math_Vector3_cross_ra(xx + 14, xx + 128, xx + 20);
  xx[14] = xx[2] + xx[54] + xx[20];
  xx[15] = xx[3] + xx[55] + xx[21];
  xx[16] = xx[4] + xx[56] + xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 81, xx + 14, xx + 2);
  xx[14] = xx[138] - (pm_math_Vector3_dot_ra(xx + 9, xx + 5) +
                      pm_math_Vector3_dot_ra(xx + 17, xx + 2));
  xx[9] = - xx[98];
  xx[10] = - xx[122];
  xx[11] = xx[146];
  xx[15] = xx[5] + xx[105];
  xx[16] = xx[6] - xx[92];
  xx[17] = xx[7] + xx[14];
  pm_math_Quaternion_inverseXform_ra(xx + 99, xx + 15, xx + 5);
  pm_math_Vector3_cross_ra(xx + 15, xx + 133, xx + 18);
  xx[15] = xx[2] + xx[132] * xx[14] + xx[71] + xx[18];
  xx[16] = xx[3] + xx[119] + xx[19];
  xx[17] = xx[4] + xx[72] + xx[20];
  pm_math_Quaternion_inverseXform_ra(xx + 99, xx + 15, xx + 2);
  deriv[0] = state[1];
  deriv[1] = xx[1];
  deriv[2] = state[3];
  deriv[3] = xx[0];
  deriv[4] = state[5];
  deriv[5] = xx[8];
  deriv[6] = state[7];
  deriv[7] = xx[12];
  deriv[8] = state[9];
  deriv[9] = xx[13];
  deriv[10] = state[11];
  deriv[11] = xx[14];
  deriv[12] = state[13];
  deriv[13] = xx[136] - (pm_math_Vector3_dot_ra(xx + 9, xx + 5) + xx[120] * xx[3]
    - xx[106] * xx[2]);
  errorResult[0] = xx[108];
  return NULL;
}

PmfMessageId justina_manipulator_5aaa3abb_1_numJacPerturbLoBounds(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *bounds, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[1];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 1.0e-8;
  bounds[0] = xx[0];
  bounds[1] = xx[0];
  bounds[2] = xx[0];
  bounds[3] = xx[0];
  bounds[4] = xx[0];
  bounds[5] = xx[0];
  bounds[6] = xx[0];
  bounds[7] = xx[0];
  bounds[8] = xx[0];
  bounds[9] = xx[0];
  bounds[10] = xx[0];
  bounds[11] = xx[0];
  bounds[12] = xx[0];
  bounds[13] = xx[0];
  errorResult[0] = 0.0;
  return NULL;
}

PmfMessageId justina_manipulator_5aaa3abb_1_numJacPerturbHiBounds(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *bounds, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[2];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 1.0;
  xx[1] = +pmf_get_inf();
  bounds[0] = xx[0];
  bounds[1] = xx[1];
  bounds[2] = xx[0];
  bounds[3] = xx[1];
  bounds[4] = xx[0];
  bounds[5] = xx[1];
  bounds[6] = xx[0];
  bounds[7] = xx[1];
  bounds[8] = xx[0];
  bounds[9] = xx[1];
  bounds[10] = xx[0];
  bounds[11] = xx[1];
  bounds[12] = xx[0];
  bounds[13] = xx[1];
  errorResult[0] = 0.0;
  return NULL;
}

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
#include "katana_manipulator_279f9268_1_geometries.h"

PmfMessageId katana_manipulator_279f9268_1_compDerivs(const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state, const int *modeVector, const double *input, const double *inputDot,
  const double *inputDdot, const double *discreteState, double *deriv, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  int ii[1];
  double xx[303];
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) modeVector;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  xx[0] = 0.2;
  xx[1] = 0.0;
  xx[2] = state[0] + 3.025528;
  if (xx[1] < xx[2])
    xx[2] = xx[1];
  xx[3] = 1.74532925199433e-3;
  xx[4] = 1.0;
  xx[5] = - (xx[2] / xx[3]);
  if (xx[4] < xx[5])
    xx[5] = xx[4];
  xx[6] = 3.0;
  xx[7] = 2.0;
  xx[8] = 572.9577951308232;
  xx[9] = xx[8] * state[1];
  xx[10] = 5.729577951308233e5;
  xx[11] = xx[5] * xx[5] * (xx[6] - xx[7] * xx[5]) * ((- xx[2] == xx[1] ? xx[1] :
    - xx[9]) - xx[10] * xx[2]);
  if (xx[1] > xx[11])
    xx[11] = xx[1];
  xx[2] = state[0] - 2.891097;
  if (xx[1] > xx[2])
    xx[2] = xx[1];
  xx[5] = xx[2] / xx[3];
  if (xx[4] < xx[5])
    xx[5] = xx[4];
  xx[12] = xx[5] * xx[5] * (xx[6] - xx[7] * xx[5]) * (xx[10] * xx[2] + (xx[2] ==
    xx[1] ? xx[1] : xx[9]));
  if (xx[1] > xx[12])
    xx[12] = xx[1];
  xx[2] = 1.700155647920979e-3;
  xx[5] = 0.04584290069718736;
  xx[9] = 0.9989472147848657;
  xx[13] = xx[2];
  xx[14] = - xx[5];
  xx[15] = xx[9];
  xx[16] = xx[2] * state[1];
  xx[17] = - (xx[5] * state[1]);
  xx[18] = xx[9] * state[1];
  xx[19] = 2.9535824114129e-6 * state[1];
  xx[20] = - (4.575315346162846e-5 * state[1]);
  xx[21] = 1.348487188554365e-3 * state[1];
  pm_math_Vector3_cross_ra(xx + 16, xx + 19, xx + 22);
  xx[25] = - 0.6911436200065405;
  xx[26] = - 0.7226271558890502;
  xx[27] = - 8.384129088760706e-3;
  xx[28] = 7.758638758187818e-3;
  xx[19] = 0.5;
  xx[20] = xx[19] * state[2];
  xx[21] = 9.528023847316104e-4;
  xx[29] = sin(xx[20]);
  xx[30] = 1.344797286275369e-3;
  xx[31] = 0.9999986418430149;
  xx[32] = cos(xx[20]);
  xx[33] = - (xx[21] * xx[29]);
  xx[34] = - (xx[30] * xx[29]);
  xx[35] = xx[31] * xx[29];
  pm_math_Quaternion_compose_ra(xx + 25, xx + 32, xx + 36);
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 16, xx + 25);
  xx[20] = xx[21] * state[3];
  xx[28] = xx[25] - xx[20];
  xx[29] = xx[30] * state[3];
  xx[32] = xx[26] - xx[29];
  xx[33] = xx[31] * state[3];
  xx[34] = xx[27] + xx[33];
  xx[40] = xx[28];
  xx[41] = xx[32];
  xx[42] = xx[34];
  xx[35] = 4.765317803445479e-4;
  xx[43] = 4.316351894140021e-3;
  xx[44] = 4.625448325515435e-3;
  xx[45] = xx[35] * xx[28];
  xx[46] = xx[43] * xx[32];
  xx[47] = xx[44] * xx[34];
  pm_math_Vector3_cross_ra(xx + 40, xx + 45, xx + 48);
  xx[51] = - 0.9992799581208153;
  xx[52] = - 9.321951079367518e-4;
  xx[53] = 1.563087828683448e-3;
  xx[54] = 0.03789792958437593;
  xx[45] = xx[19] * state[4];
  xx[46] = 2.205063796675487e-3;
  xx[47] = sin(xx[45]);
  xx[55] = 5.684249615729751e-4;
  xx[56] = 0.9999974072899968;
  xx[57] = cos(xx[45]);
  xx[58] = xx[46] * xx[47];
  xx[59] = xx[55] * xx[47];
  xx[60] = xx[56] * xx[47];
  pm_math_Quaternion_compose_ra(xx + 51, xx + 57, xx + 61);
  pm_math_Quaternion_inverseXform_ra(xx + 61, xx + 40, xx + 51);
  xx[45] = xx[46] * state[5];
  xx[47] = xx[51] + xx[45];
  xx[54] = xx[55] * state[5];
  xx[57] = xx[52] + xx[54];
  xx[58] = xx[56] * state[5];
  xx[59] = xx[53] + xx[58];
  xx[65] = xx[47];
  xx[66] = xx[57];
  xx[67] = xx[59];
  xx[60] = 1.145100617917819e-3;
  xx[68] = 2.316624475045348e-3;
  xx[69] = 3.128657907036832e-3;
  xx[70] = xx[60] * xx[47];
  xx[71] = xx[68] * xx[57];
  xx[72] = xx[69] * xx[59];
  pm_math_Vector3_cross_ra(xx + 65, xx + 70, xx + 73);
  xx[76] = - 3.346189319305779e-4;
  xx[77] = - 0.9968808760112428;
  xx[78] = - 0.07890293436522287;
  xx[79] = 1.653487763724648e-3;
  xx[70] = xx[19] * state[6];
  xx[71] = 1.08244070307682e-3;
  xx[72] = sin(xx[70]);
  xx[80] = 1.917612039156894e-4;
  xx[81] = 0.9999993957747;
  xx[82] = cos(xx[70]);
  xx[83] = xx[71] * xx[72];
  xx[84] = - (xx[80] * xx[72]);
  xx[85] = xx[81] * xx[72];
  pm_math_Quaternion_compose_ra(xx + 76, xx + 82, xx + 86);
  pm_math_Quaternion_inverseXform_ra(xx + 86, xx + 65, xx + 76);
  xx[70] = xx[71] * state[7];
  xx[72] = xx[76] + xx[70];
  xx[79] = xx[80] * state[7];
  xx[82] = xx[77] - xx[79];
  xx[83] = xx[81] * state[7];
  xx[84] = xx[78] + xx[83];
  xx[90] = xx[72];
  xx[91] = xx[82];
  xx[92] = xx[84];
  xx[85] = 7.632327749129093e-4;
  xx[93] = 1.506879894079632e-3;
  xx[94] = 1.887278331007457e-3;
  xx[95] = xx[85] * xx[72];
  xx[96] = xx[93] * xx[82];
  xx[97] = xx[94] * xx[84];
  pm_math_Vector3_cross_ra(xx + 90, xx + 95, xx + 98);
  xx[101] = - 0.5253100883175446;
  xx[102] = - 0.5240402295380637;
  xx[103] = 0.4725020424364453;
  xx[104] = 0.4755764595003572;
  xx[95] = xx[19] * state[8];
  xx[96] = 0.04028831528877438;
  xx[97] = sin(xx[95]);
  xx[105] = 3.256618430792202e-3;
  xx[106] = 0.9991827891269888;
  xx[107] = cos(xx[95]);
  xx[108] = - (xx[96] * xx[97]);
  xx[109] = - (xx[105] * xx[97]);
  xx[110] = xx[106] * xx[97];
  pm_math_Quaternion_compose_ra(xx + 101, xx + 107, xx + 111);
  pm_math_Quaternion_inverseXform_ra(xx + 111, xx + 90, xx + 101);
  xx[95] = xx[96] * state[9];
  xx[97] = xx[101] - xx[95];
  xx[104] = xx[105] * state[9];
  xx[107] = xx[102] - xx[104];
  xx[108] = xx[106] * state[9];
  xx[109] = xx[103] + xx[108];
  xx[115] = xx[97];
  xx[116] = xx[107];
  xx[117] = xx[109];
  xx[110] = 1.205248838405131e-4;
  xx[118] = 1.321304277041007e-4;
  xx[119] = 9.347768845538619e-5;
  xx[120] = xx[110] * xx[97];
  xx[121] = xx[118] * xx[107];
  xx[122] = xx[119] * xx[109];
  pm_math_Vector3_cross_ra(xx + 115, xx + 120, xx + 123);
  xx[126] = - 0.7346630751601042;
  xx[127] = - 5.876121419582161e-4;
  xx[128] = - 0.6784297170278516;
  xx[129] = - 1.714573352007363e-3;
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 115, xx + 120);
  xx[130] = 0.07000000000000001;
  if (0 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:ZeroLengthDivision",
      "The Length parameter of the 'katana_manipulator/Subsystem/Variable Brick Solid' block is zero. For the calculation of solid dimensions from mass, the block requires a nonzero value.",
      neDiagMgr);
  }

  memcpy(xx + 131, xx + 130, 1 * sizeof(double));
  if (0 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:ZeroWidthDivision",
      "The Width parameter of the 'katana_manipulator/Subsystem/Variable Brick Solid' block is zero. For the calculation of solid dimensions from mass, the block requires a nonzero value.",
      neDiagMgr);
  }

  xx[132] = 1.0e4 * xx[131] * xx[130];
  xx[132] = xx[132] == 0.0 ? 0.0 : input[0] / xx[132];
  xx[130] = fabs(xx[132]);
  xx[131] = xx[19] * xx[130];
  xx[132] = input[0] / 12.0;
  xx[133] = (4.900000000000001e-3 + xx[130] * xx[130]) * xx[132];
  xx[134] = input[0];
  xx[135] = xx[1];
  xx[136] = xx[1];
  xx[137] = xx[131];
  xx[138] = xx[133];
  xx[139] = xx[133];
  xx[140] = 9.800000000000001e-3 * xx[132];
  xx[141] = xx[1];
  xx[142] = xx[1];
  xx[143] = xx[1];
  if (!(input[0] != xx[1] || xx[131] == xx[1]) ? 1 : 0 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:InvalidZeroMass",
      "The zero mass of 'katana_manipulator/Subsystem/Variable Brick Solid' is incompatible with the nonzero center of mass.",
      neDiagMgr);
  }

  xx[130] = 0.0552136183596 + xx[134];
  xx[131] = xx[134] * xx[135];
  xx[132] = 0.6930949976605001;
  xx[133] = 0.7208462556037808;
  xx[144] = xx[134] * xx[137];
  xx[145] = xx[133] * xx[144];
  xx[146] = xx[133] * xx[131];
  xx[147] = xx[131] + xx[7] * (xx[132] * xx[145] - xx[133] * xx[146]);
  xx[131] = 0.08930994381546777;
  xx[148] = xx[147] + xx[131] * xx[134];
  xx[149] = xx[134] * xx[136];
  xx[150] = xx[144] - xx[7] * (xx[132] * xx[146] + xx[133] * xx[145]);
  xx[132] = 3.512778484048084e-3;
  xx[133] = xx[150] - xx[132] * xx[134];
  xx[144] = 0.9992298676825654;
  xx[145] = xx[19] * (xx[138] + xx[139] - xx[140]) + xx[137] * xx[137] * xx[134];
  xx[146] = 0.03923864843598279;
  xx[151] = xx[135] * xx[137] * xx[134] - xx[142];
  xx[152] = xx[146] * xx[151];
  xx[153] = xx[144] * xx[145] - xx[152];
  xx[154] = xx[144] * xx[151];
  xx[151] = xx[19] * (xx[139] + xx[140] - xx[138]) + xx[135] * xx[135] * xx[134];
  xx[155] = xx[154] - xx[146] * xx[151];
  xx[156] = xx[131] * xx[147];
  xx[157] = xx[144] * xx[151] + xx[152];
  xx[151] = xx[154] + xx[146] * xx[145];
  xx[145] = xx[132] * xx[150];
  xx[152] = 0.9999999999999998;
  xx[154] = xx[135] * xx[136] * xx[134] - xx[143];
  xx[158] = xx[152] * xx[154];
  xx[135] = xx[136] * xx[137] * xx[134] - xx[141];
  xx[137] = xx[152] * xx[135];
  xx[141] = xx[132] * xx[149];
  xx[142] = xx[132] * xx[147];
  xx[132] = xx[131] * xx[150];
  xx[143] = 3.137260490465184e-4 * xx[134];
  xx[147] = xx[131] * xx[149];
  xx[159] = xx[130];
  xx[160] = xx[148];
  xx[161] = xx[149];
  xx[162] = xx[133];
  xx[163] = 6.825725143517342e-6 + xx[144] * xx[153] - xx[146] * xx[155] + xx
    [156] + xx[156] + 7.976266064322009e-3 * xx[134];
  xx[164] = 4.464000000000002e-6 + 0.9999999999999996 * (xx[19] * (xx[140] + xx
    [138] - xx[139]) + xx[136] * xx[136] * xx[134]);
  xx[165] = 7.004274856482663e-6 + xx[144] * xx[157] + xx[146] * xx[151] - xx
    [145] - xx[145] + 1.233961267799115e-5 * xx[134];
  xx[166] = - (xx[19] * (xx[144] * xx[158] + xx[146] * xx[137] + xx[141] + xx
    [152] * (xx[144] * xx[154] + xx[146] * xx[135]) + xx[141]));
  xx[167] = xx[19] * (xx[146] * xx[157] - xx[144] * xx[151] - xx[142] + xx[132]
                      - xx[143] + xx[132] - (xx[144] * xx[155] + xx[146] * xx
    [153]) - xx[142] - xx[143]);
  xx[168] = xx[19] * (xx[152] * (xx[144] * xx[135] - xx[146] * xx[154]) + xx[147]
                      + xx[144] * xx[137] - xx[146] * xx[158] + xx[147]);
  if (xx[130] != xx[1] || (xx[148] == xx[1] && xx[149] == xx[1] && xx[133] ==
       xx[1]) ? 0 : 1 != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:InvalidMassDistribution",
      "The rigid component containing 'katana_manipulator/Subsystem/Variable Brick Solid' has invalid zero total mass and nonzero first moment of mass.",
      neDiagMgr);
  }

  xx[130] = xx[164] + xx[165];
  xx[131] = - xx[168];
  xx[132] = - xx[167];
  xx[133] = xx[165] + xx[163];
  xx[134] = - xx[166];
  xx[135] = xx[163] + xx[164];
  xx[136] = xx[130];
  xx[137] = xx[131];
  xx[138] = xx[132];
  xx[139] = xx[131];
  xx[140] = xx[133];
  xx[141] = xx[134];
  xx[142] = xx[132];
  xx[143] = xx[134];
  xx[144] = xx[135];
  pm_math_Matrix3x3_xform_ra(xx + 136, xx + 120, xx + 145);
  pm_math_Vector3_cross_ra(xx + 120, xx + 145, xx + 136);
  xx[139] = - 0.911408825577855;
  xx[140] = 0.3424136349352726;
  xx[141] = - 0.1326958003817312;
  xx[142] = 0.1856843553729313;
  xx[131] = xx[19] * state[12];
  xx[132] = 0.07948248029124094;
  xx[134] = sin(xx[131]);
  xx[143] = 0.6632037626770967;
  xx[144] = 0.7442064931843135;
  xx[145] = cos(xx[131]);
  xx[146] = - (xx[132] * xx[134]);
  xx[147] = - (xx[143] * xx[134]);
  xx[148] = xx[144] * xx[134];
  pm_math_Quaternion_compose_ra(xx + 139, xx + 145, xx + 149);
  pm_math_Quaternion_inverseXform_ra(xx + 149, xx + 120, xx + 139);
  xx[131] = xx[132] * state[13];
  xx[134] = xx[139] - xx[131];
  xx[142] = xx[143] * state[13];
  xx[145] = xx[140] - xx[142];
  xx[146] = xx[144] * state[13];
  xx[147] = xx[141] + xx[146];
  xx[153] = xx[134];
  xx[154] = xx[145];
  xx[155] = xx[147];
  xx[148] = 1.81842087814121e-6;
  xx[156] = 2.403622011701014e-5;
  xx[157] = 2.348035900484865e-5;
  xx[169] = xx[148] * xx[134];
  xx[170] = xx[156] * xx[145];
  xx[171] = xx[157] * xx[147];
  pm_math_Vector3_cross_ra(xx + 153, xx + 169, xx + 172);
  xx[153] = - xx[131];
  xx[154] = - xx[142];
  xx[155] = xx[146];
  pm_math_Vector3_cross_ra(xx + 139, xx + 153, xx + 169);
  xx[131] = xx[172] + xx[148] * xx[169];
  xx[142] = 1.445326016080397e-7;
  xx[146] = 0.05;
  xx[153] = 0.44;
  xx[154] = state[12] + xx[153];
  if (xx[1] < xx[154])
    xx[154] = xx[1];
  xx[155] = - (xx[154] / xx[3]);
  if (xx[4] < xx[155])
    xx[155] = xx[4];
  xx[158] = xx[8] * state[13];
  xx[175] = xx[155] * xx[155] * (xx[6] - xx[7] * xx[155]) * ((- xx[154] == xx[1]
    ? xx[1] : - xx[158]) - xx[10] * xx[154]);
  if (xx[1] > xx[175])
    xx[175] = xx[1];
  xx[154] = 0.3;
  xx[155] = state[12] - xx[154];
  if (xx[1] > xx[155])
    xx[155] = xx[1];
  xx[176] = xx[155] / xx[3];
  if (xx[4] < xx[176])
    xx[176] = xx[4];
  xx[177] = xx[176] * xx[176] * (xx[6] - xx[7] * xx[176]) * (xx[10] * xx[155] +
    (xx[155] == xx[1] ? xx[1] : xx[158]));
  if (xx[1] > xx[177])
    xx[177] = xx[1];
  xx[178] = - xx[132];
  xx[179] = - xx[143];
  xx[180] = xx[144];
  xx[155] = xx[173] + xx[156] * xx[170];
  xx[158] = xx[174] + xx[157] * xx[171];
  xx[169] = xx[131];
  xx[170] = xx[155];
  xx[171] = xx[158];
  xx[172] = 0.02340712367134115;
  xx[173] = 5.648752777545164e-3;
  xx[174] = 7.533836903777294e-3;
  xx[181] = - xx[172];
  xx[182] = - xx[173];
  xx[183] = - xx[174];
  xx[176] = 0.0251722230462;
  xx[184] = xx[139] + xx[134];
  xx[185] = xx[140] + xx[145];
  xx[186] = xx[141] + xx[147];
  xx[139] = - (xx[172] * state[13]);
  xx[140] = - (xx[173] * state[13]);
  xx[141] = - (xx[174] * state[13]);
  pm_math_Vector3_cross_ra(xx + 184, xx + 139, xx + 187);
  xx[134] = 0.04834151333136322;
  xx[139] = 9.072897061515848e-3;
  xx[140] = - 0.01908165709777362;
  xx[141] = - 0.01388175260239581;
  pm_math_Quaternion_xform_ra(xx + 149, xx + 139, xx + 184);
  xx[145] = 1.904144383609873e-3;
  xx[190] = xx[134] - xx[184];
  xx[191] = - xx[185];
  xx[192] = - (xx[145] + xx[186]);
  pm_math_Vector3_cross_ra(xx + 120, xx + 190, xx + 184);
  pm_math_Vector3_cross_ra(xx + 120, xx + 184, xx + 193);
  pm_math_Quaternion_inverseXform_ra(xx + 149, xx + 193, xx + 184);
  xx[147] = xx[176] * (xx[187] + xx[184]);
  xx[193] = xx[176] * (xx[188] + xx[185]);
  xx[184] = xx[176] * (xx[189] + xx[186]);
  xx[185] = xx[147];
  xx[186] = xx[193];
  xx[187] = xx[184];
  xx[188] = 3.961164402115063e-5;
  ii[0] = factorSymmetricPosDef(xx + 188, 1, xx + 189);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_r_finger_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  memcpy(xx + 189, xx + 188, 1 * sizeof(double));
  xx[194] = (input[7] - xx[146] * state[13] + xx[175] - xx[177] -
             (pm_math_Vector3_dot_ra(xx + 178, xx + 169) +
              pm_math_Vector3_dot_ra(xx + 181, xx + 185))) / xx[189];
  xx[169] = 1.594091162213605e-5;
  xx[170] = 1.747423563370713e-5;
  xx[185] = xx[131] - xx[142] * xx[194];
  xx[186] = xx[155] - xx[169] * xx[194];
  xx[187] = xx[158] + xx[170] * xx[194];
  pm_math_Quaternion_xform_ra(xx + 149, xx + 185, xx + 195);
  xx[131] = 5.892093379249872e-4;
  xx[155] = 1.421916648492087e-4;
  xx[158] = 1.896434229355749e-4;
  xx[185] = xx[147] - xx[131] * xx[194];
  xx[186] = xx[193] - xx[155] * xx[194];
  xx[187] = xx[184] - xx[158] * xx[194];
  pm_math_Quaternion_xform_ra(xx + 149, xx + 185, xx + 198);
  pm_math_Vector3_cross_ra(xx + 190, xx + 198, xx + 184);
  xx[201] = - 0.3348646588703533;
  xx[202] = - 0.9159133683601151;
  xx[203] = - 0.1989759720656971;
  xx[204] = - 0.09683452090748026;
  xx[147] = xx[19] * state[10];
  xx[171] = sin(xx[147]);
  xx[205] = cos(xx[147]);
  xx[206] = - (xx[132] * xx[171]);
  xx[207] = - (xx[143] * xx[171]);
  xx[208] = xx[144] * xx[171];
  pm_math_Quaternion_compose_ra(xx + 201, xx + 205, xx + 209);
  pm_math_Quaternion_inverseXform_ra(xx + 209, xx + 120, xx + 201);
  xx[147] = xx[132] * state[11];
  xx[132] = xx[201] - xx[147];
  xx[171] = xx[143] * state[11];
  xx[143] = xx[202] - xx[171];
  xx[175] = xx[144] * state[11];
  xx[144] = xx[203] + xx[175];
  xx[204] = xx[132];
  xx[205] = xx[143];
  xx[206] = xx[144];
  xx[213] = xx[148] * xx[132];
  xx[214] = xx[156] * xx[143];
  xx[215] = xx[157] * xx[144];
  pm_math_Vector3_cross_ra(xx + 204, xx + 213, xx + 216);
  xx[204] = - xx[147];
  xx[205] = - xx[171];
  xx[206] = xx[175];
  pm_math_Vector3_cross_ra(xx + 201, xx + 204, xx + 213);
  xx[147] = xx[216] + xx[148] * xx[213];
  xx[171] = state[10] + xx[153];
  if (xx[1] < xx[171])
    xx[171] = xx[1];
  xx[153] = - (xx[171] / xx[3]);
  if (xx[4] < xx[153])
    xx[153] = xx[4];
  xx[175] = xx[8] * state[11];
  xx[177] = xx[153] * xx[153] * (xx[6] - xx[7] * xx[153]) * ((- xx[171] == xx[1]
    ? xx[1] : - xx[175]) - xx[10] * xx[171]);
  if (xx[1] > xx[177])
    xx[177] = xx[1];
  xx[153] = state[10] - xx[154];
  if (xx[1] > xx[153])
    xx[153] = xx[1];
  xx[154] = xx[153] / xx[3];
  if (xx[4] < xx[154])
    xx[154] = xx[4];
  xx[171] = xx[154] * xx[154] * (xx[6] - xx[7] * xx[154]) * (xx[10] * xx[153] +
    (xx[153] == xx[1] ? xx[1] : xx[175]));
  if (xx[1] > xx[171])
    xx[171] = xx[1];
  xx[153] = xx[217] + xx[156] * xx[214];
  xx[154] = xx[218] + xx[157] * xx[215];
  xx[204] = xx[147];
  xx[205] = xx[153];
  xx[206] = xx[154];
  xx[213] = xx[201] + xx[132];
  xx[214] = xx[202] + xx[143];
  xx[215] = xx[203] + xx[144];
  xx[201] = - (xx[172] * state[11]);
  xx[202] = - (xx[173] * state[11]);
  xx[203] = - (xx[174] * state[11]);
  pm_math_Vector3_cross_ra(xx + 213, xx + 201, xx + 172);
  pm_math_Quaternion_xform_ra(xx + 209, xx + 139, xx + 201);
  xx[139] = xx[134] - xx[201];
  xx[140] = - xx[202];
  xx[141] = - (xx[145] + xx[203]);
  pm_math_Vector3_cross_ra(xx + 120, xx + 139, xx + 143);
  pm_math_Vector3_cross_ra(xx + 120, xx + 143, xx + 201);
  pm_math_Quaternion_inverseXform_ra(xx + 209, xx + 201, xx + 143);
  xx[132] = xx[176] * (xx[172] + xx[143]);
  xx[134] = xx[176] * (xx[173] + xx[144]);
  xx[143] = xx[176] * (xx[174] + xx[145]);
  xx[172] = xx[132];
  xx[173] = xx[134];
  xx[174] = xx[143];
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_l_finger_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[144] = (input[1] - xx[146] * state[11] + xx[177] - xx[171] -
             (pm_math_Vector3_dot_ra(xx + 178, xx + 204) +
              pm_math_Vector3_dot_ra(xx + 181, xx + 172))) / xx[188];
  xx[171] = xx[147] - xx[142] * xx[144];
  xx[172] = xx[153] - xx[169] * xx[144];
  xx[173] = xx[154] + xx[170] * xx[144];
  pm_math_Quaternion_xform_ra(xx + 209, xx + 171, xx + 177);
  xx[171] = xx[132] - xx[131] * xx[144];
  xx[172] = xx[134] - xx[155] * xx[144];
  xx[173] = xx[143] - xx[158] * xx[144];
  pm_math_Quaternion_xform_ra(xx + 209, xx + 171, xx + 180);
  pm_math_Vector3_cross_ra(xx + 139, xx + 180, xx + 171);
  xx[132] = xx[149] * xx[149];
  xx[134] = xx[150] * xx[151];
  xx[143] = xx[149] * xx[152];
  xx[145] = xx[150] * xx[152];
  xx[147] = xx[149] * xx[151];
  xx[153] = xx[151] * xx[152];
  xx[154] = xx[149] * xx[150];
  xx[213] = xx[7] * (xx[132] + xx[150] * xx[150]) - xx[4];
  xx[214] = xx[7] * (xx[134] - xx[143]);
  xx[215] = xx[7] * (xx[145] + xx[147]);
  xx[216] = xx[7] * (xx[134] + xx[143]);
  xx[217] = xx[7] * (xx[132] + xx[151] * xx[151]) - xx[4];
  xx[218] = xx[7] * (xx[153] - xx[154]);
  xx[219] = xx[7] * (xx[145] - xx[147]);
  xx[220] = xx[7] * (xx[153] + xx[154]);
  xx[221] = xx[7] * (xx[132] + xx[152] * xx[152]) - xx[4];
  xx[132] = xx[131] / xx[189];
  xx[134] = xx[155] / xx[189];
  xx[143] = xx[158] / xx[189];
  xx[222] = - (xx[142] * xx[132]);
  xx[223] = - (xx[142] * xx[134]);
  xx[224] = - (xx[142] * xx[143]);
  xx[225] = - (xx[169] * xx[132]);
  xx[226] = - (xx[169] * xx[134]);
  xx[227] = - (xx[169] * xx[143]);
  xx[228] = xx[170] * xx[132];
  xx[229] = xx[170] * xx[134];
  xx[230] = xx[170] * xx[143];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 222, xx + 213, xx + 231);
  pm_math_Matrix3x3_compose_ra(xx + 213, xx + 231, xx + 222);
  xx[145] = - (xx[155] * xx[132]);
  xx[147] = - (xx[158] * xx[132]);
  xx[153] = - (xx[158] * xx[134]);
  xx[231] = xx[176] - xx[131] * xx[132];
  xx[232] = xx[145];
  xx[233] = xx[147];
  xx[234] = xx[145];
  xx[235] = xx[176] - xx[155] * xx[134];
  xx[236] = xx[153];
  xx[237] = xx[147];
  xx[238] = xx[153];
  xx[239] = xx[176] - xx[158] * xx[143];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 231, xx + 213, xx + 240);
  pm_math_Matrix3x3_compose_ra(xx + 213, xx + 240, xx + 231);
  pm_math_Matrix3x3_postCross_ra(xx + 231, xx + 190, xx + 240);
  xx[145] = xx[209] * xx[209];
  xx[147] = xx[210] * xx[211];
  xx[153] = xx[209] * xx[212];
  xx[154] = xx[210] * xx[212];
  xx[174] = xx[209] * xx[211];
  xx[175] = xx[211] * xx[212];
  xx[183] = xx[209] * xx[210];
  xx[249] = xx[7] * (xx[145] + xx[210] * xx[210]) - xx[4];
  xx[250] = xx[7] * (xx[147] - xx[153]);
  xx[251] = xx[7] * (xx[154] + xx[174]);
  xx[252] = xx[7] * (xx[147] + xx[153]);
  xx[253] = xx[7] * (xx[145] + xx[211] * xx[211]) - xx[4];
  xx[254] = xx[7] * (xx[175] - xx[183]);
  xx[255] = xx[7] * (xx[154] - xx[174]);
  xx[256] = xx[7] * (xx[175] + xx[183]);
  xx[257] = xx[7] * (xx[145] + xx[212] * xx[212]) - xx[4];
  xx[145] = xx[131] / xx[188];
  xx[147] = xx[155] / xx[188];
  xx[153] = xx[158] / xx[188];
  xx[258] = - (xx[142] * xx[145]);
  xx[259] = - (xx[142] * xx[147]);
  xx[260] = - (xx[142] * xx[153]);
  xx[261] = - (xx[169] * xx[145]);
  xx[262] = - (xx[169] * xx[147]);
  xx[263] = - (xx[169] * xx[153]);
  xx[264] = xx[170] * xx[145];
  xx[265] = xx[170] * xx[147];
  xx[266] = xx[170] * xx[153];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 258, xx + 249, xx + 267);
  pm_math_Matrix3x3_compose_ra(xx + 249, xx + 267, xx + 258);
  xx[154] = - (xx[155] * xx[145]);
  xx[174] = - (xx[158] * xx[145]);
  xx[175] = - (xx[158] * xx[147]);
  xx[267] = xx[176] - xx[131] * xx[145];
  xx[268] = xx[154];
  xx[269] = xx[174];
  xx[270] = xx[154];
  xx[271] = xx[176] - xx[155] * xx[147];
  xx[272] = xx[175];
  xx[273] = xx[174];
  xx[274] = xx[175];
  xx[275] = xx[176] - xx[158] * xx[153];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 267, xx + 249, xx + 276);
  pm_math_Matrix3x3_compose_ra(xx + 249, xx + 276, xx + 267);
  pm_math_Matrix3x3_postCross_ra(xx + 267, xx + 139, xx + 276);
  xx[131] = xx[159] == 0.0 ? 0.0 : xx[162] / xx[159];
  xx[154] = xx[131] * xx[159];
  xx[155] = xx[159] == 0.0 ? 0.0 : xx[161] / xx[159];
  xx[158] = xx[155] * xx[159];
  xx[161] = xx[159] == 0.0 ? 0.0 : xx[160] / xx[159];
  xx[160] = xx[161] * xx[159];
  xx[285] = xx[222] - xx[240] + xx[258] - xx[276];
  xx[286] = xx[223] - xx[243] - xx[154] + xx[259] - xx[279];
  xx[287] = xx[158] + xx[224] - xx[246] + xx[260] - xx[282];
  xx[288] = xx[154] + xx[225] - xx[241] + xx[261] - xx[277];
  xx[289] = xx[226] - xx[244] + xx[262] - xx[280];
  xx[290] = xx[227] - xx[247] - xx[160] + xx[263] - xx[283];
  xx[291] = xx[228] - xx[242] - xx[158] + xx[264] - xx[278];
  xx[292] = xx[160] + xx[229] - xx[245] + xx[265] - xx[281];
  xx[293] = xx[230] - xx[248] + xx[266] - xx[284];
  xx[162] = 3.934060390649968e-3;
  xx[163] = 5.492352844533721e-5;
  xx[164] = - 0.01945837006122647;
  pm_math_Vector3_cross_ra(xx + 115, xx + 162, xx + 174);
  pm_math_Vector3_cross_ra(xx + 115, xx + 174, xx + 201);
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 201, xx + 115);
  pm_math_Matrix3x3_xform_ra(xx + 285, xx + 115, xx + 174);
  xx[201] = xx[136] + xx[195] + xx[184] + xx[177] + xx[171] + xx[174];
  xx[202] = xx[137] + xx[196] + xx[185] + xx[178] + xx[172] + xx[175];
  xx[203] = xx[138] + xx[197] + xx[186] + xx[179] + xx[173] + xx[176];
  pm_math_Quaternion_xform_ra(xx + 126, xx + 201, xx + 136);
  xx[171] = xx[161];
  xx[172] = xx[155];
  xx[173] = xx[131];
  pm_math_Vector3_cross_ra(xx + 120, xx + 171, xx + 174);
  pm_math_Vector3_cross_ra(xx + 120, xx + 174, xx + 171);
  xx[294] = xx[159] + xx[231] + xx[267];
  xx[295] = xx[232] + xx[268];
  xx[296] = xx[233] + xx[269];
  xx[297] = xx[234] + xx[270];
  xx[298] = xx[159] + xx[235] + xx[271];
  xx[299] = xx[236] + xx[272];
  xx[300] = xx[237] + xx[273];
  xx[301] = xx[238] + xx[274];
  xx[302] = xx[159] + xx[239] + xx[275];
  pm_math_Matrix3x3_xform_ra(xx + 294, xx + 115, xx + 120);
  xx[174] = xx[159] * xx[171] + xx[198] + xx[180] + xx[120];
  xx[175] = xx[159] * xx[172] + xx[199] + xx[181] + xx[121];
  xx[176] = xx[159] * xx[173] + xx[200] + xx[182] + xx[122];
  pm_math_Quaternion_xform_ra(xx + 126, xx + 174, xx + 120);
  pm_math_Vector3_cross_ra(xx + 162, xx + 120, xx + 158);
  xx[171] = 0.07946035858346057;
  xx[172] = - 1.72196038436491e-3;
  xx[173] = 0.9968365393916013;
  xx[174] = 3.316574541128279e-3;
  xx[175] = 0.9999934299003834;
  xx[176] = 1.463041141626824e-3;
  xx[177] = - 0.9968325093751217;
  xx[178] = 3.189828914476579e-3;
  xx[179] = 0.07946554753096069;
  xx[131] = xx[142] / xx[189];
  xx[154] = - (xx[169] * xx[131]);
  xx[155] = xx[170] * xx[131];
  xx[161] = xx[169] / xx[189];
  xx[165] = xx[170] * xx[161];
  xx[180] = 3.053489109823201e-10;
  xx[195] = xx[148] - xx[142] * xx[131];
  xx[196] = xx[154];
  xx[197] = xx[155];
  xx[198] = xx[154];
  xx[199] = xx[156] - xx[169] * xx[161];
  xx[200] = xx[165];
  xx[201] = xx[155];
  xx[202] = xx[165];
  xx[203] = xx[157] - xx[180] / xx[189];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 195, xx + 213, xx + 231);
  pm_math_Matrix3x3_compose_ra(xx + 213, xx + 231, xx + 195);
  pm_math_Matrix3x3_postCross_ra(xx + 222, xx + 190, xx + 213);
  pm_math_Matrix3x3_preCross_ra(xx + 240, xx + 190, xx + 222);
  xx[154] = xx[142] / xx[188];
  xx[155] = - (xx[169] * xx[154]);
  xx[165] = xx[170] * xx[154];
  xx[181] = xx[169] / xx[188];
  xx[182] = xx[170] * xx[181];
  xx[231] = xx[148] - xx[142] * xx[154];
  xx[232] = xx[155];
  xx[233] = xx[165];
  xx[234] = xx[155];
  xx[235] = xx[156] - xx[169] * xx[181];
  xx[236] = xx[182];
  xx[237] = xx[165];
  xx[238] = xx[182];
  xx[239] = xx[157] - xx[180] / xx[188];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 231, xx + 249, xx + 240);
  pm_math_Matrix3x3_compose_ra(xx + 249, xx + 240, xx + 231);
  pm_math_Matrix3x3_postCross_ra(xx + 258, xx + 139, xx + 240);
  pm_math_Matrix3x3_preCross_ra(xx + 276, xx + 139, xx + 249);
  xx[258] = xx[130] + xx[195] - xx[213] - xx[213] - xx[222] + xx[231] - xx[240]
    - xx[240] - xx[249];
  xx[259] = xx[196] - xx[214] - xx[216] - xx[223] - xx[168] + xx[232] - xx[241]
    - xx[243] - xx[250];
  xx[260] = xx[197] - xx[215] - xx[219] - xx[224] - xx[167] + xx[233] - xx[242]
    - xx[246] - xx[251];
  xx[261] = xx[198] - xx[216] - xx[214] - xx[225] - xx[168] + xx[234] - xx[243]
    - xx[241] - xx[252];
  xx[262] = xx[133] + xx[199] - xx[217] - xx[217] - xx[226] + xx[235] - xx[244]
    - xx[244] - xx[253];
  xx[263] = xx[200] - xx[218] - xx[220] - xx[227] - xx[166] + xx[236] - xx[245]
    - xx[247] - xx[254];
  xx[264] = xx[201] - xx[219] - xx[215] - xx[228] - xx[167] + xx[237] - xx[246]
    - xx[242] - xx[255];
  xx[265] = xx[202] - xx[220] - xx[218] - xx[229] - xx[166] + xx[238] - xx[247]
    - xx[245] - xx[256];
  xx[266] = xx[135] + xx[203] - xx[221] - xx[221] - xx[230] + xx[239] - xx[248]
    - xx[248] - xx[257];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 258, xx + 171, xx + 195);
  pm_math_Matrix3x3_compose_ra(xx + 171, xx + 195, xx + 213);
  pm_math_Matrix3x3_composeTranspose_ra(xx + 285, xx + 171, xx + 195);
  pm_math_Matrix3x3_compose_ra(xx + 171, xx + 195, xx + 222);
  pm_math_Matrix3x3_postCross_ra(xx + 222, xx + 162, xx + 195);
  pm_math_Matrix3x3_composeTranspose_ra(xx + 294, xx + 171, xx + 231);
  pm_math_Matrix3x3_compose_ra(xx + 171, xx + 231, xx + 240);
  pm_math_Matrix3x3_postCross_ra(xx + 240, xx + 162, xx + 171);
  pm_math_Matrix3x3_preCross_ra(xx + 171, xx + 162, xx + 231);
  xx[130] = xx[213] - xx[195] - xx[195] - xx[231];
  xx[133] = xx[214] - xx[196] - xx[198] - xx[232];
  xx[135] = xx[215] - xx[197] - xx[201] - xx[233];
  xx[142] = xx[216] - xx[198] - xx[196] - xx[234];
  xx[148] = xx[217] - xx[199] - xx[199] - xx[235];
  xx[155] = xx[218] - xx[200] - xx[202] - xx[236];
  xx[156] = xx[219] - xx[201] - xx[197] - xx[237];
  xx[157] = xx[220] - xx[202] - xx[200] - xx[238];
  xx[165] = xx[221] - xx[203] - xx[203] - xx[239];
  xx[195] = xx[110] + xx[130];
  xx[196] = xx[133];
  xx[197] = xx[135];
  xx[198] = xx[142];
  xx[199] = xx[118] + xx[148];
  xx[200] = xx[155];
  xx[201] = xx[156];
  xx[202] = xx[157];
  xx[203] = xx[119] + xx[165];
  xx[166] = - xx[95];
  xx[167] = - xx[104];
  xx[168] = xx[108];
  pm_math_Vector3_cross_ra(xx + 101, xx + 166, xx + 182);
  pm_math_Matrix3x3_xform_ra(xx + 195, xx + 182, xx + 166);
  xx[95] = xx[222] - xx[171];
  xx[104] = xx[223] - xx[174];
  xx[108] = xx[224] - xx[177];
  xx[169] = xx[225] - xx[172];
  xx[171] = xx[226] - xx[175];
  xx[172] = xx[227] - xx[178];
  xx[174] = xx[228] - xx[173];
  xx[173] = xx[229] - xx[176];
  xx[175] = xx[230] - xx[179];
  xx[213] = xx[95];
  xx[214] = xx[104];
  xx[215] = xx[108];
  xx[216] = xx[169];
  xx[217] = xx[171];
  xx[218] = xx[172];
  xx[219] = xx[174];
  xx[220] = xx[173];
  xx[221] = xx[175];
  xx[176] = xx[101] + xx[97];
  xx[177] = xx[102] + xx[107];
  xx[178] = xx[103] + xx[109];
  xx[97] = 8.500173996042734e-6;
  xx[101] = 3.140900525182306e-3;
  xx[102] = 1.057981817200025e-5;
  xx[185] = - (xx[97] * state[9]);
  xx[186] = - (xx[101] * state[9]);
  xx[187] = - (xx[102] * state[9]);
  pm_math_Vector3_cross_ra(xx + 176, xx + 185, xx + 204);
  xx[176] = 3.206058372755476e-3;
  xx[177] = - 3.447882694857199e-6;
  xx[178] = - 1.552257059229054e-3;
  pm_math_Quaternion_xform_ra(xx + 111, xx + 176, xx + 185);
  xx[176] = 0.1020634175428304 - xx[185];
  xx[177] = 4.172071841776238e-4 - xx[186];
  xx[178] = - (1.103976599966235e-4 + xx[187]);
  pm_math_Vector3_cross_ra(xx + 90, xx + 176, xx + 185);
  pm_math_Vector3_cross_ra(xx + 90, xx + 185, xx + 222);
  pm_math_Quaternion_inverseXform_ra(xx + 111, xx + 222, xx + 90);
  xx[103] = xx[204] + xx[90];
  xx[107] = xx[205] + xx[91];
  xx[90] = xx[206] + xx[92];
  xx[185] = xx[103];
  xx[186] = xx[107];
  xx[187] = xx[90];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 185, xx + 204);
  xx[91] = xx[123] + xx[136] + xx[158] + xx[166] + xx[204];
  xx[222] = - xx[96];
  xx[223] = - xx[105];
  xx[224] = xx[106];
  pm_math_Matrix3x3_xform_ra(xx + 195, xx + 222, xx + 225);
  xx[195] = - xx[97];
  xx[196] = - xx[101];
  xx[197] = - xx[102];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 195, xx + 198);
  xx[92] = xx[225] + xx[198];
  xx[109] = state[8] + 2.99324;
  if (xx[1] < xx[109])
    xx[109] = xx[1];
  xx[179] = - (xx[109] / xx[3]);
  if (xx[4] < xx[179])
    xx[179] = xx[4];
  xx[180] = xx[8] * state[9];
  xx[193] = xx[179] * xx[179] * (xx[6] - xx[7] * xx[179]) * ((- xx[109] == xx[1]
    ? xx[1] : - xx[180]) - xx[10] * xx[109]);
  if (xx[1] > xx[193])
    xx[193] = xx[1];
  xx[109] = state[8] - 2.870985;
  if (xx[1] > xx[109])
    xx[109] = xx[1];
  xx[179] = xx[109] / xx[3];
  if (xx[4] < xx[179])
    xx[179] = xx[4];
  xx[201] = xx[179] * xx[179] * (xx[6] - xx[7] * xx[179]) * (xx[10] * xx[109] +
    (xx[109] == xx[1] ? xx[1] : xx[180]));
  if (xx[1] > xx[201])
    xx[201] = xx[1];
  xx[109] = xx[124] + xx[137] + xx[159] + xx[167] + xx[205];
  xx[123] = xx[125] + xx[138] + xx[160] + xx[168] + xx[206];
  xx[136] = xx[91];
  xx[137] = xx[109];
  xx[138] = xx[123];
  pm_math_Matrix3x3_transposeXform_ra(xx + 213, xx + 182, xx + 158);
  xx[124] = 0.25622555625;
  xx[228] = xx[124] + xx[240];
  xx[229] = xx[241];
  xx[230] = xx[242];
  xx[231] = xx[243];
  xx[232] = xx[124] + xx[244];
  xx[233] = xx[245];
  xx[234] = xx[246];
  xx[235] = xx[247];
  xx[236] = xx[124] + xx[248];
  pm_math_Matrix3x3_xform_ra(xx + 228, xx + 185, xx + 166);
  xx[125] = xx[120] + xx[158] + xx[166];
  xx[120] = xx[121] + xx[159] + xx[167];
  xx[121] = xx[122] + xx[160] + xx[168];
  xx[158] = xx[125];
  xx[159] = xx[120];
  xx[160] = xx[121];
  xx[122] = xx[226] + xx[199];
  xx[166] = xx[227] + xx[200];
  xx[185] = xx[92];
  xx[186] = xx[122];
  xx[187] = xx[166];
  pm_math_Matrix3x3_transposeXform_ra(xx + 213, xx + 222, xx + 198);
  pm_math_Matrix3x3_xform_ra(xx + 228, xx + 195, xx + 202);
  xx[167] = xx[198] + xx[202];
  xx[168] = xx[199] + xx[203];
  xx[179] = xx[200] + xx[204];
  xx[198] = xx[167];
  xx[199] = xx[168];
  xx[200] = xx[179];
  xx[180] = pm_math_Vector3_dot_ra(xx + 222, xx + 185) + pm_math_Vector3_dot_ra
    (xx + 195, xx + 198);
  ii[0] = factorSymmetricPosDef(xx + 180, 1, xx + 185);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_motor5_wrist_roll_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[185] = (input[6] - xx[146] * state[9] + xx[193] - xx[201] -
             (pm_math_Vector3_dot_ra(xx + 222, xx + 136) +
              pm_math_Vector3_dot_ra(xx + 195, xx + 158))) / xx[180];
  xx[136] = xx[91] + xx[92] * xx[185];
  xx[137] = xx[109] + xx[122] * xx[185];
  xx[138] = xx[123] + xx[166] * xx[185];
  pm_math_Quaternion_xform_ra(xx + 111, xx + 136, xx + 158);
  xx[136] = xx[125] + xx[167] * xx[185];
  xx[137] = xx[120] + xx[168] * xx[185];
  xx[138] = xx[121] + xx[179] * xx[185];
  pm_math_Quaternion_xform_ra(xx + 111, xx + 136, xx + 195);
  pm_math_Vector3_cross_ra(xx + 176, xx + 195, xx + 136);
  xx[91] = xx[111] * xx[111];
  xx[109] = xx[112] * xx[113];
  xx[120] = xx[111] * xx[114];
  xx[121] = xx[112] * xx[114];
  xx[123] = xx[111] * xx[113];
  xx[125] = xx[113] * xx[114];
  xx[186] = xx[111] * xx[112];
  xx[198] = xx[7] * (xx[91] + xx[112] * xx[112]) - xx[4];
  xx[199] = xx[7] * (xx[109] - xx[120]);
  xx[200] = xx[7] * (xx[121] + xx[123]);
  xx[201] = xx[7] * (xx[109] + xx[120]);
  xx[202] = xx[7] * (xx[91] + xx[113] * xx[113]) - xx[4];
  xx[203] = xx[7] * (xx[125] - xx[186]);
  xx[204] = xx[7] * (xx[121] - xx[123]);
  xx[205] = xx[7] * (xx[125] + xx[186]);
  xx[206] = xx[7] * (xx[91] + xx[114] * xx[114]) - xx[4];
  xx[91] = xx[92] / xx[180];
  xx[109] = xx[122] * xx[91];
  xx[120] = xx[166] * xx[91];
  xx[121] = xx[122] / xx[180];
  xx[123] = xx[166] * xx[121];
  xx[125] = xx[166] / xx[180];
  xx[213] = xx[130] - xx[92] * xx[91] + xx[110];
  xx[214] = xx[133] - xx[109];
  xx[215] = xx[135] - xx[120];
  xx[216] = xx[142] - xx[109];
  xx[217] = xx[148] - xx[122] * xx[121] + xx[118];
  xx[218] = xx[155] - xx[123];
  xx[219] = xx[156] - xx[120];
  xx[220] = xx[157] - xx[123];
  xx[221] = xx[165] - xx[166] * xx[125] + xx[119];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 213, xx + 198, xx + 222);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 222, xx + 213);
  xx[109] = xx[167] / xx[180];
  xx[110] = xx[168] / xx[180];
  xx[118] = xx[179] / xx[180];
  xx[222] = xx[95] - xx[92] * xx[109];
  xx[223] = xx[104] - xx[92] * xx[110];
  xx[224] = xx[108] - xx[92] * xx[118];
  xx[225] = xx[169] - xx[122] * xx[109];
  xx[226] = xx[171] - xx[122] * xx[110];
  xx[227] = xx[172] - xx[122] * xx[118];
  xx[228] = xx[174] - xx[166] * xx[109];
  xx[229] = xx[173] - xx[166] * xx[110];
  xx[230] = xx[175] - xx[166] * xx[118];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 222, xx + 198, xx + 231);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 231, xx + 222);
  pm_math_Matrix3x3_postCross_ra(xx + 222, xx + 176, xx + 231);
  xx[92] = xx[168] * xx[109];
  xx[95] = xx[179] * xx[109];
  xx[104] = xx[179] * xx[110];
  xx[249] = xx[240] - xx[167] * xx[109] + xx[124];
  xx[250] = xx[241] - xx[92];
  xx[251] = xx[242] - xx[95];
  xx[252] = xx[243] - xx[92];
  xx[253] = xx[244] - xx[168] * xx[110] + xx[124];
  xx[254] = xx[245] - xx[104];
  xx[255] = xx[246] - xx[95];
  xx[256] = xx[247] - xx[104];
  xx[257] = xx[248] - xx[179] * xx[118] + xx[124];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 249, xx + 198, xx + 240);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 240, xx + 249);
  pm_math_Matrix3x3_postCross_ra(xx + 249, xx + 176, xx + 198);
  pm_math_Matrix3x3_preCross_ra(xx + 198, xx + 176, xx + 240);
  xx[92] = xx[213] - xx[231] - xx[231] - xx[240];
  xx[95] = xx[214] - xx[232] - xx[234] - xx[241];
  xx[104] = xx[215] - xx[233] - xx[237] - xx[242];
  xx[108] = xx[216] - xx[234] - xx[232] - xx[243];
  xx[119] = xx[217] - xx[235] - xx[235] - xx[244];
  xx[120] = xx[218] - xx[236] - xx[238] - xx[245];
  xx[122] = xx[219] - xx[237] - xx[233] - xx[246];
  xx[123] = xx[220] - xx[238] - xx[236] - xx[247];
  xx[124] = xx[221] - xx[239] - xx[239] - xx[248];
  xx[213] = xx[85] + xx[92];
  xx[214] = xx[95];
  xx[215] = xx[104];
  xx[216] = xx[108];
  xx[217] = xx[93] + xx[119];
  xx[218] = xx[120];
  xx[219] = xx[122];
  xx[220] = xx[123];
  xx[221] = xx[94] + xx[124];
  xx[155] = xx[70];
  xx[156] = - xx[79];
  xx[157] = xx[83];
  pm_math_Vector3_cross_ra(xx + 76, xx + 155, xx + 165);
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 165, xx + 155);
  xx[70] = xx[222] - xx[198];
  xx[79] = xx[223] - xx[201];
  xx[83] = xx[224] - xx[204];
  xx[130] = xx[225] - xx[199];
  xx[133] = xx[226] - xx[202];
  xx[135] = xx[227] - xx[205];
  xx[142] = xx[228] - xx[200];
  xx[148] = xx[229] - xx[203];
  xx[168] = xx[230] - xx[206];
  xx[198] = xx[70];
  xx[199] = xx[79];
  xx[200] = xx[83];
  xx[201] = xx[130];
  xx[202] = xx[133];
  xx[203] = xx[135];
  xx[204] = xx[142];
  xx[205] = xx[148];
  xx[206] = xx[168];
  xx[171] = xx[76] + xx[72];
  xx[172] = xx[77] + xx[82];
  xx[173] = xx[78] + xx[84];
  xx[72] = 8.86943439201055e-3;
  xx[76] = 0.04995312618549675;
  xx[77] = 1.917972000473691e-5;
  xx[222] = - (xx[72] * state[7]);
  xx[223] = xx[76] * state[7];
  xx[224] = xx[77] * state[7];
  pm_math_Vector3_cross_ra(xx + 171, xx + 222, xx + 225);
  xx[171] = - 0.04995309968048029;
  xx[172] = - 8.869449793783499e-3;
  xx[173] = 5.237048361205106e-5;
  pm_math_Quaternion_xform_ra(xx + 86, xx + 171, xx + 222);
  xx[171] = 0.08145161950094873 - xx[222];
  xx[172] = - (1.083166892651002e-3 + xx[223]);
  xx[173] = 8.009702524039035e-6 - xx[224];
  pm_math_Vector3_cross_ra(xx + 65, xx + 171, xx + 222);
  pm_math_Vector3_cross_ra(xx + 65, xx + 222, xx + 228);
  pm_math_Quaternion_inverseXform_ra(xx + 86, xx + 228, xx + 65);
  xx[78] = xx[225] + xx[65];
  xx[82] = xx[226] + xx[66];
  xx[65] = xx[227] + xx[67];
  xx[222] = xx[78];
  xx[223] = xx[82];
  xx[224] = xx[65];
  pm_math_Matrix3x3_xform_ra(xx + 198, xx + 222, xx + 225);
  xx[66] = xx[98] + xx[158] + xx[136] + xx[155] + xx[225];
  xx[228] = xx[71];
  xx[229] = - xx[80];
  xx[230] = xx[81];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 228, xx + 231);
  xx[213] = - xx[72];
  xx[214] = xx[76];
  xx[215] = xx[77];
  pm_math_Matrix3x3_xform_ra(xx + 198, xx + 213, xx + 216);
  xx[67] = xx[231] + xx[216];
  xx[84] = state[6] + 2.033309;
  if (xx[1] < xx[84])
    xx[84] = xx[1];
  xx[169] = - (xx[84] / xx[3]);
  if (xx[4] < xx[169])
    xx[169] = xx[4];
  xx[174] = xx[8] * state[7];
  xx[175] = xx[169] * xx[169] * (xx[6] - xx[7] * xx[169]) * ((- xx[84] == xx[1] ?
    xx[1] : - xx[174]) - xx[10] * xx[84]);
  if (xx[1] > xx[175])
    xx[175] = xx[1];
  xx[84] = state[6] - 1.876133;
  if (xx[1] > xx[84])
    xx[84] = xx[1];
  xx[169] = xx[84] / xx[3];
  if (xx[4] < xx[169])
    xx[169] = xx[4];
  xx[179] = xx[169] * xx[169] * (xx[6] - xx[7] * xx[169]) * (xx[10] * xx[84] +
    (xx[84] == xx[1] ? xx[1] : xx[174]));
  if (xx[1] > xx[179])
    xx[179] = xx[1];
  xx[84] = xx[99] + xx[159] + xx[137] + xx[156] + xx[226];
  xx[98] = xx[100] + xx[160] + xx[138] + xx[157] + xx[227];
  xx[136] = xx[66];
  xx[137] = xx[84];
  xx[138] = xx[98];
  pm_math_Matrix3x3_transposeXform_ra(xx + 198, xx + 165, xx + 155);
  xx[99] = 0.69149323125;
  xx[234] = xx[99] + xx[249];
  xx[235] = xx[250];
  xx[236] = xx[251];
  xx[237] = xx[252];
  xx[238] = xx[99] + xx[253];
  xx[239] = xx[254];
  xx[240] = xx[255];
  xx[241] = xx[256];
  xx[242] = xx[99] + xx[257];
  pm_math_Matrix3x3_xform_ra(xx + 234, xx + 222, xx + 158);
  xx[100] = xx[195] + xx[155] + xx[158];
  xx[169] = xx[196] + xx[156] + xx[159];
  xx[155] = xx[197] + xx[157] + xx[160];
  xx[156] = xx[100];
  xx[157] = xx[169];
  xx[158] = xx[155];
  xx[159] = xx[232] + xx[217];
  xx[160] = xx[233] + xx[218];
  xx[195] = xx[67];
  xx[196] = xx[159];
  xx[197] = xx[160];
  pm_math_Matrix3x3_transposeXform_ra(xx + 198, xx + 228, xx + 216);
  pm_math_Matrix3x3_xform_ra(xx + 234, xx + 213, xx + 198);
  xx[174] = xx[216] + xx[198];
  xx[180] = xx[217] + xx[199];
  xx[186] = xx[218] + xx[200];
  xx[198] = xx[174];
  xx[199] = xx[180];
  xx[200] = xx[186];
  xx[187] = pm_math_Vector3_dot_ra(xx + 228, xx + 195) + pm_math_Vector3_dot_ra
    (xx + 213, xx + 198);
  ii[0] = factorSymmetricPosDef(xx + 187, 1, xx + 193);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_motor4_lift_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[193] = (input[5] - xx[146] * state[7] + xx[175] - xx[179] -
             (pm_math_Vector3_dot_ra(xx + 228, xx + 136) +
              pm_math_Vector3_dot_ra(xx + 213, xx + 156))) / xx[187];
  xx[136] = xx[66] + xx[67] * xx[193];
  xx[137] = xx[84] + xx[159] * xx[193];
  xx[138] = xx[98] + xx[160] * xx[193];
  pm_math_Quaternion_xform_ra(xx + 86, xx + 136, xx + 156);
  xx[136] = xx[100] + xx[174] * xx[193];
  xx[137] = xx[169] + xx[180] * xx[193];
  xx[138] = xx[155] + xx[186] * xx[193];
  pm_math_Quaternion_xform_ra(xx + 86, xx + 136, xx + 195);
  pm_math_Vector3_cross_ra(xx + 171, xx + 195, xx + 136);
  xx[66] = xx[86] * xx[86];
  xx[84] = xx[87] * xx[88];
  xx[98] = xx[86] * xx[89];
  xx[100] = xx[87] * xx[89];
  xx[146] = xx[86] * xx[88];
  xx[155] = xx[88] * xx[89];
  xx[169] = xx[86] * xx[87];
  xx[198] = xx[7] * (xx[66] + xx[87] * xx[87]) - xx[4];
  xx[199] = xx[7] * (xx[84] - xx[98]);
  xx[200] = xx[7] * (xx[100] + xx[146]);
  xx[201] = xx[7] * (xx[84] + xx[98]);
  xx[202] = xx[7] * (xx[66] + xx[88] * xx[88]) - xx[4];
  xx[203] = xx[7] * (xx[155] - xx[169]);
  xx[204] = xx[7] * (xx[100] - xx[146]);
  xx[205] = xx[7] * (xx[155] + xx[169]);
  xx[206] = xx[7] * (xx[66] + xx[89] * xx[89]) - xx[4];
  xx[66] = xx[67] / xx[187];
  xx[84] = xx[159] * xx[66];
  xx[98] = xx[160] * xx[66];
  xx[100] = xx[159] / xx[187];
  xx[146] = xx[160] * xx[100];
  xx[155] = xx[160] / xx[187];
  xx[213] = xx[92] - xx[67] * xx[66] + xx[85];
  xx[214] = xx[95] - xx[84];
  xx[215] = xx[104] - xx[98];
  xx[216] = xx[108] - xx[84];
  xx[217] = xx[119] - xx[159] * xx[100] + xx[93];
  xx[218] = xx[120] - xx[146];
  xx[219] = xx[122] - xx[98];
  xx[220] = xx[123] - xx[146];
  xx[221] = xx[124] - xx[160] * xx[155] + xx[94];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 213, xx + 198, xx + 222);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 222, xx + 213);
  xx[84] = xx[174] / xx[187];
  xx[85] = xx[180] / xx[187];
  xx[92] = xx[186] / xx[187];
  xx[222] = xx[70] - xx[67] * xx[84];
  xx[223] = xx[79] - xx[67] * xx[85];
  xx[224] = xx[83] - xx[67] * xx[92];
  xx[225] = xx[130] - xx[159] * xx[84];
  xx[226] = xx[133] - xx[159] * xx[85];
  xx[227] = xx[135] - xx[159] * xx[92];
  xx[228] = xx[142] - xx[160] * xx[84];
  xx[229] = xx[148] - xx[160] * xx[85];
  xx[230] = xx[168] - xx[160] * xx[92];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 222, xx + 198, xx + 231);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 231, xx + 222);
  pm_math_Matrix3x3_postCross_ra(xx + 222, xx + 171, xx + 231);
  xx[67] = xx[180] * xx[84];
  xx[70] = xx[186] * xx[84];
  xx[79] = xx[186] * xx[85];
  xx[240] = xx[249] - xx[174] * xx[84] + xx[99];
  xx[241] = xx[250] - xx[67];
  xx[242] = xx[251] - xx[70];
  xx[243] = xx[252] - xx[67];
  xx[244] = xx[253] - xx[180] * xx[85] + xx[99];
  xx[245] = xx[254] - xx[79];
  xx[246] = xx[255] - xx[70];
  xx[247] = xx[256] - xx[79];
  xx[248] = xx[257] - xx[186] * xx[92] + xx[99];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 240, xx + 198, xx + 249);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 249, xx + 240);
  pm_math_Matrix3x3_postCross_ra(xx + 240, xx + 171, xx + 198);
  pm_math_Matrix3x3_preCross_ra(xx + 198, xx + 171, xx + 249);
  xx[67] = xx[213] - xx[231] - xx[231] - xx[249];
  xx[70] = xx[214] - xx[232] - xx[234] - xx[250];
  xx[79] = xx[215] - xx[233] - xx[237] - xx[251];
  xx[83] = xx[216] - xx[234] - xx[232] - xx[252];
  xx[93] = xx[217] - xx[235] - xx[235] - xx[253];
  xx[94] = xx[218] - xx[236] - xx[238] - xx[254];
  xx[95] = xx[219] - xx[237] - xx[233] - xx[255];
  xx[98] = xx[220] - xx[238] - xx[236] - xx[256];
  xx[99] = xx[221] - xx[239] - xx[239] - xx[257];
  xx[213] = xx[60] + xx[67];
  xx[214] = xx[70];
  xx[215] = xx[79];
  xx[216] = xx[83];
  xx[217] = xx[68] + xx[93];
  xx[218] = xx[94];
  xx[219] = xx[95];
  xx[220] = xx[98];
  xx[221] = xx[69] + xx[99];
  xx[122] = xx[45];
  xx[123] = xx[54];
  xx[124] = xx[58];
  pm_math_Vector3_cross_ra(xx + 51, xx + 122, xx + 231);
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 231, xx + 122);
  xx[45] = xx[222] - xx[198];
  xx[54] = xx[223] - xx[201];
  xx[58] = xx[224] - xx[204];
  xx[104] = xx[225] - xx[199];
  xx[108] = xx[226] - xx[202];
  xx[119] = xx[227] - xx[205];
  xx[120] = xx[228] - xx[200];
  xx[130] = xx[229] - xx[203];
  xx[133] = xx[230] - xx[206];
  xx[198] = xx[45];
  xx[199] = xx[54];
  xx[200] = xx[58];
  xx[201] = xx[104];
  xx[202] = xx[108];
  xx[203] = xx[119];
  xx[204] = xx[120];
  xx[205] = xx[130];
  xx[206] = xx[133];
  xx[222] = xx[51] + xx[47];
  xx[223] = xx[52] + xx[57];
  xx[224] = xx[53] + xx[59];
  xx[47] = 0.01453905264128121;
  xx[51] = 0.05689576973040128;
  xx[52] = 2.814378351065623e-7;
  xx[225] = - (xx[47] * state[5]);
  xx[226] = xx[51] * state[5];
  xx[227] = - (xx[52] * state[5]);
  pm_math_Vector3_cross_ra(xx + 222, xx + 225, xx + 228);
  xx[222] = - 0.05689521002921627;
  xx[223] = - 0.0145389080296778;
  xx[224] = 3.207226776186501e-4;
  pm_math_Quaternion_xform_ra(xx + 61, xx + 222, xx + 225);
  xx[222] = 0.0976700039030166 - xx[225];
  xx[223] = - (3.218614139284329e-3 + xx[226]);
  xx[224] = - (8.326828401593877e-5 + xx[227]);
  pm_math_Vector3_cross_ra(xx + 40, xx + 222, xx + 225);
  pm_math_Vector3_cross_ra(xx + 40, xx + 225, xx + 234);
  pm_math_Quaternion_inverseXform_ra(xx + 61, xx + 234, xx + 40);
  xx[53] = xx[228] + xx[40];
  xx[57] = xx[229] + xx[41];
  xx[40] = xx[230] + xx[42];
  xx[225] = xx[53];
  xx[226] = xx[57];
  xx[227] = xx[40];
  pm_math_Matrix3x3_xform_ra(xx + 198, xx + 225, xx + 228);
  xx[41] = xx[73] + xx[156] + xx[136] + xx[122] + xx[228];
  xx[234] = xx[46];
  xx[235] = xx[55];
  xx[236] = xx[56];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 234, xx + 237);
  xx[213] = - xx[47];
  xx[214] = xx[51];
  xx[215] = - xx[52];
  pm_math_Matrix3x3_xform_ra(xx + 198, xx + 213, xx + 216);
  xx[42] = xx[237] + xx[216];
  xx[59] = state[4] + 2.221804;
  if (xx[1] < xx[59])
    xx[59] = xx[1];
  xx[135] = - (xx[59] / xx[3]);
  if (xx[4] < xx[135])
    xx[135] = xx[4];
  xx[142] = xx[8] * state[5];
  xx[146] = xx[135] * xx[135] * (xx[6] - xx[7] * xx[135]) * ((- xx[59] == xx[1] ?
    xx[1] : - xx[142]) - xx[10] * xx[59]);
  if (xx[1] > xx[146])
    xx[146] = xx[1];
  xx[59] = state[4] - 2.054223;
  if (xx[1] > xx[59])
    xx[59] = xx[1];
  xx[135] = xx[59] / xx[3];
  if (xx[4] < xx[135])
    xx[135] = xx[4];
  xx[148] = xx[135] * xx[135] * (xx[6] - xx[7] * xx[135]) * (xx[10] * xx[59] +
    (xx[59] == xx[1] ? xx[1] : xx[142]));
  if (xx[1] > xx[148])
    xx[148] = xx[1];
  xx[59] = xx[74] + xx[157] + xx[137] + xx[123] + xx[229];
  xx[73] = xx[75] + xx[158] + xx[138] + xx[124] + xx[230];
  xx[122] = xx[41];
  xx[123] = xx[59];
  xx[124] = xx[73];
  pm_math_Matrix3x3_transposeXform_ra(xx + 198, xx + 231, xx + 135);
  xx[74] = 0.79241664375;
  xx[249] = xx[74] + xx[240];
  xx[250] = xx[241];
  xx[251] = xx[242];
  xx[252] = xx[243];
  xx[253] = xx[74] + xx[244];
  xx[254] = xx[245];
  xx[255] = xx[246];
  xx[256] = xx[247];
  xx[257] = xx[74] + xx[248];
  pm_math_Matrix3x3_xform_ra(xx + 249, xx + 225, xx + 156);
  xx[75] = xx[195] + xx[135] + xx[156];
  xx[138] = xx[196] + xx[136] + xx[157];
  xx[135] = xx[197] + xx[137] + xx[158];
  xx[156] = xx[75];
  xx[157] = xx[138];
  xx[158] = xx[135];
  xx[136] = xx[238] + xx[217];
  xx[137] = xx[239] + xx[218];
  xx[195] = xx[42];
  xx[196] = xx[136];
  xx[197] = xx[137];
  pm_math_Matrix3x3_transposeXform_ra(xx + 198, xx + 234, xx + 216);
  pm_math_Matrix3x3_xform_ra(xx + 249, xx + 213, xx + 198);
  xx[142] = xx[216] + xx[198];
  xx[159] = xx[217] + xx[199];
  xx[160] = xx[218] + xx[200];
  xx[198] = xx[142];
  xx[199] = xx[159];
  xx[200] = xx[160];
  xx[168] = pm_math_Vector3_dot_ra(xx + 234, xx + 195) + pm_math_Vector3_dot_ra
    (xx + 213, xx + 198);
  ii[0] = factorSymmetricPosDef(xx + 168, 1, xx + 169);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_motor3_lift_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[169] = (input[4] - xx[0] * state[5] + xx[146] - xx[148] -
             (pm_math_Vector3_dot_ra(xx + 234, xx + 122) +
              pm_math_Vector3_dot_ra(xx + 213, xx + 156))) / xx[168];
  xx[122] = xx[41] + xx[42] * xx[169];
  xx[123] = xx[59] + xx[136] * xx[169];
  xx[124] = xx[73] + xx[137] * xx[169];
  pm_math_Quaternion_xform_ra(xx + 61, xx + 122, xx + 156);
  xx[122] = xx[75] + xx[142] * xx[169];
  xx[123] = xx[138] + xx[159] * xx[169];
  xx[124] = xx[135] + xx[160] * xx[169];
  pm_math_Quaternion_xform_ra(xx + 61, xx + 122, xx + 195);
  pm_math_Vector3_cross_ra(xx + 222, xx + 195, xx + 122);
  xx[41] = xx[61] * xx[61];
  xx[59] = xx[62] * xx[63];
  xx[73] = xx[61] * xx[64];
  xx[75] = xx[62] * xx[64];
  xx[135] = xx[61] * xx[63];
  xx[138] = xx[63] * xx[64];
  xx[146] = xx[61] * xx[62];
  xx[198] = xx[7] * (xx[41] + xx[62] * xx[62]) - xx[4];
  xx[199] = xx[7] * (xx[59] - xx[73]);
  xx[200] = xx[7] * (xx[75] + xx[135]);
  xx[201] = xx[7] * (xx[59] + xx[73]);
  xx[202] = xx[7] * (xx[41] + xx[63] * xx[63]) - xx[4];
  xx[203] = xx[7] * (xx[138] - xx[146]);
  xx[204] = xx[7] * (xx[75] - xx[135]);
  xx[205] = xx[7] * (xx[138] + xx[146]);
  xx[206] = xx[7] * (xx[41] + xx[64] * xx[64]) - xx[4];
  xx[41] = xx[42] / xx[168];
  xx[59] = xx[136] * xx[41];
  xx[73] = xx[137] * xx[41];
  xx[75] = xx[136] / xx[168];
  xx[135] = xx[137] * xx[75];
  xx[138] = xx[137] / xx[168];
  xx[213] = xx[67] - xx[42] * xx[41] + xx[60];
  xx[214] = xx[70] - xx[59];
  xx[215] = xx[79] - xx[73];
  xx[216] = xx[83] - xx[59];
  xx[217] = xx[93] - xx[136] * xx[75] + xx[68];
  xx[218] = xx[94] - xx[135];
  xx[219] = xx[95] - xx[73];
  xx[220] = xx[98] - xx[135];
  xx[221] = xx[99] - xx[137] * xx[138] + xx[69];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 213, xx + 198, xx + 249);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 249, xx + 213);
  xx[59] = xx[142] / xx[168];
  xx[60] = xx[159] / xx[168];
  xx[67] = xx[160] / xx[168];
  xx[249] = xx[45] - xx[42] * xx[59];
  xx[250] = xx[54] - xx[42] * xx[60];
  xx[251] = xx[58] - xx[42] * xx[67];
  xx[252] = xx[104] - xx[136] * xx[59];
  xx[253] = xx[108] - xx[136] * xx[60];
  xx[254] = xx[119] - xx[136] * xx[67];
  xx[255] = xx[120] - xx[137] * xx[59];
  xx[256] = xx[130] - xx[137] * xx[60];
  xx[257] = xx[133] - xx[137] * xx[67];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 249, xx + 198, xx + 258);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 258, xx + 249);
  pm_math_Matrix3x3_postCross_ra(xx + 249, xx + 222, xx + 258);
  xx[42] = xx[159] * xx[59];
  xx[45] = xx[160] * xx[59];
  xx[54] = xx[160] * xx[60];
  xx[267] = xx[240] - xx[142] * xx[59] + xx[74];
  xx[268] = xx[241] - xx[42];
  xx[269] = xx[242] - xx[45];
  xx[270] = xx[243] - xx[42];
  xx[271] = xx[244] - xx[159] * xx[60] + xx[74];
  xx[272] = xx[245] - xx[54];
  xx[273] = xx[246] - xx[45];
  xx[274] = xx[247] - xx[54];
  xx[275] = xx[248] - xx[160] * xx[67] + xx[74];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 267, xx + 198, xx + 234);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 234, xx + 267);
  pm_math_Matrix3x3_postCross_ra(xx + 267, xx + 222, xx + 198);
  pm_math_Matrix3x3_preCross_ra(xx + 198, xx + 222, xx + 234);
  xx[42] = xx[213] - xx[258] - xx[258] - xx[234];
  xx[45] = xx[214] - xx[259] - xx[261] - xx[235];
  xx[54] = xx[215] - xx[260] - xx[264] - xx[236];
  xx[58] = xx[216] - xx[261] - xx[259] - xx[237];
  xx[68] = xx[217] - xx[262] - xx[262] - xx[238];
  xx[69] = xx[218] - xx[263] - xx[265] - xx[239];
  xx[70] = xx[219] - xx[264] - xx[260] - xx[240];
  xx[73] = xx[220] - xx[265] - xx[263] - xx[241];
  xx[74] = xx[221] - xx[266] - xx[266] - xx[242];
  xx[213] = xx[35] + xx[42];
  xx[214] = xx[45];
  xx[215] = xx[54];
  xx[216] = xx[58];
  xx[217] = xx[43] + xx[68];
  xx[218] = xx[69];
  xx[219] = xx[70];
  xx[220] = xx[73];
  xx[221] = xx[44] + xx[74];
  xx[93] = - xx[20];
  xx[94] = - xx[29];
  xx[95] = xx[33];
  pm_math_Vector3_cross_ra(xx + 25, xx + 93, xx + 135);
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 135, xx + 93);
  xx[20] = xx[249] - xx[198];
  xx[29] = xx[250] - xx[201];
  xx[33] = xx[251] - xx[204];
  xx[79] = xx[252] - xx[199];
  xx[83] = xx[253] - xx[202];
  xx[98] = xx[254] - xx[205];
  xx[99] = xx[255] - xx[200];
  xx[104] = xx[256] - xx[203];
  xx[108] = xx[257] - xx[206];
  xx[198] = xx[20];
  xx[199] = xx[29];
  xx[200] = xx[33];
  xx[201] = xx[79];
  xx[202] = xx[83];
  xx[203] = xx[98];
  xx[204] = xx[99];
  xx[205] = xx[104];
  xx[206] = xx[108];
  xx[225] = xx[25] + xx[28];
  xx[226] = xx[26] + xx[32];
  xx[227] = xx[27] + xx[34];
  xx[25] = 7.235815822501435e-3;
  xx[26] = 0.09228757077351821;
  xx[27] = 1.172139313569349e-4;
  xx[228] = - (xx[25] * state[3]);
  xx[229] = xx[26] * state[3];
  xx[230] = xx[27] * state[3];
  pm_math_Vector3_cross_ra(xx + 225, xx + 228, xx + 234);
  xx[225] = - 0.09228743917947596;
  xx[226] = - 7.235463008281073e-3;
  xx[227] = - 2.696622893931823e-4;
  pm_math_Quaternion_xform_ra(xx + 36, xx + 225, xx + 228);
  xx[225] = 4.392979990311373e-4 - xx[228];
  xx[226] = 5.144632975525311e-4 - xx[229];
  xx[227] = 0.01681453971369774 - xx[230];
  pm_math_Vector3_cross_ra(xx + 16, xx + 225, xx + 228);
  pm_math_Vector3_cross_ra(xx + 16, xx + 228, xx + 237);
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 237, xx + 228);
  xx[28] = xx[234] + xx[228];
  xx[32] = xx[235] + xx[229];
  xx[34] = xx[236] + xx[230];
  xx[228] = xx[28];
  xx[229] = xx[32];
  xx[230] = xx[34];
  pm_math_Matrix3x3_xform_ra(xx + 198, xx + 228, xx + 234);
  xx[119] = xx[48] + xx[156] + xx[122] + xx[93] + xx[234];
  xx[237] = - xx[21];
  xx[238] = - xx[30];
  xx[239] = xx[31];
  pm_math_Matrix3x3_xform_ra(xx + 213, xx + 237, xx + 240);
  xx[213] = - xx[25];
  xx[214] = xx[26];
  xx[215] = xx[27];
  pm_math_Matrix3x3_xform_ra(xx + 198, xx + 213, xx + 216);
  xx[120] = xx[240] + xx[216];
  xx[130] = state[2] + 0.635228;
  if (xx[1] < xx[130])
    xx[130] = xx[1];
  xx[133] = - (xx[130] / xx[3]);
  if (xx[4] < xx[133])
    xx[133] = xx[4];
  xx[142] = xx[8] * state[3];
  xx[8] = xx[133] * xx[133] * (xx[6] - xx[7] * xx[133]) * ((- xx[130] == xx[1] ?
    xx[1] : - xx[142]) - xx[10] * xx[130]);
  if (xx[1] > xx[8])
    xx[8] = xx[1];
  xx[130] = state[2] - 2.168572;
  if (xx[1] > xx[130])
    xx[130] = xx[1];
  xx[133] = xx[130] / xx[3];
  if (xx[4] < xx[133])
    xx[133] = xx[4];
  xx[3] = xx[133] * xx[133] * (xx[6] - xx[7] * xx[133]) * (xx[10] * xx[130] +
    (xx[130] == xx[1] ? xx[1] : xx[142]));
  if (xx[1] > xx[3])
    xx[3] = xx[1];
  xx[6] = xx[49] + xx[157] + xx[123] + xx[94] + xx[235];
  xx[10] = xx[50] + xx[158] + xx[124] + xx[95] + xx[236];
  xx[48] = xx[119];
  xx[49] = xx[6];
  xx[50] = xx[10];
  pm_math_Matrix3x3_transposeXform_ra(xx + 198, xx + 135, xx + 93);
  xx[122] = 0.8017494187500001;
  xx[243] = xx[122] + xx[267];
  xx[244] = xx[268];
  xx[245] = xx[269];
  xx[246] = xx[270];
  xx[247] = xx[122] + xx[271];
  xx[248] = xx[272];
  xx[249] = xx[273];
  xx[250] = xx[274];
  xx[251] = xx[122] + xx[275];
  pm_math_Matrix3x3_xform_ra(xx + 243, xx + 228, xx + 156);
  xx[123] = xx[195] + xx[93] + xx[156];
  xx[124] = xx[196] + xx[94] + xx[157];
  xx[93] = xx[197] + xx[95] + xx[158];
  xx[156] = xx[123];
  xx[157] = xx[124];
  xx[158] = xx[93];
  xx[94] = xx[241] + xx[217];
  xx[95] = xx[242] + xx[218];
  xx[195] = xx[120];
  xx[196] = xx[94];
  xx[197] = xx[95];
  pm_math_Matrix3x3_transposeXform_ra(xx + 198, xx + 237, xx + 216);
  pm_math_Matrix3x3_xform_ra(xx + 243, xx + 213, xx + 198);
  xx[130] = xx[216] + xx[198];
  xx[133] = xx[217] + xx[199];
  xx[142] = xx[218] + xx[200];
  xx[198] = xx[130];
  xx[199] = xx[133];
  xx[200] = xx[142];
  xx[146] = pm_math_Vector3_dot_ra(xx + 237, xx + 195) + pm_math_Vector3_dot_ra
    (xx + 213, xx + 198);
  ii[0] = factorSymmetricPosDef(xx + 146, 1, xx + 148);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_motor2_lift_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[148] = (input[3] - xx[0] * state[3] + xx[8] - xx[3] -
             (pm_math_Vector3_dot_ra(xx + 237, xx + 48) + pm_math_Vector3_dot_ra
              (xx + 213, xx + 156))) / xx[146];
  xx[48] = xx[119] + xx[120] * xx[148];
  xx[49] = xx[6] + xx[94] * xx[148];
  xx[50] = xx[10] + xx[95] * xx[148];
  pm_math_Quaternion_xform_ra(xx + 36, xx + 48, xx + 156);
  xx[48] = xx[123] + xx[130] * xx[148];
  xx[49] = xx[124] + xx[133] * xx[148];
  xx[50] = xx[93] + xx[142] * xx[148];
  pm_math_Quaternion_xform_ra(xx + 36, xx + 48, xx + 195);
  pm_math_Vector3_cross_ra(xx + 225, xx + 195, xx + 48);
  xx[3] = xx[36] * xx[36];
  xx[6] = xx[37] * xx[38];
  xx[8] = xx[36] * xx[39];
  xx[10] = xx[37] * xx[39];
  xx[93] = xx[36] * xx[38];
  xx[119] = xx[38] * xx[39];
  xx[123] = xx[36] * xx[37];
  xx[198] = xx[7] * (xx[3] + xx[37] * xx[37]) - xx[4];
  xx[199] = xx[7] * (xx[6] - xx[8]);
  xx[200] = xx[7] * (xx[10] + xx[93]);
  xx[201] = xx[7] * (xx[6] + xx[8]);
  xx[202] = xx[7] * (xx[3] + xx[38] * xx[38]) - xx[4];
  xx[203] = xx[7] * (xx[119] - xx[123]);
  xx[204] = xx[7] * (xx[10] - xx[93]);
  xx[205] = xx[7] * (xx[119] + xx[123]);
  xx[206] = xx[7] * (xx[3] + xx[39] * xx[39]) - xx[4];
  xx[3] = xx[130] / xx[146];
  xx[4] = xx[133] / xx[146];
  xx[6] = xx[142] / xx[146];
  xx[213] = xx[20] - xx[120] * xx[3];
  xx[214] = xx[29] - xx[120] * xx[4];
  xx[215] = xx[33] - xx[120] * xx[6];
  xx[216] = xx[79] - xx[94] * xx[3];
  xx[217] = xx[83] - xx[94] * xx[4];
  xx[218] = xx[98] - xx[94] * xx[6];
  xx[219] = xx[99] - xx[95] * xx[3];
  xx[220] = xx[104] - xx[95] * xx[4];
  xx[221] = xx[108] - xx[95] * xx[6];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 213, xx + 198, xx + 234);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 234, xx + 213);
  xx[8] = xx[133] * xx[3];
  xx[10] = xx[142] * xx[3];
  xx[20] = xx[142] * xx[4];
  xx[234] = xx[267] - xx[130] * xx[3] + xx[122];
  xx[235] = xx[268] - xx[8];
  xx[236] = xx[269] - xx[10];
  xx[237] = xx[270] - xx[8];
  xx[238] = xx[271] - xx[133] * xx[4] + xx[122];
  xx[239] = xx[272] - xx[20];
  xx[240] = xx[273] - xx[10];
  xx[241] = xx[274] - xx[20];
  xx[242] = xx[275] - xx[142] * xx[6] + xx[122];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 234, xx + 198, xx + 243);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 243, xx + 234);
  pm_math_Matrix3x3_postCross_ra(xx + 234, xx + 225, xx + 243);
  xx[252] = xx[213] - xx[243];
  xx[253] = xx[214] - xx[246];
  xx[254] = xx[215] - xx[249];
  xx[255] = xx[216] - xx[244];
  xx[256] = xx[217] - xx[247];
  xx[257] = xx[218] - xx[250];
  xx[258] = xx[219] - xx[245];
  xx[259] = xx[220] - xx[248];
  xx[260] = xx[221] - xx[251];
  xx[8] = 1.284748952563097e-3;
  xx[10] = 4.102481779312844e-4;
  xx[20] = 2.101336222703952e-5;
  xx[122] = xx[8] * state[1];
  xx[123] = - (xx[10] * state[1]);
  xx[124] = - (xx[20] * state[1]);
  pm_math_Vector3_cross_ra(xx + 16, xx + 122, xx + 228);
  pm_math_Matrix3x3_xform_ra(xx + 252, xx + 228, xx + 16);
  xx[122] = xx[22] + xx[156] + xx[48] + xx[16];
  xx[123] = xx[23] + xx[157] + xx[49] + xx[17];
  xx[124] = xx[24] + xx[158] + xx[50] + xx[18];
  xx[16] = xx[8];
  xx[17] = - xx[10];
  xx[18] = - xx[20];
  xx[22] = 0.74793301875;
  xx[261] = xx[22] + xx[234];
  xx[262] = xx[235];
  xx[263] = xx[236];
  xx[264] = xx[237];
  xx[265] = xx[22] + xx[238];
  xx[266] = xx[239];
  xx[267] = xx[240];
  xx[268] = xx[241];
  xx[269] = xx[22] + xx[242];
  pm_math_Matrix3x3_xform_ra(xx + 261, xx + 228, xx + 22);
  xx[48] = xx[195] + xx[22];
  xx[49] = xx[196] + xx[23];
  xx[50] = xx[197] + xx[24];
  xx[22] = xx[120] / xx[146];
  xx[23] = xx[94] * xx[22];
  xx[24] = xx[95] * xx[22];
  xx[29] = xx[94] / xx[146];
  xx[33] = xx[95] * xx[29];
  xx[79] = xx[95] / xx[146];
  xx[234] = xx[42] - xx[120] * xx[22] + xx[35];
  xx[235] = xx[45] - xx[23];
  xx[236] = xx[54] - xx[24];
  xx[237] = xx[58] - xx[23];
  xx[238] = xx[68] - xx[94] * xx[29] + xx[43];
  xx[239] = xx[69] - xx[33];
  xx[240] = xx[70] - xx[24];
  xx[241] = xx[73] - xx[33];
  xx[242] = xx[74] - xx[95] * xx[79] + xx[44];
  pm_math_Matrix3x3_composeTranspose_ra(xx + 234, xx + 198, xx + 270);
  pm_math_Matrix3x3_compose_ra(xx + 198, xx + 270, xx + 234);
  pm_math_Matrix3x3_postCross_ra(xx + 213, xx + 225, xx + 195);
  pm_math_Matrix3x3_preCross_ra(xx + 243, xx + 225, xx + 213);
  xx[243] = 1.737242360736009e-3 + xx[234] - xx[195] - xx[195] - xx[213];
  xx[244] = xx[235] - xx[196] - xx[198] - xx[214];
  xx[245] = xx[236] - xx[197] - xx[201] - xx[215];
  xx[246] = xx[237] - xx[198] - xx[196] - xx[216];
  xx[247] = 9.980422871547392e-4 + xx[238] - xx[199] - xx[199] - xx[217];
  xx[248] = xx[239] - xx[200] - xx[202] - xx[218];
  xx[249] = xx[240] - xx[201] - xx[197] - xx[219];
  xx[250] = xx[241] - xx[202] - xx[200] - xx[220];
  xx[251] = 1.349908352109252e-3 + xx[242] - xx[203] - xx[203] - xx[221];
  pm_math_Matrix3x3_xform_ra(xx + 243, xx + 13, xx + 42);
  pm_math_Matrix3x3_xform_ra(xx + 252, xx + 16, xx + 68);
  xx[93] = xx[42] + xx[68];
  xx[94] = xx[43] + xx[69];
  xx[95] = xx[44] + xx[70];
  pm_math_Matrix3x3_transposeXform_ra(xx + 252, xx + 13, xx + 42);
  pm_math_Matrix3x3_xform_ra(xx + 261, xx + 16, xx + 68);
  xx[23] = xx[42] + xx[68];
  xx[24] = xx[43] + xx[69];
  xx[33] = xx[44] + xx[70];
  xx[42] = xx[23];
  xx[43] = xx[24];
  xx[44] = xx[33];
  xx[35] = pm_math_Vector3_dot_ra(xx + 13, xx + 93) + pm_math_Vector3_dot_ra(xx
    + 16, xx + 42);
  ii[0] = factorSymmetricPosDef(xx + 35, 1, xx + 42);
  if (ii[0] != 0) {
    return sm_ssci_recordRunTimeError(
      "sm:compiler:messages:simulationErrors:DegenerateMass",
      "'katana_manipulator/Subsystem/katana_motor1_pan_joint' has a degenerate mass distribution on its follower side.",
      neDiagMgr);
  }

  xx[42] = xx[23] / xx[35];
  xx[43] = xx[24] / xx[35];
  xx[44] = xx[33] / xx[35];
  xx[23] = 9.806649999999999;
  xx[156] = - 0.9997367287032266;
  xx[157] = 0.0229272430705558;
  xx[158] = 8.568154706743917e-4;
  xx[159] = - 2.840320475428412e-4;
  xx[24] = xx[19] * state[0];
  xx[19] = sin(xx[24]);
  xx[195] = cos(xx[24]);
  xx[196] = xx[2] * xx[19];
  xx[197] = - (xx[5] * xx[19]);
  xx[198] = xx[9] * xx[19];
  pm_math_Quaternion_compose_ra(xx + 156, xx + 195, xx + 199);
  xx[19] = xx[23] * xx[200];
  xx[24] = xx[23] * xx[201];
  xx[33] = xx[7] * (xx[19] * xx[202] - xx[24] * xx[199]);
  xx[45] = xx[7] * (xx[19] * xx[199] + xx[24] * xx[202]);
  xx[54] = xx[7] * (xx[19] * xx[200] + xx[24] * xx[201]);
  xx[68] = xx[33];
  xx[69] = xx[45];
  xx[70] = xx[23] - xx[54];
  xx[7] = (input[2] - xx[0] * state[1] + xx[11] - xx[12] -
           (pm_math_Vector3_dot_ra(xx + 13, xx + 122) + pm_math_Vector3_dot_ra
            (xx + 16, xx + 48))) / xx[35] - pm_math_Vector3_dot_ra(xx + 42, xx +
    68);
  xx[11] = xx[22];
  xx[12] = xx[29];
  xx[13] = xx[79];
  xx[14] = xx[2] * xx[7];
  xx[15] = - (xx[5] * xx[7]);
  xx[16] = xx[9] * xx[7];
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 14, xx + 17);
  xx[42] = xx[3];
  xx[43] = xx[4];
  xx[44] = xx[6];
  pm_math_Vector3_cross_ra(xx + 14, xx + 225, xx + 2);
  xx[14] = xx[33] + xx[8] * xx[7] + xx[228] + xx[2];
  xx[15] = xx[45] - xx[10] * xx[7] + xx[229] + xx[3];
  xx[16] = xx[230] - (xx[20] * xx[7] + xx[54]) + xx[4] + xx[23];
  pm_math_Quaternion_inverseXform_ra(xx + 36, xx + 14, xx + 2);
  xx[0] = xx[148] - (pm_math_Vector3_dot_ra(xx + 11, xx + 17) +
                     pm_math_Vector3_dot_ra(xx + 42, xx + 2));
  xx[8] = xx[41];
  xx[9] = xx[75];
  xx[10] = xx[138];
  xx[11] = xx[17] - xx[21] * xx[0] + xx[135];
  xx[12] = xx[18] - xx[30] * xx[0] + xx[136];
  xx[13] = xx[19] + xx[31] * xx[0] + xx[137];
  pm_math_Quaternion_inverseXform_ra(xx + 61, xx + 11, xx + 14);
  xx[17] = xx[59];
  xx[18] = xx[60];
  xx[19] = xx[67];
  pm_math_Vector3_cross_ra(xx + 11, xx + 222, xx + 20);
  xx[11] = xx[2] - xx[25] * xx[0] + xx[28] + xx[20];
  xx[12] = xx[3] + xx[26] * xx[0] + xx[32] + xx[21];
  xx[13] = xx[4] + xx[27] * xx[0] + xx[34] + xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 61, xx + 11, xx + 2);
  xx[5] = xx[169] - (pm_math_Vector3_dot_ra(xx + 8, xx + 14) +
                     pm_math_Vector3_dot_ra(xx + 17, xx + 2));
  xx[8] = xx[66];
  xx[9] = xx[100];
  xx[10] = xx[155];
  xx[11] = xx[14] + xx[46] * xx[5] + xx[231];
  xx[12] = xx[15] + xx[55] * xx[5] + xx[232];
  xx[13] = xx[16] + xx[56] * xx[5] + xx[233];
  pm_math_Quaternion_inverseXform_ra(xx + 86, xx + 11, xx + 14);
  xx[17] = xx[84];
  xx[18] = xx[85];
  xx[19] = xx[92];
  pm_math_Vector3_cross_ra(xx + 11, xx + 171, xx + 20);
  xx[11] = xx[2] - xx[47] * xx[5] + xx[53] + xx[20];
  xx[12] = xx[3] + xx[51] * xx[5] + xx[57] + xx[21];
  xx[13] = xx[4] - xx[52] * xx[5] + xx[40] + xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 86, xx + 11, xx + 2);
  xx[6] = xx[193] - (pm_math_Vector3_dot_ra(xx + 8, xx + 14) +
                     pm_math_Vector3_dot_ra(xx + 17, xx + 2));
  xx[8] = xx[91];
  xx[9] = xx[121];
  xx[10] = xx[125];
  xx[11] = xx[14] + xx[71] * xx[6] + xx[165];
  xx[12] = xx[15] - xx[80] * xx[6] + xx[166];
  xx[13] = xx[16] + xx[81] * xx[6] + xx[167];
  pm_math_Quaternion_inverseXform_ra(xx + 111, xx + 11, xx + 14);
  xx[17] = xx[109];
  xx[18] = xx[110];
  xx[19] = xx[118];
  pm_math_Vector3_cross_ra(xx + 11, xx + 176, xx + 20);
  xx[11] = xx[2] - xx[72] * xx[6] + xx[78] + xx[20];
  xx[12] = xx[3] + xx[76] * xx[6] + xx[82] + xx[21];
  xx[13] = xx[4] + xx[77] * xx[6] + xx[65] + xx[22];
  pm_math_Quaternion_inverseXform_ra(xx + 111, xx + 11, xx + 2);
  xx[11] = xx[185] - (pm_math_Vector3_dot_ra(xx + 8, xx + 14) +
                      pm_math_Vector3_dot_ra(xx + 17, xx + 2));
  xx[8] = - xx[154];
  xx[9] = - xx[181];
  xx[10] = xx[170] / xx[188];
  xx[17] = xx[14] - xx[96] * xx[11] + xx[182];
  xx[18] = xx[15] - xx[105] * xx[11] + xx[183];
  xx[19] = xx[16] + xx[106] * xx[11] + xx[184];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 17, xx + 12);
  pm_math_Quaternion_inverseXform_ra(xx + 209, xx + 12, xx + 20);
  xx[23] = - xx[145];
  xx[24] = - xx[147];
  xx[25] = - xx[153];
  pm_math_Vector3_cross_ra(xx + 17, xx + 162, xx + 26);
  xx[15] = xx[2] - xx[97] * xx[11] + xx[103] + xx[26];
  xx[16] = xx[3] - xx[101] * xx[11] + xx[107] + xx[27];
  xx[17] = xx[4] - xx[102] * xx[11] + xx[90] + xx[28];
  pm_math_Quaternion_inverseXform_ra(xx + 126, xx + 15, xx + 2);
  xx[15] = xx[2] + xx[115];
  pm_math_Vector3_cross_ra(xx + 12, xx + 139, xx + 16);
  xx[19] = xx[3] + xx[116];
  xx[2] = xx[4] + xx[117];
  xx[26] = xx[15] + xx[16];
  xx[27] = xx[19] + xx[17];
  xx[28] = xx[2] + xx[18];
  pm_math_Quaternion_inverseXform_ra(xx + 209, xx + 26, xx + 16);
  xx[26] = - xx[131];
  xx[27] = - xx[161];
  xx[28] = xx[170] / xx[189];
  pm_math_Quaternion_inverseXform_ra(xx + 149, xx + 12, xx + 29);
  xx[32] = - xx[132];
  xx[33] = - xx[134];
  xx[34] = - xx[143];
  pm_math_Vector3_cross_ra(xx + 12, xx + 190, xx + 35);
  xx[12] = xx[15] + xx[35];
  xx[13] = xx[19] + xx[36];
  xx[14] = xx[2] + xx[37];
  pm_math_Quaternion_inverseXform_ra(xx + 149, xx + 12, xx + 2);
  deriv[0] = state[1];
  deriv[1] = xx[7];
  deriv[2] = state[3];
  deriv[3] = xx[0];
  deriv[4] = state[5];
  deriv[5] = xx[5];
  deriv[6] = state[7];
  deriv[7] = xx[6];
  deriv[8] = state[9];
  deriv[9] = xx[11];
  deriv[10] = state[11];
  deriv[11] = xx[144] - (pm_math_Vector3_dot_ra(xx + 8, xx + 20) +
    pm_math_Vector3_dot_ra(xx + 23, xx + 16));
  deriv[12] = state[13];
  deriv[13] = xx[194] - (pm_math_Vector3_dot_ra(xx + 26, xx + 29) +
    pm_math_Vector3_dot_ra(xx + 32, xx + 2));
  errorResult[0] = xx[1];
  return NULL;
}

PmfMessageId katana_manipulator_279f9268_1_numJacPerturbLoBounds(const
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

PmfMessageId katana_manipulator_279f9268_1_numJacPerturbHiBounds(const
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

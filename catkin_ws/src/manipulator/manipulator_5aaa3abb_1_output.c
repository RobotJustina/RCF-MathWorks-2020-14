/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'manipulator/Manipulator/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "manipulator_5aaa3abb_1_geometries.h"

PmfMessageId manipulator_5aaa3abb_1_output(const RuntimeDerivedValuesBundle
  *rtdv, const double *state, const int *modeVector, const double *input, const
  double *inputDot, const double *inputDdot, const double *discreteState, double
  *output, NeuDiagnosticManager *neDiagMgr)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) rtdvd;
  (void) rtdvi;
  (void) modeVector;
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) discreteState;
  (void) neDiagMgr;
  output[0] = state[0];
  output[1] = state[2];
  output[2] = state[4];
  output[3] = state[6];
  output[4] = state[8];
  output[5] = state[10];
  output[6] = state[12];
  return NULL;
}

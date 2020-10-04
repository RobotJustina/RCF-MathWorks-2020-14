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

const NeZCData *manipulator_5aaa3abb_1_ZCData = NULL;
PmfMessageId manipulator_5aaa3abb_1_computeAsmModeVector(const double *input,
  const double *inputDot, const double *inputDdot, int *modeVector, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) modeVector;
  (void) neDiagMgr;
  errorResult[0] = 0.0;
  return NULL;
}

PmfMessageId manipulator_5aaa3abb_1_computeSimModeVector(const double *input,
  const double *inputDot, const double *inputDdot, int *modeVector, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) modeVector;
  (void) neDiagMgr;
  errorResult[0] = 0.0;
  return NULL;
}

PmfMessageId manipulator_5aaa3abb_1_onModeChanged(const double *input, const
  double *inputDot, const double *inputDdot, const int *prevModeVector, int
  *modeVector, double *solverStateVector, double *discreteStateVector, double
  *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) prevModeVector;
  (void) modeVector;
  (void) solverStateVector;
  (void) discreteStateVector;
  (void) neDiagMgr;
  errorResult[0] = 0.0;
  return NULL;
}

PmfMessageId manipulator_5aaa3abb_1_computeZeroCrossings(const double *input,
  const double *inputDot, const double *inputDdot, double *zeroCrossingsVector,
  double *errorResult, NeuDiagnosticManager *neDiagMgr)
{
  (void) input;
  (void) inputDot;
  (void) inputDdot;
  (void) zeroCrossingsVector;
  (void) neDiagMgr;
  errorResult[0] = 0.0;
  return NULL;
}

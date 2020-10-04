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

void manipulator_5aaa3abb_1_computeRuntimeParameters(real_T *in, real_T *out)
{
  (void) in;
  (void) out;
}

void manipulator_5aaa3abb_1_computeAsmRuntimeDerivedValuesDoubles(const double
  *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void manipulator_5aaa3abb_1_computeAsmRuntimeDerivedValuesInts(const double *rtp,
  int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void manipulator_5aaa3abb_1_computeAsmRuntimeDerivedValues(const double *rtp,
  RuntimeDerivedValuesBundle *rtdv)
{
  manipulator_5aaa3abb_1_computeAsmRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  manipulator_5aaa3abb_1_computeAsmRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}

void manipulator_5aaa3abb_1_computeSimRuntimeDerivedValuesDoubles(const double
  *rtp, double *rtdvd)
{
  (void) rtp;
  (void) rtdvd;
}

void manipulator_5aaa3abb_1_computeSimRuntimeDerivedValuesInts(const double *rtp,
  int *rtdvi)
{
  (void) rtp;
  (void) rtdvi;
}

void manipulator_5aaa3abb_1_computeSimRuntimeDerivedValues(const double *rtp,
  RuntimeDerivedValuesBundle *rtdv)
{
  manipulator_5aaa3abb_1_computeSimRuntimeDerivedValuesDoubles(rtp,
    rtdv->mDoubles.mValues);
  manipulator_5aaa3abb_1_computeSimRuntimeDerivedValuesInts(rtp,
    rtdv->mInts.mValues);
}

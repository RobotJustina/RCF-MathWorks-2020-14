#include "pm_std.h"
#include "math.h"
real_T pm_math_lin_alg_biasedSgn(real_T x);real_T pm_math_lin_alg_guardedSqrt(
real_T x);real_T pm_math_lin_alg_biasedSgn(real_T x){return x<0.0?-1.0:1.0;}
real_T pm_math_lin_alg_guardedSqrt(real_T x){return x<0.0?0.0:sqrt(x);}

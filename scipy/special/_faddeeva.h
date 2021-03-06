#ifndef FADDEEVA_H_
#define FADDEEVA_H_

#ifdef __cplusplus
#define EXTERN_C_START extern "C" {
#define EXTERN_C_END }
#else
#define EXTERN_C_START
#define EXTERN_C_END
#endif

#include <complex>
#include <Python.h>

#include "Faddeeva.hh"

EXTERN_C_START

#include <numpy/npy_math.h>

npy_cdouble faddeeva_w(npy_cdouble zp);
npy_cdouble faddeeva_erf(npy_cdouble zp);
npy_cdouble faddeeva_erfc(npy_cdouble zp);

double faddeeva_erfcx(double zp);
npy_cdouble faddeeva_erfcx_complex(npy_cdouble zp);

double faddeeva_erfi(double zp);
npy_cdouble faddeeva_erfi_complex(npy_cdouble zp);

double faddeeva_dawsn(double zp);
npy_cdouble faddeeva_dawsn_complex(npy_cdouble zp);

EXTERN_C_END

#endif

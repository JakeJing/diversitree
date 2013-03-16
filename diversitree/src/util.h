#include <Rinternals.h>
void do_gemm(const double *x, int nrx, int ncx,
             const double *y, int nry, int ncy,
             double *z);
void do_gemm2(const double *x, int nrx, int ncx,
	      const double *y, int nry, int ncy,
	      double *z);
void do_gemm3(double *x, int nrx, int ncx,
	      double *y, int nry, int ncy,
	      double *z, double beta);
SEXP getListElement(SEXP list, const char *str);
SEXP getListElementIfThere(SEXP list, const char *str);

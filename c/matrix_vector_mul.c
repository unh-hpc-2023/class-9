
#include "linear_algebra.h"

#include <assert.h>

void matrix_vector_mul(const double* A, const struct vector* x,
                       struct vector* y)
{
  int n = x->n;
  assert(n == x->n && n == y->n);

  for (int j = 0; j < n; j++) {
    VEC(y, j) = 0.;
    for (int i = 0; i < n; i++) {
      VEC(y, j) += MAT(A, n, j, i) * VEC(x, i);
    }
  }
}

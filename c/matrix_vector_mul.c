
#include "linear_algebra.h"

#include <assert.h>

void matrix_vector_mul(const struct matrix* A, const struct vector* x,
                       struct vector* y)
{
  assert(A->n_cols == x->n && A->n_rows == y->n);

  for (int j = 0; j < y->n; j++) {
    VEC(y, j) = 0.;
    for (int i = 0; i < x->n; i++) {
      VEC(y, j) += MAT(A, n, j, i) * VEC(x, i);
    }
  }
}


#include "linear_algebra.h"

#include <stdlib.h>

void matrix_construct(struct matrix* A, int n_rows, int n_cols)
{
  A->data = calloc(n_rows * n_cols, sizeof(*A->data));
}

void matrix_destruct(struct matrix* A)
{
  free(A->data);
  // The below isn't necessary, but may help make certain bugs more obvious.
  // A->data = NULL;
}

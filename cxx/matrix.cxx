
#include "linear_algebra.h"

#include <stdio.h>

void matrix_construct(matrix& A, int n_rows, int n_cols)
{
  A.data = new double[n_rows * n_cols];
  A.n_rows = n_rows;
  A.n_cols = n_cols;
}

void matrix_destruct(matrix& A)
{
  delete[] A.data;
  // The below isn't necessary, but may help make certain bugs more obvious.
  // A->data = NULL;
}

void matrix_print(const matrix& A)
{
  for (int i = 0; i < A.n_rows; i++) {
    if (i == 0) {
      printf("{ ");
    } else {
      printf("  "); // try to keep output indented somewhat nicely
    }
    printf("{ ");
    for (int j = 0; j < A.n_cols; j++) {
      printf("%g, ", MAT(A, i, j));
    }
    printf("}\n");
  }
  printf("}\n");
}

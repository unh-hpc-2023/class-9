
#include "linear_algebra.h"

#include <assert.h>
#include <stdlib.h>

// ----------------------------------------------------------------------
// main
//
// test the matrix_vector_mul() function

int main(int argc, char** argv)
{
  const int N = 3;
  struct vector x, y;
  vector_construct(&x, N);
  vector_construct(&y, N);

  for (int i = 0; i < x.n; i++) {
    VEC(&x, i) = 1 + i;
  }
  struct matrix A;
  matrix_construct(&A, N, N);

  for (int i = 0; i < N; i++) {
    MAT(&A, N, i, i) = i + 1; // set diagonal
  }
  MAT(&A, N, 0, 1) = 1.; // add one non-zero off-diagonal element

  matrix_vector_mul(&A, &x, &y);
  assert(VEC(&y, 0) == 3. && VEC(&y, 1) == 4. && VEC(&y, 2) == 9.);

  vector_destruct(&x);
  vector_destruct(&y);
  matrix_destruct(&A);

  return 0;
}

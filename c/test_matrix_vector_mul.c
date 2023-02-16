
#include "linear_algebra.h"

#include <assert.h>

// ----------------------------------------------------------------------
// main
//
// test the matrix_vector_mul() function

int main(int argc, char** argv)
{
  double x[3] = {1., 2., 3.};
  // clang-format off
  double A[3][3] = {{1., 1., 0.},
		            {0., 2., 0.},
		            {0., 0., 3.}};
  // clang-format on
  double y[3];

  matrix_vector_mul(3, A, x, y);
  assert(y[0] == 3. && y[1] == 4. && y[2] == 9.);

  return 0;
}

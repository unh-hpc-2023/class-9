
#include "linear_algebra.h"

#include <assert.h>

// ----------------------------------------------------------------------
// main
//
// test the vector_dot() function

int main(int argc, char** argv)
{
  double x[3] = {1., 2., 3.};
  double y[3] = {2., 3., 4.};

  assert(vector_dot(x, y, 3) == 20);

  return 0;
}

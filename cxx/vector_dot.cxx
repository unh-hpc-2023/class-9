
#include "linear_algebra.h"

#include <assert.h>

// ----------------------------------------------------------------------
// vector_dot
//
// returns the dot product of the two vectors
// x: first vector
// y: second vector

double vector_dot(const struct vector* x, const struct vector* y)
{
  double sum = 0.f;
  assert(x->n == y->n);
  for (int i = 0; i < x->n; i++) {
    sum += VEC(x, i) * VEC(y, i);
  }
  return sum;
}

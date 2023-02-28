
#include "linear_algebra.h"

#include <stdio.h>

void vector_construct(vector& v, int n)
{
  v.data = new double[n];
  v.n = n;
}

void vector_destruct(vector& v)
{
  delete[] v.data;
  // The below isn't necessary, but may help make certain bugs more obvious.
  // v.data = NULL;
  // v.n = 0;
}

void vector_print(const vector& v)
{
  printf("{ ");
  for (int i = 0; i < v.n; i++) {
    printf("%g, ", VEC(v, i));
  }
  printf("}\n");
}

bool vector_is_equal(const vector& x, const vector& y)
{
  if (x.n != y.n) {
    return false;
  }
  for (int i = 0; i < x.n; i++) {
    if (VEC(x, i) != VEC(y, i)) {
      return false;
    }
  }
  return true;
}
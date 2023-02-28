
#include "linear_algebra.h"

#include <assert.h>

vector dot(const matrix& A, const vector& x)
{
  assert(A.n_cols() == x.size());
  vector y(A.n_rows());

  for (int j = 0; j < y.size(); j++) {
    y(j) = 0.;
    for (int i = 0; i < x.size(); i++) {
      y(j) += A(j, i) * x(i);
    }
  }
  return y;
}

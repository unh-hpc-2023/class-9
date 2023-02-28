
#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

#include <stdbool.h>

// vector
//
// encapsulates what makes up a vector -- how many elements it contains (n), as
// well as the actual elements data[0] ... data[n-1]

struct vector
{
  vector(int n);
  ~vector();

  double& at(int i) { return data[i]; }
  const double& at(int i) const { return data[i]; }

  double* data;
  int n;
};

void vector_print(const vector& v);
bool vector_is_equal(const vector& x, const vector& y);

double vector_dot(const vector& x, const vector& y);
void vector_add(const vector& x, const vector& y, vector& z);

struct matrix
{
  matrix(int n_rows, int n_cols);
  ~matrix();

  double* data;
  int n_rows;
  int n_cols;
};

#define MAT(A, i, j) (A).data[(i) * (A).n_cols + (j)]

void matrix_construct(matrix& A, int n_rows, int n_cols);
void matrix_destruct(matrix& A);
void matrix_print(const matrix& A);

void matrix_vector_mul(const matrix& A, const vector& x, vector& y);

#endif

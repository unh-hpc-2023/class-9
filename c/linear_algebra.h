
#ifndef LINEAR_ALGEBRA_H
#define LINEAR_ALGEBRA_H

// struct vector
//
// encapsulates what makes up a vector -- how many elements it contains (n), as
// well as the actual elements data[0] ... data[n-1]

struct vector
{
  double* data;
  int n;
};

#define VEC(v, i) ((v)->data[i])

void vector_construct(struct vector* v, int n);
void vector_destruct(struct vector* v);
void vector_print(const struct vector* v);

double vector_dot(const struct vector* x, const struct vector* y);
void vector_add(const struct vector* x, const struct vector* y,
                struct vector* z);

struct matrix
{
  double* data;
  int n_rows;
  int n_cols;
};

#define MAT(A, i, j) (A)->data[(i) * (A)->n_cols + (j)]

void matrix_construct(struct matrix* A, int n_rows, int n_cols);
void matrix_destruct(struct matrix* A);
void matrix_print(const struct matrix* A);

void matrix_vector_mul(const struct matrix* A, const struct vector* x,
                       struct vector* y);

#endif

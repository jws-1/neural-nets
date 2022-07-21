#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>

matrix* init_matrix(int nrows, int ncols)
{
    matrix* mat = (matrix*) malloc(sizeof(matrix));
    mat->rows = nrows;
    mat->cols = ncols;
    mat->data = (double*) malloc(sizeof(double) * nrows * ncols);
    return mat;
}

void set(matrix* mat, int row, int col, double value)
{
    mat->data[(int) (col * mat->rows) + row] = value;
}

double get(matrix* mat, int row, int col)
{
    return mat->data[(int) (col * mat->rows) + row];
}

matrix* transpose_matrix(matrix* mat)
{
    matrix* out = init_matrix(mat->cols, mat->rows);

    for (int i = 0; i < mat->rows; ++i)
    {
        for (int j = 0; j < mat->cols; ++ j)
        {
            set(out, j, i, get(mat, i, j));
        }
    }

    return out;

}

matrix * add_matrices(matrix* a, matrix* b)
{
    matrix* out = init_matrix(a->rows, a->cols);

    for (int i = 0; i < a->rows; ++i)
    {
        for (int j = 0; j < a->cols; ++j)
        {
            set(a, i, j, get(a, i, j) + get(b, i, j));
        }
    }

    return out;
}

matrix * multiply_matrix(matrix* a, matrix* b)
{
    matrix* out = init_matrix(a->rows, a->cols);

    for (int i = 0; i < a->rows; ++i)
    {
        for (int j = 0; j < a->cols; ++j)
        {
            set(a, i, j, get(a, i, j) * get(b, i, j));
        }
    }

    return out;
}

matrix* scalar_multiply_matrix(matrix* mat, double factor)
{
    matrix* out = init_matrix(mat->rows, mat->cols);

    for (int i = 0; i < mat->rows; ++i)
    {
        for (int j = 0; j < mat->cols; ++j)
        {
            set(mat, i, j, get(mat, i, j) * factor);
        }
    }

    return out; 
}

void print_matrix(matrix* mat)
{
    for (int i = 0; i < mat->rows; ++i)
    {
        for (int j = 0; j < mat->cols; ++j)
        {
            printf("%f ", mat->data[(int) (i + j * mat->rows)]);
        }
        printf("\n");
    }

}

void free_matrix(matrix* mat)
{
    free(mat->data);
    free(mat);
}
#include "matrix.h"
#include <stdio.h>
int main(int argc, char** argv)
{
    matrix* mat = init_matrix(3, 2);
    set(mat, 0, 0, 1);
    set(mat, 0, 1, 2);
    set(mat, 1, 0, 3);
    set(mat, 1, 1, 4);
    set(mat, 2, 0, 5);
    set(mat, 2, 1, 1);

    matrix* mat1 = init_matrix(2, 1);
    set(mat1, 0, 0, 2);
    set(mat1, 1, 0, 4);

    matrix* product = multiply_matrix(mat, mat1);

    print_matrix(product);
}
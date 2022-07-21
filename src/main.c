#include "matrix.h"
#include <stdio.h>
int main(int argc, char** argv)
{
    matrix* mat = init_matrix(5, 3);
    set(mat, 0, 0, 69.69);
    set(mat, 1, 1, 69.22);
    set(mat, 2, 2, 33.22);
    print_matrix(mat);
    // free_matrix(mat);
    printf("\n\n\n\n\n");

    matrix* tmat = transpose_matrix(mat);

    // matrix* mat1 = init_matrix(10, 5);
    print_matrix(tmat);
}
typedef struct {
    double* data;
    double rows;
    double cols;
} matrix;


matrix* init_matrix(int nrows, int ncols);

void set(matrix* mat, int row, int col, double val);
double get(matrix* mat, int row, int col);

matrix* transpose_matrix(matrix* matrix);
matrix* add_matrices(matrix* a, matrix* b);
matrix* multiply_matrix(matrix* a, matrix* b);
matrix* hadamard_multiply_matrix(matrix* a, matrix* b);
matrix* scalar_multiply_matrix(matrix* mat, double factor);

void print_matrix(matrix* mat);
void free_matrix(matrix* mat);
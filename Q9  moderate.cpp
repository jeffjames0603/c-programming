#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void readMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int matrix1[][MAX_COLS], int rows1, int cols1,
                      int matrix2[][MAX_COLS], int rows2, int cols2,
                      int result[][MAX_COLS]) {
    int i, j, k;
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows of matrix1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of matrix1: ");
    scanf("%d", &cols1);
    printf("Enter the number of rows of matrix2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of matrix2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter the elements of matrix1:\n");
    readMatrix(matrix1, rows1, cols1);
    printf("Enter the elements of matrix2:\n");
    readMatrix(matrix2, rows2, cols2);

    multiplyMatrices(matrix1, rows1, cols1, matrix2, rows2, cols2, result);

    printf("Result of matrix multiplication:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}






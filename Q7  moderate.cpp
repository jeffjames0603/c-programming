#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int resultMatrix[][10], int rowsFirst, int columnsFirst, int rowsSecond, int columnsSecond) {
    int i, j, k;
    for (i = 0; i < rowsFirst; i++) {
        for (j = 0; j < columnsSecond; j++) {
            resultMatrix[i][j] = 0;
            for (k = 0; k < columnsFirst; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    int rowsFirst, columnsFirst, rowsSecond, columnsSecond, i, j;

    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &rowsFirst);

    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &columnsFirst);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rowsFirst; i++) {
        for (j = 0; j < columnsFirst; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &rowsSecond);

    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &columnsSecond);

    if (columnsFirst != rowsSecond) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rowsSecond; i++) {
        for (j = 0; j < columnsSecond; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowsFirst, columnsFirst, rowsSecond, columnsSecond);

    printf("Result Matrix:\n");
    for (i = 0; i < rowsFirst; i++) {
        for (j = 0; j < columnsSecond; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;


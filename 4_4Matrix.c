#include <stdio.h>

#define SIZE 2 // Define the size of the matrices

int main() {
    int matrixA[SIZE][SIZE], matrixB[SIZE][SIZE], result[SIZE][SIZE];
    
    // Initialize the result matrix to 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
        }
    }

    // Input elements for the first matrix
    printf("Enter elements for the first 4x4 matrix (Matrix A):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Matrix A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second 4x4 matrix (Matrix B):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Matrix B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("Resulting 4x4 matrix after multiplication (Matrix A * Matrix B):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

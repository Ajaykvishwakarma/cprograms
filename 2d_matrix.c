#include <stdio.h>

#define SIZE 3

int main() {
    int disp[SIZE][SIZE];

    // Input elements in the matrix
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("Enter element for disp[%d][%d]: ", i, j);
            scanf("%d", &disp[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", disp[i][j]);
        }
        printf("\n"); // Newline for each row
    }

    return 0;
}

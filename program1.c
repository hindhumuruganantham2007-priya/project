#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];
    int i, j, k;

    printf("Enter the number of rows of First Matrix: ");
    scanf("%d", &r1);

    printf("Enter the number of columns of First Matrix: ");
    scanf("%d", &c1);

    printf("Enter the elements of First Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows of Second Matrix: ");
    scanf("%d", &r2);

    printf("Enter the number of columns of Second Matrix: ");
    scanf("%d", &c2);

    printf("Enter the elements of Second Matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nFirst Matrix:\n");
    for(i = 0; i < r1; i++) {
        printf("[");
        for(j = 0; j < c1; j++) {
            printf("%d ", A[i][j]);
        }
        printf("]\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < r2; i++) {
        printf("[");
        for(j = 0; j < c2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("]\n");
    }

    printf("\nResultant Matrix:\n");
    for(i = 0; i < r1; i++) {
        printf("[");
        for(j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("]\n");
    }

    return 0;
}

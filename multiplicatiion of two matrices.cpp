#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter size of Matrix A (r1 c1): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter size of Matrix B (r2 c2): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!");
        return 0;
    }

    int A[r1][c1], B[r2][c2], M[r1][c2];

    // Input A
    printf("Enter Matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&A[i][j]);

    // Input B
    printf("Enter Matrix B:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&B[i][j]);

    // Initialize result matrix
    for(int i=0;i<r1;i++)
        for(int j=0;j<c2;j++)
            M[i][j] = 0;

    // Multiply
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            for(int k=0;k<c1;k++) {
                M[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    printf("Result Matrix:\n");
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++){
            printf("%d ", M[i][j]);
        
    }
    printf("\n");
}
    return 0;
}

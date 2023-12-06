#include <stdio.h>

int main() {
    int A[2][3], F[3][2], i, j;

    printf("Matriz inicial:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
            F[j][i] = A[i][j];
        }   
    }

    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
            if (j != 2)
                printf("%d \t", A[i][j]);
            else 
                printf("%d \n", A[i][j]);
        }
    }

    printf("\nMatriz transposta:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 2; j++) {
            if (j != 1)
                printf("%d \t", F[i][j]);
            else 
                printf("%d \n", F[i][j]);
        }
    }
    
    return 0;
}
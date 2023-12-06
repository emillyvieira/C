#include <stdio.h>

int main() {
    int A[2][2], B[2][2], SOMA[2][2], i, j;

    printf("Matriz A:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }   
    }

    printf("\nMatriz B:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }   
    }

    printf("\nSoma das matrizes:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            SOMA[i][j] = A[i][j] + B[i][j];
            if ( j != 1 )
                printf("%d \t", SOMA[i][j]);
            else 
                printf("%d \n", SOMA[i][j]);
        }
    }
    
    return 0;
}
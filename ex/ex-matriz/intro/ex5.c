#include <stdio.h>

int main() {
    int matrizA[3][4], matrizB[3][4], i, j;

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
            matrizB[i][j] = matrizA[i][j] * 3;
        }   
    }

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            if ( j != 3 )
                printf("%d \t", matrizB[i][j]);
            else 
                printf("%d \n", matrizB[i][j]);
        }
    }
    
    return 0;
}
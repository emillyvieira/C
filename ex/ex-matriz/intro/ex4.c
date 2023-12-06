#include <stdio.h>

int main() {
    int matriz[4][4], i, j;

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }   
    }

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (matriz[i][j] % 2 != 0)
                printf("%d \t", matriz[i][j]);
        }
    }
    
    return 0;
}
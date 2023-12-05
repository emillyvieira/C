#include <stdio.h>

int main() {
    int matriz[10][10], i, j;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            matriz[i][j] = matriz[i][j] * 2;
        }   
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (j != 2)
                printf("%d \t", matriz[i][j]);
            else
                printf("%d \n", matriz[i][j]);
        }
    }
    
    return 0;
}
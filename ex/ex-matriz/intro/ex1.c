#include <stdio.h>

int main() {
    int matriz[10][10], i, j;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }   
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (j != 9)
                printf("%d \t", matriz[i][j]);
            else
                printf("%d \n", matriz[i][j]);
        }
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int matriz[5][5], i, j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("Linha %d | Coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }   
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if ((j + i) % 2 == 0)
                printf("%d \t", matriz[i][j]);
        }
    }
    
    return 0;
}
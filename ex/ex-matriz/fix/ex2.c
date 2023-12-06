#include <stdio.h>
int main()
{
    int vet[10] = {5, 8, 3, 12, 7, 10, 6, 15, 9, 4};
    int i, temp, inicio = 0, fim = 9;
    while (inicio < fim)
    {
        temp = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = temp;
        inicio++;
        fim--;
    }
    printf("Vetor invertido:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

void zerar(int vet[], int qtd)
{
    int i;
    for (i = 0; i < qtd; i++)
        vet[i] = 0;
}

int main() {
    int i;
    int vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (i = 0; i < 10; i++)
        printf("%d ", vet[i]);
    
    printf("\n\nApos a chamada da funcao zerar().\n");

    zerar(vet, 10); // Passa o nome do vetor como parâmetro

    for (i = 0; i < 10; i++)
        printf("%d ", vet[i]);
    // todos os elementos terão valor 0
    
    return 0;
}
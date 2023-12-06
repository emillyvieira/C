#include <stdio.h>
int main()
{
    int vetor[5]; // vetor[0]...vetor[1]
    int aux, i;
    printf("Entre com 5 numeros: \n");
    
    for (i = 0; i < 5; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    aux = vetor[0];
    i = 1;
    while (i < 5) {
        if (vetor[i] >= aux)
            aux = vetor[i];
        i++;
    }
    
    printf("Maior numero: %d", aux);
    return 0;
}
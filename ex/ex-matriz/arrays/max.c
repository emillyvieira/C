#include <stdio.h>
#define MAX 500

int main() {
    int i = 0;
    int vetor[MAX];
    
    while (i < MAX) {
        vetor[i] = -1;
        i++;
    }

    i = 0;
    printf("Entre com ate %d numeros (-1 para SAIR): \n", MAX);
    while (i < MAX) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0)
            i = MAX;
        else
            i++;
    }

    printf("\n");
    i = 0;
    while (vetor[i] >= 0) {
        printf("vetor[%d]: %d\n", i, vetor[i]);
        i++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int NUM[5];
    int i;

    for(i=0; i<5; i++) {
        printf("Insira o numero: ");
        scanf("%d", &NUM[i]);
    }

    printf("Numeros digitados: ");
    for(i=0; i<5; i++) {
        printf("%d ", NUM[i]);
    }

    int maior = NUM[0];
    int menor = NUM[0];

    for(i=1; i<5; i++) {
        if (maior < NUM[i])
            maior = NUM[i];
        else menor = NUM[i];
    }

    printf("\n\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);

    return 0;
}
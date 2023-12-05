#include <stdio.h>

int main() {
    int v1[10], v2[10], v3[10], i, j, cont=0;

    printf("\nDigite os 10 numeros do vetor 1: \n");
    for(i=0; i<10; i++)
        scanf("%d", &v1[i]);

    printf("\nDigite os 10 numeros do vetor 2: \n");
    for(i=0; i<10; i++)
        scanf("%d", &v2[i]);

    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            if (v1[i] == v2[j]) {
                v3[cont] = v1[i];
                cont++;
                break;
            }
        }
    }
    
    printf("\nElementos comuns aos conjuntos: \n");
    for(i=0; i<cont; i++)
        printf("%d \n", v3[i]);

    return 0;
}
#include <stdio.h>

int main() {
    int NUM[15];
    int i, num, posicao;
    int n=1;

    for(i=0; i<15; i++) {
        printf("%d) Insira o numero: ", n);
        scanf("%d", &NUM[i]);
    }

    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &num);

    for (i=0; i<15; i++) {
        if(num == NUM[i]) posicao = i;
    }

    printf("A posicao de %d e': [%d]", num, posicao);
    
    return 0;
}
#include <stdio.h>

int main() {
    int numLinhas;

    do {  
        printf("Digite o numero de linhas para o triangulo: ");
        scanf("%d", &numLinhas);
        if (numLinhas <= 0) printf("O numero de linhas deve ser maior que zero.\n\n");
    } while (numLinhas <= 0);
    
    for (int linha = 1; linha <= numLinhas; linha++) {
        for (int espaco = 0; espaco < numLinhas - linha; espaco++) {
            printf(" ");
        }
        
        for (int coluna = 0; coluna < 2 * linha - 1; coluna++) {
            printf("#");
        }
        
        printf("\n");
    }
    
    return 0;
}
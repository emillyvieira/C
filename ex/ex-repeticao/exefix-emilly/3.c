#include <stdio.h>

int main() {
    char texto[501]; 
    int i, numPalavras = 0, numCaracteres = 0;

    printf("Entre com um texto de ate 500 caracteres:\n");
    
    for (i = 0; i < 500; i++) {
        char c = getchar();
        if (c == '\n') {
            break;
        }
        texto[i] = c;
        numCaracteres++;
        
        if (c != ' ' && c != '\t' && (i == 0 || texto[i - 1] == ' ' || texto[i - 1] == '\t')) {
            numPalavras++;
        }
    }

    texto[i] = '\0';

    printf("Quantidade de palavras: %d\n", numPalavras);
    printf("Tamanho do texto: %d\n", numCaracteres);

    return 0;
}

#include <stdio.h>

int main() {
    char palavra[21];
    int tamanho, i, j;

    printf("Digite uma palavra (ate 20 caracteres): ");
    scanf("%s", &palavra);

    for (tamanho = 0; palavra[tamanho] != '\0'; tamanho++) {}

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            printf("A palavra nao e' um palíndromo.\n");
            return 0;
        }
    }

    printf("A palavra e' um palindromo.\n");

    return 0;
}

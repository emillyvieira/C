#include <stdio.h>

int main() {
    int valorInicial, valorFinal, contadorPares = 0;

    do {
        printf("Digite o valor inicial do intervalo: ");
        scanf("%d", &valorInicial);

        printf("Digite o valor final do intervalo: ");
        scanf("%d", &valorFinal);

        if (valorInicial > valorFinal) {
            printf("O valor inicial deve ser menor ou igual ao valor final. Tente novamente.\n");
        }
    } while (valorInicial > valorFinal);

    for (int i = valorInicial; i <= valorFinal; i++) {
        if (i % 2 == 0) {
            contadorPares++;
        }
    }

    printf("No intervalo de %d a %d, existem %d numeros pares.\n", valorInicial, valorFinal, contadorPares);

    return 0;
}

#include <stdio.h>

int main() {
    float p1, p2, nf;
    
    do {
        printf("Entre com a nota P1: ");
        if (scanf("%f", &p1) != 1 || p1 < 0 || p1 > 10) printf("Nota invalida!\n");
    } while (p1 < 0 || p1 > 10);

    do {
        printf("Entre com a nota P2: ");
        if (scanf("%f", &p2) != 1 || p2 < 0 || p2 > 10) printf("Nota invalida!\n");
    } while (p2 < 0 || p2 > 10);

    nf = (p1 + p2) / 2;
    printf("\nNota Final: %.1f", nf);

    if (nf >= 5) printf(" - Aprovado");
    else printf(" - Reprovado");

    char conceito;

    if (nf >= 9.0) {
        conceito = 'E';
    } else if (nf >= 6.0) {
        conceito = 'B';
    } else if (nf >= 5.0) {
        conceito = 'R';
    } else {
        conceito = 'F';
    }

    printf("\nConceito: ");

    switch (conceito) {
        case 'E':
            printf("Excelente");
            break;
        case 'B':
            printf("Bom");
            break;
        case 'R':
            printf("Regular");
            break;
        case 'F':
            printf("Falha");
            break;
    }

    return 0;
}
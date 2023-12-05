#include <stdio.h>
#include <conio.h>

void count_up(int i, int f) {
    int ct;
    for (ct = i; ct <= f; ct++) {
        printf("%d ", ct);
    }
}

void count_down(int i, int f) {
    int ct;
    for (ct = i; ct >= f; ct--) {
        printf("%d ", ct);
    }
}

int main() {
    char mode;
    int inicial, final;

    printf("Voce quer que eu conte de forma [c]rescente ou [d]ecrescente? ");
    mode = getche();

    if (mode == 'c' || mode == 'C') {
        printf("\nRealizando a contagem de forma CRESCENTE.\n");
    } else if (mode == 'd' || mode == 'D') {
        printf("\nRealizando a contagem de forma DECRESCENTE.\n");
    } else {
        printf("\nEntrada invalida. Digite 'c' para contagem crescente ou 'd' para contagem decrescente.\n");
        return 1;
    }

    while (1) {
        printf("\nEntre com o numero inicial: ");
        scanf("%d", &inicial);
        printf("Entre com o numero final: ");
        scanf("%d", &final);

        if ((mode == 'c' || mode == 'C') && final > inicial) {
            break;  
        } else if ((mode == 'd' || mode == 'D') && final < inicial) {
            break; 
        } else {
            printf("Erro: O numero final deve ser %s que o inicial.\n", (mode == 'c' || mode == 'C') ? "MAIOR" : "MENOR");
        }
    }

    printf("Resultado: ");
    if (mode == 'c' || mode == 'C') {
        count_up(inicial, final);
    } else {
        count_down(inicial, final);
    }
    printf("\n");

    return 0;
}
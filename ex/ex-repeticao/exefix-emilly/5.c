#include <stdio.h>

void doWhile(int ini, int fin, int pas) {
    if (ini <= fin) {
        printf("%d ", ini);
        doWhile(ini + pas, fin, pas);
    } else printf("%d", ini);
}

int main() {
    int ini, fin, pas;

    printf("Digite o valor inicial: ");
    scanf("%d", &ini);

    printf("Digite o valor final: ");
    scanf("%d", &fin);

    printf("Digite o valor do passo: ");
    scanf("%d", &pas);

    doWhile(ini, fin, pas);

    printf("\n");

    return 0;
}

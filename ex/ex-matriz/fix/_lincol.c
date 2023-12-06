#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int lin, col;

    printf("Digite L e C da matriz: ");
    scanf("%d %d", &lin, &col);

    int matriz[lin][col];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++)
            matriz[i][j] = rand() % 100;} // Gera números aleatórios entre 0 e 99

    printf("\n\nMatriz gerada:\n");

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++)
            printf("%2d ", matriz[i][j]);
        printf("\n");
    }

    return 0;
}
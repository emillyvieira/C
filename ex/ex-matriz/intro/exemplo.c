#include <stdio.h>

int main() {
    float matNotas[4][4];
    int i, j;
    
    for (i=0; i<4; i++) {
        for (j=0; j<3; j++) {
            printf("Para o aluno %d, informe a nota %d: \n", i+1, j+1);
            scanf("%f", &matNotas[i][j]);
        }
        matNotas[i][3] = matNotas[i][0] + matNotas[i][1] + matNotas[i][2];
    }

    for (i=0; i<4; i++) {
        printf("Notas do aluno %d\n", i+1);
        for (j=0; j<3; j++) {
            if (j != 2)
                printf("%.2f \t", matNotas[i][j]);
            else
                printf("%.2f \n", matNotas[i][j]);
        }
        printf("Nota final: %.2f \n", matNotas[i][3]);
    }
    
    return 0;
}
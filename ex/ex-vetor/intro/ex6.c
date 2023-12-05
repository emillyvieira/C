#include <stdio.h>

int main() {
    float salario[20], reajuste[20];
    int i;

    for(i=0; i<3; i++) 
    {
        printf("%d) Digite o salario atual: R$ ", i+1);
        scanf("%f", &salario[i]);

        reajuste[i] = salario[i] * 1.08;
    }
    
    for(i=0; i<3; i++) 
        printf("\n-----\n%d) Salario: R$ %.2f - Salario novo: R$ %.2f \n", i+1, salario[i], reajuste[i]);

    return 0;
}
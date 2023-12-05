#include <stdio.h>

int main() {
    float p1[15], p2[15], m[15];
    int i;
    int sit[15];

    for(i=0; i<15; i++) 
    {
        printf("\n--%d--\n", i+1);
        do 
        {
            printf("Digite a nota da p1: ");
            scanf("%f", &p1[i]);
        } while (p1[i]<0 || p1[i]>10);

        do {
            printf("Digite a nota da p2: ");
            scanf("%f", &p2[i]);
        } while (p2[i]<0 || p2[i]>10);
        
        m[i] = (p1[i] + p2[i])/2;

        if (m[i] >= 6) 
            sit[i] = 1;
        else sit[i] = 2;
    }
    
    printf("\n\nNotas - Media - Situacao\n");
    for(i=0; i<15; i++) 
    {
        printf("\n--%d--", i+1);
        printf("\nP1: %.2f", p1[i]);
        printf(" - P2: %.2f", p2[i]);
        printf(" - Media: %.0f", m[i]);
        if (sit[i] == 1)
            printf(" - Situacao: Aprovado\n");
        else 
            printf(" - Situacao: Reprovado\n");
    }

    return 0;
}
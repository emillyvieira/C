#include <stdio.h>

int main(){
    float p1, p2, p3, m1, nf;

    printf("Entre com o valor de P1: ");
    scanf("%f", &p1);
    if (p1>0) {
        printf("\nEntre com o valor de P2: ");
        scanf("%f", &p2);
        if (p2>0) {
            printf("\nEntre com o valor de P3: ");
            scanf("%f", &p3);
            if (p3>0) {
                if (p1<p2 && p1<p3) m1 = p1;
                else if (p2<p1 && p2<p3) m1 = p2;
                else m1 = p3;

                nf = (p1+p2+p3-m1)/2;
                printf("\nMenor nota desconsiderada: %.2f", m1);
                printf("\nMedia final: %.2f\n", nf);

                if (nf<4) printf("Situacao: REPROVADO");
                else if (nf>=6) printf("Situacao: APROVADO");
                else printf("Situacao: IFA");
            }
        }
        else printf("Nota invalida");
    } 
    else printf("Nota invalida");
    
    return 0;
}
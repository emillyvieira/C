#include <stdio.h>

int main()
{
    int dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual;
    int dias_de_vida;

    printf("Informe sua data de nascimento no formato DD/MM/AAAA: ");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Informe a data atual no formato DD/MM/AAAA: ");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);

    dias_de_vida = 0;
    dias_de_vida += (ano_atual - ano_nasc) * 365;
    if (ano_atual % 4 == 0 && ano_atual % 100 != 0 || ano_atual % 400 == 0) {
        dias_de_vida += 1;
    }
    if (mes_atual < mes_nasc) {
        dias_de_vida -= (mes_nasc - mes_atual) * 30;
        ano_atual--;
    } else if (mes_atual == mes_nasc) {
        if (dia_atual < dia_nasc) {
            dias_de_vida -= (dia_nasc - dia_atual);
            ano_atual--;
        }
    }
    dias_de_vida += (dia_atual - dia_nasc);

    printf("Você tem %d dias de vida.\n", dias_de_vida);

    return 0;
}
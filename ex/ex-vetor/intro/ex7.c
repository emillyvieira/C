#include <stdio.h>

int main()
{
    int i, menos10 = 0, menos20 = 0, mais20 = 0;
    float precoCompra[100], precoVenda[100], lucro;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o preco de compra do produto:\n");
        scanf("%f", &precoCompra[i]);
        printf("\nDigite o preco de venda do produto:\n");
        scanf("%f", &precoVenda[i]);
        lucro = (precoVenda[i] / precoCompra[i]) * 100;
        if (lucro < 10)
            menos10++;
        else if (lucro <= 20)
            menos20++;
        else
            mais20++;
    }
    printf("\nQtde com ate 10 porcento de lucro: %d\n", menos10);
    printf("\nQtde com ate 20 porcento de lucro: %d\n", menos20);
    printf("\nQtde com mais de 20 porcento de lucro: %d\n", mais20);

    return 0;
}

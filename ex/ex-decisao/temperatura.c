#include <stdio.h>
int main()
{
    float temp;

    printf("Entre com a temperatura em graus Celsius: ");
    scanf("%f", &temp);

    if (temp<18) printf("Esta' frio!");
    else if (temp>28) printf("Esta' quente!");
    else printf("A temperatura esta' agradavel");

    return 0;
}
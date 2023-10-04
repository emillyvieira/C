#include <stdio.h>
#include <conio.h>

int main (){
    int num1, num2;
    char op;

    printf("Escolha dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &num1, &num2);
    printf("Escolha o operador ( + - * / %% ): ");
    op = getch();
    printf("%c\n", op);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, (num1+num2));
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, (num1-num2));
        break;
    case '/':
        printf("%d / %d = %d", num1, num2, (num1/num2));
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, (num1*num2));
        break;
    case '%':
        printf("%d %% %d = %d", num1, num2, (num1%num2));
        break;
    default:
        break;
    }

    return 0;
}
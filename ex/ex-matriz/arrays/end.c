#include <stdio.h>

int main() {
    int i, j;
    char str[5][100] = {
        "Olha que coisa mais linda",
        "Mais cheia de graca",
        "E ela a menina que vem e que passa,",
        "Num doce balanco a caminho do mar",
        "Moca do corpo dourado do sol de Caraguatatuba"};

    for (i = 0; i < 5; i++)
        printf("String %d: %s - Adr: 0x%x\n", i + 1, str[i], &str[i]);

    for (i = 0; i < 5; i++)
        for (j = 0; str[i][j] != '\0'; j++)
            printf("%c - Adr: 0x%x\n", str[i][j], &str[i][j]);

    return 0;
}
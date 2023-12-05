#include <stdio.h>

int main() {
    char senha[50];
    int temLetraMaiuscula = 0, temLetraMinuscula = 0, temNumero = 0;
    int comprimento = 0;

    printf("Crie uma senha: ");
    scanf("%s", &senha);

    while (senha[comprimento] != '\0') {
        comprimento++;
    }

    if (comprimento >= 8) {
        printf("[o] Tamanho minimo de 8 caracteres.\n");
    } else {
        printf("[x] Tamanho minimo de 8 caracteres.\n");
    }

    for (int i = 0; i < comprimento; i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            temLetraMaiuscula = 1;
        } else if (senha[i] >= 'a' && senha[i] <= 'z') {
            temLetraMinuscula = 1;
        } else if (senha[i] >= '0' && senha[i] <= '9') {
            temNumero = 1;
        }
    }

    if (temLetraMaiuscula) {
        printf("[o] Contem letra maiuscula.\n");
    } else {
        printf("[x] Contem letra maiuscula.\n");
    }

    if (temLetraMinuscula) {
        printf("[o] Contem letra minuscula.\n");
    } else {
        printf("[x] Contem letra minuscula.\n");
    }

    if (temNumero) {
        printf("[o] Contem numeros.\n");
    } else {
        printf("[x] Contem numeros.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    char letra[10];
    int i;

    printf("Digite 10 letras: \n");
    for(i=0; i<10; i++) 
        scanf("%c", &letra[i]);

    for(i=0; i<10; i++) 
        printf("%d) %c\n", i+1, letra[i]);
    
    return 0;
}
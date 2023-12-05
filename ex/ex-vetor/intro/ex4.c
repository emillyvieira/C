#include <stdio.h>

int main() {
    int num[5];
    int i, ms=0;

    for(i=0; i<5; i++) {
        printf("\n%d) ", i+1);
        scanf("%d", &num[i]);
        if ((num[i] % 6) == 0) ms+=1;
    }

    printf("Ha %d multiplos de 6.", ms);
    
    return 0;
}
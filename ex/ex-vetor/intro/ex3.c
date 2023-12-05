#include <stdio.h>

int main() {
    int num[15];
    int i;

    for(i=0; i<15; i++) {
        printf("\n%d) ", i+1);
        scanf("%d", &num[i]);
    }

    for(i=0; i<15; i++) {
        printf("\n%d) ", i+1);
        printf("%d", num[i]);

        if ((num[i] % 2) == 0) printf(" - Par");
        else printf(" - Impar");
    }
    
    return 0;
}
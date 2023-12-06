#include <stdio.h>

int main() {
    int mtrx[20][10];
    int i, j, ct = 1;

    for (i = 0; i < 20; i++)
        for (j = 0; j < 10; j++) {
            mtrx[i][j] = ct;
            ct++;
        }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 10; j++)
            if (j != 9) printf("%d ", mtrx[i][j]);
            else printf("\n");
    }

    return 0;
}
#include <stdlib.h> //necessário para a função rand() e srand()
#include <time.h>   //necessário para a função time()
#include <stdio.h> 

int num_pseudo() { // NÃO alterar esta função!
    srand(time(NULL));
    return (rand() % 6); // retorna um numero pseudo-aleatório de 0 a 5
}

int main() {
    char i, p;
    int n, c;

    // printf


    return 0;
};
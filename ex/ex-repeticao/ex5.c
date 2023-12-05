#include <stdio.h>

int main() {
	int idade, n=1, v=0, c=0;

	printf("Idades\n");

	while(idade!=0) {
		do {
			printf("%d) ", n);
			scanf("%d", &idade);
			n++;

			if(idade<21 && idade!=0) v++;
			else if (idade>50) c++;
		} while (idade<0 || idade>115);
	}
	printf("total de pessoas com menos de 21 anos: %d", v);
	printf("\ntotal de pessoas com mais de 51 anos: %d", c);

	return 0;
	}
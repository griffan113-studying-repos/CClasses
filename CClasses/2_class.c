#include <stdio.h>
#define PRECO 1.99

int main() {
	int pera;
	char qualidade;
	float peso;

	pera = 3;
	qualidade = 'A';
	peso = 0.653;

	printf("Existem %d peras de qualidade %c ", pera, qualidade);
	printf("pesando %f quilos.\n", peso);
	printf("O preco por quilo e %f, total e %f\n", PRECO, peso * PRECO);

	return 0;
}
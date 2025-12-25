/*
Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a
multiplicação e os números.
*/

#include <stdio.h>

int main(void) {
	int v[5];
	int soma = 0;
	long produto = 1;

	for (int i = 0; i < 5; ++i) {
		if (scanf("%d", &v[i]) != 1) {
			return 1; // entrada insuficiente
		}
		soma += v[i];
		produto *= v[i];
	}

	printf("Numeros lidos: ");
	for (int i = 0; i < 5; ++i) {
		if (i) printf(" ");
		printf("%d", v[i]);
	}
	printf("\n");

	printf("Soma: %d\n", soma);
	printf("Multiplicacao: %lld\n", produto);

	return 0;
}
#include <stdio.h>

int main(void) {
    int N;
    do { printf("Quantos numeros (0-1000): "); if (scanf("%d", &N) != 1) return 1; } while (N < 0 || N > 1000);
    int x, menor, maior, soma = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (i == 0) menor = maior = x;
        if (x < menor) menor = x;
        if (x > maior) maior = x;
        soma += x;
    }
    printf("Menor: %d\nMaior: %d\nSoma: %d\n", menor, maior, soma);
    return 0;
}

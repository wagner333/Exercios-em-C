#include <stdio.h>

int main(void) {
    int N;
    printf("Quantos numeros: "); if (scanf("%d", &N) != 1) return 1;
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

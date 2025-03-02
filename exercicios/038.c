#include <stdio.h>

void calcular_notas(int valor) {
    if (valor < 10 || valor > 600) {
        printf("Valor fora do limite permitido! Escolha entre R$10 e R$600.\n");
        return;
    }

    int notas100 = valor / 100;
    valor %= 100;

    int notas50 = valor / 50;
    valor %= 50;

    int notas10 = valor / 10;
    valor %= 10;

    int notas5 = valor / 5;
    valor %= 5;

    int notas1 = valor;

    printf("O saque será entregue com:\n");

    if (notas100 > 0) printf("%d nota%s de R$100\n", notas100, notas100 > 1 ? "s" : "");
    if (notas50 > 0)  printf("%d nota de R$50\n", notas50);
    if (notas10 > 0)  printf("%d nota%s de R$10\n", notas10, notas10 > 1 ? "s" : "");
    if (notas5 > 0)   printf("1 nota de R$5\n");
    if (notas1 > 0)   printf("%d nota%s de R$1\n", notas1, notas1 > 1 ? "s" : "");
}

int main() {
    int valor;

    printf("Digite o valor do saque (entre R$10 e R$600): ");
    scanf("%d", &valor);

    calcular_notas(valor);

    return 0;
}


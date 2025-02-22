#include <stdio.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O número é positivo\n");
    } else if (numero < 0) {
        printf("O número é negativo\n");
    } else {
        printf("O número é zero\n");
    }

    return 0;
}
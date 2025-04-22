#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verifica se a parte inteira é igual ao número
    if (numero == floor(numero)) {
        printf("O número %.2f é INTEIRO.\n", numero);
    } else {
        printf("O número %.2f é DECIMAL.\n", numero);
    }

    return 0;
}

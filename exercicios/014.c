#include <stdio.h>
int main() {
    float pesoLimite = 50.0;
    float MultaPorQuilo = 4.0;

    float peso, excesso, multa;

    printf("Digite o peso dos peixes (em quilos): ");
    scanf("%f", &peso);

    if (peso > pesoLimite) {
        excesso = peso - pesoLimite;
        multa = excesso * MultaPorQuilo;
        printf("\nPeso informado: %.2f kg\n", peso);
        printf("Excesso: %.2f kg\n", excesso);
        printf("Valor da multa a pagar: R$ %.2f\n", multa);
    } else {
        printf("\nPeso informado: %.2f kg\n", peso);
        printf("Não há excesso de peso.\n");
        printf("Não há multa a pagar.\n");
    }

    return 0;
}
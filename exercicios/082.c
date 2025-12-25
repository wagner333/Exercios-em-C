#include <stdio.h>

int main(void) {
    double divida; printf("Valor da divida: "); if (scanf("%lf", &divida) != 1) return 1;
    printf("Valor da Divida\tValor dos Juros\tParcelas\tValor da Parcela\n");
    int parcelas[] = {1,3,6,9,12};
    int juros[] = {0,10,15,20,25};
    for (int i = 0; i < 5; i++) {
        double valor = divida * (1.0 + juros[i] / 100.0);
        double parcela = valor / parcelas[i];
        printf("R$ %.2f\tR$ %.2f\t%d\tR$ %.2f\n", valor, valor - divida, parcelas[i], parcela);
    }
    return 0;
}

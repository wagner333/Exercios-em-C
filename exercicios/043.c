#include <stdio.h>

int main(void) {
    char tipo;
    float litros;
    float preco_litro;
    float desconto;
    float total;

    printf("--- POSTO DE GASOLINA ---\n");
    printf("Digite o tipo de combustivel (a = alcool, g = gasolina): ");
    scanf(" %c", &tipo);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    if (tipo == 'a') {
        preco_litro = 1.90;

        if (litros <= 20) {
            desconto = 0.03; // 3%
        } else {
            desconto = 0.05; // 5%
        }

    } else if (tipo == 'g') {
        preco_litro = 2.50;

        if (litros <= 20) {
            desconto = 0.04; // 4%
        } else {
            desconto = 0.06; // 6%
        }

    } else {
        printf("Tipo de combustivel invalido!\n");
        return 1;
    }

    total = litros * preco_litro;
    total = total - (total * desconto);

    printf("Valor a pagar: R$ %.2f\n", total);

    return 0;
}


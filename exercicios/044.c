#include <stdio.h>

int main(void) {
    float kg_morango, kg_maca;
    printf("Quantidade de morangos (kg): ");
    if (scanf("%f", &kg_morango) != 1) return 1;
    printf("Quantidade de macas (kg): ");
    if (scanf("%f", &kg_maca) != 1) return 1;

    float preco_morango = (kg_morango <= 5.0f) ? 2.50f : 2.20f;
    float preco_maca = (kg_maca <= 5.0f) ? 1.80f : 1.50f;

    float total = kg_morango * preco_morango + kg_maca * preco_maca;
    float total_kg = kg_morango + kg_maca;

    if (total_kg > 8.0f || total > 25.0f) {
        total = total * 0.90f; // 10% de desconto
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}

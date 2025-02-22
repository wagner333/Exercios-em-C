#include <stdio.h>
#include <math.h>

int main() {
    float area, litros, litros_folga;
    int latas18, galoes36;
    float preco_latas, preco_galoes;
    int latas_mistas, galoes_mistos;
    float preco_misto;

    // Entrada de dados
    printf("Digite a área em metros quadrados a ser pintada: ");
    scanf("%f", &area);

    // Cálculo da quantidade de litros necessários
    litros = area / 6.0;
    litros_folga = litros * 1.1; // 10% de folga

    // Situação 1: Apenas latas de 18 litros
    latas18 = (int)ceil(litros_folga / 18.0);
    preco_latas = latas18 * 80.0;

    // Situação 2: Apenas galões de 3.6 litros
    galoes36 = (int)ceil(litros_folga / 3.6);
    preco_galoes = galoes36 * 25.0;

    // Situação 3: Mistura de latas e galões
    latas_mistas = (int)(litros_folga / 18.0);
    float litros_restantes = litros_folga - (latas_mistas * 18.0);
    galoes_mistos = (int)ceil(litros_restantes / 3.6);
    preco_misto = (latas_mistas * 80.0) + (galoes_mistos * 25.0);

    // Impressão dos resultados
    printf("\nSituação 1 - Apenas latas de 18 litros:\n");
    printf("Quantidade de latas: %d\n", latas18);
    printf("Preço total: R$ %.2f\n", preco_latas);

    printf("\nSituação 2 - Apenas galões de 3.6 litros:\n");
    printf("Quantidade de galões: %d\n", galoes36);
    printf("Preço total: R$ %.2f\n", preco_galoes);

    printf("\nSituação 3 - Mistura de latas e galões:\n");
    printf("Quantidade de latas de 18 litros: %d\n", latas_mistas);
    printf("Quantidade de galões de 3.6 litros: %d\n", galoes_mistos);
    printf("Preço total: R$ %.2f\n", preco_misto);

    return 0;
}
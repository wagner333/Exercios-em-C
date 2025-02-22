#include <stdio.h>
#include <math.h>

int main() {
    float area, litros;
    int latas;
    float preco_total;

    // Entrada da área a ser pintada
    printf("Digite a área em metros quadrados a ser pintada: ");
    scanf("%f", &area);

    // Cálculo dos litros necessários (1 litro para cada 3m²)
    litros = area / 3;

    // Cálculo das latas (cada lata tem 18 litros)
    // Usando ceil para arredondar para cima, pois precisamos de latas inteiras
    latas = ceil(litros / 18);

    // Cálculo do preço total (R$ 80,00 por lata)
    preco_total = latas * 80.0;

    // Saída dos resultados
    printf("\nQuantidade de latas necessárias: %d\n", latas);
    printf("Preço total: R$ %.2f\n", preco_total);

    return 0;
}
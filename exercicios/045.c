#include <stdio.h>
#include <string.h>

int main(void) {
    char tipo[20];
    float kg;
    char pagamento[20];

    printf("Tipo de carne (file/alcatra/picanha): ");
    if (scanf("%19s", tipo) != 1) return 1;
    printf("Quantidade (kg): ");
    if (scanf("%f", &kg) != 1) return 1;
    printf("Pagamento com cartao Tabajara? (s/n): ");
    if (scanf("%19s", pagamento) != 1) return 1;

    float preco_por_kg = 0.0f;
    if (strcmp(tipo, "file") == 0) {
        preco_por_kg = (kg <= 5.0f) ? 4.90f : 5.80f;
    } else if (strcmp(tipo, "alcatra") == 0) {
        preco_por_kg = (kg <= 5.0f) ? 5.90f : 6.80f;
    } else if (strcmp(tipo, "picanha") == 0) {
        preco_por_kg = (kg <= 5.0f) ? 6.90f : 7.80f;
    } else {
        printf("Tipo invalido\n");
        return 1;
    }

    float preco_total = preco_por_kg * kg;
    int cartao = (pagamento[0] == 's' || pagamento[0] == 'S');
    float desconto = cartao ? preco_total * 0.05f : 0.0f;
    float a_pagar = preco_total - desconto;

    printf("--- CUPOM FISCAL ---\n");
    printf("Tipo de carne: %s\n", tipo);
    printf("Quantidade: %.2f kg\n", kg);
    printf("Preco total: R$ %.2f\n", preco_total);
    printf("Tipo de pagamento: %s\n", cartao ? "Cartao Tabajara" : "Outro");
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", a_pagar);

    return 0;
}

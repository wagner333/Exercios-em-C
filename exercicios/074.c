#include <stdio.h>

int main(void) {
    double preco; printf("Preco do pao: "); if (scanf("%lf", &preco) != 1) return 1;
    printf("Panificadora - Tabela de precos\n");
    for (int i = 1; i <= 50; i++) printf("%d - R$ %.2f\n", i, i * preco);
    return 0;
}

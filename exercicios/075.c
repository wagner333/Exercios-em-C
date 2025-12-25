#include <stdio.h>

int main(void) {
    double preco, total = 0.0;
    int i = 1;
    while (1) {
        printf("Produto %d: ", i++);
        if (scanf("%lf", &preco) != 1) return 1;
        if (preco == 0.0) break;
        total += preco;
    }
    printf("Total: R$ %.2f\n", total);
    double pago; printf("Dinheiro: "); if (scanf("%lf", &pago) != 1) return 1;
    printf("Troco: R$ %.2f\n", pago - total);
    return 0;
}

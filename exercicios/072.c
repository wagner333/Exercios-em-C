#include <stdio.h>

int main(void) {
    int n; printf("Quantos CDs: "); if (scanf("%d", &n) != 1) return 1;
    double soma = 0.0;
    for (int i = 0; i < n; i++) { double v; scanf("%lf", &v); soma += v; }
    printf("Total investido: R$ %.2f\nMedia por CD: R$ %.2f\n", soma, soma / n);
    return 0;
}

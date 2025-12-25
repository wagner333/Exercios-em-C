#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n) != 1) return 1;
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        double num = i;
        double den = 2 * i - 1;
        soma += num / den;
    }
    printf("Soma: %.6f\n", soma);
    return 0;
}

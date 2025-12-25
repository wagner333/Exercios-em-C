#include <stdio.h>

int main(void) {
    int N; printf("Quantas notas (N): "); if (scanf("%d", &N) != 1) return 1;
    double soma = 0.0;
    for (int i = 0; i < N; i++) { double x; scanf("%lf", &x); soma += x; }
    printf("Media: %.2f\n", soma / N);
    return 0;
}

#include <stdio.h>

int main(void) {
    double n[4], soma = 0.0;
    for (int i = 0; i < 4; i++) { if (scanf("%lf", &n[i]) != 1) return 1; soma += n[i]; }
    for (int i = 0; i < 4; i++) printf("Nota %d: %.2f\n", i+1, n[i]);
    printf("Media: %.2f\n", soma / 4.0);
    return 0;
}

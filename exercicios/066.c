#include <stdio.h>

int main(void) {
    int n; printf("Numero: "); if (scanf("%d", &n) != 1) return 1;
    int divisores = 0;
    printf("Divisores: ");
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) { printf("%d ", i); divisores++; }
    }
    if (divisores == 0) printf("\nEh primo\n"); else printf("\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    int n, pares=0, impares=0;
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &n) != 1) return 1;
        if (n % 2 == 0) pares++; else impares++;
    }
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}

#include <stdio.h>

int main(void) {
    double popA, popB, taxaA, taxaB;
    int anos = 0;
    printf("Pop A: "); if (scanf("%lf", &popA) != 1) return 1;
    printf("Pop B: "); if (scanf("%lf", &popB) != 1) return 1;
    printf("Taxa A (%%): "); if (scanf("%lf", &taxaA) != 1) return 1;
    printf("Taxa B (%%): "); if (scanf("%lf", &taxaB) != 1) return 1;
    taxaA /= 100.0; taxaB /= 100.0;
    while (popA < popB) {
        popA += popA * taxaA;
        popB += popB * taxaB;
        anos++;
    }
    printf("Anos: %d\n", anos);
    return 0;
}

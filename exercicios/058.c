#include <stdio.h>

int main(void) {
    int base, expoente;
    printf("Base: "); if (scanf("%d", &base) != 1) return 1;
    printf("Expoente: "); if (scanf("%d", &expoente) != 1) return 1;
    long resultado = 1;
    for (int i = 0; i < expoente; i++) resultado *= base;
    printf("Resultado: %ld\n", resultado);
    return 0;
}

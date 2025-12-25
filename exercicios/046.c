#include <stdio.h>

int main(void) {
    float nota = -1.0f;
    while (1) {
        printf("Digite uma nota entre 0 e 10: ");
        if (scanf("%f", &nota) != 1) return 1;
        if (nota >= 0.0f && nota <= 10.0f) break;
        printf("Valor invalido. Tente novamente.\n");
    }
    printf("Nota valida: %.2f\n", nota);
    return 0;
}

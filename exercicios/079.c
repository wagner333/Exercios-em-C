#include <stdio.h>

int main(void) {
    double salario = 1000.0; // default
    printf("Salario inicial (ou enter para usar 1000): ");
    if (scanf("%lf", &salario) != 1) { salario = 1000.0; }
    double aumento = 0.015; // 1.5% em 1996
    for (int ano = 1996; ano <= 2025; ano++) {
        salario += salario * aumento;
        aumento *= 2.0;
    }
    printf("Salario atual: R$ %.2f\n", salario);
    return 0;
}

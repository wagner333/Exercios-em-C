#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Digite o coeficiente A: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("O valor de A não pode ser zero. A equação não é do segundo grau.\n");
        return 1;
    }
    printf("Digite o coeficiente B: ");
    scanf("%f", &b);
    printf("Digite o coeficiente C: ");
    scanf("%f", &c);
    
    delta = (b * b) - (4 * a * c);
    
    if (delta < 0) {
        printf("A equação não possui raízes reais, pois delta é negativo.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui apenas uma raiz real: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: %.2f e %.2f\n", x1, x2);
    }
    
    return 0;
}


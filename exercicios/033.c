#include <stdio.h>

int main() {
    float lado1, lado2, lado3;
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("Os lados informados formam um triângulo.\n");
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triângulo é Equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triângulo é Isósceles.\n");
        } else {
            printf("O triângulo é Escaleno.\n");
        }
    } else {
        printf("Os lados informados não formam um triângulo.\n");
    }
    
    return 0;
}


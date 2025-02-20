#include <stdio.h>

int main() {
    float lado, area, dobro;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    dobro = 2 * area;
    printf("A área do quadrado é: %.2f\n", area);
    printf("O dobro da área é: %.2f\n", dobro);

    return 0;
}

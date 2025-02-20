#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    float num3;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Digite um número real: ");
    scanf("%f", &num3);
    int resultado1 = (2 * num1) * (num2 / 2);
    float resultado2 = (3 * num1) + num3;
    float resultado3 = pow(num3, 3); 
    printf("O produto do dobro do primeiro com metade do segundo: %d\n", resultado1);
    printf("A soma do triplo do primeiro com o terceiro: %.2f\n", resultado2);
    printf("O terceiro elevado ao cubo: %.2f\n", resultado3);

    return 0;
}

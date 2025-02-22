#include <stdio.h>

int main() {
    float num1, num2, num3;
    float maior;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    //podemos fazer em if else tambem mas ia ocupar maior quantidade de linhas
    // if (num2 > maior) {
    //     maior = num2;
    // }
    
    // if (num3 > maior) {
    //     maior = num3;
    // } 
    
    maior = (num2 > num1) ? ((num3 > num2) ? num3 : num2) : ((num3 > num1) ? num3 : num1);


    printf("O maior número é: %.2f\n", maior);

    return 0;
}
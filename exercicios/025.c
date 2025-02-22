#include <stdio.h>

int main() {
    float num1, num2, num3;
    float maior, menor;

    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    //essa é a forma do if else 
    // Encontrando o maior número
    // maior = num1;
    // if (num2 > maior) maior = num2;
    // if (num3 > maior) maior = num3;

    // // Encontrando o menor número
    // menor = num1;
    // if (num2 < menor) menor = num2;
    // if (num3 < menor) menor = num3;
    maior = (num2 > num1) ? ((num3 > num2) ? num3 : num2) : ((num3 > num1) ? num3 : num1);
    menor = (num2 < num1) ? ((num3 < num2) ? num3 : num2) : ((num3 < num1) ? num3 : num1);
    
    // Exibindo resultados
    printf("O maior número é: %.2f\n", maior);
    printf("O menor número é: %.2f\n", menor);

    return 0;
}
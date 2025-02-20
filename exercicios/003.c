#include <stdio.h>
#include <stdlib.h>

int main(){
    int number1,number2;
    printf("digite o primeiro um numero:");
    scanf("%d", &number1);
    printf("digite o segundo numero:");
    scanf("%d", &number2);
    int resultado = number1+number2;
    printf("a soma dos numero %d e %d é igual a %d\n", number1, number2, resultado);
    return 0;
}
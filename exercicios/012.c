#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    
    pesoIdeal = (72.7 * altura) - 58;
    
    printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    
    return 0;
}
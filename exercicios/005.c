#include <stdio.h>
#include <stdlib.h>

int main(){
    float MM;
    printf("Digite o valor em metros (MM) para ser convertido para centímetros: ");
    scanf("%f", &MM); 
    float resultado = 100 * MM; 
    printf("%.2f metros é igual a %.2f centímetros.\n", MM, resultado); 
    return 0;
}

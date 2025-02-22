#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite F para Feminino ou M para Masculino: ");
    scanf(" %c", &letra);
    
    switch (letra)
    {
        case 'F':
        case 'f':
        printf("Você é mulher\n");
        break;
        case 'M':
        case 'm':
        printf("Você é Homem\n");
        break;
    
    default:
        printf("sexo indefinido");
        break;
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    float nota1, nota2, media;
    
    // Leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // Calculo da média
    media = (nota1 + nota2) / 2;
    
    // Verificação dos critérios e exibição da mensagem apropriada
    if (media == 10) {
        printf("Aprovado com Distinção\n");
    } else if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
}
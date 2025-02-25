#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char conceito;
    
    // Input das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // Calcula a média
    media = (nota1 + nota2) / 2;
    
    // Determina o conceito
    if (media >= 9.0 && media <= 10.0)
        conceito = 'A';
    else if (media >= 7.5 && media < 9.0)
        conceito = 'B';
    else if (media >= 6.0 && media < 7.5)
        conceito = 'C';
    else if (media >= 4.0 && media < 6.0)
        conceito = 'D';
    else
        conceito = 'E';
    
    // Exibe os resultados
    printf("\nNotas: %.1f e %.1f\n", nota1, nota2);
    printf("Média: %.1f\n", media);
    printf("Conceito: %c\n", conceito);
    
    // Verifica aprovação
    if (conceito == 'A' || conceito == 'B' || conceito == 'C')
        printf("Situação: APROVADO\n");
    else
        printf("Situação: REPROVADO\n");
    
    return 0;
}
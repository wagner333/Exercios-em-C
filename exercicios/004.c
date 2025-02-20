#include <stdio.h>
#include <stdlib.h>

void aluno(){
    float nota1, nota2, nota3, nota4;
    printf("Qual a primeira nota?\n");
    scanf("%f", &nota1);
    printf("segunda nota\n");
    scanf("%f",&nota2);
    printf("terceira nota\n");
    scanf("%f", &nota3);
    printf("por ultimo a quarta nota\n");
    scanf("%f", &nota4);
    float notafinal = (nota1+nota2+nota3+nota4)/4;
    printf("a nota do aluno é %.2f\n", notafinal);
    notafinal < 6 ? printf("aluno reprovado\n") : printf("aluno aprovado\n");
    
}
int main(){
    aluno();
    return 0;
}
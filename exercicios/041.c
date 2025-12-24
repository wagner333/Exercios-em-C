#include <stdio.h>
#include <math.h>
int main(void){
    int select;
    float a, b, resultado;
    printf("qual calculo vc deseja fazer? (1-adicao, 2-subtracao, 3-multiplicacao, 4-divisao): \n ");
    printf(">");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        printf("Digite o segundo numero: ");
        scanf("%f", &b);
        resultado = a + b;
        printf("O resultado da adicao e: %.2f\n", resultado);
        break;
    case 2:
        printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        printf("Digite o segundo numero: ");
        scanf("%f", &b);
        resultado = a - b;
        printf("O resultado da subtracao e: %.2f\n", resultado);
        break;
    case 3:
        printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        printf("Digite o segundo numero: ");
        scanf("%f", &b);
        resultado = a * b;
        printf("O resultado da multiplicacao e: %.2f\n", resultado);
        break;
    case 4:
        printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        printf("Digite o segundo numero: ");
        scanf("%f", &b);
        if(b != 0){
            resultado = a / b;
            printf("O resultado da divisao e: %.2f\n", resultado);
        } else {
            printf("Erro: Divisao por zero nao e permitida.\n");
        }
        break;
    default:
        printf("Operacao invalida.\n");
        break;
    }
   printf("deseja saber algo sobre o calculo realizado?\n");

while (1) {
    printf("\n(1-par ou impar, 2-positivo ou negativo, 3-inteiro ou decimal)\n");
    printf("Para sair, digite 0.\n");
    printf("> ");
    scanf("%d", &select);

    if (select == 0)
        break;

    switch (select) {
    case 1:
        if (((int)resultado) % 2 == 0)
            printf("O resultado e PAR.\n");
        else
            printf("O resultado e IMPAR.\n");
        break;

    case 2:
        if (resultado >= 0)
            printf("O resultado e POSITIVO.\n");
        else
            printf("O resultado e NEGATIVO.\n");
        break;

    case 3:
        if (resultado == floor(resultado))
            printf("O resultado e INTEIRO.\n");
        else
            printf("O resultado e DECIMAL.\n");
        break;

    default:
        printf("Opcao invalida.\n");
    }
}

return 0;
}
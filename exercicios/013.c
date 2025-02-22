#include <stdio.h>

int main() {
    float altura, peso_ideal_h, peso_ideal_m;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal_h = (72.7 * altura) - 58;
        printf("O peso ideal para homens é: %.2f kg\n", peso_ideal_h);
    }
    else if (sexo == 'F' || sexo == 'f') {
        peso_ideal_m = (62.1 * altura) - 44.7;
        printf("O peso ideal para mulheres é: %.2f kg\n", peso_ideal_m);
    }
    else {
        printf("Sexo inválido! Use M para masculino ou F para feminino.\n");
    }

    return 0;
}
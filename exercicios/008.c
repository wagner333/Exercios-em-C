#include <stdio.h>

int main() {
    float salarioHora, horasTrabalhadas, salarioTotal;
    printf("Quanto você ganha por hora? ");
    scanf("%f", &salarioHora);
    printf("Quantas horas você trabalhou no mês? ");
    scanf("%f", &horasTrabalhadas);
    salarioTotal = salarioHora * horasTrabalhadas;
    printf("Seu salário total no mês é: R$ %.2f\n", salarioTotal);

    return 0;
}

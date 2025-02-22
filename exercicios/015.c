#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas;
    float salarioBruto, ir, inss, sindicato, salarioLiquido;

    // Entrada de dados
    printf("Digite o valor que você ganha por hora: R$ ");
    scanf("%f", &valorHora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horasTrabalhadas);

    // Cálculos
    salarioBruto = valorHora * horasTrabalhadas;
    ir = salarioBruto * 0.11;       // 11% de IR
    inss = salarioBruto * 0.08;     // 8% de INSS
    sindicato = salarioBruto * 0.05; // 5% de Sindicato
    salarioLiquido = salarioBruto - ir - inss - sindicato;

    // Exibição dos resultados
    printf("\n+ Salário Bruto : R$ %.2f\n", salarioBruto);
    printf("- IR (11%%) : R$ %.2f\n", ir);
    printf("- INSS (8%%) : R$ %.2f\n", inss);
    printf("- Sindicato (5%%) : R$ %.2f\n", sindicato);
    printf("= Salário Líquido : R$ %.2f\n", salarioLiquido);

    return 0;
}
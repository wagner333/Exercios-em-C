#include <stdio.h>

int main() {
    float hourlyRate, hoursWorked;
    float grossSalary, irTax = 0, inss, fgts, totalDeductions, netSalary;
    float irPercent = 0;

    // Input
    printf("Enter the hourly rate: ");
    scanf("%f", &hourlyRate);
    printf("Enter hours worked in the month: ");
    scanf("%f", &hoursWorked);

    // Calculate gross salary
    grossSalary = hourlyRate * hoursWorked;

    // Calculate IR (Income Tax)
    //verção com if else
    // if (grossSalary <= 900) {
    //     irPercent = 0;
    // } else if (grossSalary <= 1500) {
    //     irPercent = 5;
    // } else if (grossSalary <= 2500) {
    //     irPercent = 10;
    // } else {
    //     irPercent = 20;
    // }
    irPercent = (grossSalary <= 900) ? 0 :
    (grossSalary <= 1500) ? 5 :
    (grossSalary <= 2500) ? 10 : 20;

    // Calculate all deductions
    irTax = grossSalary * (irPercent / 100);
    inss = grossSalary * 0.10;    // 10% INSS
    fgts = grossSalary * 0.11;    // 11% FGTS
    totalDeductions = irTax + inss;
    netSalary = grossSalary - totalDeductions;

    // Print results
    printf("\nSalario Bruto: (%.2f * %.2f)      : R$ %.2f\n", hourlyRate, hoursWorked, grossSalary);
    printf("(-) IR (%0.f%%)                    : R$ %.2f\n", irPercent, irTax);
    printf("(-) INSS (10%%)                  : R$ %.2f\n", inss);
    printf("FGTS (11%%)                      : R$ %.2f\n", fgts);
    printf("Total de descontos              : R$ %.2f\n", totalDeductions);
    printf("Salario Liquido                 : R$ %.2f\n", netSalary);

    return 0;
}
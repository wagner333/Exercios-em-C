#include <stdio.h>

int main() {
    float salary, increase, newSalary;
    int percentage;

    // Input current salary
    printf("Digite o salário do colaborador: R$ ");
    scanf("%f", &salary);

    // com if else
    // if (salary <= 280.0) {
    //     percentage = 20;
    // } else if (salary <= 700.0) {
    //     percentage = 15;
    // } else if (salary <= 1500.0) {
    //     percentage = 10;
    // } else {
    //     percentage = 5;
    // }
    percentage = (salary <= 280.0) ? 20 :
    (salary <= 700.0) ? 15 :
    (salary <= 1500.0) ? 10 : 5;

    // Calculate increase and new salary
    increase = salary * (percentage / 100.0);
    newSalary = salary + increase;

    // Display results
    printf("\nSalário antes do reajuste: R$ %.2f\n", salary);
    printf("Percentual de aumento aplicado: %d%%\n", percentage);
    printf("Valor do aumento: R$ %.2f\n", increase);
    printf("Novo salário após o aumento: R$ %.2f\n", newSalary);

    return 0;
}
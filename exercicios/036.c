#include <stdio.h>
int eh_bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}
int data_valida(int dia, int mes, int ano) {
    if (ano < 1) return 0; // Ano inválido
    if (mes < 1 || mes > 12) return 0; // Mês inválido

    int dias_no_mes;

    switch (mes) {
        case 4: case 6: case 9: case 11:
            dias_no_mes = 30;
            break;
        case 2:
            dias_no_mes = eh_bissexto(ano) ? 29 : 28;
            break;
        default:
            dias_no_mes = 31;
    }

    return (dia >= 1 && dia <= dias_no_mes);
}
int main() {
    int dia, mes, ano;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (data_valida(dia, mes, ano)) {
        printf("A data %02d/%02d/%04d é válida.\n", dia, mes, ano);
    } else {
        printf("A data %02d/%02d/%04d é inválida.\n", dia, mes, ano);
    }

    return 0;
}


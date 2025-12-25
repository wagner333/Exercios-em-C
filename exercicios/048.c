#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    int idade;
    float salario;
    char sexo;
    char estado_civil;

    do {
        printf("Nome (>=4 chars): ");
        if (scanf("%99s", nome) != 1) return 1;
    } while (strlen(nome) <= 3);

    do {
        printf("Idade (0-150): ");
        if (scanf("%d", &idade) != 1) return 1;
    } while (idade < 0 || idade > 150);

    do {
        printf("Salario (>0): ");
        if (scanf("%f", &salario) != 1) return 1;
    } while (salario <= 0.0f);

    do {
        printf("Sexo (f/m): ");
        if (scanf(" %c", &sexo) != 1) return 1;
    } while (sexo != 'f' && sexo != 'm');

    do {
        printf("Estado civil (s/c/v/d): ");
        if (scanf(" %c", &estado_civil) != 1) return 1;
    } while (estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd');

    printf("Dados validados.\n");
    return 0;
}

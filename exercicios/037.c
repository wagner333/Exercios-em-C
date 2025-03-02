#include <stdio.h>

void imprimir_extenso(int numero) {
    if (numero <= 0 || numero >= 1000) {
        printf("Número fora do intervalo permitido!\n");
        return;
    }

    int centenas = numero / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;

    printf("%d possui ", numero);

    if (centenas > 0) {
        printf("%d centena%s", centenas, (centenas > 1) ? "s" : "");
        if (dezenas > 0 && unidades > 0) {
            printf(", ");
        } else if (dezenas > 0 || unidades > 0) {
            printf(" e ");
        }
    }

    if (dezenas > 0) {
        printf("%d dezena%s", dezenas, (dezenas > 1) ? "s" : "");
        if (unidades > 0) {
            printf(" e ");
        }
    }

    if (unidades > 0) {
        printf("%d unidade%s", unidades, (unidades > 1) ? "s" : "");
    }

    printf(".\n");
}

int main() {
    int numero;

    printf("Digite um número inteiro entre 1 e 999: ");
    scanf("%d", &numero);

    imprimir_extenso(numero);

    return 0;
}


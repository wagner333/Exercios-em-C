#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];
    double notas[7];
    printf("Atleta: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) return 1;
    // remove newline
    nome[strcspn(nome, "\n")] = '\0';
    for (int i = 0; i < 7; i++) {
        printf("Nota %d: ", i+1);
        if (scanf("%lf", &notas[i]) != 1) return 1;
    }
    double max = notas[0], min = notas[0], soma = 0.0;
    for (int i = 0; i < 7; i++) {
        if (notas[i] > max) max = notas[i];
        if (notas[i] < min) min = notas[i];
        soma += notas[i];
    }
    soma = soma - max - min;
    double media = soma / 5.0;
    printf("Resultado final:\nAtleta: %s\nMelhor nota: %.2f\nPior nota: %.2f\nMedia: %.2f\n", nome, max, min, media);
    return 0;
}

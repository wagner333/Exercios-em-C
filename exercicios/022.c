#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    // Converte para minúscula para simplificar a verificação
    letra = tolower(letra);

    // Verifica se é uma letra
    if (!isalpha(letra)) {
        printf("Por favor, digite apenas letras!\n");
        return 1;
    }

    // Verifica se é vogal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("A letra '%c' é uma vogal.\n", letra);
    } else {
        printf("A letra '%c' é uma consoante.\n", letra);
    }

    return 0;
}
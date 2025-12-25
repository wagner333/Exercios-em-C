#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    int menor = (a < b) ? a : b;
    int maior = (a < b) ? b : a;
    int soma = 0;
    for (int i = menor + 1; i < maior; i++) { soma += i; }
    printf("Soma: %d\n", soma);
    return 0;
}

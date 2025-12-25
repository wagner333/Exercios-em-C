#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    int menor = (a < b) ? a : b;
    int maior = (a < b) ? b : a;
    for (int i = menor + 1; i < maior; i++) printf("%d ", i);
    printf("\n");
    return 0;
}

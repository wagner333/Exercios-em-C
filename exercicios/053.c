#include <stdio.h>

int main(void) {
    int x;
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &x);
        soma += x;
    }
    printf("Soma: %d\nMedia: %.2f\n", soma, soma / 5.0);
    return 0;
}

#include <stdio.h>

int main(void) {
    int maior, x;
    printf("Digite 5 numeros:\n");
    if (scanf("%d", &x) != 1) return 1;
    maior = x;
    for (int i = 1; i < 5; i++) {
        scanf("%d", &x);
        if (x > maior) maior = x;
    }
    printf("Maior: %d\n", maior);
    return 0;
}

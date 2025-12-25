#include <stdio.h>

int main(void) {
    int n;
    printf("Numero (para fatorial): "); if (scanf("%d", &n) != 1) return 1;
    long fat = 1;
    for (int i = 2; i <= n; i++) fat *= i;
    printf("%d! = %ld\n", n, fat);
    return 0;
}

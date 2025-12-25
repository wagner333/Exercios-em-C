#include <stdio.h>
#include <math.h>

int main(void) {
    int n; printf("Numero: "); if (scanf("%d", &n) != 1) return 1;
    if (n < 2) { printf("Nao primo\n"); return 0; }
    for (int i = 2; i <= (int)sqrt(n); i++) if (n % i == 0) { printf("Nao primo\n"); return 0; }
    printf("Primo\n");
    return 0;
}

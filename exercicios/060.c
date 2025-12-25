#include <stdio.h>

int main(void) {
    int n;
    printf("Termos (n): "); if (scanf("%d", &n) != 1) return 1;
    int a = 1, b = 1;
    if (n >= 1) printf("1 ");
    if (n >= 2) printf("1 ");
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b; b = c;
    }
    printf("\n");
    return 0;
}

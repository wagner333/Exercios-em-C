#include <stdio.h>

int main(void) {
    char again = 's';
    while (again == 's') {
        int n;
        do { printf("Numero (1-15): "); if (scanf("%d", &n) != 1) return 1; } while (n < 1 || n > 15);
        long fat = 1;
        for (int i = 2; i <= n; i++) fat *= i;
        printf("%d! = %ld\n", n, fat);
        printf("Deseja continuar? (s/n): "); if (scanf(" %c", &again) != 1) return 1;
    }
    return 0;
}

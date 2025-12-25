#include <stdio.h>

int main(void) {
    unsigned int n; if (scanf("%u", &n) != 1) return 1;
    unsigned int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    printf("%u\n", rev);
    return 0;
}

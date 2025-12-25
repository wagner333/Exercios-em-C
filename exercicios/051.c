#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 20; i++) {
        printf("%d\n", i);
    }
    printf("\n");
    for (int i = 1; i <= 20; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

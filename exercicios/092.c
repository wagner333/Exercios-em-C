#include <stdio.h>

int main(void) {
    int v[5];
    for (int i = 0; i < 5; i++) if (scanf("%d", &v[i]) != 1) return 1;
    for (int i = 0; i < 5; i++) printf("%d\n", v[i]);
    return 0;
}

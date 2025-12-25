#include <stdio.h>

int main(void) {
    double v[10];
    for (int i = 0; i < 10; i++) if (scanf("%lf", &v[i]) != 1) return 1;
    for (int i = 9; i >= 0; i--) printf("%.2f\n", v[i]);
    return 0;
}

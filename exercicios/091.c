#include <stdio.h>

int main(void) {
    int N; if (scanf("%d", &N) != 1) return 1;
    double H = 0.0;
    for (int i = 1; i <= N; i++) H += 1.0 / i;
    printf("H = %.6f\n", H);
    return 0;
}

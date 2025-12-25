#include <stdio.h>

int main(void) {
    int n, start, end;
    printf("Montar a tabuada de: "); if (scanf("%d", &n) != 1) return 1;
    printf("Comecar por: "); if (scanf("%d", &start) != 1) return 1;
    printf("Terminar em: "); if (scanf("%d", &end) != 1) return 1;
    if (end < start) { printf("Final menor que inicial\n"); return 1; }
    printf("Tabuada de %d de %d a %d:\n", n, start, end);
    for (int i = start; i <= end; i++) printf("%d X %d = %d\n", n, i, n * i);
    return 0;
}

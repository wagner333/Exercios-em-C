#include <stdio.h>

int main(void) {
    int v;
    int c[5] = {0,0,0,0,0}; // candidatos 1-4, nulo, branco
    int total=0;
    while (scanf("%d", &v) == 1 && v != 0) {
        if (v >=1 && v <=4) c[v-1]++;
        else if (v == 5) c[4]++;
        else if (v == 6) { /* branco */ }
        total++;
    }
    printf("Votos 1: %d 2: %d 3: %d 4: %d Nulos: %d\n", c[0],c[1],c[2],c[3],c[4]);
    if (total>0) printf("Percentual nulos: %.2f%%\n", c[4]*100.0/total);
    return 0;
}

#include <stdio.h>

int main(void) {
    int v[20], par[20], impar[20]; int pc=0, ic=0;
    for (int i = 0; i < 20; i++) { if (scanf("%d", &v[i]) != 1) return 1; if (v[i]%2==0) par[pc++]=v[i]; else impar[ic++]=v[i]; }
    printf("Vetor: "); for (int i=0;i<20;i++) printf("%d ", v[i]); printf("\n");
    printf("Pares: "); for (int i=0;i<pc;i++) printf("%d ", par[i]); printf("\n");
    printf("Impares: "); for (int i=0;i<ic;i++) printf("%d ", impar[i]); printf("\n");
    return 0;
}

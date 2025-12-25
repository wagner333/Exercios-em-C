#include <stdio.h>

int main(void) {
    int total; printf("Numero de eleitores: "); if (scanf("%d", &total) != 1) return 1;
    int votos1=0,votos2=0,votos3=0;
    for (int i = 0; i < total; i++) {
        int v; scanf("%d", &v);
        if (v==1) votos1++; else if (v==2) votos2++; else if (v==3) votos3++;
    }
    printf("Votos: 1=%d 2=%d 3=%d\n", votos1,votos2,votos3);
    return 0;
}

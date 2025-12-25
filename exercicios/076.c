#include <stdio.h>

int main(void) {
    double temp, soma=0, min=1e9, max=-1e9; int count=0;
    printf("Digite temperaturas (fim com ctrl+d):\n");
    while (scanf("%lf", &temp) == 1) {
        if (temp < min) min = temp;
        if (temp > max) max = temp;
        soma += temp; count++;
    }
    if (count==0) { printf("Nenhuma temperatura lida\n"); return 0; }
    printf("Menor: %.2f\nMaior: %.2f\nMedia: %.2f\n", min, max, soma / count);
    return 0;
}

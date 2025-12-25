#include <stdio.h>

int main(void) {
    int n; printf("Numero de pessoas: "); if (scanf("%d", &n) != 1) return 1;
    int idade; int soma=0;
    for (int i = 0; i < n; i++) { scanf("%d", &idade); soma += idade; }
    double media = (double)soma / n;
    if (media <= 25) printf("Turma jovem\n");
    else if (media <= 60) printf("Turma adulta\n");
    else printf("Turma idosa\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    int num, altura;
    int maior_alt = -1, menor_alt = 1e9, maior_num=0, menor_num=0;
    for (int i = 0; i < 10; i++) {
        printf("Aluno numero: "); if (scanf("%d", &num) != 1) return 1;
        printf("Altura (cm): "); if (scanf("%d", &altura) != 1) return 1;
        if (altura > maior_alt) { maior_alt = altura; maior_num = num; }
        if (altura < menor_alt) { menor_alt = altura; menor_num = num; }
    }
    printf("Mais alto: %d %d\nMais baixo: %d %d\n", maior_num, maior_alt, menor_num, menor_alt);
    return 0;
}

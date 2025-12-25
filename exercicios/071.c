#include <stdio.h>

int main(void) {
    int t; printf("Quantas turmas: "); if (scanf("%d", &t) != 1) return 1;
    int alunos, total=0;
    for (int i = 0; i < t; i++) {
        do { printf("Alunos na turma (<=40): "); if (scanf("%d", &alunos) != 1) return 1; } while (alunos > 40);
        total += alunos;
    }
    printf("Media alunos por turma: %.2f\n", (double)total / t);
    return 0;
}

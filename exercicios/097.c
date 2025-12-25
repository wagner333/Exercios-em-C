#include <stdio.h>

int main(void) {
    int aprovados = 0;
    for (int aluno = 0; aluno < 10; aluno++) {
        double n1,n2,n3,n4; if (scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4) != 4) return 1;
        double media = (n1+n2+n3+n4)/4.0;
        if (media >= 7.0) aprovados++;
    }
    printf("Alunos com media >= 7: %d\n", aprovados);
    return 0;
}

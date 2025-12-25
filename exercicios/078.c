#include <stdio.h>

int main(void) {
    int codigo; double altura, peso;
    int maior_alto_code=0, maior_baixo_code=0, maior_gordo_code=0, maior_magro_code=0;
    double maior_alt=0, menor_alt=1e9, maior_peso=0, menor_peso=1e9;
    int count=0; double soma_alt=0, soma_peso=0;

    while (1) {
        printf("Codigo (0 para sair): ");
        if (scanf("%d", &codigo) != 1) return 1;
        if (codigo == 0) break;
        printf("Altura (m): "); if (scanf("%lf", &altura) != 1) return 1;
        printf("Peso (kg): "); if (scanf("%lf", &peso) != 1) return 1;
        count++; soma_alt += altura; soma_peso += peso;
        if (altura > maior_alt) { maior_alt = altura; maior_alto_code = codigo; }
        if (altura < menor_alt) { menor_alt = altura; maior_baixo_code = codigo; }
        if (peso > maior_peso) { maior_peso = peso; maior_gordo_code = codigo; }
        if (peso < menor_peso) { menor_peso = peso; maior_magro_code = codigo; }
    }
    if (count==0) { printf("Nenhum cliente\n"); return 0; }
    printf("Mais alto: %d %.2f\nMais baixo: %d %.2f\nMais gordo: %d %.2f\nMais magro: %d %.2f\nMedia altura: %.2f\nMedia peso: %.2f\n", maior_alto_code, maior_alt, maior_baixo_code, menor_alt, maior_gordo_code, maior_peso, maior_magro_code, menor_peso, soma_alt/count, soma_peso/count);
    return 0;
}

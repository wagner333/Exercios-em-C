#include <stdio.h>

int main(void) {
    int cod, veiculos, acidentes;
    int maior_ac=0, menor_ac=1e9, maior_cod=0, menor_cod=0;
    int soma_veiculos=0, count=0, soma_ac_menos2000=0, cont_menos2000=0;
    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d", &cod, &veiculos, &acidentes);
        if (acidentes > maior_ac) { maior_ac = acidentes; maior_cod = cod; }
        if (acidentes < menor_ac) { menor_ac = acidentes; menor_cod = cod; }
        soma_veiculos += veiculos; count++;
        if (veiculos < 2000) { soma_ac_menos2000 += acidentes; cont_menos2000++; }
    }
    printf("Maior indice: %d (%d)\nMenor indice: %d (%d)\nMedia veiculos: %.2f\nMedia acidentes (<2000): %.2f\n", maior_cod, maior_ac, menor_cod, menor_ac, (double)soma_veiculos / count, cont_menos2000 ? (double)soma_ac_menos2000 / cont_menos2000 : 0.0);
    return 0;
}

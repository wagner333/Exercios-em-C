#include <stdio.h>

int main(void) {
    int codigo; int qtd; double total=0;
    while (1) {
        printf("Codigo (0 para sair): "); if (scanf("%d", &codigo) != 1) return 1;
        if (codigo == 0) break;
        printf("Quantidade: "); if (scanf("%d", &qtd) != 1) return 1;
        double preco = 0;
        switch (codigo) {
            case 100: preco = 1.20; break;
            case 101: preco = 1.30; break;
            case 102: preco = 1.50; break;
            case 103: preco = 1.20; break;
            case 104: preco = 1.30; break;
            case 105: preco = 1.00; break;
            default: printf("Codigo invalido\n"); continue;
        }
        printf("Valor item: R$ %.2f\n", preco * qtd);
        total += preco * qtd;
    }
    printf("Total pedido: R$ %.2f\n", total);
    return 0;
}

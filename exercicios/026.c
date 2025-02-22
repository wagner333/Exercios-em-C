#include <stdio.h>

int main() {
    float preco1, preco2, preco3;

    printf("Digite o preço dos três produtos: ");
    scanf("%f %f %f", &preco1, &preco2, &preco3);
    //com if else
//     float menor = preco1;

// if (preco2 < menor) {
//     menor = preco2;
// }

// if (preco3 < menor) {
//     menor = preco3;
// }

    float menor = (preco1 < preco2 && preco1 < preco3) ? preco1 : 
                  (preco2 < preco3) ? preco2 : preco3;

    printf("Você deve comprar o produto por R$%.2f\n", menor);

    return 0;
}

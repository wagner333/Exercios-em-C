#include <stdio.h>
#include <string.h>

int main(void) {
    char usuario[50];
    char senha[50];

    while (1) {
        printf("Usuario: ");
        if (scanf("%49s", usuario) != 1) return 1;
        printf("Senha: ");
        if (scanf("%49s", senha) != 1) return 1;
        if (strcmp(usuario, senha) == 0) {
            printf("Erro: a senha nao pode ser igual ao usuario. Tente novamente.\n");
        } else {
            printf("Cadastro aceito.\n");
            break;
        }
    }
    return 0;
}

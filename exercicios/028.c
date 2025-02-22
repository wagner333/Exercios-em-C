#include <stdio.h>
#include <ctype.h>

int main() {
    char turno;
    
    printf("Em qual turno você estuda?\n");
    printf("Digite M para Matutino, V para Vespertino ou N para Noturno: ");
    scanf(" %c", &turno);
    
    // descobri isso agora a lib do ctype.h para ajudar a Converte para maiúsculo para aceitar tanto maiúsculas quanto minúsculas
    turno = toupper(turno);
    
    switch(turno) {
        case 'M':
            printf("Bom Dia!\n");
            break;
        case 'V':
            printf("Boa Tarde!\n");
            break;
        case 'N':
            printf("Boa Noite!\n");
            break;
        default:
            printf("Valor Inválido!\n");
    }
    
    return 0;
}
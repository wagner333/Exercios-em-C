#include <stdio.h>
#include <time.h>
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main() {
    int a, b, c, d, e, soma;
    char resp;
    char nome[50];
    printf("%sResponda as seguintes perguntas com 's' para sim e 'n' para nao:%s\n\n", BOLD, RESET);
    printf("Telefonou para a vitima? (s/n): ");
    scanf(" %c", &resp);
    a = (resp == 's' || resp == 'S');
    printf("Esteve no local do crime? (s/n): ");
    scanf(" %c", &resp);
    b = (resp == 's' || resp == 'S');
    printf("Mora perto da vitima? (s/n): ");
    scanf(" %c", &resp);
    c = (resp == 's' || resp == 'S');
    printf("Devia para a vitima? (s/n): ");
    scanf(" %c", &resp);
    d = (resp == 's' || resp == 'S');
    printf("Ja trabalhou com a vitima? (s/n): ");
    scanf(" %c", &resp);
    e = (resp == 's' || resp == 'S');
    soma = a + b + c + d + e;
    printf("\nDigite seu nome para o relatorio final: ");
    scanf("%49s", nome);
    time_t agora = time(NULL);
    struct tm *tempo = localtime(&agora);
    printf("\n\n%s%s=====================================%s\n", BOLD, BLUE, RESET);
    printf("%s%s        RELATORIO FINAL DO CASO       %s\n", BOLD, BLUE, RESET);
    printf("%s%s=====================================%s\n", BOLD, BLUE, RESET);
    printf("%sNome do entrevistado:%s %s\n", CYAN, RESET, nome);
    printf("%sData:%s %02d/%02d/%04d\n", CYAN, RESET,
           tempo->tm_mday, tempo->tm_mon + 1, tempo->tm_year + 1900);
    printf("%sHora:%s %02d:%02d:%02d\n", CYAN, RESET,
           tempo->tm_hour, tempo->tm_min, tempo->tm_sec);
    printf("-------------------------------------\n");
    printf("\n%sRespostas:%s\n", BOLD, WHITE);
    printf("  [1] Telefonou para a vitima.....: %s%s%s\n",
           a ? GREEN : RED, a ? "SIM" : "NAO", RESET);
    printf("  [2] Esteve no local do crime....: %s%s%s\n",
           b ? GREEN : RED, b ? "SIM" : "NAO", RESET);
    printf("  [3] Mora perto da vitima........: %s%s%s\n",
           c ? GREEN : RED, c ? "SIM" : "NAO", RESET);
    printf("  [4] Devia para a vitima.........: %s%s%s\n",
           d ? GREEN : RED, d ? "SIM" : "NAO", RESET);
    printf("  [5] Ja trabalhou com a vitima...: %s%s%s\n",
           e ? GREEN : RED, e ? "SIM" : "NAO", RESET);
    printf("-------------------------------------\n");
    printf("%sClassificacao do caso:%s ", BOLD, RESET);

    char classificacao[20];

    if (soma <= 1) {
        sprintf(classificacao, "INOCENTE");
        printf("%sINOCENTE%s\n", GREEN, RESET);
    } else if (soma == 2) {
        sprintf(classificacao, "SUSPEITO");
        printf("%sSUSPEITO%s\n", YELLOW, RESET);
    } else if (soma <= 4) {
        sprintf(classificacao, "CUMPLICE");
        printf("%sCUMPLICE%s\n", YELLOW, RESET);
    } else {
        sprintf(classificacao, "ASSASSINO");
        printf("%sASSASSINO%s\n", RED, RESET);
    }

    printf("%s=====================================%s\n", BLUE, RESET);
    printf("\n%s--- SALVAR RELATORIO EM UM TXT? (s/n) --- %s\n", CYAN, RESET);
    char salvar;
    printf(">");
    scanf(" %c", &salvar);
    if (salvar != 's' && salvar != 'S') {
        printf("%sRelatorio nao salvo.%s\n", YELLOW, RESET);
        return 0;
    } else {
        FILE *arquivo = fopen("relatorio.txt", "w");
        if (arquivo == NULL) {
            printf("%sErro ao criar o arquivo.%s\n", RED, RESET);
            return 1;
        }
        fprintf(arquivo, "=====================================\n");
        fprintf(arquivo, "        RELATORIO FINAL DO CASO       \n");
        fprintf(arquivo, "=====================================\n");
        fprintf(arquivo, "Nome do entrevistado: %s\n", nome);
        fprintf(arquivo, "Data: %02d/%02d/%04d\n",
                tempo->tm_mday, tempo->tm_mon + 1, tempo->tm_year + 1900);
        fprintf(arquivo, "Hora: %02d:%02d:%02d\n",
                tempo->tm_hour, tempo->tm_min, tempo->tm_sec);
        fprintf(arquivo, "-------------------------------------\n");
        fprintf(arquivo, "Respostas:\n");
        fprintf(arquivo, "  [1] Telefonou para a vitima.....: %s\n", a ? "SIM" : "NAO");
        fprintf(arquivo, "  [2] Esteve no local do crime....: %s\n", b ? "SIM" : "NAO");
        fprintf(arquivo, "  [3] Mora perto da vitima........: %s\n", c ? "SIM" : "NAO");
        fprintf(arquivo, "  [4] Devia para a vitima.........: %s\n", d ? "SIM" : "NAO");
        fprintf(arquivo, "  [5] Ja trabalhou com a vitima...: %s\n", e ? "SIM" : "NAO");
        fprintf(arquivo, "-------------------------------------\n");
        fprintf(arquivo, "Classificacao do caso: %s\n", classificacao);
        fprintf(arquivo, "=====================================\n");
        fclose(arquivo);

        printf("\n%sRelatorio salvo com sucesso em relatorio.txt%s\n", GREEN, RESET);

        /* ================= EXTRAÇÃO (LEITURA DO TXT) ================= */
        printf("%s\n--- EXTRAINDO RELATORIO DO ARQUIVO ---\n%s", CYAN, RESET);
        arquivo = fopen("relatorio.txt", "r");
        if (arquivo == NULL) {
            printf("%sNao foi possivel abrir o arquivo para leitura.%s\n", RED, RESET);
        } else {
            char linha[200];
            while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                printf("%s", linha);
            }
            fclose(arquivo);
        }
    }

    return 0;
}

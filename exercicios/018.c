#include <stdio.h>

int main() {
    float fileSize, speed, time;

    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &fileSize);

    printf("Digite a velocidade do link de Internet em Mbps: ");
    scanf("%f", &speed);

    // Convert Mbps to MBps (divide by 8) and calculate time in seconds
    time = fileSize / (speed / 8);
    
    // Convert seconds to minutes
    time = time / 60;

    printf("Tempo aproximado de download: %.2f minutos\n", time);

    return 0;
}
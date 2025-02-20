#include <stdio.h>
#include <stdlib.h>
// varivael em C bem legal :) tambem podia fazer um float mas esse tipo de variavel é global eu acho kkk
#define PI 3.14159
int main(int argc, char const *argv[])
{
    // variavel dentro da main
    float pi = 3.14159;
    float raio,area;
    printf("digite o raio");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("A área do circulo é: %.2f \n", area);  
    return 0;
}

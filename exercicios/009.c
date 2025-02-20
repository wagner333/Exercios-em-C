#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (5.0 * (fahrenheit - 32)) / 9.0;
    printf("A temperatura em graus Celsius é: %.2f°C\n", celsius);

    return 0;
}

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("A temperatura em graus Fahrenheit é: %.2f°F\n", fahrenheit);

    return 0;
}

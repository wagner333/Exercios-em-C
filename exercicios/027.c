#include <stdio.h>

int main() {
    float num1, num2, num3;
    float temp;

    // Input
    printf("Digite três números:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    (num1 < num2) ? (temp = num1, num1 = num2, num2 = temp) : 0;
    (num2 < num3) ? (temp = num2, num2 = num3, num3 = temp) : 0;
    (num1 < num2) ? (temp = num1, num1 = num2, num2 = temp) : 0;
    
   //verção com ifs else
    // if (num1 < num2) {
    //     temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }
    // if (num2 < num3) {
    //     temp = num2;
    //     num2 = num3;
    //     num3 = temp;
    // }
    // if (num1 < num2) {
    //     temp = num1;
    //     num1 = num2;
    //     num2 = temp;
    // }

    // Output in descending order
    printf("Números em ordem decrescente: %.2f, %.2f, %.2f\n", num1, num2, num3);

    return 0;
}
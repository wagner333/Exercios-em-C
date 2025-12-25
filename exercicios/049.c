#include <stdio.h>

int main(void) {
    double popA = 80000, popB = 200000;
    double taxaA = 0.03, taxaB = 0.015;
    int anos = 0;
    while (popA < popB) {
        popA += popA * taxaA;
        popB += popB * taxaB;
        anos++;
    }
    printf("Anos necessarios: %d\n", anos);
    return 0;
}

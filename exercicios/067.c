#include <stdio.h>
#include <math.h>

int main(void) {
    int N; printf("N: "); if (scanf("%d", &N) != 1) return 1;
    int count = 0, totalDivs = 0;
    for (int num = 2; num <= N; num++) {
        int isPrime = 1, divis = 0;
        for (int d = 2; d <= (int)sqrt(num); d++) {
            totalDivs++;
            if (num % d == 0) { isPrime = 0; break; }
        }
        if (isPrime) { printf("%d ", num); count++; }
    }
    printf("\nTotal primos: %d\nDivisoes executadas: %d\n", count, totalDivs);
    return 0;
}

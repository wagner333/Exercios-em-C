#include <stdio.h>

int main(void) {
    int x;
    int c1=0,c2=0,c3=0,c4=0;
    while (scanf("%d", &x) == 1 && x >= 0) {
        if (x <= 25) c1++;
        else if (x <= 50) c2++;
        else if (x <= 75) c3++;
        else if (x <= 100) c4++;
    }
    printf("[0-25]=%d [26-50]=%d [51-75]=%d [76-100]=%d\n", c1,c2,c3,c4);
    return 0;
}

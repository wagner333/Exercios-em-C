#include <stdio.h>
#include <ctype.h>

int is_vogal(char c) {
    c = tolower((unsigned char)c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main(void) {
    char s[20]; int cons=0;
    for (int i = 0; i < 10; i++) {
        if (scanf("%19s", s) != 1) return 1;
        char c = s[0];
        if (isalpha((unsigned char)c) && !is_vogal(c)) { cons++; printf("%c\n", c); }
    }
    printf("Consoantes lidas: %d\n", cons);
    return 0;
}

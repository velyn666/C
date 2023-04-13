#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n, origin, count=0;
    scanf("%d", &n);
    origin = n;
    do {
        n = (n / 10 + n % 10) % 10 + (n % 10) * 10;
        count++;
    } while (origin != n);
    printf("%d", count);
    return 0;
}
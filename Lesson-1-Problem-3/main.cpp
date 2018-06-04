#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int first = n / 100;
    int second = n / 10 % 10;
    int third = n % 10;
    printf("%d, %d, %d", first, second, third);
}

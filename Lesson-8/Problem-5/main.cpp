#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    int digit_1, digit_2, count = 0;
    while(n > 0) {
        digit_1 = n % 10;
        digit_2 = n / 10 % 10;
        if(digit_1 == digit_2) {
            ++count;
        }
        n /= 10;
    }
    if(count > 0) {
        printf("YES");;
    } else {
        printf("NO");
    }
}

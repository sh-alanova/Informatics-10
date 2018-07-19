#include <stdio.h>

int main () {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    if(a <= 0 || b <= 0 || c <= 0 || sum != 180) {
        printf("NO");
    } else {
        printf("YES");
    }
}

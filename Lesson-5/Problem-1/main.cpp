#include <stdio.h>

int main () {
    int a, b, c, m;
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c) {
        m = a;
    }
    if(b >= a && b >= c) {
        m = b;
    }
    if(c >= b && c >= a) {
        m = c;
    }
    printf("%d", m);
}

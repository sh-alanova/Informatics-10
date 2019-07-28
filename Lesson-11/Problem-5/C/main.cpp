#include <stdio.h>
#include <stdlib.h>

void max(int a, int b, int c) {
    if(a >= b && a >= c) {
        if(b >= c) {
            printf("%d %d %d", c, b, a);
        } else {
            printf("%d %d %d", b, c, a);
        }
    } else if(b >= a && b >= c) {
        if(a >= c) {
            printf("%d %d %d", c, a, b);
        } else {
            printf("%d %d %d", a, c, b);
        }
    } else {
        if(a >= b) {
            printf("%d %d %d", b, a, c);
        } else {
            printf("%d %d %d", a, b, c);
        }
    }
}


int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    max(a, b, c);
}


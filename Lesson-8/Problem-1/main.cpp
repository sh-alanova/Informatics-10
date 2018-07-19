#include <stdio.h>

int main () {
    int a, b;
    scanf("%d%d", &a, &b);
    int count = a, square;
    while(count <= b) {
        square = count * count;
        printf("%d*%d=%d\n", count, count, square);
        ++count;
    }
}

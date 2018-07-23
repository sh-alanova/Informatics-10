#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int square, ten = 1, digit;
    for(int i = 1; i < n; ++i ) {
        while(ten <= i) {
            ten *= 10;
        }
        square = i * i;
        digit = square % ten;
        if(i == digit) {
            printf("%d*%d=%d\n", i, i, square);
        }
    }

}

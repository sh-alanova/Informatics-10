#include <stdio.h>

int main() {
    int digit_1, digit_2, digit_3, cube_1, cube_2, cube_3, sum;
    for(int n = 100; n < 1000; ++n) {
        digit_1 = n / 100;
        digit_2 = n / 10 % 10;
        digit_3 = n % 10;
        cube_1 = digit_1 * digit_1 * digit_1;
        cube_2 = digit_2 * digit_2 * digit_2;
        cube_3 = digit_3 * digit_3 * digit_3;
        sum = cube_1 + cube_2 + cube_3;
        if(sum == n) {
            printf("%d\n", n);
        }
    }
}

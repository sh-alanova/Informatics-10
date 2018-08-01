#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n_1 = n, count = 0;
    while(n_1 > 0) {
        ++count;
        n_1 /= 10;
    }
    int numeral_1, numeral_2, n_2, count_1, count_2 = 0;
    while(count > 0) {
        numeral_1 = n % 10;
        n_2 = n / 10;
        count_1 = count;
        while((count_1 - 1) > 0) {
            numeral_2 = n_2 % 10;
            if(numeral_1 == numeral_2){
                ++count_2;
            }
            --count_1;
            n_2 /= 10;
        }
        n /= 10;
        --count;
    }
    if(count_2 > 0) {
        printf("YES");
    } else {
        printf("NO");
    }
}

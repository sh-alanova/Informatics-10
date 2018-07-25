#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int angle, sum_1 = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &angle);
        sum_1 += angle;
    }
    int sum_2 = 180 * (n - 2);
    if(sum_1 == sum_2) {
        printf("%d\nYES", sum_1);
    } else {
        printf("%d\nNO", sum_1);
    }
}

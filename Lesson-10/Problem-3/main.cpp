#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k, digit, count_1, count_2;
    for(int i = 1; i < n; ++i) {
        int j = i;
        while (j % 10 != 0 && i % (j % 10) == 0) {
                j = j / 10;
        if (j == 0) {
            printf("%d\n", i);
            }
        }
    }
}

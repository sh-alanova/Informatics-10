#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        int j = i;
        while (j % 10 != 0 && i % (j % 10) == 0) {
            j = j / 10;
            if (j == 0) {
                printf("%d ", i);
            }
        }
    }
}

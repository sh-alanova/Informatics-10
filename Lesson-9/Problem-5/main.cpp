#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int count;
    for(int i = a; i <= b; ++i) {
        count = 0;
        for(int j = 2; j < a; ++j) {
            if (i % j == 0) {
                ++count;
            }
        }
        if(count == 0) {
            printf("%d\n", i);
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1, a2, N;
    scanf("%d %d %d", &a1, &a2, &N);
    int a_N = a1 + (a2 - a1) * (N - 1);
    printf("%d", a_N);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void bit(int n) {
    for(int i = 7; i >= 0; --i) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    bit(n);
}

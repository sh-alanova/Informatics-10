#include <stdio.h>
#include <stdlib.h>

void defis(int n) {
    for(int i = 0; i < n; ++i) {
        printf("-");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    defis(n);
}

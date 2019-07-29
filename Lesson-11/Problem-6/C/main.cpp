#include <stdio.h>
#include <stdlib.h>

void reduction(int & m, int & n) {
    for(int i = 1; i < m; ++i) {
        if(m % i == 0 && n % i == 0) {
            m /= i;
            n /= i;
        }
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    if(m > n) {
        reduction(m, n);
        printf("%d/%d", m, n);
    } else {
        reduction(n, m);
        printf("%d/%d", m, n);
    }
}

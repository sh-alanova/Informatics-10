#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (b < a || a < 0 || b > 100000) {
        return 0;
    }
    bool first = true;
    for(int i = a; i <= b; i++) {
        int count = 0;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                ++count;
            }
        }
        if (count == 0) {
            if(first) {
                printf("%d", i);
                first = false;
            } else {
                printf(" %d", i);
            }
        }
    }
}

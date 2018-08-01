#include <stdio.h>

int main()
{
    for(int n = 10000; n < 100000; ++n) {
        if(n % 133 == 125 && n % 134 == 111) {
            printf("%d\n", n)
        }
    }
}

#include <stdio.h>

int main () {
    int interval;
    scanf("%d", &interval);
    int  h, m, s;
    h = interval / 3600;
    m = interval % 3600 / 60;
    s = interval % 3600 % 60;
    printf("%d %d %d", h, m, s);
}

#include <stdio.h>
#include <cmath>

int main () {
    float x1, y1, x2, y2;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    float n = sqrt((x2 - x1) * (x2-x1) + (y2 - y1) * (y2-y1));
    printf("%g", n);
}

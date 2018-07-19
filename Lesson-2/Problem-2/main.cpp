#include <stdio.h>
#include <cmath>

int main () {
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    double x_diff = (x2 - x1), y_diff = (y2 - y1);
    double distance = sqrt( x_diff * x_diff + y_diff * y_diff);
    printf("%g", distance);
}

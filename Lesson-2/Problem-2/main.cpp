#include <stdio.h>
#include <cmath>

int main () {
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    double difference_1 = (x2 - x1), difference_2 = (y2 - y1);
    double distance = sqrt( difference_1 * difference_1 + difference_2 * difference_2);
    printf("%g", distance);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double side_1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double side_2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double side_3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double sum = side_1 + side_2 + side_3;
    double sqr = sqrt(sum * (sum - 2 * side_1) * (sum - 2 * side_2) * (sum - 2 * side_3) / 16);
    printf("%f %f", sum, sqr);
    return 0;
}

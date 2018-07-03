#include <stdio.h>

int main () {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    int comp = a * b * c;
    double average = (a+b+c)/3.;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    printf("%d*%d*%d=%d\n", a, b, c, comp);
    printf("(%d+%d+%d)/3=%g\n", a, b, c, average);

}


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x_1, y_1, x_2, y_2;
    scanf("%d%d", &x_1, &y_1);
    scanf("%d%d", &x_2, &y_2);
    int x2 = x_1, y2 = y_1, x3 = x_2, y3 = y_2, x1, y1, count = 0;
    for(int i = 0; i < (n - 2); ++i) {
        x1 = x2;
        y1 = y2;
        x2 = x3;
        y2 = y3;
        scanf("%d%d", &x3, &y3);
        int a_1 = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        int b_1 = ((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        int c_1 = ((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        int cos_1 = a_1 + b_1 - c_1;
        if(cos_1 == 0) {
            ++count;
        }
    }
    int a_2 = ((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    int b_2 = ((x3 - x_1) * (x3 - x_1) + (y3 - y_1) * (y3 - y_1));
    int c_2 = ((x2 - x_1) * (x2 - x_1) + (y2 - y_1) * (y2 - y_1));
    int cos_2 = a_2 + b_2 - c_2;
    if(cos_2 == 0) {
        ++count;
    }
    int a_3 = ((x3 - x_1) * (x3 - x_1) + (y3 - y_1) * (y3 - y_1));
    int b_3 = ((x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2));
    int c_3 = ((x3 - x_2) * (x3 - x_2) + (y3 - y_2) * (y3 - y_2));
    int cos_3 = a_3 + b_3 - c_3;
    if(cos_3 == 0) {
        ++count;
    }
    printf("%d", count);
}

#include <stdio.h>

int main()
{
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
        scanf("%d", &x3, &y3);
        int x_vector1 = x1 - x2, y_vector1 = y1 - y2, x_vector2 = x3 - x2, y_vector2 = y3 - y2;
        int cos = (x_vector1 * x_vector2 - y_vector1 * y_vector2);
        if(cos == 0) {
            ++count;
        }
    }
    printf("%d", count);
}

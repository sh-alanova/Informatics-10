#include <stdio.h>

int main()
{
    int box_1 = 15, box_2 = 17, box_3 = 21;
    for(int i = 0; (i * box_1) <= 185; ++i) {
        for(int j = 0; (i * box_1 + j * box_2) <= 185; ++j) {
            for(int k = 0; (i * box_1 + j * box_2 + k * box_3) <= 185; ++k) {
                if(i * box_1 + j * box_2 + k * box_3 == 185) {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
}

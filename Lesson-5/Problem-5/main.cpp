#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Russian");
    int n;
    scanf("%d", &n);
    int digit = n % 10;
    if(digit == 1 && n != 11) {
        printf("Вам %d год.", n);
    } else if(digit == 2 || digit == 3 || digit == 4 && n != 12 && n != 13 && n != 14) {
        printf("Вам %d года.", n);
    } else {
        printf("Вам %d лет.", n);
    }
}


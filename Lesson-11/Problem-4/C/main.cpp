#include <stdio.h>
#include <stdlib.h>


int roman2int(int n) {
    if(n / 1000 >= 1) {
        int tmp = n / 1000;
        while(tmp > 0) {
            printf("M");
            --tmp;
        }
    }
    n %= 1000;
    if(n / 900 == 1) {
        printf("CM");
    }
    n %= 900;
    if(n / 500 == 1) {
        printf("D");
    }
    n %= 500;
    if(n / 400 == 1) {
        printf("CD");
    }
    n %= 400;
    if(n / 100 >= 1) {
        int tmp = n / 100;
        while(tmp > 0) {
            printf("C");
            --tmp;
        }
    }
    n %= 100;
    if(n / 90 == 1) {
        printf("XC");
    }
    n %= 90;
    if(n / 50 == 1) {
        printf("L");
    }
    n %= 50;
    if(n / 40 == 1) {
        printf("XL");
    }
    n %= 40;
    if(n / 10 >= 1) {
        int tmp = n / 10;
        while(tmp > 0) {
            printf("X");
            --tmp;
        }
    }
    n %= 10;
    if(n / 9 == 1) {
        printf("IX");
    }
    n %= 9;
    if(n / 5 == 1) {
        printf("V");
    }
    n %= 5;
    if(n / 4 == 1) {
        printf("IV");
    }
    n %= 4;
    int tmp = n;
    while(tmp > 0) {
        printf("I");
        --tmp;
    }
}


int main() {
    int n;
    scanf("%d", &n);
    roman2int(n);
}



#include <stdio.h>

int main () {
    int d, m, days;
    scanf("%d%d", &d, &m);
    if(m == 1) {
        days = d;
    } else if(m == 2) {
        days = d + 31;
    } else if(m == 3) {
        days = d + 31 + 29;
    } else if(m == 4) {
        days = d + 31 + 29 + 31;
    } else if(m == 5) {
        days = d + 31 + 29 + 31 + 30;
    } else if(m == 6) {
        days = d + 31 + 29 + 31 + 30 + 31;
    } else if(m == 7) {
        days = d + 31 + 29 + 31 + 30 + 31 + 30;
    } else if(m == 8) {
        days = d + 31 + 29 + 31 + 30 + 31 + 30 + 31;
    } else if(m == 9) {
        days = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
    } else if(m == 10) {
        days = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    } else if(m == 11) {
        days = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 31;
    } else if(m == 12) {
        days = d + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30;
    }
    int digit = days % 7;
    
    if(digit == 0) {
        printf("Thursday");
    } else if(digit == 1) {
        printf("Friday");
    } else if(digit == 2) {
        printf("Saturday");
    } else if(digit == 3) {
        printf("Sunday");
    } else if(digit == 4) {
        printf("Monday");
    } else if(digit == 5) {
        printf("Tuesday");
    } else if(digit == 6) {
        printf("Wednesday");
    }
}

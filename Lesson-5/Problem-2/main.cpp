#include <stdio.h>

int main () {
    int anton_age, boris_age, victor_age;
    scanf("%d%d%d", &anton_age, &boris_age, &victor_age);
    if (anton_age == boris_age && boris_age == victor_age) {
            printf("Same age");
    } else if (anton_age > boris_age && anton_age > victor_age) {
            printf("Anton");
    } else if (boris_age > anton_age && boris_age > victor_age) {
            printf("Boris");
    } else if (victor_age > anton_age && victor_age > boris_age) {
            printf("Victor");
    } else if (anton_age == boris_age) {
            printf("Victor");
    } else if (anton_age == victor_age) {
            printf("Boris");
    } else if (boris_age == victor_age) {
            printf("Anton");
    }
}

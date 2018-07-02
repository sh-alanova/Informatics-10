#include <stdio.h>

int main () {
    int Anton, Boris, Victor;
    scanf("%d%d%d", &Anton, &Boris, &Victor);
    if (Anton == Boris && Boris == Victor) {
            printf("Same age");
    } else if (Anton > Boris && Anton > Victor) {
            printf("Anton");
    } else if (Boris > Anton && Boris > Victor) {
            printf("Boris");
    } else if (Victor > Anton && Victor > Boris) {
            printf("Victor");
    } else if (Anton == Boris) {
            printf("Victor");
    } else if (Anton == Victor) {
            printf("Boris");
    } else if (Boris == Victor) {
            printf("Anton");
    }
}



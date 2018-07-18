#include <stdio.h>

int main () {
  int a, b;
	scanf("%d%d", &a, &b); 
  int comp = 0, count = 0;
	if (a < 0 && a < b) {
	while(count < b) {
        comp = comp + a;
        ++ count;
}
	printf("(%d)*%d=%d", a, b, comp);
	} else if (a >= 0 && a < b) {
	while(count < b) {
        comp = comp + a;
        ++ count;
	}
	printf("%d*%d=%d", a, b, comp);
	} else if (b < 0 && b < a) {
	while(count < a) {
        comp = comp + b;
        ++ count;
        }
	printf("%d*(%d)=%d", a, b, comp);
	} else if ((b >= 0 && b < a) || (a == b)) {
	while(count < a) {
        comp = comp + b;
        ++ count;
	}
	printf("%d*%d=%d", a, b, comp);
	}
}



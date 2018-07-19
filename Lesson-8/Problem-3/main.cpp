#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	int f1 = 0, f2 = 1, f = 0, sum = 0;
	if(n <= 0) {
		printf("ERROR");
	} else {
		while(f < n) {
		  f = f1 + f2;
		  sum += f2;
		  f1 = f2;
		  f2 = f;
	  }
	printf("%d", sum);
	}
}



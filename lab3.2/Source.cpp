#include<stdio.h>
int main() {
	int x = 1,a,b;
	for (a = 1; a <= 10000; a = a++) {
		b = 0;
		for (int i = 1; i < a; i++) {
			if (a % i == 0) {
				b = b+i;
			}
		}
		if (b == a) {
			printf("%d ", a);
		}
		}
	return 0;
}
#include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	for (; ; ) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		else {
			if (a > b) {
				if (a > c) {
					if (a*a == b * b + c * c)
						printf("right\n");
					else
						printf("wrong\n");
				}
				else {
					if (c*c == b * b + a * a)
						printf("right\n");
					else
						printf("wrong\n");
				}
			}
			else {
				if (b > c) {
					if (b * b == a * a + c * c)
						printf("right\n");
					else
						printf("wrong\n");
				}
				else {
					if (c * c == b * b + a * a)
						printf("right\n");
					else
						printf("wrong\n");
				}
			}
		}
	}
}
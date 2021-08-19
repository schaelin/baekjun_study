#include <stdio.h>


int fac(int a) {
	if (a == 0)
		return 1;
	else {
		return a * fac(a - 1);
	}
}
int main() {
	int a;
	scanf("%d", &a);
	int fact = 0;
	fact = fac(a);
	printf("%d", fact);
	return 0;
}
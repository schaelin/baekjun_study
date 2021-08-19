#include <stdio.h>


int fi(int a) {
	if (a == 0)
		return 0;

	else if (a == 1) {
		return 1;
	}
	else {
		return fi(a - 1) + fi(a - 2);
	}
}
int main() {
	int a;
	scanf("%d", &a);
	int num = 0;
	num = fi(a);
	printf("%d", num);
	return 0;
}
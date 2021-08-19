#include <stdio.h>

int main() {

	int t;
	int h, w, n;
	int num[100][2];
	scanf("%d",&t);
	for (int i=0 ; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		num[i][1] = (n / h) +1;
		num[i][2] = n % h;
		if (num[i][2] == 0) {
			num[i][2] = h;
			num[i][1] = (n / h);
		}


	}

	for (int j = 0; j < t; j++) {
		printf("%d\n", (num[j][2]) * 100 + (num[j][1]));
	}

}
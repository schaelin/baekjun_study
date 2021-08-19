#include <stdio.h>
#include <stdlib.h>



int main() {
	int a, b;
	int c[100];
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		scanf("%d", &c[i]);
	}
	int best = 0;
	int com=0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			for (int k = 0; k < a; k++) {
				if (i != j && j != k && k != i) {
					com = c[i] + c[j] + c[k];
					if (com <= b && (b - com)<(b - best)) {
						best = com;
					}
				}
			}
		}
	}
	printf("%d", best);
}
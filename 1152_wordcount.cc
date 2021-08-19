#include <stdio.h>
#include <string.h>

int main() {
	char arr[1000000];
	int count = 0;
	int len;

	fgets(arr, sizeof(arr) - 1, stdin);
	arr[strlen(arr) - 1] = '\0';

	len = strlen(arr);

	for (int i = 0; i < len; i++) {
		if (arr[i] == 32) {
			if (arr[i + 1] != 32)
				count = count + 1;
		}
	}
	if (arr[0] == 32)
		count = count - 1;
	if (arr[len-1] == 32)
		count = count - 1;
	count = count + 1;

	printf("%d\n", count);
}
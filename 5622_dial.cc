#include <stdio.h>
#include <string.h>

int main() {
	char arr[15];
	char bbb[15];
	int add = 0;
	int len;

	scanf("%s",arr);
	len = strlen(arr);

	for (int i = 0; i < len; i++) {
		if (arr[i] == 32)
			bbb[i] = 1;
		else if (64 < arr[i] && arr[i] < 68)
			bbb[i] = 2;
		else if (67 < arr[i] && arr[i]< 71)
			bbb[i] = 3;
		else if (70 < arr[i] && arr[i]< 74)
			bbb[i] = 4;
		else if (73 < arr[i] && arr[i]< 77)
			bbb[i] = 5;
		else if (76 < arr[i] && arr[i]< 80)
			bbb[i] = 6;
		else if (79 < arr[i] && arr[i]< 84)
			bbb[i] = 7;
		else if (83 < arr[i] && arr[i]< 87)
			bbb[i] = 8;
		else if (86 < arr[i] && arr[i]< 91)
			bbb[i] = 9;
		else
			bbb[i] = 10;
	}

	for (int j = 0; j < len; j++)
	{
		bbb[j] = bbb[j] + 1;
		add = add + bbb[j];
	}
	
	printf("%d\n", add);

}
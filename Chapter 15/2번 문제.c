#include <stdio.h>

void main() {
	int num;
	scanf("%d", &num);

	int arr[30];
	int i = 0;
	while (num > 0) {
		arr[i++] = num % 2;
		num = num / 2;
	}

	while (i > 0) {
		printf("%d", arr[--i]);
	}

}
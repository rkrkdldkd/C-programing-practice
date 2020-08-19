#include <stdio.h>

void main() {
	int num = 0;
	int arr[10];
	int front = 0;
	int back = 9;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		if (num % 2 == 1) {	// 홀수면 앞에서부터
			arr[front++] = num;
		}
		else {	// 짝수면 뒤에서부터
			arr[back--] = num;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

}
#include <stdio.h>

void main() {
	int num = 0;
	int arr[10];
	int front = 0;
	int back = 9;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		if (num % 2 == 1) {	// Ȧ���� �տ�������
			arr[front++] = num;
		}
		else {	// ¦���� �ڿ�������
			arr[back--] = num;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

}
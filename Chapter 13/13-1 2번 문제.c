#include <Stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5 };
	int *ptr = arr;

	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2; // ���� ������ ptr�� ���� ��ȭ���Ѽ� �迭�� ���� ����.
						 // �̹� ������ ptr�� ���� ��ȭ��Ű�� �ʰ� �迭�� ���� ����.
	}

	for (int i = 0; i < 5; i++) {
		printf("%d  ", arr[i]);
	}
	
}
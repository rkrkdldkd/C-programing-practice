#include <Stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];

	for (int i = 0; i < 3; i++) {
		int temp = *ptr1;	
		*ptr1 = *ptr2;
		*ptr2 = temp;	// �迭�� ������Ű�� ���ؼ�
		
		ptr1++;	// �������� ���� �����ذ��� �迭�� ������Ų��.
		ptr2--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);	// ���������� �迭�� ������ �ٲ����.
	}

	
}
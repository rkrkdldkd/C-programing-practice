#include <Stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5 };
	int *ptr = &arr[4]; // �迭�� ������ ����Ŵ.
	int sum = 0; // �迭�� ���� ���� ���� ������ ����.

	for(int i = 0; i < 5; i++){
		sum += *(ptr--); // ������ ������ ����Ű�� ��ġ�� �ٲ㰡�� �� ����.
	}

	printf("%d ", sum);
	
}
#include <stdio.h>

void showAllData(int *, int);

void main() {
	// �̹� ������ showAllData�� �Ű������� const�� ������ ������ ����� ����.
	// ���� �迭��� ��ü�� ����ϱ� ������ ���� �ٲ�� �ȵǴµ�, �Ǽ��� �̸� ��� ��� 
	// �����Ϸ� ������ ���� �� �Ǽ��� �ľ��� �� �ֽ��ϴ�.
}

void showAllData(const int *arr, int len) { // �迭��� ��ü�� ����ϴ� �Լ� 
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}
#include <stdio.h>

void showData(const int * ptr) { // ptr������ ���� ������ ���� ���� const �����ڸ� ����Ͽ���.
	int *rptr = ptr;	//�׷��� ptr�� ���� const�� ������� ���� rptr�� �����߱� ������ ���� const�� ���������� �Ǿ���ȴ�.
	printf("%d \n", *rptr);
	*rptr = 20;
}

void main() {
	int num = 10;
	int *ptr = &num;
	showData(ptr);

}
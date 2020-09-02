#include <Stdio.h>

void main() {
	int * arr1[5];	// 두 개의 포인터 배열을 가리킬 수 있는 변수를 선언하는 문제
	int * arr2[3][5];

	int **ptr1 = arr1;
	int(*ptr2)[5] = arr2;


}
#include <Stdio.h>

void complexFuncOne(int **arr1, int* (*arr2)[5]) {	// �迭�� �ּҸ� ���� �� �ִ� �Ű������� �����ϴ� ����

}

void complexFuncTwo(int ***arr3, int*** (*arr4)[5] ){

}
void main() {
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[3];
	int*** arr4[3][5];

	complexFuncOne(arr1, arr2);
	complexFuncTwo(arr3, arr4);


}
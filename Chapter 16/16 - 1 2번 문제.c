#include <stdio.h>

void main() {
	int arr1[2][4] = { {1,2,3,4},{5,6,7,8} }; // [2][4]인 배열의 값을
	int arr2[4][2] = { 0 };	// [4][2]인 배열로 복사하는 문제

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			arr2[i][j] = arr1[j][i];
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
}
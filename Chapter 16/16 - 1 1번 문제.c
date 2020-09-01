#include <stdio.h>

void main() {
	int arr[3][4] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2)*(j + 1);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}
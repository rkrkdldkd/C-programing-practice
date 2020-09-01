#include <Stdio.h>

void calP(int arr[][5]) { // 학생 별 총점 구하는 함수
	int sum = 0;
	int i, j = 0;
	
	for ( i = 0; i < 4; i++) {
		for ( j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
		arr[i][j] = sum;
		sum = 0;
	}
}

void calSubP(int arr[][5]) { // 과목 별 총점 구하는 함수
	int sum = 0;
	int i, j = 0;

	for (i = 0; i < 4; i++) {
		for ( j = 0; j < 4; j++) {
			sum += arr[j][i];
			
		}
		arr[j][i] = sum;

		sum = 0;
	}
}
void main() {
	int arr[5][5] = {
		{5,4,6,5},
		{3,6,9,3},
		{4,8,2,7},
		{3,8,9,7}
	};

	calP(arr);
	calSubP(arr);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	
}
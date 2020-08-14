#include <stdio.h>

void showAllData(int *, int);

void main() {
	// 이번 문제는 showAllData의 매개변수에 const를 정의한 이유를 물어보는 문제.
	// 답은 배열요소 전체를 출력하기 때문에 값이 바뀌면 안되는데, 실수로 이를 어길 경우 
	// 컴파일러 에러를 통해 그 실수를 파악할 수 있습니다.
}

void showAllData(const int *arr, int len) { // 배열요소 전체를 출력하는 함수 
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}
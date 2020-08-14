#include <Stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5 };
	int *ptr = arr;

	for (int i = 0; i < 5; i++) {
		*(ptr + i) += 2; // 저번 문제는 ptr의 값을 변화시켜서 배열의 값을 변경.
						 // 이번 문제는 ptr의 값을 변화시키지 않고 배열의 값을 변경.
	}

	for (int i = 0; i < 5; i++) {
		printf("%d  ", arr[i]);
	}
	
}
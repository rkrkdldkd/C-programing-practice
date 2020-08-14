#include <Stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5 };
	int *ptr = &arr[4]; // 배열의 마지막 가리킴.
	int sum = 0; // 배열의 값을 더한 값을 저장할 변수.

	for(int i = 0; i < 5; i++){
		sum += *(ptr--); // 포인터 변수가 가리키는 위치를 바꿔가며 값 저장.
	}

	printf("%d ", sum);
	
}
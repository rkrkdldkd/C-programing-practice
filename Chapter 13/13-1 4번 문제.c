#include <Stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];

	for (int i = 0; i < 3; i++) {
		int temp = *ptr1;	
		*ptr1 = *ptr2;
		*ptr2 = temp;	// 배열을 반전시키기 위해서
		
		ptr1++;	// 포인터의 값을 변경해가며 배열을 반전시킨다.
		ptr2--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);	// 성공적으로 배열의 순서가 바뀌었다.
	}

	
}
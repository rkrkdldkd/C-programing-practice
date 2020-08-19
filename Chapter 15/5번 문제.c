#include <Stdio.h>

void bubbleSort(int a[], int size) { // 버블 정렬
	int temp = 0;
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void main() {
	int arr[5] = { 4,3,5,1,2 };
	
	bubbleSort(arr, sizeof (arr) / sizeof(int));

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	
}
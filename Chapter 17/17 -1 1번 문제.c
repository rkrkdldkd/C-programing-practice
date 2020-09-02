#include <Stdio.h>

void MaxAndMin(int ** ptr1, int ** ptr2, int arr[]) {
	int *max = &arr[0];
	int *min = &arr[0];
	for (int i = 0; i < 5; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	*ptr1 = max;
	*ptr2 = min;
}
void main() {
	int arr[5] = { 1,2,3,4,5 };
	int * maxPtr = &arr[0];
	int * minPtr = &arr[0];
	

	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("%d %d", *maxPtr, *minPtr);

}
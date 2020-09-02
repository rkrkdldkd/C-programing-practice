#include <Stdio.h>

void simpleFuncOne(int arr1[],int * arr2) {	// 배열의 주소를 받을 수 있는 매개변수를 선언하는 문제

}

void simpleFuncTwo(int arr3[][4], int (*arr4)[4]) {

}
void main() {
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	simpleFuncOne(arr1, arr2);
	simpleFuncTwo(arr3, arr4);


}
#include <stdio.h>

void main() {	// ����� ���ߴ� ����, ������� 3,2,6,4,5,2,1,1 �̴�.
	int arr[3][2] = { {1,2},{3,4},{5,6} };
	printf("%d %d", arr[1][0], arr[0][1]);
	printf("%d %d",*(arr[2]+1),*(arr[1]+1));
	printf("%d %d",(*(arr+2))[0],(*(arr+0))[1]);
	printf("%d %d",**arr,*(*(arr+0)+0));
}
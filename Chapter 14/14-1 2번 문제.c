#include <Stdio.h>

void swap3(int *num1, int *num2, int *num3) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;

}

void main() {
	int num1 = 1, num2 = 2, num3 = 3;
	swap3(&num1, &num2, &num3);

	printf("%d %d %d\n", num1, num2, num3);
}
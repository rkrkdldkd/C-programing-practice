#include <Stdio.h>
int squareByValue(int num) {
	num = num * num;
	return num;
}

void squareByReference(int *num) {
	*num *= *num;
}
void main() {
	int num = 5;
	int mul = squareByValue(num);
	printf("%d\n", mul);
	squareByReference(&num);
	printf("%d \n", num);
}
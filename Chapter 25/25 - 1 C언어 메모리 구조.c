#include <Stdio.h>

void func2(int n) {
	int num3 = n + 1;
}

void func1(int n) {
	int num2 = n + 1;
	func2(num2);
}

int main() {
	int num1 = 20;
	func1(num1);
	return 0;
}

/*

		위에서부터 순서대로 소멸된다.
		num3 = 22; 
		n = 21;
		num2 = 21;
		n = 20;
 스택 => num1 = 20;
 */
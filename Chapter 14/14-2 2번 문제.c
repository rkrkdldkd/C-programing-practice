#include <stdio.h>

void showData(const int * ptr) { // ptr에서는 값의 수정을 막기 위해 const 한정자를 사용하였다.
	int *rptr = ptr;	//그러다 ptr의 값을 const가 선언되지 않은 rptr에 대입했기 때문에 위의 const가 무용지물이 되어버렸다.
	printf("%d \n", *rptr);
	*rptr = 20;
}

void main() {
	int num = 10;
	int *ptr = &num;
	showData(ptr);

}
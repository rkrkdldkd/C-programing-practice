#include <Stdio.h>
#include <string.h>

void main() {
	char a [10];
	scanf("%s", a);
	int size = strlen(a);
	int front = 0;

	for (int i = 0; i < size/2; i++) {
		if (a[front++] != a[size - i - 1]) {
			printf("ȸ���� �ƴմϴ�.");
			return 0;
		}
	}

	printf("ȸ���Դϴ�.");
	
	


}
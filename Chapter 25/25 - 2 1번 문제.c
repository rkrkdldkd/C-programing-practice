#include <stdio.h>

int InputStringLength() {
	int n;
	printf("How long?: ");
	scanf("%d ", &n);
	return n;
}

char * InputUserName(int n) {
	char * ptr1 = (char *)malloc(sizeof(char)*n);
	gets(ptr1);
	return ptr1;
}

void Reverse(int n, char * ptr) {
	for (int i = n-1; i >= 0; i--) {
		printf("%c", ptr[i]);
	}
}

void main() {
	int stringLength = InputStringLength();
	char * name1 = InputUserName(stringLength);

	Reverse(stringLength, name1);
}
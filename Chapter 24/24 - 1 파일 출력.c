#include <Stdio.h>

void main() {
	int ch; 
	FILE *fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	for (int i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);
}
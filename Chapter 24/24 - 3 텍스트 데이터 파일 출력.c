#include <stdio.h>

void main() {
	FILE * fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
}
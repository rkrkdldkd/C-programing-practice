#include <Stdio.h>

void main() {
	FILE * fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
}
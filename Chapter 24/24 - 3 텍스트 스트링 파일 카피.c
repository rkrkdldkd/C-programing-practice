#include <stdio.h>

void main() {
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("dex.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL) {
		puts("���� ���� ����");
	}

	while (fgets(str, sizeof(src), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���� ���� �Ϸ�");
	else
		puts("���� ���� ����!");

	fclose(src);
	fclose(des);
}
#include <stdio.h>

void main() {
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("dex.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL) {
		puts("파일 오픈 실패");
	}

	while (fgets(str, sizeof(src), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("파일 복사 완료");
	else
		puts("파일 복사 실패!");

	fclose(src);
	fclose(des);
}
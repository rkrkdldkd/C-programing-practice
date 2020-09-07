#include <Stdio.h>
#include <string.h>

void removeNull(char str[]) { // 널 문자 제거하기 위한 함수
	str[strlen(str) - 1] = 0;
}
void main() {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자 입력 1: ");
	fgets(str1, sizeof(str1), stdin); // 문자를 입력받는다.
	removeNull(str1);

	printf("문자 입력 2: ");	// 문자를 입력받는다.
	fgets(str2, sizeof(str2), stdin);
	removeNull(str2);

	strcpy(str3, str1);	// str3에 str1을 복사
	strcat(str3, str2);	//str3에 str2를 덧붙인다.
	printf(str3);
}
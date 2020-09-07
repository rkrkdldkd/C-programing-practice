#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getIndex(char str[]) {
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			return i;
		}
	}
	return -1;

}

int compareName(char str1[], char str2[]) {
	int idx1 = getIndex(str1);	// 이름이 저장된 위치 저장
	int idx2 = getIndex(str2);
	
	if (idx1 != idx2)	// 길이가 다르면 이름이 다르다.
		return 0;
	else  
		return !strncmp(str1, str2, idx1);  // 비교 후 같으면 0이니 !를 통해 거짓을 리턴.
}

int compareAge(char str1[], char str2[]) {
	int idx1 = getIndex(str1);
	int idx2 = getIndex(str2);
	int age1, age2;

	age1 = atoi(&str1[idx1 + 1]); // 나이가 저장된 위치에서부터 int로 변환
	age2 = atoi(&str2[idx2 + 1]);

	if (age1 == age2)
		return 1;
	else
		return 0;

}
void main() {
	char str1[20];
	char str2[20];

	printf("첫 번째 사람의 정보\n");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("두 번째 사람의 정보\n");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (compareName(str1, str2))
		puts("이름이 동일합니다!");
	else
		puts("이름이 동일하지 않습니다.");

	if (compareAge(str1, str2))
		puts("나이가 같습니다");
	else
		puts("나이가 같지 않습니다.");




}
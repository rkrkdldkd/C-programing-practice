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
	int idx1 = getIndex(str1);	// �̸��� ����� ��ġ ����
	int idx2 = getIndex(str2);
	
	if (idx1 != idx2)	// ���̰� �ٸ��� �̸��� �ٸ���.
		return 0;
	else  
		return !strncmp(str1, str2, idx1);  // �� �� ������ 0�̴� !�� ���� ������ ����.
}

int compareAge(char str1[], char str2[]) {
	int idx1 = getIndex(str1);
	int idx2 = getIndex(str2);
	int age1, age2;

	age1 = atoi(&str1[idx1 + 1]); // ���̰� ����� ��ġ�������� int�� ��ȯ
	age2 = atoi(&str2[idx2 + 1]);

	if (age1 == age2)
		return 1;
	else
		return 0;

}
void main() {
	char str1[20];
	char str2[20];

	printf("ù ��° ����� ����\n");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�� ��° ����� ����\n");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (compareName(str1, str2))
		puts("�̸��� �����մϴ�!");
	else
		puts("�̸��� �������� �ʽ��ϴ�.");

	if (compareAge(str1, str2))
		puts("���̰� �����ϴ�");
	else
		puts("���̰� ���� �ʽ��ϴ�.");




}
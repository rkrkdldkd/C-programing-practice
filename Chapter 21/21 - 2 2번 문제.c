#include <Stdio.h>
#include <string.h>

void removeNull(char str[]) { // �� ���� �����ϱ� ���� �Լ�
	str[strlen(str) - 1] = 0;
}
void main() {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("���� �Է� 1: ");
	fgets(str1, sizeof(str1), stdin); // ���ڸ� �Է¹޴´�.
	removeNull(str1);

	printf("���� �Է� 2: ");	// ���ڸ� �Է¹޴´�.
	fgets(str2, sizeof(str2), stdin);
	removeNull(str2);

	strcpy(str3, str1);	// str3�� str1�� ����
	strcat(str3, str2);	//str3�� str2�� �����δ�.
	printf(str3);
}
#include <Stdio.h>

struct employee {
	char name[20];
	char num[20];
	int money;
};

void main() {

	struct employee man1;

	printf("�̸� �Է�: "); scanf("%s", man1.name);
	printf("�ֹ� ��ȣ �Է�: "); scanf("%s", man1.num);
	printf("�޿� ����: "); scanf("%d", &(man1.money));

	printf("%s\n", man1.name);
	printf("%s\n", man1.num);
	printf("%d\n", man1.money);

}
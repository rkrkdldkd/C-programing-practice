#include <stdio.h>

struct employee {
	char name[20];
	char pid[20];
	int salary;
};

void main() {
	struct employee arr[3];

	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է�: "); scanf("%s", &arr[i].name);
		printf("�ֹε�Ϲ�ȣ �Է�: "); scanf("%s", &arr[i].pid);
		printf("�޿� �Է�: "); scanf("%d", &arr[i].salary);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s %s %d \n", arr[i].name, arr[i].pid, arr[i].salary);
	}
}
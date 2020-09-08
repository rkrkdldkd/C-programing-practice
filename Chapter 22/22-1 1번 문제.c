#include <Stdio.h>

struct employee {
	char name[20];
	char num[20];
	int money;
};

void main() {

	struct employee man1;

	printf("이름 입력: "); scanf("%s", man1.name);
	printf("주민 번호 입력: "); scanf("%s", man1.num);
	printf("급여 정보: "); scanf("%d", &(man1.money));

	printf("%s\n", man1.name);
	printf("%s\n", man1.num);
	printf("%d\n", man1.money);

}
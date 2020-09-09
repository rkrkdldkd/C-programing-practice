#include <Stdio.h>

typedef struct {
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void showPersonInfo(Person man) {
	printf("name: %s \n",man.name);
	printf("phoneNum: %s \n",man.phoneNum);
	printf("age: %d \n",man.age);
}

Person readPersonInfo() {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phoneNum? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

void main() {
	Person man = readPersonInfo();
	showPersonInfo(man);
}
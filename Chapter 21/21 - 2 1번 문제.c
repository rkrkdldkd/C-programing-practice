#include <Stdio.h>
#include <String.h>
#include <stdlib.h>

int ConvToInt(char c) {
	static int diff = 1 - '1';
	return c + diff;
}

void main() {
	char str[10];
	int sum = 0;
	int len = strlen(str);

	fgets(str, sizeof(str), stdin);
	for (int i = 0; i < len; i++) {
		if (str[i] >= '1' && str[i] <= '9') {
			sum += ConvToInt(str[i]);
		}
	}

	printf("%d\n", sum);
}
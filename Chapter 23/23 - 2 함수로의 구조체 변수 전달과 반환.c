#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
}Point;

void showPosition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point getCurrentPosition() {
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main() {
	Point curPos = getCurrentPosition();
	showPosition(curPos);
}
#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
}Point;

void orgSymTrans(Point * ptr) {
	ptr->xpos = (ptr->xpos)*-1;
	ptr->ypos = (ptr->ypos)*-1;
}

void showPosition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

void main() {
	Point pos = { 7,-5 };
	orgSymTrans(&pos);
	showPosition(pos);
	orgSymTrans(&pos);
	showPosition(pos);
}
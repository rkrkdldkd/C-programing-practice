#include <Stdio.h>

typedef struct {
	int xpos;
	int ypos;
}Point;

void swapPoint(Point * pos1, Point * pos2) {
	Point temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;

}

void main() {
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	swapPoint(&pos1, &pos2);
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);

	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
}
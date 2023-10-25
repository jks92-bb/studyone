#include <stdio.h>

typedef struct point2 {
	int z;
	int i;
} point2;


struct point {
	int x;
	int y;
};

int main()
{
	point2 p1 = {1, 1 };
	struct point* p2 = &p1;

	/*p2->x = 2;
	p2->y = 3;*/

	printf("%d %d", p1.z, p1.i);


}
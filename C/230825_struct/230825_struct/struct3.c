#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct point pos = { 10, 20};
	struct person man = { "ÀÌ½Â±â", "010-121-0000", 23 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phonenum, man.age);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person
{
	char name[20];
	char phonenum[20];
	int age;
};

int main()
{
	struct person arr[3] = {
		{"이승기", "010-0050-0300", 21},
		{"이지영", "010-0420-0006", 22},
		{"김조기", "010-0042-0010", 42}
	};
	int i;
	for (i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].phonenum, arr[i].age);
}
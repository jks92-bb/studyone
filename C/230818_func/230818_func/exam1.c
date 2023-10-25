#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int show_num();

void main()
{
	// 1~5까지 연속적으로 매개변수로 전달하여 
	// 출력하는 함수작성
		//int a = 1;
	for (int a = 1; a <= 5; a++) {
		show_num(a);
	}
}

int show_num(int t)
{
	int n = t;
	printf("함수 변수출력 : %d\n", n);
}
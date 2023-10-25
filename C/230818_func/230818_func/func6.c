#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int add(int n1, int n2);
void resul(int num);
int readnum();
void how();


void main()
{
	int result, n1, n2;
	how();
	n1 = readnum();
	n2 = readnum();
	result = add(n1, n2);
	resul(result);
	return 0;

}

int add(int n1, int n2)
{
	return n1 + n2;
}

void resul(int sum)
{
	printf("덧셈결과 출력 : %d\n", sum);
}

int readnum()
{
	int num;
	scanf("%d", &num);
	return num;
}

void how()
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
	printf("두 개의 정수를 입력하세요.\n");
}





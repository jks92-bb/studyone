#include <stdio.h>
void change(int a, int b); //a와 b의 값을 바꿔주는 함수.

int main()
{
	//2개의 변수 (a,b)를 선언한다.
	int a = 1;
	int b = 2;
	//a와 b의 값을 출력해본다.
	printf("%d %d\n", a, b);
	change(a, b);
}

void change(int a, int b) {
	int* temp[] = { 0 }; // 빈공간 함수 하나 만든다.
	*temp = a; // a의 값을 빈공간에 넣는다.
	a = b; 
	b = *temp;
	printf("%d %d", a, b);
}



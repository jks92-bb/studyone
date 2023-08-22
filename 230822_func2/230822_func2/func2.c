#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void call_by_val(int a, int b);


int main()
{
	// call by value( 값에 의한 전달)
	// call by address( 주소값에 의한 전달)
	int a = 10;
	int b = 20;
	call_by_val(a, b);
	printf("main()=> a:%d, b:%d\n", a, b);


}

void call_by_val(int a, int b)
{
	// a와 b의 값을 서로 바꿔치기.
	int temp = a; // a의 값을 임시변수에 백업.
	a = b;
	b = temp;
	printf("call_by_val() => a:%d, b:%d\n", a, b);

}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void test_func();
// 주의) 전역변수는 무조건 함수 밖에 선언!!
// 1. 파일 내의 모든 함수에 값을 전달가능.
// 2. 하지만 함수간의 값 전달은 매개변수 사용을 우선.

int b = 100;// 전역변수 b

int main()
{
	int a = 10; // main() 지역변수 a
	printf("main()=>a:%d b:%d\n", a, b);
	
	test_func();
}

void test_func()
{
	int a = 20;	// test_func() 지역변수 a
	printf("test_func()=>a:%d b:%d\n", a, b);
}
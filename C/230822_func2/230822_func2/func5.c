#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void test_func();
// ����) ���������� ������ �Լ� �ۿ� ����!!
// 1. ���� ���� ��� �Լ��� ���� ���ް���.
// 2. ������ �Լ����� �� ������ �Ű����� ����� �켱.

int b = 100;// �������� b

int main()
{
	int a = 10; // main() �������� a
	printf("main()=>a:%d b:%d\n", a, b);
	
	test_func();
}

void test_func()
{
	int a = 20;	// test_func() �������� a
	printf("test_func()=>a:%d b:%d\n", a, b);
}
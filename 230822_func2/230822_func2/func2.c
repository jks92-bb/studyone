#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void call_by_val(int a, int b);


int main()
{
	// call by value( ���� ���� ����)
	// call by address( �ּҰ��� ���� ����)
	int a = 10;
	int b = 20;
	call_by_val(a, b);
	printf("main()=> a:%d, b:%d\n", a, b);


}

void call_by_val(int a, int b)
{
	// a�� b�� ���� ���� �ٲ�ġ��.
	int temp = a; // a�� ���� �ӽú����� ���.
	a = b;
	b = temp;
	printf("call_by_val() => a:%d, b:%d\n", a, b);

}
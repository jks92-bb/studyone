#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int calculate(int a, int b, char c);

int main()
{
	// 1. ���� 2���� ��Ģ�����ڸ� main()���� �Է¹���
	// 2. ��Ģ�����ڴ� ���ڷ� �Է¹��� . (+, -, x,/)
	// 3. 3���� ������ �Ű������� ����
	// 4. ��� ������� �����Ͽ� main()���� ����ϱ�.

	// scanf�Լ����� �����Է� �� ���� �Է½ÿ��� " %c"���

	printf("���� ��Ģ������ ������ ������� �Է��Ͻÿ�.\n");

	int a = 0, b = 0;
	char c = 0;
	scanf("%d  %c %d", &a, &c, &b);
	printf("�� : %d", calculate(a, b, c));

}

int calculate(int a, int b, char c)
{

	if (c == '+') {
		return a + b;
	}
	else if (c == '-') {
		return a - b;
	}
	else if (c == 'x') {
		return a * b;
	}
	else if (c == '/') {
		return a / b;
	}
	
}
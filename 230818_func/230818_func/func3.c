#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int get_number();
char get_char();


void main()
{

	// ��ȯ���� ������Ÿ�� �Լ���() {return��}  
	// return�� 200�� ���� ����n�� ����.
	int n = get_number();
	printf("���Ϲ��� ��: %d\n", n);

	char t = get_char();
	printf("���Ϲ��� ��: %c\n", t);

	// ������ ����ؼ� ���ϰ��� ���� �ʰ�
	// ���� �Լ� ���ϰ��� %d�� ����
	printf("�Լ� ���ϰ� :%c\n", get_char());

}

int get_number()
{
	int n = 200;
	return n; //  �Լ��� ����Ǳ� ���� return ����
	// ȣ���� ������ �ǵ�����.
	// ���ϰ��� 1���� ���� ����.
	//void �Ŀ� �Լ��� �ƴϴ� return.
}

char get_char()
{
	char c = 'B';
	return c;
}




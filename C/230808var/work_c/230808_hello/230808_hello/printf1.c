#include<stdio.h>

int main(void)
{
	// %d: ������ ����
	printf("%d\n", 1234); //1234�� %d�� ����.
	printf("2���� ���� ��� : %d %d \n", 10, 20);
	printf("hello everybody\n");
	// printf �Լ��� ����Ͽ� 10-20-30 ���.
	printf("%d-%d-%d \n", 10, 20, 30); // ������� ����
	printf("%d/�Pȣȣ��ȣ��ȣ���P%d \n " , 10, 20);
	
	// printf �Լ� : ������ ȭ�鿡 ���
	// ���� : ����(����, �Ǽ�), ����(����, ���ڿ�)
	// ���� : %d, �Ǽ�:f%, ����: %c, ���ڿ�: %s

	// >> �ڸ���ǥ��, ��Ÿ ���� ǥ������ �ܿ� �ʿ䰡 ����.
	// �ǹ������� ���ͳ����� ã�Ƽ� ó���ϸ� ��.
	printf("�Ǽ�ǥ��:%.2f\n", 3.14);  // �Ҽ��� 2�ڸ������� ǥ�� f�� �ǹ�flot �׸� �߿����� ����.
	printf("����ǥ�� : %c\n", 'A'); //���� :����('') , ���ڿ�("")
	printf("���ڿ�: %s\n", "ȫ�浿");

	//�˰����� : ���� ���� ������ �� ������ �ȵ�
	
	
	//print3.c ������Ʈ�� �߰��Ͽ� �Ʒ��� ������ ���.

	
	return 0;
}
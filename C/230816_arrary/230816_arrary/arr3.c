#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է� :");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ��� : ");

	while (str[idx]!= '\0')
	{
		printf("%C", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;


}

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void gugudan(int dan);

int main()
{
	// 1. �������� ����ϴ� ���ڸ� main()���� �Է� ����.
	// 2. ��) 3�� �Է¹޾� �Ű������� �����ϸ� 3�� ���.
	// 3. �Է¹��� ���ڸ� �Ű������� �����Ͽ� ������ ���.
	int i = 0;
	
	printf("����Ϸ��� �������� �Է��Ͻÿ� : ");
	scanf("%d", &i);
	gugudan(i);

}

void gugudan(int dan)
{
	for (int i = 1; i < 10; i++) {
		printf("% d x % d = % d\n", dan, i, dan * i);

	}
	
}
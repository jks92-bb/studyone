//exam.c
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int	main()
{
	// �ݺ��� : Ư���� ������ �ݺ������� ����.
	
	/* 1���� ���ڸ� �Է¹޾� ������ ����ϴ� ���α׷�.
	��) 3�� �Է��ϸ� 3�� ���.

	���۰��� ���������� �Է¹޾� �� ���ϴ� ���α׷�.
	��) 1��° �Է� 2 2���� �Է� 5
	2+3+4+5=14
	����) ���࿡ 2��° ���� 1��° ������ �۰ų� ������ �ٽ� �Է�.

	������ ��ü ���(2~9�� ���)
	2x1=2   3x1=3  4x1=4 ..9x1=9
	2x2=4 .....*/
	int num = 0;

	printf("������ : ");
	scanf("%d", &num);
	printf("%d��\n", num);

	for (int is = 1; is < 10; is++)
	{
		printf("%dx%d=%d\n", num, is, num * is);
	}

	int n1, n2, total = 0;
	printf("���� ���� �Է�:");
	scanf("%d", &n1);
	do {
		printf("������ ���� �Է�:");
		scanf("%d", &n2);
	} while (n2 <= n1);
	for (int i = n1; i <= n2; i++) {
		total += i;
	}
	printf("%d~%d���� �� : %d\n", n1, n2, total);

	/*int nu = 0, nu2 = 0;
	printf("���� : %d\n", nu);
	scanf("%d", &nu);
	while (nu>nu++)
	{
		printf("%dj")
	}*/

	/*while (int = nu1)*/

	for (int cur = 1; cur < 10; cur++) {

		//int is = 0;
		//printf("\n");
		printf("%d��\n", cur);
		
		for (int is = 2; is < 10; is++)
		{
			//printf("%d��\n", cur);
			printf("%dx%d=%d\t", is, cur, cur * is);
		}
		printf("\n");
	}
	return 0;





}

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

// �������� : �Լ� �ۿ��� ����Ǵ� ���� (��� �Լ��� ���� ������ �� ����)
// �������� : �Լ� �ȿ����� ��� ������ ����
const char CHECK_FULL = 'f'; // const - ������� (���� ������ �� ���� ����)
// #define CHECK_FULL 'f'
const char CHECK_EVEN = 'e';
const char CHECK_ODD = 'o';
void gugu(char n);

int main_menu();



int main()
{
	while (1) {

		int menu = main_menu();

		switch (menu) {

		case 1: //¦��
			printf("������ ¦���� ��� �Լ� ���\n");
			gugu(CHECK_EVEN);
			break;

		case 2: //Ȧ��
			printf("������ Ȧ���� ��� �Լ� ���\n");
			gugu(CHECK_ODD);
			break;

		case 3: // ��ü
			printf("������ ��ü ��� �Լ� ���\n");
			gugu(CHECK_FULL);
			break;

		case 4:
			printf("���α׷� ����\n");
			exit(0);

		default:
			printf("�߸��� �޴� �Է�!!\n");
			break;
		}
	}

}

int main_menu()
{
	printf("-----------------------------\n");
	printf("�������� ����ϴ� �Լ� ����v1.0\n");
	printf("-----------------------------\n");
	printf("1. ������ ¦���� ���\n");
	printf("2. ������ Ȧ���� ���\n");
	printf("3. ������ ��ü ���\n");
	printf("4. ����\n");
	printf("-----------------------------\n");
	printf("�޴� ���� :\n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}

void gugu(char n)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {

			if (j % 2 == 0 && n == CHECK_EVEN) {// ¦����
				printf("%dx%d=%d\t", j, i, j * i);
			}

			else if (j % 2 != 0 && n == CHECK_ODD) { // Ȧ����
				printf("%dx%d=%d\t", j, i, j * i);
			}

			else if (n == CHECK_FULL) {
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}





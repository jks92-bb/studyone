#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


void gugu();

int main_menu();




int main()
{
	const char CHECK_FULL = 'f';
	const char CHECK_EVEN = 'e';
	const char CHECK_ODD = 'o';

	while (1) {

		//int menu = main_menu();

		switch (main_menu()) {

		case 1:
			printf("구구단 짝수단 출력 함수 사용\n");
			gugu(CHECK_EVEN);
			break;

		case 2:
			printf("구구단 홀수단 출력 함수 사용\n");
			gugu(CHECK_ODD);
			
			break;

		case 3:
			printf("구구단 전체 출력 함수 사용\n");
			gugu(CHECK_FULL);
			break;

		case 4:
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("잘못된 메뉴 입력!!\n");
			break;
		}
	}

}

int main_menu()
{
	printf("-----------------------------\n");
	printf("구구단을 출력하는 함수 연습v1.0\n");
	printf("-----------------------------\n");
	printf("1. 구구단 짝수단 출력\n");
	printf("2. 구구단 홀수단 출력\n");
	printf("3. 구구단 전체 출력\n");
	printf("4. 종료\n");
	printf("-----------------------------\n");
	printf("메뉴 선택 :\n");
	int menu = 0;
	scanf("%d", &menu);

	return menu;
}

void gugu(int n)
{
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (j % 2 == 0 && n == 'e') {// 짝수단
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (j % 2 != 0 && n == 'o') { // 홀수단
				printf("%dx%d=%d\t", j, i, j * i);
			}
			else if (n == 'f') {
				printf("%dx%d=%d\t", j, i, j * i);
			}
		}
		printf("\n");
	}
}





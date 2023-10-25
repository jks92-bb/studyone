#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void gugudan(int i, int j);

int main()
{
	// 1. 구구단을 출력하는 숫자를 main()에서 입력 받음.
	// 2. 예) 3을 입력받아 매개변수로 전달하면 3단 출력.
	// 3. 입력받은 숫자를 매개변수로 전달하여 구구단 출력.
	int i = 0;
	int j = 0;
	printf("출력하려는 구구단을 입력하시오 : ");
	scanf("%d", &i);
	gugudan(i, j);

}

void gugudan(int i, int j)
{
	while (1) {
		if (i < 2) {
			printf("다시 입력하시오");
			scanf("%d", &i);
		}
		break;

	}
	if (i == 2) {
		for (j = 1; j <= 9; j++) {
			printf("2단 출력 :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 3) {
		for (j = 1; j <= 9; j++) {
			printf("3단 출력 :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 4) {
		for (j = 1; j <= 9; j++) {
			printf("4단 출력 :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 5) {
		for (j = 1; j <= 9; j++) {
			printf("5단 출력 :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 6) {
		for (j = 1; j <= 9; j++) {
			printf("6단 출력 :%dx%d=%d\n", i, j, i * j);
		}
	}
	if (i == 7) {
		for (j = 1; j <= 9; j++) {
			printf("7단 출력 :%dx%d=%d\n", i, j, i * j);
		}

	}
	if (i == 8) {
		for (j = 1; j <= 9; j++) {
			printf("8단 출력 :%dx%d=%d\n", i, j, i * j);
		}

	}
	if (i == 9) {
		for (j = 1; j <= 9; j++) {
			printf("9단 출력 :%dx%d=%d\n", i, j, i * j);
		}

	}
}
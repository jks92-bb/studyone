#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void gugudan(int dan);

int main()
{
	// 1. 구구단을 출력하는 숫자를 main()에서 입력 받음.
	// 2. 예) 3을 입력받아 매개변수로 전달하면 3단 출력.
	// 3. 입력받은 숫자를 매개변수로 전달하여 구구단 출력.
	int i = 0;
	
	printf("출력하려는 구구단을 입력하시오 : ");
	scanf("%d", &i);
	gugudan(i);

}

void gugudan(int dan)
{
	for (int i = 1; i < 10; i++) {
		printf("% d x % d = % d\n", dan, i, dan * i);

	}
	
}
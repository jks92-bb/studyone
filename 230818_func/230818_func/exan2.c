#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void show_day(int i);


void main()
{
	// main()에서 1~7사이의 숫자를 입력받아서
	// 전달하여 매개변수의 값이
	// 1이면, 월요일 출력.
	// 2이면, 화요일 출력.
	//...
	// 7이면,  
	//show_day()
	printf("숫자를 입력하세요.\n");
	int i=0;
	scanf("%d",&i);

	show_day(i); // show_day 함수 호출(실행)
	

}

void show_day(int i)
{
	if (i == 1) {
		printf("월요일\n");
	}
	else if (i == 2) {
		printf("화요일\n");
	}
	else if (i == 3) {
		printf("수요일\n");
	}
	else if (i == 4) {
		printf("목요일\n");
	}
	else if (i == 5) {
		printf("금요일\n");
	}
	else if (i == 6) {
		printf("토요일\n");
	}
	else {
		printf("일요일\n");
	}
}
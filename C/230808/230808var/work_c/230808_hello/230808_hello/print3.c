#include <stdio.h>

int main(void)
{
	printf("------------------\n");
	printf("수강생 정보 확인서\n");
	printf("------------------\n");
	printf("이름 : %s동\n", "홍길");
	printf("나이 : %d\n", 200);
	printf("전화 : %s-%d-%d\n", "010", 1234, 4321);
	printf("주소 : %s\n", "조선 한양 홍대감댁 11번지");
	printf("키 : %.1fcm\n", 180.2);
	printf("몸무게 : %.1fkg\n", 78.5);
	printf("혈액형 : %s형\n", "B");
	printf("---------------------");

	return 0;
}
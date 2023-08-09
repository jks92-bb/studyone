#include <stdio.h>

int main()
{
	char* a = "이름";
	char* b = "나이";
	char* c = "전화";
	char* d = "주소";
	char* e = "키";
	char* f = "홍길동";
	int g = 200.0;
	double h = 180.2;
	char o = 'B';
	float q = 489.34;
	char* p = "조선 한양 홍대감댁 11번지";
	int age = 255;


	printf("나이 : %d세\n", age);
	age = age + 539; // 나이를 539 더함.
	printf("539년 후 나이 : %d세\n", age);

	double pi = 3.14159;
	printf("원주율 : %1f\n", pi);

	double radius = 5.0;
	double radius2 = radius * radius;
	double area = pi* radius2 ; //원의 넓이 계산
	printf("반지름이 %1f인 원의 넓이 : %1f\n", radius, area);


	printf("-------------------------------\n");
	printf("수강생 정보 확인서\n");
	printf("-----------------------------\n");
	printf("%s : %s\n", a, f);
	printf("%s : 200\n", b);
	printf("%s : 010-1234-4321\n",c );
	printf("%s : %s\n", d, p);
	printf("%s : %.2fcm\n", e, h);
	printf("몸무게 :%dkg\n", g);
	printf("혈액형 : %c형\n", o);
	printf("무슨소리 하니 : %.4f소리", q);
	
}
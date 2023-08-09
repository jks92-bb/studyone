#include <stdio.h>

int main()
{
	double radius = 5.0;
	double pi = 3.14;
	double area = radius * radius * pi;

	printf("반지름 %f인 원의 넓이 : %f \n", radius, area);

	// 국어, 영어, 수학 ,과학 정수형 변수 생성.
	// 국어 점수를 90 출력.
	// 영어 점수를 100출력.
	// 수학 점수 100 출력.
	// 과학 점수 90 출력.
	/*모든 과목 평균값과 총점을 저장할 변수 생성.
	평균값과 총점 출력*/
	//double 쓸때는 f 말고 lf (long)이라는것.
	//float : %f , doulbe : %lf


	int k = 90, eng = 100, m = 100, 과학 = 90;
	int su = k + eng + m + 과학;

	printf("합 %d\n", su);
	printf("평균값 (합)/4=%d\n", su / 4);

	//화씨 온도를 저장하는 정수형 변수 생성
	// 화씨 온도에 40도의 값을 설정.
	//섭씨 온도를 저장하는 실수형 변수 생성
	// 화씨 온도를 섭씨 온도로 변환  섭씨 온도 = (화씨온도 -32) /1.8
	// 섭씨 온도를 출력하세요.

	int	화 = 40.0;
	double 섭 = (화 - 32) / 1.8;

	printf("섭씨온도 %lf\n", 섭);
	printf("좋았어 %d도\n", 화);








}
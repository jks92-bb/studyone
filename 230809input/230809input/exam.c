#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	////1.원주율을 저장하는 실수형 상수 변수를 생성하고 값을 설정(pi=3.14)
	//double pi = 3.14;
	//printf("원주율 :%lf\n", pi);
	////2.원의 반지름을 저장하는 실수형 변수를 생성하고 입렵 갇기.
	//double r;
	//printf("반지름 :");
	//scanf("%lf", &r);
	//double area = pi * r * r;
	////	3. 원의 면적을 출력하기 
	//printf("원의 면적 : %lf\n",area);
	////	국어, 영어, 수학, 과학 정수형 변수 생성
	//int kor;
	//int eng;
	//int ma;
	//int sc; 
	////	국어 , 영어 , 수학, 과학 점수 입력 받기.
	//printf("국어 :");
	//scanf("%d", &kor);
	//printf("영어 :");
	//scanf("%d", &eng);
	//printf("수학:");
	//scanf("%d", &ma);
	//printf("과학 :");
	//scanf("%d", &sc);
	////	모든 과목의 평균값과 총점을 저장할 변수를 생성.
	//int sum = kor + eng + ma + sc;
	//double aveg = sum / 4;
	////	평균값과 총점을 출력.
	//printf("평균 : %lf , 총점 : %d\n", aveg, sum);	
	////	화씨 온도를 저장하는 정수형 변수 생성.
	//double ha;

	////	화씨 온도를 입력 받기.
	//printf("화씨 : ");
	//scanf("%lf", &ha);
	////	섭씨 온도를 저장하는 실수형 변수 생성.
	//
	////	화씨 온도를 섭씨 온도로 변환. 섭씨온도 화씨-32/1.8
	//double sil = ha - 32 / 1.8;
	////	섭씨 온도 출력
	//printf("섭씨: %lf", sil);




		// 1. 원주율을 저장하는 실수형 상수 변수를 생성하고 값을 설정 (pi = 3.14)
		double pi = 3.14;
		printf("원주율: %lf\n", pi);

		// 2. 원의 반지름을 저장하는 실수형 변수를 생성하고 입력 받기
		double r;
		printf("반지름: ");
		scanf("%lf", &r);
		double area = pi * r * r;
		// 3. 원의 면적 출력하기 
		printf("원의 면적: %lf\n", area);

		// 4. 국어, 영어, 수학, 과학 정수형 변수 생성
		int kor, eng, ma, sc;

		// 5. 국어, 영어, 수학, 과학 점수 입력 받기
		printf("국어: ");
		scanf("%d", &kor);
		printf("영어: ");
		scanf("%d", &eng);
		printf("수학: ");
		scanf("%d", &ma);
		printf("과학: ");
		scanf("%d", &sc);

		// 6. 모든 과목의 평균값과 총점을 저장할 변수 생성
		int sum = kor + eng + ma + sc;
		double aveg = (double)sum / 4; // 정수 나누기 정수 결과를 실수로 변환하여 계산

		// 7. 평균값과 총점 출력
		printf("평균: %lf, 총점: %d\n", aveg, sum);

		// 8. 화씨 온도를 입력 받기
		double ha;
		printf("화씨: ");
		scanf("%lf", &ha);

		// 9. 섭씨 온도 계산 및 출력
		double sil = (ha - 32) / 1.8; // 괄호 추가하여 연산 우선순위 지정
		printf("섭씨: %lf\n", sil);

	
}
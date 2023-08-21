#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void cal(kor, eng, math);

int main()
{
	int kor = 0;
	int eng = 0;
	int math = 0;
	printf("국어 점수 입력하시오.\n");
	scanf("%d", &kor);
	//for (kor; kor <= 100;) {
		
		//if (kor <= 100 && kor >= 0) {}
	
		if (kor > 100 || kor < 0) {
			printf("다시 입력하시오.");
			exit(0); // 프로그램 강제 종료 또는 return 0;
			scanf("%d", &kor);
		}
		
	
			

	//}


	printf("영어 점수 입력하시오.\n");
	scanf("%d", &eng);
	if (eng > 100 || eng < 0) {
		printf("다시 입력하시오.");
	}
	printf("수학 점수 입력하시오.\n");
	scanf("%d", &math);

	if (math > 100 || math < 0) {
		printf("다시 입력하시오.");
	}
	cal(kor, eng, math);


}

void cal(int kor, int eng, int math)
{
	if (kor > 100 || kor < 0) {
		printf("ㅌㅌㅌ");
	}


	//if (kor <= 100 && kor == 0 && eng <= 100 && eng == 0 && math <= 100 && math == 0) {
	printf("국어 영어 수학 : %d, %d, %d", kor, eng, math);
	int sum = kor + eng + math;
	int avg = sum / 3;
	printf("총점 : %d, 평균 : %d", sum, avg);
	//}


}
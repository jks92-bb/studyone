#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void cal(kor, eng, math);

int main()
{
	int kor = 0;
	int eng = 0;
	int math = 0;
	printf("���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &kor);
	//for (kor; kor <= 100;) {
		
		//if (kor <= 100 && kor >= 0) {}
	
		if (kor > 100 || kor < 0) {
			printf("�ٽ� �Է��Ͻÿ�.");
			exit(0); // ���α׷� ���� ���� �Ǵ� return 0;
			scanf("%d", &kor);
		}
		
	
			

	//}


	printf("���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &eng);
	if (eng > 100 || eng < 0) {
		printf("�ٽ� �Է��Ͻÿ�.");
	}
	printf("���� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &math);

	if (math > 100 || math < 0) {
		printf("�ٽ� �Է��Ͻÿ�.");
	}
	cal(kor, eng, math);


}

void cal(int kor, int eng, int math)
{
	if (kor > 100 || kor < 0) {
		printf("������");
	}


	//if (kor <= 100 && kor == 0 && eng <= 100 && eng == 0 && math <= 100 && math == 0) {
	printf("���� ���� ���� : %d, %d, %d", kor, eng, math);
	int sum = kor + eng + math;
	int avg = sum / 3;
	printf("���� : %d, ��� : %d", sum, avg);
	//}


}
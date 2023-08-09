#include <stdio.h>

int main()
{
	char* a = "이름";
	char* b = "나이";
	char* c = "전화";
	char* d = "주소";
	char* e = "키";
	char* f = "홍길동";
	int g = 200;
	float h = 180.2;
	char o = 'B';

	printf("-------------------------------\n");
	printf("수강생 정보 확인서\n");
	printf("-----------------------------\n");
	printf("%s : %s\n", a, f);
	printf("%s : 200\n", b);
	printf("%s : 010-1234-4321\n",c );
	printf("%s : 조선 한양 홍대감댁 11번지\n", d);
	printf("%s : %.2fcm\n", e, h);
	printf("몸무게 :%dkg\n", g);
	printf("혈액형 : %c형\n", o);

	// 2. 정수형 변수 a에 100저장. 정수형 변수 b에 200 저장.
	// 정수형 변수  c에 a+b결과값 저장하고 화면에 출력.
	int ab = 100; // 초기화 (변수를 생성하고 난 직후 값을 대입)
	int bt = 200;
	//int cc; // 변수를 생성하고 난 직후 값을 대입하지 않음. 지금 여기서는 비쥬얼 스튜디오 자체가 편집기라서 안될뿐.
	//오류 다운을 이용해서 오류수정 가능하지만 cb를 초기화하지 않으면 오류
	//printf("cc의 값:%d\n", cc);
	//int cc = ab + bt;
	int cc = 0;
	cc = ab + bt;
	printf("ab+bt=%d\n", cc);

}
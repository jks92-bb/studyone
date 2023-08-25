#include <stdio.h>

struct student {
	char name[20];
};

int main()
{
	//1.학생 정보 구조체 만들기
	//2. 학생 정보는 이름, 휴대폰번호, 나이, 주소가 있음.
	//3. 100명의 학생 정보를 랜덤하게 저장하여 출력
	//4. 랜덤값은 배열에 값을 저장하고 랜덤하게 불러오게 처리.
	
	//문자열을 저장하는 배열을 처리하는 샘플 코드
	char* name[5] = { "홍길동", "전우치", "김유신", "유관순","강감찬" };
	printf("이름[0] : %s\n", name[0]);
	printf("이름[4] : %s\n", name[4]);

	struct student st;
	strcpy(st.name, name[2]);
	printf("st.name: %s", st.name);





}
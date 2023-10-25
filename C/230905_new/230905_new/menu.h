#ifndef __MENU_H__ // 헤더파일 중복 사용을 방지
#define __MENU_H__ // 헤더파일 중복 사용을 방지 __menu_h_ 만든이름이다.

//#pragma once // 한번만 사용하게 하는 것. 윈도우 전용.

typedef enum {
	MAIN_RAND_INS =1 ,	// 랜덤 생성 메뉴
	MAIN_DIR_INS,		// 직접 입력 메뉴
	MAIN_ALL_DEL,		// 전체 삭제
	MAIN_VIEW,			// 전체 보기
	MAIN_SEARCH,		// 검색
	MAIN_DELETE,		// 삭제
	MAIN_UPDATE,		// 수정
	MAIN_EXIT			// 종료
}MAIN_MENU;


extern int main_menu(); //extern은 생략 가능. 실행하면 C 컴파일러에서 자동으로 붙여줌.

extern int search_menu();
#endif

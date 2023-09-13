#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_USERS 100

// 사용자 정보를 저장할 구조체
struct User {
	char id[50];
	char password[50];
	char name[20];
};

// 사용자 정보를 파일에 저장하는 함수
void saveUsers(struct User users[], int numUsers) {
	FILE* file = fopen("users.bin", "wb");
	if (file == NULL) {
		printf("파일을 열 수 없습니다.\n");
		return;
	}

	for (int i = 0; i < numUsers; i++) {
		fprintf(file, "%s %s\n", users[i].id, users[i].password, users[i].name);
	}

	fclose(file);
}

// 파일에서 사용자 정보를 읽는 함수
int loadUsers(struct User users[]) {
	FILE* file = fopen("users.bin", "rb");
	if (file == NULL) {
		return 0; // 파일이 없으면 0 반환
	}

	int numUsers = 0;
	while (fscanf(file, "%s %s", users[numUsers].id, users[numUsers].password) != EOF) {
		numUsers++;
	}

	fclose(file);
	return numUsers;
}

// 사용자 ID 중복을 확인하는 함수
int checkDuplicateID(struct User users[], int numUsers, const char* id) {
	for (int i = 0; i < numUsers; i++) {
		if (strcmp(users[i].id, id) == 0) {
			return 1; // 중복된 ID가 있음
		}
	}
	return 0; // 중복된 ID가 없음
}

int main() {
	struct User users[MAX_USERS];
	int numUsers = 0;

	// 파일에서 사용자 정보 로드
	numUsers = loadUsers(users);

	while (1) {
		printf("1. 가입\n");
		printf("2. 로그인\n");
		printf("3. 종료\n");
		printf("메뉴 선택: ");

		int choice;
		scanf("%d", &choice);

		if (choice == 1) {
			if (numUsers < MAX_USERS) {
				char new_id[50];
				printf("사용자 이름: ");
				scanf("%s", new_id);

				if (checkDuplicateID(users, numUsers, new_id)) {
					printf("이미 사용 중인 ID입니다. 다른 ID를 선택하세요.\n");
				}
				else {
					strcpy(users[numUsers].id, new_id);

					printf("비밀번호: ");
					scanf("%s", users[numUsers].password);

					printf("가입이 완료되었습니다.\n");
					numUsers++;

					// 사용자 정보를 파일에 저장
					saveUsers(users, numUsers);
				}
			}
			else {
				printf("최대 사용자 수에 도달했습니다. 더 이상 가입할 수 없습니다.\n");
			}
		}
		else if (choice == 2) {
			char entered_id[50];
			char entered_password[50];

			printf("사용자 이름: ");
			scanf("%s", entered_id);

			printf("비밀번호: ");
			scanf("%s", entered_password);



			for (int i = 0; i < numUsers; i++) {
				if (strcmp(users[i].id, entered_id) == 0 && strcmp(users[i].password, entered_password) == 0) {
					printf("로그인 성공! %s님 환영합니다.\n", users[i].name);
					break;
				}
				else {
					printf("로그인 실패. 올바른 ID 및 비밀번호를 입력하세요.\n");
					break;
				}
			}

		}
		else if (choice == 3) {
			printf("프로그램 종료!\n");
			break;
		}
		



		else {
			printf("잘못된 메뉴 선택!!\n");
		}
	}

	return 0;
}

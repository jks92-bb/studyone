#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_USERS 100

// ����� ������ ������ ����ü
struct User {
	char id[50];
	char password[50];
	char name[20];
};

// ����� ������ ���Ͽ� �����ϴ� �Լ�
void saveUsers(struct User users[], int numUsers) {
	FILE* file = fopen("users.bin", "wb");
	if (file == NULL) {
		printf("������ �� �� �����ϴ�.\n");
		return;
	}

	for (int i = 0; i < numUsers; i++) {
		fprintf(file, "%s %s\n", users[i].id, users[i].password, users[i].name);
	}

	fclose(file);
}

// ���Ͽ��� ����� ������ �д� �Լ�
int loadUsers(struct User users[]) {
	FILE* file = fopen("users.bin", "rb");
	if (file == NULL) {
		return 0; // ������ ������ 0 ��ȯ
	}

	int numUsers = 0;
	while (fscanf(file, "%s %s", users[numUsers].id, users[numUsers].password) != EOF) {
		numUsers++;
	}

	fclose(file);
	return numUsers;
}

// ����� ID �ߺ��� Ȯ���ϴ� �Լ�
int checkDuplicateID(struct User users[], int numUsers, const char* id) {
	for (int i = 0; i < numUsers; i++) {
		if (strcmp(users[i].id, id) == 0) {
			return 1; // �ߺ��� ID�� ����
		}
	}
	return 0; // �ߺ��� ID�� ����
}

int main() {
	struct User users[MAX_USERS];
	int numUsers = 0;

	// ���Ͽ��� ����� ���� �ε�
	numUsers = loadUsers(users);

	while (1) {
		printf("1. ����\n");
		printf("2. �α���\n");
		printf("3. ����\n");
		printf("�޴� ����: ");

		int choice;
		scanf("%d", &choice);

		if (choice == 1) {
			if (numUsers < MAX_USERS) {
				char new_id[50];
				printf("����� �̸�: ");
				scanf("%s", new_id);

				if (checkDuplicateID(users, numUsers, new_id)) {
					printf("�̹� ��� ���� ID�Դϴ�. �ٸ� ID�� �����ϼ���.\n");
				}
				else {
					strcpy(users[numUsers].id, new_id);

					printf("��й�ȣ: ");
					scanf("%s", users[numUsers].password);

					printf("������ �Ϸ�Ǿ����ϴ�.\n");
					numUsers++;

					// ����� ������ ���Ͽ� ����
					saveUsers(users, numUsers);
				}
			}
			else {
				printf("�ִ� ����� ���� �����߽��ϴ�. �� �̻� ������ �� �����ϴ�.\n");
			}
		}
		else if (choice == 2) {
			char entered_id[50];
			char entered_password[50];

			printf("����� �̸�: ");
			scanf("%s", entered_id);

			printf("��й�ȣ: ");
			scanf("%s", entered_password);



			for (int i = 0; i < numUsers; i++) {
				if (strcmp(users[i].id, entered_id) == 0 && strcmp(users[i].password, entered_password) == 0) {
					printf("�α��� ����! %s�� ȯ���մϴ�.\n", users[i].name);
					break;
				}
				else {
					printf("�α��� ����. �ùٸ� ID �� ��й�ȣ�� �Է��ϼ���.\n");
					break;
				}
			}

		}
		else if (choice == 3) {
			printf("���α׷� ����!\n");
			break;
		}
		



		else {
			printf("�߸��� �޴� ����!!\n");
		}
	}

	return 0;
}

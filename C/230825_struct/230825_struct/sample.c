#include <stdio.h>
#include <string.h> //���ڿ� ó�� ����

struct student {
	char name[20];
};

int main()
{
	//1.�л� ���� ����ü �����
	//2. �л� ������ �̸�, �޴�����ȣ, ����, �ּҰ� ����.
	//3. 100���� �л� ������ �����ϰ� �����Ͽ� ���
	//4. �������� �迭�� ���� �����ϰ� �����ϰ� �ҷ����� ó��.
	
	//���ڿ��� �����ϴ� �迭�� ó���ϴ� ���� �ڵ�
	char* name[5] = { "ȫ�浿", "����ġ", "������", "������","������" };
	printf("�̸�[0] : %s\n", name[0]);
	printf("�̸�[4] : %s\n", name[4]);

	struct student st;
	strcpy(st.name, name[2]);
	printf("st.name: %s", st.name);





}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void my_sort(int n1, int n2, int n3);



int main()
{
	// 1. 3���� ���ڸ� main()���� �Է¹޾Ƽ� �Ѳ����� �Ű������� ����.
	// 2. �Լ����� 3���� ���ڸ� ũ�� ������� ���.
	// 3. �Լ��̸� : my_sort()
	// 4. n1 > n2 > n3 --> 
	// 5. ��°�� : n1> n2 >n3

	printf("3���� ���ڸ� �Է��Ͻÿ�.\n");
	int n1 = 0, n2 = 0, n3 = 0;
	scanf("%d %d %d", &n1, &n2, &n3);
	my_sort(n1, n2, n3);

}

void my_sort(int n1, int n2, int n3)
{

	
		while (1) {
			if (n1 > n2 && n2 > n3) {
				printf("%d>%d>%d", n1, n2, n3);
				break;
			}
			else if (n1 > n2 && n3 > n2 && n1 > n3) {
				printf("%d>%d>%d", n1, n3, n2);
				break;
			}
			else if (n2 > n1 && n2 > n3 && n1 > n3) {
				printf("%d>%d>%d", n2, n1, n3);
				break;
			}
			else if (n3 > n1 && n3 > n2 && n2 > n1) {
				printf("%d>%d>%d", n3, n2, n1);
				break;
			}
			else if (n3 > n1 && n3 > n2 && n1 > n2) {
				printf("%d>%d>%d", n3, n1, n2);
				break;
			}
			/*else {
				printf("���� �ٽ� �Է��Ͻÿ�.\n");
				
				break;*/
			}
			
		
		
	



	//printf("%d>%d>%d\n", n1, n2, n3);

}
#include <stdio.h>
#include<string.h>

int main3() {
	//���� 209�� 1,2
	//1.�� ���� ���ڿ�(�̸�)�� �Է¹޾� ������ ���� ������ �˷��ִ� ���α׷�
	char A[50] = {0};
	char B[50] = {0};
	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", A);
	rewind(stdin);  //���� ����
	printf("�ι�° �̸��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", B);

	if (strcmp(A, B) == 0) {
		printf("�����ϴ�.\n");
	}
	else {
		printf("�ٸ��ϴ�.\n");
	}


	//2. �� �Է¹��� ���ڿ� �� ���̰� �� ���ڿ����� ����ϰ� �Ͻÿ�
	int a = strlen(A);
	int b = strlen(B);
	if (a > b) {
		printf("���̰� �� �� �̸��� %s, ª�� ���� %s�Դϴ�.\n", A, B);
	}
	else {
		printf("���̰� �� �� �̸��� %s, ª�� ���� %s�Դϴ�.\n", B, A);
	}
	return 0;
}
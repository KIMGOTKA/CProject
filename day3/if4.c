#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4() {
	//���� 122��
	//������ �޾Ƽ� Ȧ������ ¦������ �Ǻ�
	
	int num = 0;
	printf("����: ");
	scanf("%d", &num);

	double num2;
	num2 = num % 2;

	if (num2 == 0) {
		printf("¦��");

	}
	else{
		printf("Ȧ��");

	}


	//���̿� ���� ����ö ���ǥ
	//6�� �̸�, 65�� �̻� : 0
	//13�� �̻�, 19�� �̸� :500
	//19�� �̻� 65���̸� : 900
	
	int age = 0;
	printf("����: ");
	scanf("%d", &age);

	if (age < 6||age>=65) {
		printf("0");
	}
	if (age >=13&&age<19 ) {
		printf("500");
	}
	if (age >=19&&age<65 ) {
		printf("900");
	}
	
	//�ƴϸ�

	if (age < 6||age>=65) {
		printf("0");
	}
	else if (age >=13&&age<19) {
		printf("500");
	}
	else {
		printf("900");
	}



	return 0;
}
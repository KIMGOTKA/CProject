#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	//if�� �ݴ�
	//if(){} else{}

	int age;
	printf("���̸� �Է����ּ���.");
	scanf("%d", &age);
	if (age>=20) {
	//������ ������
		printf("�����Դϴ�.");
	}
	
	else {
	//������ Ʋ����
		printf("�̼����Դϴ�.");
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	//if(){} :()������ �������� {}����
	//if(){}  else{} : ()�� �������� if, �ƴϸ� else�� ��ɾ� ����
	
	//����
	//10���� ������
	//100���� ������
	//1000���� ������
	//1000�̻�����

	int num = 10;
	if (num < 10) {
		printf("10���� �۴�");
	}
	if (num < 100) {
		printf("100���� �۴�");
	}
	if (num < 1000) {
		printf("1000���� �۴�");
	}
	else{
		printf("1000�̻��̴�");
	}
	//��Ȯ�� ǥ��

	if (num < 10) {
		printf("10���� �۴�");
	}
	else if (num < 100) {    //���� if�� Ʋ���� �˻�
		printf("100���� �۴�");
	}
	else if (num < 1000) {   //���� if�� Ʋ���� �˻�
		printf("1000���� �۴�");
	}
	else {                   //�� Ʋ����
		printf("1000�̻��̴�");
	}

	//����

	int age = 21;

	if (age > 20) {
		printf("����");
	}
	else if (age > 14) {    //���� if�� Ʋ���� �˻�
		printf("û�ҳ�");
	}
	else {                   //�� Ʋ����
		printf("�̼���");
	}

	printf("\nquiz\n");

	int score = 0;
	printf("������ �Է��ϼ���.: ");
	scanf("%d", &score);

	//90�� �̻��� A
	//90�� �̻��� B
	//90�� �̻��� C
	//90�� �̻��� D
	//�� ���ϴ� F

	if (score >= 90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else {
		printf("f");
	}
	return 0;
}
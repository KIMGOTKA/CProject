#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {

	// ���� �ּ� (crtl + shift + /)
	// ���� �� �ּ� /* ~ */
	/*

	ctrl + z �ڷΰ���
	ctrl + y �����ΰ���

	*/

	// ����(variable) : �������
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;                // ������ ���� ���� (1byte == 8bit)
	int number;               // ������ ���� (4byte)
	double dNumber;           // �Ǽ��� ���� (8byte)
	char str[256];             // ���ڿ��� ���� (256byte)

	//������ ���� ���� (���� ������)
	// ������ = �����Ͱ�

	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str, "hi world");

	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;     //number�� ����ִ� ���� ��� (�ڷ��� ���� �����ֱ�)
	printf("������: %c\n", word);
	printf("������: %d\n", number);
	printf("�Ǽ���: %lf\n", dNumber);
	printf("���ڿ���: %s\n", str);

	// + : ���ϱ�
	// - : ����
	// * : ���ϱ�
	// / : ������
	// % : ������ ���ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� �����
	// +, -, *, /, % ����ϱ�

	int qw = 17, er = 24, ty = 32;
	int sum = qw + er + ty;
	int gg = qw - er - ty;
	printf("�հ�=%d\n", sum);
	printf("����=%d\n", gg);
	printf("������=%lf\n", qw / (double)er);



	return 0;

}

#include <stdio.h>

int main5() {
	// page 85
	// #2
	int num1 = 27;

	printf("%d\n", num1 > 10);          // ����� 1�� ��������
	printf("%d\n", num1 != 5);

	printf("%d\n", num1 >= 27);
	printf("%d\n", num1 == 27);       // ����� 1

	printf("%d\n", num1 < 30);      // 1
	printf("%d\n", num1 <= 27);

	// #3
	// ���� = 86, ���� = 75, ���� = 88, ��ȸ = 60, ���� = 96
	// ����� ���ϼ��� (�Ҽ�������)
	int q = 86, w = 75, e = 88, r = 60, t = 96;
	double a = q + w + e + r + t;
	a /= 5;
	printf("1)%lf\n", a);
	double avg = (q + w + e + r + t) / 5;
	printf("2)%lf\n", avg);

	// #4
	// ���������� ���
	int num = 5;
	printf("num�� ��: %d\n", ++num);          // 6
	printf("num�� ��: %d\n", num++);          // 6
	printf("num�� ��: %d\n", ++num);          // 8








	return 0;
}
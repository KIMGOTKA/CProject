#include <stdio.h>
#include<string.h>
int add(int n1, int n2) {
	return n1 + n2;

}

int add2(int n3, int n4) {
	if (n3 < 0) {
		n3 = n3 * -1;
	}
	if (n4 < 0) {
		n4 = n4 * -1;
	}
	int result= n3 + n4;
	return result;
}
int main4() {
	//�Լ�: �����ȣ�� �Ѱ谡 ������ ����ڰ� ���� ����� ����ڰ� ���� ����� ������, �ڵ带 �����ϴ� ���
	//(){}
	//+ - * / % : ������ ��ɵ��� �ִ�, ������ ���� ���ѵǾ� �ִ�
	int num1=-3 + 5;// ���� ���ϴ°� ������ ���ش��� ���ϰ� �ʹ�
	printf("%d\n",num1);

	//���� ���� ���ϱ⸦ ������
	int num2=add(-3, 5);
	printf("%d\n", num2); //=2

	//�������� ���� �����ִ� ���
	int num3 = add2(-3, 5);
	printf("%d\n", num3); //=8

	int c=add2(1, 2);
	int d=add2(3, -1);
	int f=add2(-1, -2);
	printf("%d, %d, %d\n", c, d, f);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main8() {
	int a= 10;  //������ 10 ��Ƽ� �����
	int* p = &a;//�����ͺ��� p�� a�� �ּҸ� ��� �����
	*p = 20;  //�������� 20 ������a�� 20 ����
	printf("%d", a);
	*p = 50;     //���������� 50������ a�� 50����
	printf("%d", a);

	//

	printf("\n");
	//���� 10�� �����ϴ� int�� ����  number�� ����
	//number�� ����� �޸� �ּҸ� �����ϴ� �����ͺ��� pnumber�� �����մϴ�
	//�׸��� printf�Լ��� ȣ���� ����10�� ���� number�� �ּҸ� ���
	//�̶� printf �Լ��� ��� �����ͷδ� �����ͺ��� pnumber���� �̿�
	int number = 10;
	int* pnumber = &number;
	printf("��: %d,  �ּ�: %p\n" ,* pnumber, pnumber);
	printf("�̰� %d\n",pnumber);
	printf("�̰�2 %d",number);
	printf("�̰�3 %p\n",&number);
	
	
	
	
	int num1 = 5;
	int num2 = 8;
	int* ptr;

	ptr = &num1;
	printf("%d\n", ptr);//5
	ptr = &num2;
	printf("%d\n", *ptr);//8

	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2); //100 200
	
	ptr1 = &n2;
	ptr2 = &n1;
	printf("%d %d\n", *ptr1, *ptr2); //200 100


	return 0;
}

#include <stdio.h>

int main4() {
	//�ּ� : �� ���� �޸����
	/*
	�ۼ���: ������
	�ۼ���¥: 2023-2-18
	���: printf�� ���ڿ� ���
	*/

	//�̸� �⵵ �� �� f ������
	//����[]����: �̸�
	//��������; �⵵ �� ��
	//���ں���: f

	char name[] = "������";
	int year = 2023;
	int month = 2;
	int day = 18;
	char word = 'f';


	printf("�ۼ���: %s\n",name);
	printf("�ۼ���¥: %d-%d-%d\n", year, month, day);
	printf("���ں���: %c", word);


	return 0;
}

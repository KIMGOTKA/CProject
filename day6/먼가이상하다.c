#include <stdio.h>
//string: ���ڿ�(char���� �ٿ�����)
#include<string.h>
//include<string.h>: ���ڿ� ���� �Լ�/��ɵ��� ����
//include <stdio.h>: �Է� �� ��°��� ��ɵ��� ����
int main66() {
	char good[] = "good!";  //6ĭ
	char* bad = "bad!";     //5ĭ

	printf("1: %s %s\n", good, bad);  //good!bad!

	//�迭�θ��� ���ڿ�
	good[0] = 'H';
	//good = "New good!";  //������ ����(�迭���ڿ��� �ϰ����� �Ұ���)


	//�����ͷ� ���� ���ڿ�
	bad = "New Bad!";
	//bad[0] = 's';  //�����͹��ڿ� �������� �Ұ���
	//�̰� ������ ��µǳ� ���� �ù�?

	printf("2: %s %s\n", good, bad); //��� �����ϰ� ����:Hood!New Bad!
	//��� �־Ȥ����� �ù�
	
	
	
	
	return 0;
}
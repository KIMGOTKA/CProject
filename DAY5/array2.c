#include <stdio.h>

int main2() {
	//�迭

	//�迭�ʱ�ȭ
	int nums[3] = { 1,2,3 };
	double dnum[] = { 0.0,1.0,2.0 };
	//���ڹ迭�� ���ؼ��� ���ڿ� ������ ����
	char str[] = "hello";
	char ss[] = { 'h','e','l','l','o','\0' }; //\0�� ��Ż��� �ҾȽ� �Ϻ��� �޼��� ������ ���� ���

	printf("%s\n", str);
	printf("%s\n", ss);

	//�迭 ����
	int nums[3];
	//�迭 ����
	//{}�� �ʱ�ȭ�� ���� ���
	nums[0] = 0;
	nums[1] = 1;
	nums[2] = 2;

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���� 158��
	//���̰� 5�� int�� �迭�� �����ϰ� �ʱ�ȭ�Ѵ�. �̶� �� ��Ҵ� ���ϴ� ���� ��´�
	//�ش� �迭�� ���� ��������� ����ϱ�
	//����.���

	int num[5] = { 10,20,30,40,50 };
	int sum = 0;
	double avg = 0.0;
	sum = num[0] + num[1] + num[2] + num[3] + num[4];
	avg = (double)sum / 5.0;


	//����ܾ �Է¹޾Ƽ� �������� ����ϴ� ���α׷�
	char eng[64] = { '\0', };
	char reverse[64] = { 0, };
	
	printf("�ܾ� �Է�:");
	scanf("%s", eng);
	//null���ڰ� �ƴ� ��������
	//reverse[0]=eng[4];
	//reverse[1]=eng[3];
	//reverse[2]=eng[2];
	//reverse[3]=eng[1];
	//reverse[4]=eng[0];


	int j = 0;
	for (int i = 63; i >= 0; i--) {
		if (eng[i] == '\0') {
			continue;

		}
		reverse[j] = eng[i];
		j++;
	}
	printf("%s", reverse);
	

	return 0;
}


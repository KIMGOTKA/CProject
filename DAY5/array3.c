#include <stdio.h>

int main4() {
	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };

	//�迭�� ���� ��� �ʱ�ȭ
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	//������� ���� �� ���
	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("����%d\n", even[i]);
	}




	char mind[30] = "qwerasdzxcv";
	printf("%s\n", mind);
	
	mind[7] = "qwerasdzxcv";   //8��° ��ҷ� null���� ����
	printf("%s\n", mind);
	
	mind[1] = "qwerasdzxcv";   //2��° ��ҷ� null���� ����
	printf("%s\n", mind);
	
	char str[50] = { 0, };          //50ĭ��� null���ڷ� �ʱ�ȭ
	printf("���ڿ��� �Է��ϼ���:");
	scanf("%s", str);

	printf("�Էµ� ���ڿ�: %s\n", str);


	
	return 0;
}

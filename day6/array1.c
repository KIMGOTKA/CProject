#include <stdio.h>

int main1(){
	//�������迭: �迭�ȿ� �迭
	//�������迭: �迭�ȿ� �迭�ȿ� �迭
	int arr[3][2] = { {1,2},{3,4},{5,6} };
	int arr2[3] = { 1,3,5 };

	printf("%d\n", arr2[1]);    //3
	printf("%d\n", arr[0][1]);  //2

	char str1[] = "abcd";  //5ĭ¥�� char: �ʱ�ȭ���ظ�ŭ �˾Ƽ� �迭ũ�� ����
	char str2[5] = "abcd";
	char *str1_1="abcd";  //�����ͷ� �ʱ�ȭ�� ���� 5ĭ¥�� �迭 ����

	char str[5][5] = { "Ŀ��","���","����","��","��" };  //�ѱ��� 2ĭ����, Ŀ��: 5ĭ, Ŀ1 ��1 null1
	//5,5,5,3,3 ĭ ����

	//������ �迭 �������==���߹ݺ���
	for (int i = 0; i < 3; i++) {                //�� for���� �۹迭 �ɰ���
		for (int j = 0; j < 2; j++) {           //�� for���� �� �迭 �ɰ���
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//str �������
	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			printf("%s\n", str[i]);
			break;
		
		}
		printf("%s, ", str[i]);


	}
	

	return 0;
	}
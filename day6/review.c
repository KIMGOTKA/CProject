#include <stdio.h>

int main0() {
	//������Ʈ ����-> �Ӽ�->c/c++->SLD�˻� : no
	int array[5] ={0};
	int arr1[3] = { 1,2,3, };  //~2���� �ִ�

	int num = 10;
	int* pnum = &num;  //������ �ּҸ� �����ϴ� ����: �����ͺ���
	*pnum = 30;   //������
	printf("%d\n", num);   //30

	for (int i = 0; i < 3; i++) {

		printf("%d\n", arr1[i]);
	}
	//=

	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) {
		printf("%d\n", arr1[i]);
	}

		array[1] = 4;
		array[2] = 4;
		array[3] = 4;
		array[4] = 4; //5�� ����� 4�������� �ִ�
		array[0] = 4;
		printf("%d\n", arr1[1]);
	
		//0.0���� 9.0 ���� �����ϴ� �迭 (1.0�� ����)
		//�������
		

		for (double a = 0.0; a < 10.0; a++) {
			printf("%lf\n", a);

		}
		double o[10] = { 0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
		for (int ab = 0.; ab < 10; ab++) {
		
			printf("%lf\n", o[ab]);
		}
	
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main7() {
	int arr[5] = { 1,2,3,4,5 };
	printf("�迭�� �̸�:%p\n", arr);
	printf("ù��° ���%p\n", &arr[0]);  //�迭�� �ּҴ� 

	printf("ù��° ���%p\n", &arr[1]);  // �迭�� 0���� �Ը�� ����
	printf("ù��° ���%p\n", &arr[2]);
	
	
	printf("ù��° ���%p\n", arr+0);  //�ּҴ� +1�ҋ����� ��ĭ���� �̵�
	printf("ù��° ���%p\n", arr+1);  //+1�� �Ը�� �ڷ����� ����(int 4ĭ, char1ĭ)
	printf("ù��° ���%p\n", arr+2);
	
	
	printf("ù��° ��%d\n", *arr+0); //�迭�� 0���� �����ϴ�����
	printf("ù��° ��%d\n", arr[0]); //���θ�

	printf("�ι�° ���%p\n", (&*arr) + 1);//&�����ڿ� *�������ڴ� ���ȴ�
	printf("�׹�° ��%d\n", *(arr + 3));

	return 0;
}


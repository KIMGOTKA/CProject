#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main6() {
	//&���ۻ���: ��� ������ �ּҸ� �˷���
	//*�ֽ��͸���ũ: �ش� �ּ��� �������� �̵�����
	//�ڷ��� ���� *:�����ͺ��� �������


	/*char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	//�����ͺ��� �ʱ�ȭ(����/ �ּҴ���)
	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);
	
	//�����ͺ��� ������(���� ���)
	printf("%c\n", *cptr);
	printf("%c\n", *iptr);
	printf("%lf\n", *dptr);
*/
	//����
	int num = 10;
	int* pnum;  //������ ���� ����
	pnum = &num; //������ ������ �ּҰ� ����

	*pnum= 20;  //pnum�� �����ϰ� �ִ� �ּҿ� 20����
	printf("%d\n", num); //20

	(*pnum)++;  
	(*pnum)++;
	printf("%d\n", num);  //22���;���
	printf("%d\n", *pnum);


	return 0;
}
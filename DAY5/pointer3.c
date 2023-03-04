#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main8() {
	int a= 10;  //변수에 10 담아서 만들고
	int* p = &a;//포인터변수 p에 a의 주소를 담아 만들고
	*p = 20;  //역참조에 20 넣으니a에 20 들어가고
	printf("%d", a);
	*p = 50;     //역참조에서 50넣으니 a에 50들어가서
	printf("%d", a);

	//

	printf("\n");
	//정수 10을 저장하는 int형 변수  number를 선언
	//number가 저장된 메모리 주소를 저장하는 포인터변수 pnumber를 선언합니다
	//그리고 printf함수를 호출해 정수10과 변수 number의 주소를 출력
	//이때 printf 함수의 출력 데이터로는 포인터변수 pnumber만을 이용
	int number = 10;
	int* pnumber = &number;
	printf("값: %d,  주소: %p\n" ,* pnumber, pnumber);
	printf("이거 %d\n",pnumber);
	printf("이거2 %d",number);
	printf("이거3 %p\n",&number);
	
	
	
	
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

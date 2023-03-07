#include <stdio.h>

int main0() {
	//프로젝트 선택-> 속성->c/c++->SLD검사 : no
	int array[5] ={0};
	int arr1[3] = { 1,2,3, };  //~2까지 있다

	int num = 10;
	int* pnum = &num;  //변수의 주소를 저장하는 공간: 포인터변수
	*pnum = 30;   //역참조
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
		array[4] = 4; //5개 만들면 4번까지만 있다
		array[0] = 4;
		printf("%d\n", arr1[1]);
	
		//0.0부터 9.0 까지 보관하는 배열 (1.0씩 증가)
		//전부출력
		

		for (double a = 0.0; a < 10.0; a++) {
			printf("%lf\n", a);

		}
		double o[10] = { 0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
		for (int ab = 0.; ab < 10; ab++) {
		
			printf("%lf\n", o[ab]);
		}
	
	return 0;
}

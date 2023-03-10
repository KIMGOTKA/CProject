#include <stdio.h>
#include<string.h>
int add(int n1, int n2) {
	return n1 + n2;

}

int add2(int n3, int n4) {
	if (n3 < 0) {
		n3 = n3 * -1;
	}
	if (n4 < 0) {
		n4 = n4 * -1;
	}
	int result= n3 + n4;
	return result;
}
int main4() {
	//함수: 연산기호에 한계가 있으니 사용자가 직접 만드는 사용자가 직접 만드는 연산자, 코드를 저장하는 기술
	//(){}
	//+ - * / % : 각각의 기능들이 있다, 하지만 수가 제한되어 있다
	int num1=-3 + 5;// 내가 원하는건 절댓값을 해준다음 더하고 싶다
	printf("%d\n",num1);

	//내가 직접 더하기를 만들어보자
	int num2=add(-3, 5);
	printf("%d\n", num2); //=2

	//절댓값으로 만들어서 더해주는 기능
	int num3 = add2(-3, 5);
	printf("%d\n", num3); //=8

	int c=add2(1, 2);
	int d=add2(3, -1);
	int f=add2(-1, -2);
	printf("%d, %d, %d\n", c, d, f);

	return 0;
}
#include <stdio.h>

int main8() {

	//산술연산자
	//+ : 왼쪽에서 오른쪽 값 더하기
	//-: 왼쪽에서 오른쪽 값 빼기
	//*: 왼쪽에서 오른쪽 값 곱하기
	// /: 왼쪽값을 오른쪽 값으로 나누기
	// %:왼쪽값을 오른쪽 값으로 나눈 나머지

	int num1 = 7, num2 = 3;
	printf("%d + %d=%d\n", num1, num2, num1 + num2);
	printf("%d - %d=%d\n", num1, num2, num1 - num2);
	printf("%d * %d=%d\n", num1, num2, num1 * num2);
	printf("%d / %d=%d\n", num1, num2, num1 / num2);
	printf("%d %% %d=%d\n", num1, num2, num1 % num2);

	

	return 0;
}

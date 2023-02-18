#include <stdio.h>

int main6() {

	//프로그래밍 언어에는 연산기호가 주어진다.
	//+, - */% ...
	3 + 4; //기호는 각가의 기능을 제공하고 사용법이 정해져 있음(더하기는 양옆에 숫자 적어야 함)

	int num1, num2;
	num1 = 1, num2 = 2;

	num1 + num2;
	printf("합은: %d", num1 + num2); //변수를 통해 계산 시 안의 값이 사용되서 계산됨

	int num3 = 0;
	num3 = num1 - num2;  //연산 결과를 변수에 저장할 수 있음
	printf("\n결과는: %d \n", num3);

	return 0;
}

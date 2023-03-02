#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4() {
	//교제 122번
	//정수를 받아서 홀수인지 짝수인지 판별
	
	int num = 0;
	printf("숫자: ");
	scanf("%d", &num);

	double num2;
	num2 = num % 2;

	if (num2 == 0) {
		printf("짝수");

	}
	else{
		printf("홀수");

	}


	//나이에 따른 지하철 요금표
	//6세 미만, 65세 이상 : 0
	//13세 이상, 19세 미만 :500
	//19세 이상 65세미만 : 900
	
	int age = 0;
	printf("숫자: ");
	scanf("%d", &age);

	if (age < 6||age>=65) {
		printf("0");
	}
	if (age >=13&&age<19 ) {
		printf("500");
	}
	if (age >=19&&age<65 ) {
		printf("900");
	}
	
	//아니면

	if (age < 6||age>=65) {
		printf("0");
	}
	else if (age >=13&&age<19) {
		printf("500");
	}
	else {
		printf("900");
	}



	return 0;
}
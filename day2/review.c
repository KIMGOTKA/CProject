#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {

	// 한줄 주석 (crtl + shift + /)
	// 여러 줄 주석 /* ~ */
	/*

	ctrl + z 뒤로가기
	ctrl + y 앞으로가기

	*/

	// 변수(variable) : 저장공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수명;
	char word;                // 문자형 변수 선언 (1byte == 8bit)
	int number;               // 정수형 변수 (4byte)
	double dNumber;           // 실수형 변수 (8byte)
	char str[256];             // 문자열형 변수 (256byte)

	//변수에 값을 대입 (대입 연산자)
	// 변수명 = 데이터값

	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str, "hi world");

	// 변수 초기화 (변수 선언과 동시에 대입까지)
	char str2[256] = "hello world";

	// 변수 사용
	int number2 = number;     //number에 들어있는 값을 사용 (자료형 없이 적어주기)
	printf("문자형: %c\n", word);
	printf("정수형: %d\n", number);
	printf("실수형: %lf\n", dNumber);
	printf("문자열형: %s\n", str);

	// + : 더하기
	// - : 빼기
	// * : 곱하기
	// / : 나누기
	// % : 나머지 구하기

	// 정수형 또는 실수형 변수 2개를 만들고
	// +, -, *, /, % 계산하기

	int qw = 17, er = 24, ty = 32;
	int sum = qw + er + ty;
	int gg = qw - er - ty;
	printf("합계=%d\n", sum);
	printf("빼기=%d\n", gg);
	printf("나누기=%lf\n", qw / (double)er);



	return 0;

}

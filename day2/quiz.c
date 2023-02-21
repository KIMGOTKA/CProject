#include <stdio.h>

int main5() {
	// page 85
	// #2
	int num1 = 27;

	printf("%d\n", num1 > 10);          // 결과가 1이 나오도록
	printf("%d\n", num1 != 5);

	printf("%d\n", num1 >= 27);
	printf("%d\n", num1 == 27);       // 결과가 1

	printf("%d\n", num1 < 30);      // 1
	printf("%d\n", num1 <= 27);

	// #3
	// 국어 = 86, 영어 = 75, 수학 = 88, 사회 = 60, 과학 = 96
	// 평균을 구하세요 (소수점까지)
	int q = 86, w = 75, e = 88, r = 60, t = 96;
	double a = q + w + e + r + t;
	a /= 5;
	printf("1)%lf\n", a);
	double avg = (q + w + e + r + t) / 5;
	printf("2)%lf\n", avg);

	// #4
	// 증감연산자 사용
	int num = 5;
	printf("num의 값: %d\n", ++num);          // 6
	printf("num의 값: %d\n", num++);          // 6
	printf("num의 값: %d\n", ++num);          // 8








	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	//if(){} :()조건이 맞을때만 {}실행
	//if(){}  else{} : ()가 맞을때는 if, 아니면 else의 명령어 실행
	
	//숫자
	//10보다 작은지
	//100보다 작은지
	//1000보다 작은지
	//1000이상인지

	int num = 10;
	if (num < 10) {
		printf("10보다 작다");
	}
	if (num < 100) {
		printf("100보다 작다");
	}
	if (num < 1000) {
		printf("1000보다 작다");
	}
	else{
		printf("1000이상이다");
	}
	//명확한 표기

	if (num < 10) {
		printf("10보다 작다");
	}
	else if (num < 100) {    //위의 if가 틀릴때 검사
		printf("100보다 작다");
	}
	else if (num < 1000) {   //위의 if가 틀릴때 검사
		printf("1000보다 작다");
	}
	else {                   //다 틀릴때
		printf("1000이상이다");
	}

	//예시

	int age = 21;

	if (age > 20) {
		printf("성인");
	}
	else if (age > 14) {    //위의 if가 틀릴때 검사
		printf("청소년");
	}
	else {                   //다 틀릴때
		printf("미성년");
	}

	printf("\nquiz\n");

	int score = 0;
	printf("점수를 입력하세요.: ");
	scanf("%d", &score);

	//90점 이상은 A
	//90점 이상은 B
	//90점 이상은 C
	//90점 이상은 D
	//그 이하는 F

	if (score >= 90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else {
		printf("f");
	}
	return 0;
}
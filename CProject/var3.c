#include <stdio.h>

int main4() {
	//주석 : 이 줄은 메모취급
	/*
	작성자: 김현지
	작성날짜: 2023-2-18
	기능: printf로 문자열 출력
	*/

	//이름 년도 월 일 f 변수로
	//문자[]변수: 이름
	//정수변수; 년도 월 일
	//문자변수: f

	char name[] = "김현지";
	int year = 2023;
	int month = 2;
	int day = 18;
	char word = 'f';


	printf("작성자: %s\n",name);
	printf("작성날짜: %d-%d-%d\n", year, month, day);
	printf("문자변수: %c", word);


	return 0;
}

#include <stdio.h>
//string: 문자열(char들을 붙여놓음)
#include<string.h>
//include<string.h>: 문자열 관련 함수/기능들을 제공
//include <stdio.h>: 입력 및 출력관련 기능들을 제공
int main66() {
	char good[] = "good!";  //6칸
	char* bad = "bad!";     //5칸

	printf("1: %s %s\n", good, bad);  //good!bad!

	//배열로만든 문자열
	good[0] = 'H';
	//good = "New good!";  //컴파일 에러(배열문자열은 일괄수정 불가능)


	//포인터로 만든 문자열
	bad = "New Bad!";
	//bad[0] = 's';  //포인터문자열 개별수정 불가능
	//이거 없으면 출력되네 뭐지 시발?

	printf("2: %s %s\n", good, bad); //결과 예측하고 실행:Hood!New Bad!
	//출력 왜안ㅈ되지 시발
	
	
	
	
	return 0;
}
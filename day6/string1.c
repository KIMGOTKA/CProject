#include <stdio.h>
//string: 문자열(char들을 붙여놓음)
#include<string.h>
//include<string.h>: 문자열 관련 함수/기능들을 제공
//include <stdio.h>: 입력 및 출력관련 기능들을 제공
int main2() {
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

	//교제205
	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50] = { 0 };
	char str4[50] = { 0 };
	
	//문자열 길이 구하기
	int str1_len = strlen(str1); //str1의 문자 갯수를 알려줌
	int str2_len = strlen(str2); //str1의 문자 갯수를 알려줌(마지막 null/\0제외)

	printf("str1의 길이: %d, str2의 길이:%d\n", str1_len, str2_len);

	//문자열 복붙
	strcpy(str3, str1);  //strcpy(목적지, 소스);
	printf("%s\n", str3);
    // 원하는 갯수만 복붙
	strncpy(str4, str1, 5);//strcpy(목적지, 소스, 갯수);
	printf("%s\n", str4);
	
	//sprintf:printf 형태로 저장
	sprintf(str4, "내가 원하는 문자열: %s", str1);
	// = sprintf(str4, " %s", str1);
	printf("%s\n", str4);

	char str5[50]="Michael";
	char str6[50]="Michael";

	//문자열 이어붙이기 strcat
	strcat(str5,"Bolton"); //목적지 뒤에 단어붙음
	printf(" %s\n", str5);

	strncat(str6, "Jackson Five", 7);
	printf(" %s\n", str6);

	//strcmp: 두 문자열을 비교/문자열은 ==가 안됨. 같다면 0이라고 알려줌
	if (strcmp("안녕", "안녕3") == 0) {
		printf("같다");
	}
	else {
		printf("다르다\n");
	}
	//str5, str6비교
	printf("비교결과: %d\n", strcmp(str5, str6));//다르다
	
	//str5, str6비교 7글자만 비교
	printf("비교결과: %d\n", strncmp(str5, str6,7));//같다


	printf("str6을 입력>>");
	scanf("%[^\n]s", str6);  //scanf로 띄어쓰기까지 입력
	printf("비교결과: %d\n", strcmp(str5, str6));

	return 0;
}
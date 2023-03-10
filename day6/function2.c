#include <stdio.h>

//함수의 구조: 입력값, 반환(return)값, 자료형
//자료명 함수명(){}
//입력, 반환값 생략가능,자료형은 반환값을 따라감
//입력값은()에 변수로 준비, 내용은{}에 입력


//입력값이 없고, 반환값이 없는것
void a() {
//return을 안할거니 생략, 자료형은 비어있다는 뜻의 void
	//입력값을 안받은것이니 ()는 비워둠
	//사용자가 함수를 사용할 시 동작할 코드를 입력
	char str[64];
	printf("첫번째 함수 사용!\n");
	scanf("%s", str);
	printf("내가 입력한 문자열은>> %s", str);

}

//입력값 있고 반환값 없는거
void b(char* str) {
	printf("\n내가 전달한 문자열> %s\n", str);
 }
//입력값 없고 반환값 있는
char* c() {
	char ss[50];
	printf("입력할 문자열을 적으세요>>");
	scanf("%s", ss);  //char*
	return ss;
}
//입력값 있고 반환값 있는
int d(int n1, int n2, int n3) {
	printf("전달받은 값 : %d, %d, %d", n1, n2, n3);//전달받고자 하는 만큼 변수 생성
	printf("\n다 더하면");
	int str1 = n1 + n2 + n3;
	return str1;  //함수명 앞의 자료형은 return 값의 자료형과 동일하게
}

int main99() {
	
	//a();  //함수의 사용법/입력 없고 반환없는


	//b("문자열");//입력 있고 반환 없는

	char *str = c();  //입력 없고 반환 있는(반환값이 있으면 변수로 받는거나 변수처럼 사용)
printf("반환 값: %s\n", str);//오류 왜나는지 모르겠는는거 2 넘어가 시발
printf("반환 값: %s\n", c()); //이것도 같은 오류남 넘겨 시바

int str1 = d(5, 7, -2);  //입력있고 반환도 있다.
printf("결과값: %d\n", str1);
printf("결과값: %d\n", d(1,1,-1));
return 0;
}
#include <stdio.h>
#include<string.h>

int main3() {
	//교재 209ㅔ 1,2
	//1.두 개의 문자열(이름)을 입력받아 같은지 같지 않은지 알려주는 프로그램
	char A[50] = {0};
	char B[50] = {0};
	printf("이름을 입력하시오: ");
	scanf("%[^\n]s", A);
	rewind(stdin);  //버퍼 띄우기
	printf("두번째 이름을 입력하시오: ");
	scanf("%[^\n]s", B);

	if (strcmp(A, B) == 0) {
		printf("같습니다.\n");
	}
	else {
		printf("다릅니다.\n");
	}


	//2. 위 입력받은 문자열 중 길이가 긴 문자열부터 출력하게 하시오
	int a = strlen(A);
	int b = strlen(B);
	if (a > b) {
		printf("길이가 더 긴 이름은 %s, 짧은 것은 %s입니다.\n", A, B);
	}
	else {
		printf("길이가 더 긴 이름은 %s, 짧은 것은 %s입니다.\n", B, A);
	}
	return 0;
}
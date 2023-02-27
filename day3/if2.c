#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	//if문 반대
	//if(){} else{}

	int age;
	printf("나이를 입력해주세요.");
	scanf("%d", &age);
	if (age>=20) {
	//조건이 맞을때
		printf("성인입니다.");
	}
	
	else {
	//조건이 틀릴때
		printf("미성년입니다.");
	}

	return 0;
}
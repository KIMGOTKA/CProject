#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//교제 158번
	//길이가 5인 int형 배열을 선언하고 초기화한다. 이때 각 요소는 원하는 값을 담는다
	//해당 배열에 대해 다음결과를 출력하기
	//총합.평균

	int num[5] = { 10,20,30,40,50 };
	int sum = 0;
	double avg = 0.0;
	sum = num[0] + num[1] + num[2] + num[3] + num[4];
	avg = (double)sum / 5.0;


	//영어단어를 입력받아서 역순으로 출력하는 프로그램
	char eng[64] = { '\0', };
	char reverse[64] = { 0, };
	
	printf("단어 입력:");
	scanf("%s", eng);
	//null문자가 아닌 시점부터
	//reverse[0]=eng[4];
	//reverse[1]=eng[3];
	//reverse[2]=eng[2];
	//reverse[3]=eng[1];
	//reverse[4]=eng[0];


	int j = 0;
	for (int i = 63; i >= 0; i--) {
		if (eng[i] == '\0') {
			continue;

		}
		reverse[j] = eng[i];
		j++;
	}
	printf("%s", reverse);
	

	return 0;
}


#include <stdio.h>

int main4() {
	int i;
	int odd[3];
	int even[5] = { 2,4,6,8,10 };

	//배열의 개별 요소 초기화
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	//개별요소 접근 및 출력
	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++) {
		printf("내눈%d\n", even[i]);
	}




	char mind[30] = "qwerasdzxcv";
	printf("%s\n", mind);
	
	mind[7] = "qwerasdzxcv";   //8번째 요소로 null문자 대입
	printf("%s\n", mind);
	
	mind[1] = "qwerasdzxcv";   //2번째 요소로 null문자 대입
	printf("%s\n", mind);
	
	char str[50] = { 0, };          //50칸모두 null문자로 초기화
	printf("문자열을 입력하세요:");
	scanf("%s", str);

	printf("입력된 문자열: %s\n", str);


	
	return 0;
}

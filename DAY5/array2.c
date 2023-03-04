#include <stdio.h>

int main2() {
	//배열

	//배열초기화
	int nums[3] = { 1,2,3 };
	double dnum[] = { 0.0,1.0,2.0 };
	//문자배열에 한해선는 문자열 문법을 제공
	char str[] = "hello";
	char ss[] = { 'h','e','l','l','o','\0' }; //\0는 통신상태 불안시 완벽히 메세지 전달을 위해 사용

	printf("%s\n", str);
	printf("%s\n", ss);

	//배열 선언
	int nums1[3];//질문
	//배열 대입
	//{}는 초기화할 때만 사용
	nums1[0] = 0;
	nums1[1] = 1;
	nums1[2] = 2;

	return 0;
}

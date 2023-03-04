#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main7() {
	int arr[5] = { 1,2,3,4,5 };
	printf("배열의 이름:%p\n", arr);
	printf("첫번째 요소%p\n", &arr[0]);  //배열의 주소는 

	printf("첫번째 요소%p\n", &arr[1]);  // 배열의 0번방 규모와 같다
	printf("첫번째 요소%p\n", &arr[2]);
	
	
	printf("첫번째 요소%p\n", arr+0);  //주소는 +1할떄마다 옆칸으로 이동
	printf("첫번째 요소%p\n", arr+1);  //+1의 규모는 자료형과 동일(int 4칸, char1칸)
	printf("첫번째 요소%p\n", arr+2);
	
	
	printf("첫번째 값%d\n", *arr+0); //배열이 0부터 시작하는이유
	printf("첫번째 값%d\n", arr[0]); //줄인말

	printf("두번째 요소%p\n", (&*arr) + 1);//&참조자와 *역참조자는 상쇄된다
	printf("네번째 값%d\n", *(arr + 3));

	return 0;
}


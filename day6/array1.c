#include <stdio.h>

int main1(){
	//이차원배열: 배열안에 배열
	//삼차원배열: 배열안에 배열안에 배열
	int arr[3][2] = { {1,2},{3,4},{5,6} };
	int arr2[3] = { 1,3,5 };

	printf("%d\n", arr2[1]);    //3
	printf("%d\n", arr[0][1]);  //2

	char str1[] = "abcd";  //5칸짜리 char: 초기화해준만큼 알아서 배열크기 잡음
	char str2[5] = "abcd";
	char *str1_1="abcd";  //포인터로 초기화를 통해 5칸짜리 배열 생성

	char str[5][5] = { "커피","라면","우유","물","빵" };  //한글은 2칸차지, 커피: 5칸, 커1 피1 null1
	//5,5,5,3,3 칸 차지

	//이차원 배열 전부출력==이중반복문
	for (int i = 0; i < 3; i++) {                //밖 for문은 밖배열 쪼개기
		for (int j = 0; j < 2; j++) {           //안 for문은 안 배열 쪼개기
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//str 전부출력
	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			printf("%s\n", str[i]);
			break;
		
		}
		printf("%s, ", str[i]);


	}
	

	return 0;
	}
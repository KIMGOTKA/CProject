// DAY5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main0()
{
	//제어문 : 조건문, 반복문, 기타제어문
	//제어문이란, 원래 코드는 위엣 아래로 외쪽에서 오른쪽으로 진행 되지만 이 흐름을 바꿀 수 있는 흐름
	//if, switch, for, while, break, continue...
	
	//조건문: if~else
	//if (){}: ()에는 조건식을 {}에는 조건식이 맞을때 실행될 코드를 적으면 됨
	if (5 == 5) {

		printf(" 5는 5와 같다\n");
	}
	else if (5 != 5) {
		printf("5는 5와 같지 않다\n");
	}
    else  {
		printf("모르겠다\n");
	}
	//조건문 switch~case~break
	//switch(){}: 내용과 case의 내용이 같은 부분부터 코드 실행
	switch (5) {
	case 1:
		printf("대상은 1과 같다");
		break;
		
	case 5:
		printf("대상은 5과 같다");
		break;
	default:
		printf("대상과 같은 값이 없다");

	}
 
	//반복문 while
	//while은 플래그 i가 필요, 중복코드 관리
	int i = 0;
	while (i < 3) {
		printf("반복횟수 %d번",i + 1); //i 보다 1 더 큰 숫자 출력
		i++;   //변수에 들어있는 값을 1 증가
	}
	
	for (int i = 0; i < 3; i++) {
		printf("\n 반복횟수 %d회", i + 1); //반복하고자 하는 코드만 남음
	}
	
	//기타제어문 continue, break
	//break : 만복문을 종료
	//continue: 반복문 처음 ()으로 돌아감(1회성 취소)
	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			break;  //i 가 2일때 반복문이 종료

		}
		
		
	}
	for (int i = 0; i < 3; i++) {
		if (i == 1) {
			continue;  //continue보다 아래의 코드는 무시하고 위로 올라감

		}
			
	}
	
	return 0;
}


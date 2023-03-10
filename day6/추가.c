#include <stdio.h>
void A(int n1) {
	int n2 = n1 + 200;
	int W = n1/7;
	int E = (n2-1)/7;
	int R = E - W;
	printf("%d\n",R);
}

void T(int a) {
	
	double b = (double)a / 100;
	printf("%d CM는 %lf M 입니다", a, b);
	
}

void Q(int num1) {
	
	
	int time = num1 / 3600;
	int min1 = num1 % 3600;
	int min2 = min1 / 60;
	int sec = min1 % 60;

	printf("%d시 %d분 %d초", time, min2, sec);

}


int main19(){
//3. 정수 한개를 매개변수로 삼아 그 수보다 200더 큰 정수 사이 중 7의 배수가 몇개나 존재하는지 반환해주는 함수 정의
	//예를들어 100을 전달받으면 100-300사이 7의 배수의 갯수를 반환
	// 정수를 입력하세요 100
	//100과 200 사이 7의 배수는 28개입니다
	A(200);


	//4. 사용자로부터 키를 입력받아 단위로 반환하는 함수 정의
	//키 scanf 입력은 메인 함수에서 진행 정의한 함수에서는 매개변수로 받아 m 단위로 반환
	//키를 cm로 입력하세여:181cm
	//결과 1.81m
	
	
	int a;
	printf("키 정수로 입력하세요.\n");
	scanf("%d", &a);
	
	T(a);
	
	


	//5. 초를 입력받아 매개변수로 전달
	//함수는 전달받은 포를 시/분/초로 출력
	//printf("초를 입력해 주십시오: "); scanf("%d", &num1);
	int S;
	printf("초를 입력: \n");
	scanf(" %d", &S);

	Q(S);





return 0;
}
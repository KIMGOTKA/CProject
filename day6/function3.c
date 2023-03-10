#include <stdio.h>

//정수 2개를 전달받아 더 큰 정수를 반환(같으면 0)
int big(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}
void num(int n3, int n4) {
	int p = n3 + n4;
	int m = n3 - n4;
	int d = n3 / n4;

	printf("위 숫자의 합은 %d, 차는 %d, 나누기값은 %d, 입니다.\n", p, m, d);
	return 0;
}
int num2(int n5, int n6) {
	
	int sum = 0;
	
for (int i = n5; i <= n6; i++) {
		sum += i;
	}

	printf("%d와 %d 사이의 숫자 합은: %d\n", n5, n6, sum);
	return sum;

}

int main6() {
	//int result;
	//result = big(3, 5);  //3 5 를 비교
	//printf("첫번째 결과: %d\n", result);

	//result = big(8, 2); 
	//printf("두번째 결과: %d\n", result);

	//result = big(4, 4);  
	//printf("세번째 결과: %d\n", result);


	//1. 두 개의 정수를 매개변수로 입력받아 두 정수의 덧셈 뺄셈 곱셈 나눗셈 결과를 모두 출력하는 함수 정의
	
	num(3,5);


	//2. 두 정수를 매개변수로 받아 두 정수 사이의 모든 숫자의 합을 반환하는 함수 정의
	//5와 9사이 정수의 총 합은 21
	
	num2(5, 9);


	//3. 정수 한개를 매개변수로 삼아 그 수보다 200더 큰 정수 사이 중 7의 배수가 몇개나 존재하는지 반환해주는 함수 정의
	//예를들어 100을 전달받으면 100-300사이 7의 배수의 갯수를 반환
	// 정수를 입력하세요 100
	//100과 200 사이 7의 배수는 28개입니다



	//4. 사용자로부터 키를 입력받아 단위로 반환하는 함수 정의
	//키 scanf 입력은 메인 함수에서 진행 정의한 함수에서는 매개변수로 받아 m 단위로 반환
	//키를 cm로 입력하세여:181cm
	//결과 1.81m



	//5. 초를 입력받아 매개변수로 전달
	//함수는 전달받은 포를 시/분/초로 출력

	return 0;
}
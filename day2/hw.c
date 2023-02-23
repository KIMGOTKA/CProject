#include <stdio.h>

int main() {
	// page101 #3, #4, #5
	/* #3
	   바구니에 복숭아를 10개씩 담을 수 있다.
	   복숭아 개수를 사용자로부터 입력 받고 바구니 수를 출력하자
	   예를 들어, 복숭아 16개를 입력 받으면 바구니 2개가 필요
	   복숭아 157개를 입력 받으면 바구니 16개가 필요

	   힌트) % : 나머지 구하기 기호를 통해서 나누어 떨어지면 값이 0과 같다
	   9 % 3 == 0 (9는 3으로 나누어 떨어진다, 3의 배수이다)수정해!
*/
	
	
	int num;
	int box, aa;

	

	printf("복숭아 개수를 입력해 주십시오. :");
	scanf("%d", &num);

	box = num / 10;
	aa = num % 10;
	
	(aa > 0) ? printf("복숭아 상자는 %d 개 입니다.\n", ++box) : printf("복숭아 상자는 % d 개 입니다.\n", box);
	
	
	
	

	  /* #4
	   실수형 변수에 값을 입력 받고 1의 자리 숫자만 출력하는 프로그램 만들기
	   예를 들어, 126.12 ==> 6  /  33.14 ==> 3

	   힌트) 나누기와 형변환을 적절히 사용
	   */

	double num2;
	int num3, num4;

	printf("임의의 실수를 입력해 주십시오.: ");
	scanf("%lf", &num2);

	num3 = num2;
	num4 = num3 % 10;


	printf("입력한 숫자에서 1의 자리 수: %d\n", num4);

	   /*

	   #5
	   사용자로부터 초(second)를 입력 받아 [시, 분, 초] 형태로 변환해보세요
	   예를 들어, 3665 ==> 1시간 1분 6초
	 */

	
	int num1;
	int sec, min1, min2, time;
	


	printf("초를 입력해 주십시오: ");
	scanf("%d", &num1);

	time = num1 / 3600;
	min1 = num1 % 3600;
	min2 = min1 / 60;
	sec = min1 % 60;



	printf("%d초는 %d시간 %d분 %d초 입니다.\n", num1, time, min2, sec);

	



	return 0;
}
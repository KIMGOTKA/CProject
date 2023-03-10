#include <stdio.h>




	
int main(){
	int a; 
	
	printf("키를 입력하세요.\n");
	
	scanf(" %d", &a);
	
	double b = (double)a / 100;
	printf("%d CM는 %lf M 입니다", a, b);
	


return 0;
}
/* 실습과제 #5

ㅇ목적
1. 재귀함수 연습하기
2. main 함수에서는 scanf로 정수를 입력 받고 sun_n 계산한 값을 출력한다. 
*/
#include <stdio.h>
int sum_n(int n)
{
	if(n==1)
	{
		return 1;
	} 
	return n+sum_n(n-1); //재귀 함수 반복 
} 
int main()
{
	int n;
	//정수형 변수 선언(n:n 값 저장)  
	printf("n을 입력하시오 : "); scanf("%d",&n);
	//"n을 입력하시오 : ", n 값 입력 
	printf("1부터 n까지의 합은 %d이다.",sum_n(n));
	//"1부터 n까지의 합은 (sun_n(n))이다." 출력	 
}

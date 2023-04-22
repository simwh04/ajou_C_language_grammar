/* 실습과제 #5

ㅇ목적
1. a의 b제곱을 계산하는 int myPower(int a,int b) 함수를 재귀 함수로 구현한다.(a는 양수이며, b는 음수가 아닌 정수이다.)
2.main 함수에서는 scanf로 정수를 입력 받고 myPowrer 함수로 계산한 값을 출력한다.
3.힌트: a의b제곱 = a의 b-1제곱 * a, a의 0제곱은 1이다. 
*/
#include <stdio.h>
int myPower(int a,int b) //a의 b제곱 만드는 재귀 함수 
{
	if(b==0)
	{
		return 1;
	}
	return a*(myPower(a,b-1));
}

int main()
{
	int a,b;
	//정수형 변수 선언  
	printf("a, b 값을 입력하시오 : "); scanf("%d %d",&a,&b);
	//"a, b 값을 입력하시오 : " 출력, a,b 값 입력 
	printf("%d의 %d제곱은 %d",a,b,myPower(a,b));
	//"a의 b제곱은 (myPower(a,b))" 출력 
}

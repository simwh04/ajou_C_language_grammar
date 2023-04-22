/* 실습과제 #5

ㅇ목적
1. 반복문 연습하기
2. 2의 n제곱을 반복문을 이용하여 계산한다. 
	2-1. n은 0보다 크거나 같은 정수이고 키보드로부터 입력 받는다. 
*/
#include <stdio.h>

int main()
{
	int square,result=1;
	//정수형 변수 선언(square:지수 값 저장, result:결과 값 저장) 
	scanf("%d",&square);
	//square 값 입력 
	for (int i=1;i<=square;i++)
	{
		result *= 2;
		//result = result * 2; 
	}
	printf("2의 %d제곱은 : %d",square,result);
	//"2의 (square)제곱은 : (result)" 출력 
}

/* 실습과제 #4

ㅇ목적
1. 조건문 연습하기 
2. 키보드로부터 택배의 중량을 입력 받은 후, 택배 요금을 출력하는 프로그램을 작성하시오
	2-1. 중량은 정수형 값이라 가정한다.
	2-2. if-else 구문을 사용한다. 

*/
#include <stdio.h>

int main()
{
	int courier_weight;
	//정수형 변수 선언 (courier_weight:택배 중량 값)
	printf("택배 중량 : "); scanf("%d",&courier_weight);
	//"택배 중량 : " 출력, a 값을 입력
	if(courier_weight <= 2) 
	{
		printf("배송료: 4000");
	}//2kg까지 금액 4,000원 요금 출력 
	else if(courier_weight <= 5)
	{
		printf("배송료: 5000");
	}//5kg까지 금액 5,000원 요금 출력 
	else if(courier_weight <= 10)
	{
		printf("배송료: 6000");
	}//10kg까지 금액 6,000원 요금 출력 
	else if(courier_weight <= 20)
	{
		printf("배송료: 7000");
	}//20kg까지 금액 7,000원 요금 출력 
	else
	{
		printf("배송 불가");
	}//20kg 초과시 "배송불가" 출력 
}

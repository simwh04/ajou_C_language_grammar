/* 실습과제 #1

ㅇ목적
1. 간단한 연산과 printf(), scanf의 사용해 보기 
2. 변수 선언, 매크로 상수 

*/
#include <stdio.h>
#define apple_price 1200
//매크로 상수로 apple_price 값을 1200으로 선언
int main()
{
	int apple_count,apple_extended_price;
	//정수형 변수 선언 (apple_count:사과 개수,apple_extended_price :사과 총 금액)
	printf("사과 개수 : "); scanf("%d",&apple_count);
	//"사과 개수 : " 출력, apple_count 값을 입력
	apple_extended_price = apple_count *  apple_price;
	//apple_extended_price 변수에 apple_count(사과 개수) 변수 값과 apple_price(1200원)을 곱한 값을 저장(대입) 
	printf("사과의 개당 가격은 %d원이며 총 금액은 %d원이다.",apple_price,apple_extended_price);
	//"사과의 개당 가격은 (apple_price : 1200원)원이며 총 금액은 (apple_extended_price : 사과 총 금액)원이다." 출력 
}

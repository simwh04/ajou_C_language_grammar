/* 실습과제 #1

A. 1m = 39.37 inches
B. 1m = 3.281 feet
C. 데이터는 모두 실수형이다.(double형으로 선언) 
D. 출력할 때, 소수 둘째 자리까지 표시한다. 

*/
#include <stdio.h>
#define inches 39.37
//매크로 상수로 inches 값을 39.37으로 선언 
#define feet 3.281
//매크로 상수로 feet 값을 3.281으로 선언 
int main()
{
	double meter;
	//실수형 변수 선언 (meter : meter 값 저장)
	printf("meter 단위의 길이를 입력하시오: "); scanf("%lf",&meter);
	//"meter 단위의 길이를 입력하시오: " 출력, meter 값을 입력
	printf("결과:\n");
	//"결과" 출력 & 줄바꿈 
	printf("%.2lf inches\n",meter * inches);
	//"(meter * inches) inches" 출력& 줄바꿈 
	printf("%.2lf feet",meter * feet);
	//"(meter * feet) feet" 출력
}

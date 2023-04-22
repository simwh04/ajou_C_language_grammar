/* 실습과제 #3

A. 택시요금 1마일 당 1.5 달러이며 주행 기록계의 수치는 마일 단위라고 가정한다.
B. 프로그램 내에서 1마일 당 요금을 매크로 상소를 사용하여 나타내고 사용한다.
C. 데이터는 모두 실수형이다.
D. 두 수치를 인자(argument)로 보내면 거리를 계산하여 반환하는 find_distance 함수와 거리를
인자(argument)로 보내면 택시요금 계산하여 반환하는 find_fare 함수를 작성하여 사용한다. 

*/
#include <stdio.h>
#define mile 1.5
//매크로 상수로 mile 값을 1.5으로 선언

double find_distance(double a,double b)
{
	double distance = b-a;
	//실수형 변수 선언, b-a 값 대입 
	return distance;
	//distance 값 반환 
}

double find_fare(double a,double b)
{
	double fare= mile*(b-a);
	//실수형 변수 선언, mile*(b-a) 
	return fare;
	//fare 값 반환 
}
int main()
{
	double a,b;
	//실수형 변수 선언 
	printf("택시 요금 계산기\n");
	//"택시 요금 계산기\n " 출력
	printf("출발 시의 주행 기록계 수치: ");
	//"출발 시의 주행 기록계 수치 :" 출력 
	scanf("%lf",&a);
	//a 값을 입력
	printf("도착 시의 주행 기록계 수치: ");
	//"도착 시의 주행 기록계 수치 : " 출력 
	scanf("%lf",&b);
	//b 값을 입력
	printf("총 %.1lf 마일을 주행했으며 요금은 마일 당 $%.2lf으로, 총 요금은 %.2lf입니다.",find_distance(a,b),mile,find_fare(a,b));
	//"총 (find_distance(a,b) 마일을 주행했으며 요금은 마일 당 $(mile)으로, 총 요금은 (find_fare(a,b))" 출력 
}

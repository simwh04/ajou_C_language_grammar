/* 실습과제 #2

A. 4개의 정수를 입력 받은 후, 정수의 합과 평균을 계산하는 프로그램을 작성한다. 
B. 입력 데이터와 합은 정수형(int형으로 선언), 평균은 실수형 데이터(double형으로 선언)이다. 

*/
#include <stdio.h>
int main()
{
	int a1,a2,a3,a4,sum;
	//정수형 변수 선언 (a1,a2,a3,a4 : 정수 값 저장, sum : 4개의 정수의 합) 
	double average;
	//실수형 변수 선언 (average : 평균 값 저장)
	printf("4개의 정수를 입력하시오: "); scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
	//"4개의 정수를 입력하시오: " 출력, a1,a2,a3,a4 값을 입력 
	sum = a1 + a2 + a3 + a4;
	//4개의 정수의 합 계산
	average = sum / 4.0; 
	//4개의 정수의 평균 값 계산 
	printf("합은 %d이며 평균은 %.2lf이다.",sum,average);
	//"합은 (sum)이며 평균은 (average)이다." 출력
}

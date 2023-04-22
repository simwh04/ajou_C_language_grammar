/* 실습과제 #3

A. a, b 두 수의 기하평균은 루트a,b 이다. 
B. 제곱근을 계산하기 위해 sqrt 함수를 사용한다. 이때, math.h를 include한다. 
C. 데이터는 모두 실수형이다. 

*/
#include <stdio.h>
#include <math.h>

int main()
{
	double a,b;
	//실수형 변수 선언 
	scanf("%lf %lf",&a,&b);
	//a,b 값을 입력 
	printf("%.2lf",sqrt(a*b));
	//"(루트ab)" 출력
}

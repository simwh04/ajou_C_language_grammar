/* 실습과제 #3

A. 다음 식에서 C는 섭씨, F는 화씨이다. 
	C = ( F - 32 ) / 1.8
B. 데이터는 모두 실수형이다.
C. 함수 내에서 화씨 온도를 입력 받고 입력 받은 값을 반환하는 getF, 화씨를 인자(argument)로 보내면 섭씨를 계산하여 반환하는 convertFtoC,
화씨와 섭씨를 인자(argument)로 보내면 이를 출력하는 printResult 함수를 작성하여 사용한다. 

*/
#include <stdio.h>
double getF()
{
	double F;
	//실수형 변수 선언 (F : 화씨 온도 값 저장)
	scanf("%lf",&F);
	//F 값을 입력
	return F;
	//F 값을 반환 
} 

double convertFtoC(double F)
{
	double C;
	//실수형 변수 선언 (C : 섭씨 온도 값 저장)
	C = ( F - 32 ) / 1.8;
	//조건 식을 사용하여 화씨 온도를 섭씨 온도로 계산 
	return C;
	//C 값을 반환 
}

void printResult(double C,double F)
{
	printf("화씨 %.2lf도는 섭씨 %.2lf도이다.",F,C);
	//"화씨 (F)도는 화씨 (C)도이다." 출력
}

int main()
{
	double C,F;
	//실수형 변수 선언 (C : 섭씨 온도 값 저장, F : 화씨 온도 값 저장)
	printf("화씨 온도를 입력하시오: ");
	//"화씨 온도를 입력하시오: " 출력
	F = getF();
	//getF 함수 호출 
	C = convertFtoC(F);
	//convertFtoC 함수 호출
	printResult(C,F);
	//printResult 함수 호출 
}

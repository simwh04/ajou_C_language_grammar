/* 실습과제 #3

A. 경과시간이 t 시간이라고 할 때,냉장고의 섭씨 온도 T는 다음 식으로 결정된다.
	T = ( 4 * t^2 ) / ( t + 2 ) - 20 
B. 사용자는 경과 시간을 시와 분으로 입력하므로 이를 시 단위로 변환하는 것이 필요하다.
C. 입력 데이터는 정수형, 시간 단위로 변환된 시간과 계산된 온도는 실수형 데이터이다.
D. 시와 분을 인자(argument)로 보내면 시 단위로 변환하여 반환하는 convertTime 함수,
시단위의 시간을 인자(argument)로 보내면 경과 시간을 반환하는 함수 getTemperature 함수를 작성하여 사용한다.

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

double convertTime(int hour, int minute)
{
	double change_hour;
	//실수형 변수 선언 (change : 시, 분 값을 시간으로 계산한 값 저장)
	change_hour = hour + (1.0 / 60)*minute;
	//시, 분 값을 시간으로 계산
	return change_hour;
	//change_hour 값을 반환
}

double getTemperature(double t)
{
	double T;
	//실수형 변수 선언 (T : 섭씨 온도 값 저장)
	T = ( 4 * t*t ) / ( t + 2 ) - 20;
	//조건 식을 사용하여 경과 시간을 냉장고의 섭씨 온도로 계산
	return T;
	//T 값을 반환 
}

int main()
{
	int hour, minute;
	//정수형 변수 선언 (hour : 시간값 저장, minute : 분 값 저장)
	double T,t;
	//실수형 변수 선언 (T : 섭씨 온도 값 저장, t : 경과 시간 값 저장)
	printf("경과 시간을 입력하시오(시간 분): "); scanf("%d %d",&hour,&minute);
	//"경과 시간을 입력하시오(시간 분): " 출력, hour,minuye 값을 입력
	t = convertTime(hour,minute);
	//convertTime 함수 호출 
	T = getTemperature(t);
	//getTemperature 함수 호출
	printf("정전으로부터 %d시간 %d분(%.1lf 시간)이 지나 현재 냉장고의 온도는 섭씨 %.2lf도이다.",hour,minute,t,T);
	//"정전으로부터 (hour)시간 (minute)분(t 시간)이 지나 현재 냉장고의 온도는 섭씨 (T)도이다." 출력 
}

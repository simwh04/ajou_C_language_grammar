/*
프로그램 설명 : Euler 알고리즘을 이용하여 최대공약수 
작성자 정보 : 디지털미디어학과 202322164 심우현
프로그램작성일 : 4/18 목요일 
*/

#include <stdio.h>
int GCD(int a,int b)
{
	if(b==0)
	{
		return a; // 계산과정에서 0값 즉 더이상 나머지가 없을때 저장한 최대 공약수 a 값 출력 
	}
	return GCD(b,a%b); //나머지 값을 입력하는 재귀함수 
}
/* <GCD 함수 식 변환>
 a / b = 몫....나머지
=> a = b * 몫 + 나머지 
 식 변환해서 사용 나머지 값으로 
*/
int main()
{
	int a,b,c;
	re: //다시 값을 받음 
	printf("최대 공약수 계산을 위한 정수를 입력하시오 :");
	scanf("%d %d",&a, &b); //a,b값  
	if(a<b){
        c = a;
        a = b;
        b = c; //a<b 일때 a와 b값의 기준을 바꿈 
    }
    if( a==b || a<0 || b<0 ) //a>b>0 조건에 모순되는 경우 다시 값을 입력 
	{
		printf("다시 입력해주세요\n");
		goto re;
	}
	printf("GCD(%d,%d) = %d", a, b, GCD(a, b)); //함수 GCD호풀 값을 출력 
}

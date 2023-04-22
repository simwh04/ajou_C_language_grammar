/* 실습과제 #4

ㅇ목적
1. 키보드로부터 점수를 입력 받아 점수에 따라 Excellent, Good, Fair, Poor를 출력하는 프로그램을 작성하시오.
	1-1. 90점 이상 (90점 포함) : Excellent
	1-2. 80점 이상, 90점 미만 (80점 포함) : Good 
	1-3. 70점 이상, 80점 미만 (70점 포함) : Fair 
	1-4. 70점 미만 (70점을 포함하지 않음) : Poor 
2. 점수는 정수값만 입력된다고 가정한다. 
*/
#include <stdio.h>

int main()
{
	int score;
	//정수형 변수 선언 (score:점수 값)
	printf("점수를 입력하시오 : "); scanf("%d",&score);
	//"점수를 입력하시오 : " 출력, score 값을 입력
	if(score >= 90) 
	{
		printf("Excellent");
	}//90점 이상 (90점 포함) : Excellent 출력 
	else if(score >= 80 && score <90)
	{
		printf("Good");
	}//80점 이상, 90점 미만 (80점 포함) : Good 출력 
	else if(score >= 70 && score <80)
	{
		printf("Fair");
	}//70점 이상, 80점 미만 (70점 포함) : Fair 출력 
	else
	{
		printf("Poor");
	}//70점 미만 (70점을 포함하지 않음) : Poor 출력 
}


/* 실습과제 #5

ㅇ목적
1. 사용자가 n을 입력하였을 때, 1부터 n까지의 수와 그 수들의 합을 출력하는 프로그램을 while문과 for문을 사용하여 작성한다. (결과가 두번씩 출력이 됨) 
2. 강의노트 6번, 5, 6페이지의 예제를 참고한다. 
*/
#include <stdio.h>

int main()
{
	int n,result=0;
	//정수형 변수 선언(n:n 값 저장, result:결과 값 저장) 
	scanf("%d",&n);
	//n 값 입력 
	for (int i=1;i<=n;i++) //for문 
	{
		printf("%d ",i);
		result += i;
		//result = result + n; 
	}
	printf("\n%d\n",result);
	//"(result)" 출력
	int i=1; result=0;
	//초기화 
	do
	{
		printf("%d ",i);
		result += i;
		//result = result + n; 
		i++;
	}while(i<=n); //do-while 문 
	
	printf("\n%d",result);
	//"(result)" 출력	 
}

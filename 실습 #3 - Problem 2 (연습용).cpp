/* 실습과제 #4

ㅇ목적

1. 문자를 입력 받아 'B' 혹은 'b' 이면 Battleship, 'C' 혹은 'c' 이면 Cruiser, 'D' 혹은 'd' 이면 Destroyer, 그 외의 문자면 Unknown을
출력하는 프로그램을 switch 구문을 사용하여 작성하시오.  
*/
#include <stdio.h>

int main()
{
	char word;
	//문자형 변수 생성
	printf("단어를 입력하시오 : ");
	//"단어를 입력하시오 : " 출력  
	scanf(" %c", &word);
	//word 값 입력 
	switch(word) //word 문자 switch-case default 
	{
		case 'B':
		case 'b':
			printf("Battleship\n"); //'b' 또는 'B' Battleship 출력 
			break;
		case 'C':
		case 'c':
			printf("Cruiser\n"); //'c' 또는 'C' Cruiser 출력 
			break;
		case 'D':
		case 'd':
			printf("Destroyer\n"); //'d' 또는 'D' Destroyer 출력 
			break;
		default:
			printf("Unknown\n"); //다른 문자 일때 출력 
	}
}

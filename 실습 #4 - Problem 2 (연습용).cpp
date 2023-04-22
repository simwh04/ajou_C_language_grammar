/* 실습과제 #4

ㅇ목적
1. 문자를 입력 받아 'B' 혹은 'b'이면 'Battleship', 'C' 혹은 'c'이면 'Cruiser', 'D' 혹은 'd'이면 'Destoyer', 그 외는
문자면 'Unknown'울 출력하는 프로그램을 switch 구문을 사용하여 작성하시오 
*/
#include <stdio.h>

int main()
{
	char word;
	//문자형 변수 선언(word:문자 저장) 
	printf("문자를 입력하시오 : "); scanf("%c",&word);
	//"문자를 입력하시오 : " 출력 , word 값 입력 
	switch(word)
	{
		case 'B':
		case 'b':
			printf("Battleship");
			break;
			//'B' 혹은 'b'이면 'Battleship' 출력 
		case 'C':
		case 'c':
			printf("Cruiser");
			//'C' 혹은 'c'이면 'Cruiser' 출력 
			break;
		case 'D':
		case 'd':
			printf("Destoyer");
			break;
			//'d'이면 'Destoyer' 출력 
		default:
			printf("Unknown");
			//그 외는 문자면 'Unknown' 출력
		
	 } 
}

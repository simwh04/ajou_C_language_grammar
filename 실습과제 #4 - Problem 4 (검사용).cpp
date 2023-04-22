/* 실습과제 #4

ㅇ목적
1. 문자를 입력 받아 'F' 혹은 'f'이면 'File open', 'E' 혹은 'e'이면 'Edit', 'S' 혹은 's'이면 'Save', 그 외는
문자면 Try Again울 출력하는 프로그램을 switch 구문을 사용하여 작성하시오 
2. 문자 입력 시에 공백이 저장되지 않도록 " %c"와 같이 % 앞에 빈칸을 넣는다. 
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
		case 'F':
		case 'f':
			printf("File open");
			break;
			//'F' 혹은 'f'이면 'File open' 출력 
		case 'E':
		case 'e':
			printf("Edit");
			break;
			//'E' 혹은 'e'이면 'Edit' 출력 
		case 'S':
		case 's':
			printf("Save");
			break;
			//'S' 혹은 's'이면 'Save' 출력 
		default:
			printf("Try Agian");
			//그 외는 문자면 'Try Again' 출력
	 } 
}

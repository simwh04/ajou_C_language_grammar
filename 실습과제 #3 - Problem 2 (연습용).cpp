/* �ǽ����� #4

������

1. ���ڸ� �Է� �޾� 'B' Ȥ�� 'b' �̸� Battleship, 'C' Ȥ�� 'c' �̸� Cruiser, 'D' Ȥ�� 'd' �̸� Destroyer, �� ���� ���ڸ� Unknown��
����ϴ� ���α׷��� switch ������ ����Ͽ� �ۼ��Ͻÿ�.  
*/
#include <stdio.h>

int main()
{
	char word;
	//������ ���� ����
	printf("�ܾ �Է��Ͻÿ� : ");
	//"�ܾ �Է��Ͻÿ� : " ���  
	scanf(" %c", &word);
	//word �� �Է� 
	switch(word) //word ���� switch-case default 
	{
		case 'B':
		case 'b':
			printf("Battleship\n"); //'b' �Ǵ� 'B' Battleship ��� 
			break;
		case 'C':
		case 'c':
			printf("Cruiser\n"); //'c' �Ǵ� 'C' Cruiser ��� 
			break;
		case 'D':
		case 'd':
			printf("Destroyer\n"); //'d' �Ǵ� 'D' Destroyer ��� 
			break;
		default:
			printf("Unknown\n"); //�ٸ� ���� �϶� ��� 
	}
}

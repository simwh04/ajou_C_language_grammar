/* �ǽ����� #4

������
1. ���ڸ� �Է� �޾� 'B' Ȥ�� 'b'�̸� 'Battleship', 'C' Ȥ�� 'c'�̸� 'Cruiser', 'D' Ȥ�� 'd'�̸� 'Destoyer', �� �ܴ�
���ڸ� 'Unknown'�� ����ϴ� ���α׷��� switch ������ ����Ͽ� �ۼ��Ͻÿ� 
*/
#include <stdio.h>

int main()
{
	char word;
	//������ ���� ����(word:���� ����) 
	printf("���ڸ� �Է��Ͻÿ� : "); scanf("%c",&word);
	//"���ڸ� �Է��Ͻÿ� : " ��� , word �� �Է� 
	switch(word)
	{
		case 'B':
		case 'b':
			printf("Battleship");
			break;
			//'B' Ȥ�� 'b'�̸� 'Battleship' ��� 
		case 'C':
		case 'c':
			printf("Cruiser");
			//'C' Ȥ�� 'c'�̸� 'Cruiser' ��� 
			break;
		case 'D':
		case 'd':
			printf("Destoyer");
			break;
			//'d'�̸� 'Destoyer' ��� 
		default:
			printf("Unknown");
			//�� �ܴ� ���ڸ� 'Unknown' ���
		
	 } 
}

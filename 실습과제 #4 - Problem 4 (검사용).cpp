/* �ǽ����� #4

������
1. ���ڸ� �Է� �޾� 'F' Ȥ�� 'f'�̸� 'File open', 'E' Ȥ�� 'e'�̸� 'Edit', 'S' Ȥ�� 's'�̸� 'Save', �� �ܴ�
���ڸ� Try Again�� ����ϴ� ���α׷��� switch ������ ����Ͽ� �ۼ��Ͻÿ� 
2. ���� �Է� �ÿ� ������ ������� �ʵ��� " %c"�� ���� % �տ� ��ĭ�� �ִ´�. 
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
		case 'F':
		case 'f':
			printf("File open");
			break;
			//'F' Ȥ�� 'f'�̸� 'File open' ��� 
		case 'E':
		case 'e':
			printf("Edit");
			break;
			//'E' Ȥ�� 'e'�̸� 'Edit' ��� 
		case 'S':
		case 's':
			printf("Save");
			break;
			//'S' Ȥ�� 's'�̸� 'Save' ��� 
		default:
			printf("Try Agian");
			//�� �ܴ� ���ڸ� 'Try Again' ���
	 } 
}

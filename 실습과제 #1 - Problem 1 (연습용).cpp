/* �ǽ����� #1

������
1. ������ ����� printf(), scanf�� ����� ���� 
2. ���� ����, ��ũ�� ��� 

*/
#include <stdio.h>
#define apple_price 1200
//��ũ�� ����� apple_price ���� 1200���� ����
int main()
{
	int apple_count,apple_extended_price;
	//������ ���� ���� (apple_count:��� ����,apple_extended_price :��� �� �ݾ�)
	printf("��� ���� : "); scanf("%d",&apple_count);
	//"��� ���� : " ���, apple_count ���� �Է�
	apple_extended_price = apple_count *  apple_price;
	//apple_extended_price ������ apple_count(��� ����) ���� ���� apple_price(1200��)�� ���� ���� ����(����) 
	printf("����� ���� ������ %d���̸� �� �ݾ��� %d���̴�.",apple_price,apple_extended_price);
	//"����� ���� ������ (apple_price : 1200��)���̸� �� �ݾ��� (apple_extended_price : ��� �� �ݾ�)���̴�." ��� 
}

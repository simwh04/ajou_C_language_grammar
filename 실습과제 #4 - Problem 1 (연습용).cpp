/* �ǽ����� #4

������
1. ���ǹ� �����ϱ� 
2. Ű����κ��� �ù��� �߷��� �Է� ���� ��, �ù� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
	2-1. �߷��� ������ ���̶� �����Ѵ�.
	2-2. if-else ������ ����Ѵ�. 

*/
#include <stdio.h>

int main()
{
	int courier_weight;
	//������ ���� ���� (courier_weight:�ù� �߷� ��)
	printf("�ù� �߷� : "); scanf("%d",&courier_weight);
	//"�ù� �߷� : " ���, a ���� �Է�
	if(courier_weight <= 2) 
	{
		printf("��۷�: 4000");
	}//2kg���� �ݾ� 4,000�� ��� ��� 
	else if(courier_weight <= 5)
	{
		printf("��۷�: 5000");
	}//5kg���� �ݾ� 5,000�� ��� ��� 
	else if(courier_weight <= 10)
	{
		printf("��۷�: 6000");
	}//10kg���� �ݾ� 6,000�� ��� ��� 
	else if(courier_weight <= 20)
	{
		printf("��۷�: 7000");
	}//20kg���� �ݾ� 7,000�� ��� ��� 
	else
	{
		printf("��� �Ұ�");
	}//20kg �ʰ��� "��ۺҰ�" ��� 
}

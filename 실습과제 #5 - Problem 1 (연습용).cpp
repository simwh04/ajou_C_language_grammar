/* �ǽ����� #5

������
1. �ݺ��� �����ϱ�
2. 2�� n������ �ݺ����� �̿��Ͽ� ����Ѵ�. 
	2-1. n�� 0���� ũ�ų� ���� �����̰� Ű����κ��� �Է� �޴´�. 
*/
#include <stdio.h>

int main()
{
	int square,result=1;
	//������ ���� ����(square:���� �� ����, result:��� �� ����) 
	scanf("%d",&square);
	//square �� �Է� 
	for (int i=1;i<=square;i++)
	{
		result *= 2;
		//result = result * 2; 
	}
	printf("2�� %d������ : %d",square,result);
	//"2�� (square)������ : (result)" ��� 
}

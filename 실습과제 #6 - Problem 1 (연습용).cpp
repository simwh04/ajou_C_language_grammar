/* �ǽ����� #5

������
1. ����Լ� �����ϱ�
2. main �Լ������� scanf�� ������ �Է� �ް� sun_n ����� ���� ����Ѵ�. 
*/
#include <stdio.h>
int sum_n(int n)
{
	if(n==1)
	{
		return 1;
	} 
	return n+sum_n(n-1); //��� �Լ� �ݺ� 
} 
int main()
{
	int n;
	//������ ���� ����(n:n �� ����)  
	printf("n�� �Է��Ͻÿ� : "); scanf("%d",&n);
	//"n�� �Է��Ͻÿ� : ", n �� �Է� 
	printf("1���� n������ ���� %d�̴�.",sum_n(n));
	//"1���� n������ ���� (sun_n(n))�̴�." ���	 
}

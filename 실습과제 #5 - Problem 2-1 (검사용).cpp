/* �ǽ����� #5

������
1. ����ڰ� n�� �Է��Ͽ��� ��, 1���� n������ ���� �� ������ ���� ����ϴ� ���α׷��� while���� for���� ����Ͽ� �ۼ��Ѵ�. (����� �ι��� ����� ��) 
2. ���ǳ�Ʈ 6��, 5, 6�������� ������ �����Ѵ�. 
*/
#include <stdio.h>

int main()
{
	int n,result=0;
	//������ ���� ����(n:n �� ����, result:��� �� ����) 
	scanf("%d",&n);
	//n �� �Է� 
	for (int i=1;i<=n;i++) //for�� 
	{
		printf("%d ",i);
		result += i;
		//result = result + n; 
	}
	printf("\n%d\n",result);
	//"(result)" ���
	int i=1; result=0;
	//�ʱ�ȭ 
	do
	{
		printf("%d ",i);
		result += i;
		//result = result + n; 
		i++;
	}while(i<=n); //do-while �� 
	
	printf("\n%d",result);
	//"(result)" ���	 
}

/* �ǽ����� #5

������
1. a�� b������ ����ϴ� int myPower(int a,int b) �Լ��� ��� �Լ��� �����Ѵ�.(a�� ����̸�, b�� ������ �ƴ� �����̴�.)
2.main �Լ������� scanf�� ������ �Է� �ް� myPowrer �Լ��� ����� ���� ����Ѵ�.
3.��Ʈ: a��b���� = a�� b-1���� * a, a�� 0������ 1�̴�. 
*/
#include <stdio.h>
int myPower(int a,int b) //a�� b���� ����� ��� �Լ� 
{
	if(b==0)
	{
		return 1;
	}
	return a*(myPower(a,b-1));
}

int main()
{
	int a,b;
	//������ ���� ����  
	printf("a, b ���� �Է��Ͻÿ� : "); scanf("%d %d",&a,&b);
	//"a, b ���� �Է��Ͻÿ� : " ���, a,b �� �Է� 
	printf("%d�� %d������ %d",a,b,myPower(a,b));
	//"a�� b������ (myPower(a,b))" ��� 
}

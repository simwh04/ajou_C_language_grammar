/* �ǽ����� #1

A. 1m = 39.37 inches
B. 1m = 3.281 feet
C. �����ʹ� ��� �Ǽ����̴�.(double������ ����) 
D. ����� ��, �Ҽ� ��° �ڸ����� ǥ���Ѵ�. 

*/
#include <stdio.h>
#define inches 39.37
//��ũ�� ����� inches ���� 39.37���� ���� 
#define feet 3.281
//��ũ�� ����� feet ���� 3.281���� ���� 
int main()
{
	double meter;
	//�Ǽ��� ���� ���� (meter : meter �� ����)
	printf("meter ������ ���̸� �Է��Ͻÿ�: "); scanf("%lf",&meter);
	//"meter ������ ���̸� �Է��Ͻÿ�: " ���, meter ���� �Է�
	printf("���:\n");
	//"���" ��� & �ٹٲ� 
	printf("%.2lf inches\n",meter * inches);
	//"(meter * inches) inches" ���& �ٹٲ� 
	printf("%.2lf feet",meter * feet);
	//"(meter * feet) feet" ���
}

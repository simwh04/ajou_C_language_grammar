/* �ǽ����� #3

A. �ýÿ�� 1���� �� 1.5 �޷��̸� ���� ��ϰ��� ��ġ�� ���� ������� �����Ѵ�.
B. ���α׷� ������ 1���� �� ����� ��ũ�� ��Ҹ� ����Ͽ� ��Ÿ���� ����Ѵ�.
C. �����ʹ� ��� �Ǽ����̴�.
D. �� ��ġ�� ����(argument)�� ������ �Ÿ��� ����Ͽ� ��ȯ�ϴ� find_distance �Լ��� �Ÿ���
����(argument)�� ������ �ýÿ�� ����Ͽ� ��ȯ�ϴ� find_fare �Լ��� �ۼ��Ͽ� ����Ѵ�. 

*/
#include <stdio.h>
#define mile 1.5
//��ũ�� ����� mile ���� 1.5���� ����

double find_distance(double a,double b)
{
	double distance = b-a;
	//�Ǽ��� ���� ����, b-a �� ���� 
	return distance;
	//distance �� ��ȯ 
}

double find_fare(double a,double b)
{
	double fare= mile*(b-a);
	//�Ǽ��� ���� ����, mile*(b-a) 
	return fare;
	//fare �� ��ȯ 
}
int main()
{
	double a,b;
	//�Ǽ��� ���� ���� 
	printf("�ý� ��� ����\n");
	//"�ý� ��� ����\n " ���
	printf("��� ���� ���� ��ϰ� ��ġ: ");
	//"��� ���� ���� ��ϰ� ��ġ :" ��� 
	scanf("%lf",&a);
	//a ���� �Է�
	printf("���� ���� ���� ��ϰ� ��ġ: ");
	//"���� ���� ���� ��ϰ� ��ġ : " ��� 
	scanf("%lf",&b);
	//b ���� �Է�
	printf("�� %.1lf ������ ���������� ����� ���� �� $%.2lf����, �� ����� %.2lf�Դϴ�.",find_distance(a,b),mile,find_fare(a,b));
	//"�� (find_distance(a,b) ������ ���������� ����� ���� �� $(mile)����, �� ����� (find_fare(a,b))" ��� 
}

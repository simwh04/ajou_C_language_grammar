/* �ǽ����� #3

A. ����ð��� t �ð��̶�� �� ��,������� ���� �µ� T�� ���� ������ �����ȴ�.
	T = ( 4 * t^2 ) / ( t + 2 ) - 20 
B. ����ڴ� ��� �ð��� �ÿ� ������ �Է��ϹǷ� �̸� �� ������ ��ȯ�ϴ� ���� �ʿ��ϴ�.
C. �Է� �����ʹ� ������, �ð� ������ ��ȯ�� �ð��� ���� �µ��� �Ǽ��� �������̴�.
D. �ÿ� ���� ����(argument)�� ������ �� ������ ��ȯ�Ͽ� ��ȯ�ϴ� convertTime �Լ�,
�ô����� �ð��� ����(argument)�� ������ ��� �ð��� ��ȯ�ϴ� �Լ� getTemperature �Լ��� �ۼ��Ͽ� ����Ѵ�.

*/
#include <stdio.h>
double getF()
{
	double F;
	//�Ǽ��� ���� ���� (F : ȭ�� �µ� �� ����)
	scanf("%lf",&F);
	//F ���� �Է�
	return F;
	//F ���� ��ȯ 
} 

double convertTime(int hour, int minute)
{
	double change_hour;
	//�Ǽ��� ���� ���� (change : ��, �� ���� �ð����� ����� �� ����)
	change_hour = hour + (1.0 / 60)*minute;
	//��, �� ���� �ð����� ���
	return change_hour;
	//change_hour ���� ��ȯ
}

double getTemperature(double t)
{
	double T;
	//�Ǽ��� ���� ���� (T : ���� �µ� �� ����)
	T = ( 4 * t*t ) / ( t + 2 ) - 20;
	//���� ���� ����Ͽ� ��� �ð��� ������� ���� �µ��� ���
	return T;
	//T ���� ��ȯ 
}

int main()
{
	int hour, minute;
	//������ ���� ���� (hour : �ð��� ����, minute : �� �� ����)
	double T,t;
	//�Ǽ��� ���� ���� (T : ���� �µ� �� ����, t : ��� �ð� �� ����)
	printf("��� �ð��� �Է��Ͻÿ�(�ð� ��): "); scanf("%d %d",&hour,&minute);
	//"��� �ð��� �Է��Ͻÿ�(�ð� ��): " ���, hour,minuye ���� �Է�
	t = convertTime(hour,minute);
	//convertTime �Լ� ȣ�� 
	T = getTemperature(t);
	//getTemperature �Լ� ȣ��
	printf("�������κ��� %d�ð� %d��(%.1lf �ð�)�� ���� ���� ������� �µ��� ���� %.2lf���̴�.",hour,minute,t,T);
	//"�������κ��� (hour)�ð� (minute)��(t �ð�)�� ���� ���� ������� �µ��� ���� (T)���̴�." ��� 
}

/* �ǽ����� #3

A. ���� �Ŀ��� C�� ����, F�� ȭ���̴�. 
	C = ( F - 32 ) / 1.8
B. �����ʹ� ��� �Ǽ����̴�.
C. �Լ� ������ ȭ�� �µ��� �Է� �ް� �Է� ���� ���� ��ȯ�ϴ� getF, ȭ���� ����(argument)�� ������ ������ ����Ͽ� ��ȯ�ϴ� convertFtoC,
ȭ���� ������ ����(argument)�� ������ �̸� ����ϴ� printResult �Լ��� �ۼ��Ͽ� ����Ѵ�. 

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

double convertFtoC(double F)
{
	double C;
	//�Ǽ��� ���� ���� (C : ���� �µ� �� ����)
	C = ( F - 32 ) / 1.8;
	//���� ���� ����Ͽ� ȭ�� �µ��� ���� �µ��� ��� 
	return C;
	//C ���� ��ȯ 
}

void printResult(double C,double F)
{
	printf("ȭ�� %.2lf���� ���� %.2lf���̴�.",F,C);
	//"ȭ�� (F)���� ȭ�� (C)���̴�." ���
}

int main()
{
	double C,F;
	//�Ǽ��� ���� ���� (C : ���� �µ� �� ����, F : ȭ�� �µ� �� ����)
	printf("ȭ�� �µ��� �Է��Ͻÿ�: ");
	//"ȭ�� �µ��� �Է��Ͻÿ�: " ���
	F = getF();
	//getF �Լ� ȣ�� 
	C = convertFtoC(F);
	//convertFtoC �Լ� ȣ��
	printResult(C,F);
	//printResult �Լ� ȣ�� 
}

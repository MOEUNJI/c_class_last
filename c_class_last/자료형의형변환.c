#include <stdio.h>
int main(void)
{
	// �ڵ� ����ȯ 1
	double change_number = 10;
	printf("%f\n", change_number); //10.000000 ��µ�

	// �ڵ�����ȯ 2
	int change_number2 = 5.1123;
	printf("%d\n", change_number2); // 5 ��µ�
	
	// ����� �� ��ȯ
	printf("%d\n", (int)1.1234); // 1���
	printf("%d\n", (short)1.1234); // 1���
	printf("%f\n", (double)22); //22.000000 ���
	printf("%f\n", (float)22); //22.000000 ���


	return 0;

}
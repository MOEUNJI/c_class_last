#include <stdio.h>
int main()
{

	int inputNumber;
	int result;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &inputNumber);
	result = inputNumber % 2 == 0 ? 0 : 1;
	printf("����� �Է��� ���ڴ� %d �̸�, ����� %d �Դϴ�.", inputNumber, result);

	return 0;


}
#include <stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a; //�����ұ�? ����
	printf("�迭�� ���� �ּ� : %p\n", p);
	printf("ù��° ��� : %p \n", &a[0]);
	printf("ù���� �� : %d \n", *p);
	printf("�ι�° �� : %d\n", *(p + 1));
	// �迭�� �̸��� a�� �������̱� �����̴�
	// a[0]��°�� �ּҸ� ����Ű�� �������̴�.

	int b = 5;
	int* bp = &b;
	//*bp = 10;
	bp[0] = 10;
	printf("%d \n", *bp); //10���� �ٲ��

	int x = 10, y = 20;
	int* const CONST_POINTER = &x; //������ ��� ����

	*CONST_POINTER = 30;
	// ������ �Ͽ� ���� ������

	CONST_POINTER = &y;
	// ����� ����� �������� �ּҰ��� �ٸ� ������ ������ �� ����
	// ���� ������ ��� const�κ��� ����� ��������
	

	return 0;
}
#include <stdio.h>
int main(void)
{
	// ���� Ÿ���� ������ ������ �ʿ��� ���
	int numbers[5] = {10,20,30,40,50};
	// �̸��� ���� ���� 5���� ���� ��
	int max;
	max = numbers[0]; //10�� �������
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	printf("�ִ밪 : %d \n", max);

	int a[] = { 1,2,3 };
	printf("%d \n", a[1]); // 2 ��µ�
	a[1] = 100;
	printf("%d \n", a[1]); // 100 ��µ�
	return 0;
}
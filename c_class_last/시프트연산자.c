#include <stdio.h>
int main(void)
{
	// << �����̵�
	// >> �����̵�
	// 10 << 1 (10���� 1ĭ ���� �̵��ϰڴ� )
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2; // 10 * 2�� n�� (����)
	int shift_right = num2 >> 2; // 10 / 2�� n�� ( ����)
	printf("%d << 1 = %d \n", num1, shift_left); // ����
	printf("%d >> 2 = %d\n", num1, shift_right); // ����

	
	return 0;
}
#include <stdio.h>
int main(void)
{
	// << 謝難檜翕
	// >> 辦難檜翕
	// 10 << 1 (10戲煎 1蘊 謝難 檜翕ж啊棻 )
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 2; // 10 * 2曖 n蝓 (謝難)
	int shift_right = num2 >> 2; // 10 / 2曖 n蝓 ( 辦難)
	printf("%d << 1 = %d \n", num1, shift_left); // 謝難
	printf("%d >> 2 = %d\n", num1, shift_right); // 辦難

	
	return 0;
}
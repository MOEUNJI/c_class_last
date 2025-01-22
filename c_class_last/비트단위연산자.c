#include <stdio.h>
int main(void)
{
	// & (and) : 대응하는 각 비트의 값이 모두 1이면 1을 반환 아니면 0을 반환
	// | (or) : 대응하는 비트의 값 중 1이 하나라도 있으면 1을 반환
	// ^ (xor) : 대응하는 비트의 값이 다르면 1을 반환
	// ~ (not) : 비트의 값이 1이면 0으로, 0이라면 1로 결과를 반전시켜서 나타냄

	int bit_five = 5;
	int bit_three = 3;
	printf("five & three = %d\n", bit_five & bit_three);
	printf("five | three = %d\n", bit_five | bit_three);
	printf("five ^ three = %d \n", bit_five ^ bit_three);
	printf("~%d = %d\n", bit_five, ~bit_five);
	printf("~%d = %d\n", bit_three, ~bit_three);

	printf("\n");

	int bit_seven = 7; // 00000111
	int bit_nine = 9; // 00001001
	printf("bit_seven & bit_nine = %d\n", bit_seven & bit_nine);
	printf("bit_seven | bit_nine = %d\n", bit_seven | bit_nine);
	printf("bit_seven ^ bit_nine = %d\n", bit_seven ^ bit_nine);
	printf("~%d = %d\n", bit_seven, ~bit_seven);

	return 0;
}
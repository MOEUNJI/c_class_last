#include <stdio.h>
int main(void)
{
	// & (and) : �����ϴ� �� ��Ʈ�� ���� ��� 1�̸� 1�� ��ȯ �ƴϸ� 0�� ��ȯ
	// | (or) : �����ϴ� ��Ʈ�� �� �� 1�� �ϳ��� ������ 1�� ��ȯ
	// ^ (xor) : �����ϴ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ
	// ~ (not) : ��Ʈ�� ���� 1�̸� 0����, 0�̶�� 1�� ����� �������Ѽ� ��Ÿ��

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
#include <stdio.h>
int main(void)
{
	int total = 86 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("¯���� ����� %.1f �� �Դϴ�.\n ", avg);

	//ö���� ����
	// ���� : 64 / ���� 56 / ���� 87.5 / ��ȸ 76.8 / ���� 96.9
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg2 = total2 / 5.0f;
	printf("ö���� ����� %.2f �� �Դϴ�. ", avg2);

	return 0;
}
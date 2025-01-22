#include <stdio.h>
int main(void)
{
	int total = 86 + 75 + 88 + 60 + 96;
	float avg = total / 5.0f;
	printf("짱구의 평균은 %.1f 점 입니다.\n ", avg);

	//철수의 점수
	// 국어 : 64 / 영어 56 / 수학 87.5 / 사회 76.8 / 과학 96.9
	float total2 = 64 + 56 + 87.5f + 76.8f + 96.9f;
	float avg2 = total2 / 5.0f;
	printf("철수의 평균은 %.2f 점 입니다. ", avg2);

	return 0;
}
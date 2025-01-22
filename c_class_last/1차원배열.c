#include <stdio.h>
int main(void)
{
	// 같은 타입의 변수가 여러개 필요할 경우
	int numbers[5] = {10,20,30,40,50};
	// 이름이 같은 변수 5개가 생긴 것
	int max;
	max = numbers[0]; //10이 들어있음
	for (int i = 1; i < 5; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	printf("최대값 : %d \n", max);

	int a[] = { 1,2,3 };
	printf("%d \n", a[1]); // 2 출력됨
	a[1] = 100;
	printf("%d \n", a[1]); // 100 출력됨
	return 0;
}
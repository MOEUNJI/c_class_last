#include <stdio.h>
int main(void)
{
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}

	printf("\n");

	int num = 1;
	printf("숫자를 입력하세요(0을 입력하면 종료) : ");
	scanf_s("%d", &num);
	while (num != 0) {
		// 입력값이 0이 아니라면 코드 실행 ( 0을 입력하지 않는다면 종료되지 않음)
		printf("입력한숫자는 %d 입니다. \n", num);
		printf("다시 입력해주세요 (0입력시 종료) : ");
		scanf_s("%d", &num); // 다시 입력함수를 실행
	}
	printf("프로그램을 종료합니다.\n");

	return 0;
}
#include <stdio.h>
int main()
{

	int inputNumber;
	int result;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &inputNumber);
	result = inputNumber % 2 == 0 ? 0 : 1;
	printf("당신이 입력한 숫자는 %d 이며, 결과는 %d 입니다.", inputNumber, result);

	return 0;


}
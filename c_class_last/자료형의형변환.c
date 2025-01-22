#include <stdio.h>
int main(void)
{
	// 자동 형변환 1
	double change_number = 10;
	printf("%f\n", change_number); //10.000000 출력됨

	// 자동형변환 2
	int change_number2 = 5.1123;
	printf("%d\n", change_number2); // 5 출력됨
	
	// 명시적 형 변환
	printf("%d\n", (int)1.1234); // 1출력
	printf("%d\n", (short)1.1234); // 1출력
	printf("%f\n", (double)22); //22.000000 출력
	printf("%f\n", (float)22); //22.000000 출력


	return 0;

}
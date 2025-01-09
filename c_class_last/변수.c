#include <stdio.h>
int main(void)
{
	// 자료형 변수명 = 값;
	int five = 5;
	int num = 3;
	num = 10;

	int number1, number2;
	number1 = 10;
	number2 = 22;
	int number3 = 33, number4 = 44;

	// 가능한 변수명
	int num = 10;
	int number16 = 16; // 숫자 조합 가능
	int number_20 = 20; //언더바 가능
	int Number = 15; // 대문자 가능

	// 불가능한 변수명
	int hello World = 1; // 공백 불가
	int hell#s$$ = 2; //특수문자 불가
	int 12number = 12; //숫자 먼저 불가
	int int = 1; //예약어 불가

	return 0;
}
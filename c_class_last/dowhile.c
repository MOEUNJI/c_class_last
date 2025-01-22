#include <stdio.h>
int main()
{
	int doWhile = 1;
	do {
		printf("do while문 %d 번 실습중! \n", doWhile);
		doWhile++;
	} while (doWhile <= 10);
	
	// 만약 조건이 불일치 하다면?
	int count = 1;
	do {
		printf("조건이 불일치한 dowhile문 %d 번 실행됨", count);
	} while (count >= 10);

	int six = 1;
	while (six >= 60) {
		printf("조건이 불일치한 while문 %d 번 실행됨", six);
		// 실행 안 됨
	}
	return 0;

}

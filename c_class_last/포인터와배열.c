#include <stdio.h>
int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a; //가능할까? ㅇㅇ
	printf("배열의 시작 주소 : %p\n", p);
	printf("첫번째 요소 : %p \n", &a[0]);
	printf("첫번재 값 : %d \n", *p);
	printf("두번째 값 : %d\n", *(p + 1));
	// 배열의 이름인 a도 포인터이기 때문이다
	// a[0]번째의 주소를 가리키는 포인터이다.

	int b = 5;
	int* bp = &b;
	//*bp = 10;
	bp[0] = 10;
	printf("%d \n", *bp); //10으로 바뀔것

	int x = 10, y = 20;
	int* const CONST_POINTER = &x; //포인터 상수 생성

	*CONST_POINTER = 30;
	// 역참조 하여 값을 변경함

	CONST_POINTER = &y;
	// 상수로 선언된 포인터의 주소값을 다른 변수를 참조할 순 없다
	// 위에 선언한 상수 const부분을 지우면 가능해짐
	

	return 0;
}
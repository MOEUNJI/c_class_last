#include <stdio.h>
int main(void)
{
	//int* p1, * p2, * p3, *p4, * p5;
	//// 같은 타입의 변수가 여러개 필요하다 하면
	//// 포인터를 배열로 선언이 가능해짐

	//int* p[5]; 
	//// int 형의 포인터 변수 p를 사용할건데~
	//// p라는 이름으로 5개를 선언하겠다 라는 뜻
	//int a = 3;
	//p[3] = &a; // 3번째 포인터 변수에는 a의 주소가 들어있음
	//printf("%p\n", p[3]);
	//printf("%d\n", *p[3]);

	int b[3] = { 1,20,3 };
	int* b_pointer = b;
	printf("%d\n", *(b_pointer + 1));
	printf("%d\n", *(b + 1));

	int t = 5;
	int* tp = &t;
	//*tp = 10;
	tp[0] = 10;
	printf("%d \n", *tp);
	return 0;
}
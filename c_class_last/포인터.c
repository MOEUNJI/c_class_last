#include <stdio.h>
int main(void)
{
	int x = 10;
	double d = 3.1;

	int*p = &x; //& : 주소를 가져오겠다
	// x의 주소를 p에 저장하겠다
	// int : 정수를 저장하는 변수이다.
	// 주소를 저장하는 변수다 라는 뜻으로 *를 사용한다.
	// * 를 사용하게 되면 주소를 저장할 수 있게 된다. 
	printf("%p \n", p); // 참조 (주소값)
	printf("%d \n", *p); // 역참조(주소 안에 있는 데이터 값)

	double*ptr = &d; // d의 주소를 ptr이 저장하게 됨(8바이트)
	// int형의 주소는 int형포인터,
	// double형 주소는 double형 포인터,
	// char는 char형으로 선언해야 오류 없이 처리가 가능하다.
	
	printf("%p \n", ptr);
	printf("%.1f \n", *ptr);


	int dog= 4;
	int* dog_address;
	dog_address = &dog;
	printf("%d : %p \n", *dog_address, dog_address);

	return 0;
}
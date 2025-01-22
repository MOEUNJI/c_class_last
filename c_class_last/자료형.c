#include <stdio.h>
int main(void)
{
	int num1 = 1;
	printf("%d\n", sizeof(num1));
	// int 자료형은 4바이트임을 알 수 있다
	printf("%d\n", sizeof(100)); //4
	printf("%d\n", sizeof(3.14)); // double이기 때문에 8 
	printf("%d\n", sizeof(float)); // 4
	printf("%d\n", sizeof(short)); // 2

	//문자형
	char ch1 = 'A'; //문자형 변수 선언
	char ch1 = 'A'; //문자형 변수 선언
	printf("%c\n", ch1); //A 출력됨 
	char ch2 = 65;
	printf("%c\n", ch2); 

	printf("문자 : %c, 숫자: %d \n", ch1, ch1);
	printf("문자 : %c, 숫자: %d \n", ch2, ch2);
	// %c = 변수를 문자로 출력
	// %d = 변수를 숫자로 출력
	// 매핑되어 출력되는거죠~ 

	char ch3 = 'c'; // 캐릭터
	int num3 = 'c'; // 정수형
	printf("문자 : %c, ASCII : %d(char) \n", ch3, ch3);
	printf("문자 : %c, ASCII : %d(int) \n", num3, num3);

	return 0;

}

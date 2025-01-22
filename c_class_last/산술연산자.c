#include <stdio.h>
int main(void)
{
	//int num1 = 1;
	//float num2 = 1.2;
	//printf("%d + %d = %d", num1, num2, num1 + num2);
	//// int와 float은 float으로 연산해야 하기에 자료형을 %.1f 로 작성해야한다.

	//int a = 1, b = 10;
	//printf("a > b : %d\n", a > b);


	/*int number1, number2, number3, number4, result;
	number1 = 3;
	number2 = 4;
	number3 = 5;
	number4 = 6;
	result = number1 + number2 * number3 + number4; 
	printf("%d + %d * %d + %d = %d \n", number1, number2, number3, number4, result);*/

	// 국어 : 85 / 영어 : 71 / 수학 : 97 / 사회 : 83 / 과학 : 72
	int total1 = 85 + 71 + 97 + 83 + 72;
	float avg1 = total1 / 5.0f;
	printf("짱구의 평균 : %.2f\n",avg1);

	// 국어 : 64 / 영어 : 56 / 수학 : 87.5 / 사회 : 76.8 / 과학 : 96.9
	float total = 64 + 56 + 87.5f + 76.8f + 96.9f;
	// int로 선언하면 실수값이 버려지게 되므로 float으로 자동 형 변환이 되어 64.0000가 된다. 
	// 접미사 f를 사용해서 이 자료형을 사용할거라고 정확하게 명시했음 ( 경고메시지 )
	// 더블타입으로 인식해서 더블로 암묵적인 형 변환이 발생하며 컴파일러가 경고메시지를 출력함

	float avg = total / 5.0f;
	// 더 명확하고 의도한 계산이라는 점을 컴파일러와 개발자 모두에게 전달할 수 있습니다
	// 5.0f 라고 작성하는 것이 더 정확함
	// 다른 개발자가 볼 때 5가 정수로 처리되는 것인지, 실수로 변환되는 것인지 헷갈릴 수 있습니다.
	printf("철수의 평균 : %.2f", avg); // avg를 출력


	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// one(10) > two(20) ? false
	// two(20) >= three(30) ? false
	// three(30) > four(40) ? false
	// 총 결과값은 false(0) 으로 나올것임
	printf("result : %d\n", result); //  false(0)

	result = one <= two && two >= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) >= three(30) ? false
	// three(30) <= four(40) ? true
	// 피연산자중 한개라도 false가 포함되어 있으면 felse(0)를 반환한다. ( 모두 true여야함)
	printf("result : %d\n", result); //  false(0)

	result = one <= two && two <= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) <= three(30) ? true
	// three(30) <= four(40) ? true
		// 총 결과값은 false가 존재하지 않으니 true(1)를 반환한다
	printf("result : %d\n", result); //  true(1)

	result = !(one > two);
	// one(10) > two(20) one가 two보다 크니? 에 대한 답은 false인데 
	// !를 사용하여 정의했으니 도출된 값의 반대 값을 출력할것임 즉 true를 출력할것

	return 0;
}

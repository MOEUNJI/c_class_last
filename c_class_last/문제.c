#include <stdio.h>
int main(void)
{
	// 어떤 값이 출력될까?
	printf("%zd\n", sizeof(int)); //4
	printf("%zd\n", sizeof(char)); //1
	printf("%zd\n", sizeof(short)); //2
	printf("%zd\n", sizeof(50)); // 4
	printf("%zd\n", sizeof(float)); //4
	printf("%zd\n", sizeof(3.14)); //8
	// sizeof 연산자로 어떤것을 출력할 땐 서식지정자에
	// z 를 붙이는 게 좋다. 보통은 %d로 출력하는데 그래도 작동한다.
	// 하지만 c언어의 표준을 엄격하게 따르자면 %zd가 맞다.
	
	float f = 3.14f;
	printf("%f\n", f);
	// 3.14는 double형이다. 소수점은 자리수와 상관 없이 double로 간주됨
	// 왜냐하면 c언어에서는 소수점을 포함한 숫자는 기본적으로 더블로 인식함
	//float은 32비트(소수점 6-7자리)이고, double은 64비트(소수점 15-16자리)이다.
	// 즉 더블 타입의 3.14를 float타입 변수인 f에 저장하려면 소수점 값이 손실될 수 있다.
	//그래서 컴파일러는 소수점을 float에 담으면 소수점이 손실될 수 있다고 경고하는것
	// 하지만 우리가 넣을 값은 소수점의 소실이 없기때문에 넣을 값 뒤에 접미사 f를 추가
	// 명확하게 float을 사용할것이라고 명시해주면 경고가 뜨지 않음

	return 0;
}
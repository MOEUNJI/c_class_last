#include <stdio.h>
int main(void)
{
	int i;
	for (i = 1; i <= 10; i++) {
		printf("for문 % d\n", i);
	}

	int j;
	for (j = 10; j >= 1;j--) {
		printf("감소 %d \n",j);
	}

	// 제곱출력기
	int square;
	for (square = 1; square <= 10; square++) {
		printf("%d의 제곱 : %d \n", square, square * square);
		//1부터 시작하니 1의제곱 1*1 출력
		//square가 증가연산자를 통해 값이 1 증가하고 다시 반복문 시작
		//증가된 square인 2 * 2를 출력
		//square가 증가연산자를 통해 값이 3으로 증가하고 조건이 true라면즉 i에 들어있는 숫자가 지금 3인데 10보다 작거나 같다면? 다시 반복문 시작
		// 3*3 출력!
	}

	// 무한루프
	for (;;) {
		// 초기식, 조건식, 증감식 요소를 모두 비우면 무한루프가 발생한다 
		// 벗어날 수 있는 방법은 컨트롤 c
	}

	while (1) {
		printf("");
		// while문과 for문으로 무한루프를 둘 다 발생시킬 수 있지만
		// 개발자들은 while문으로 무한루프 거는 것을 더 선호한다.
		// 왜냐하면 while문에 1(참)이라는 숫자를 넣으면 조건이 참이다 라는 뜻으로
		// 의미가 명확하게 표현되니까 for문의 무한루프보다 조금 더 정확한 느낌
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int firstFor, secondFor;
	for (firstFor = 1; firstFor <= 3; firstFor++) { //바깥 반복문 (행을 만들 것)
		for (secondFor = 1;secondFor <= 2; secondFor++) {
			printf("%d행 %d열 \n", firstFor, secondFor);
		}
		printf("\n");
	}

	//구구단
	int gugudan_first, gugudan_second;
	for (gugudan_first = 2; gugudan_first <= 9; gugudan_first++) {
		printf("%d 단 \n", gugudan_first);
		for (gugudan_second = 1; gugudan_second <= 9; gugudan_second++) {
			printf("%d X %d = %d \n", gugudan_first, gugudan_second, gugudan_first * gugudan_second);
		}
		printf("\n");
	}

	//별찍기
	int line, star;
	for (line = 5; line >= 1; line--) { 
		// 라인은 5개에서 1개까지 줄어든다.
		//두번째 반복에서 라인은 4로 감소한 상태로 반복문을 진행한다.
		for (star = 1; star <= line; star++) { 
			// 처음에는 스타는 1이고 라인의 수(5)만큼 늘어난다.
			// 두번째 반복에서 스타는 라인의 수인 4만큼 늘어난다.
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
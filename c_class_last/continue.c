#include <stdio.h>
int main(void)
{
	// for문과  continue를 사용해서 홀수만 출력하기
	int continueNum;
	for (continueNum = 0;continueNum <= 10; continueNum++) {
		if (continueNum % 2 == 0) {//continueNum이 짝수인지 확인함
			continue;//짝수라면 아래 코드(출력)를 건너뛰고 다시 반복 실행
		}
		printf("%d \n", continueNum);
	}

	//while문과 continue를 사용해서 짝수만 출력하기
	int whileContinue = 0;
	while (whileContinue <= 10) {
		whileContinue++; // 먼저 값을 증가시킨 후
		if (whileContinue % 2 != 0) {//어떤 숫자를 2로 나눈 값이 0이 아니라면
			// 즉 홀수라면 이라는 뜻
			continue; // 홀수라는 조건을 충족했다면 아래 코드를 건너뜀
		}
		printf("%d \n", whileContinue); //짝수만 출력됨
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int gugudan[8][9]; // 8행 9열의 배열
	int i, j; //2중 for문을 돌기 위한 변수 생성
	// 행으로는 8번 열로는 9까지 돌아야 한다.
	for (i = 0; i < 8;i++) { // 행 ( 8번 반복 )
		printf("%d단 \n", i + 2);
		for (j = 0; j < 9; j++) { // 열 ( 9번 반복 )
			gugudan[i][j] = (i + 2) * (j + 1);
			//0부터 시작하니까 시작 단을 2로 바꿔주는 것  0~7이던게 2~9가 될것.
			// j는 0~8인데 우리는 1~9를 출력하고 싶으니까 +1을 해줌
			// 그 값을 구구단의 i와 j에 대입하겠다!

			printf("%d * %d = %d \n", i + 2, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}

	return 0;
}

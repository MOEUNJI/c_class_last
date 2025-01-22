#include <stdio.h>
int main(void)
{
	int a[3][4];
	a[0][0] = 10;
	printf("%d \n", a[0][0]);

	// 2차원 배열을 선언과 동시에 초기화
	// 1차원 배열과 똑같이 초기화 리스트를 사용
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	// arr[3][4] 의 모든 요소 출력하기
	for (int i = 0; i < 3; i++) { // 각 행을 돌아야 하니까 3부터 작성 0,1,2 로 돌겠지?
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	// 배열의 모든 값을 10으로 변경하기
	for (int i = 0; i < 3; i++) { 
		for (int j = 0; j < 4; j++) {
			arr[i][j] = 10;
		}
		printf("\n");
	}

	// 다시 배열을 출력해보면?
	for (int i = 0; i < 3; i++) { // 각 행을 돌아야 하니까 3부터 작성 0,1,2 로 돌겠지?
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
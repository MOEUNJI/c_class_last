#include <stdio.h>
int main(void)
{
	for (int i = 0; i <= 10; i++) { // i는 10까지 늘어나며 반복한다.
		if(i == 6) { // i가 증가하다가 6과 같아졌다면
			break; // 즉시 브레이크
		}
		printf("%d \n", i);
	}

	printf("\n");

	int i = 0;
	while (i <= 10) { // i는 10보다 작다는 조건을 충족한다면
		if (i == 6) { // 만약i가 6과 같다면
			break; // 브레이크 실행
		}
		printf("%d \n", i); // i를 출력함
		i++; // i는 0부터 늘어날것임
	}
	return 0;
}
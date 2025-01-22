#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int rad;
	rad = rand();
	// rand : 의 값은 visual studio 기준으로 RAND_MAX 값이 0~ 32767 이다.
	// 이 0부터 랜드맥스 사이에서 임의의 수를 뽑아내는 값이 바로 rand함수이다. 
	// 그 임의의 값을 rad 에 넣겠다는 뜻이다.
	//srand((unsigned int)time(NULL));
	//rad = rand() % 100 +1;
	printf("%d", rad); // 41이 나올것이다.
	return 0;
}

#include <stdio.h>
int main(void)
{
	// 배열과 포인터
	int a[3] = { 1,2,3 };
	int* ptr = a; // a[0] 번지의 주소를 저장하고 있음

	// 배열포인터
	int arr[3] = { 1,2,3 }; // 정수 3개로 이루어진 배열
	int (*arrptr)[3] = &arr;// arr 배열 자체의 주소를 가리킴
	printf("첫 번째 요소는 : %d \n",(*arrptr)[0]);
	printf("두 번째 요소는 : %d \n", (*arrptr)[1]);
	printf("세 번째 요소는 : %d \n", (*arrptr)[2]);

	// for문을 통한 배열포인터 접근
	for (int i = 0; i < 3; i++) {
		printf("arr[%d] : %d \n", i, (*arrptr)[i]);
		//  (*arrptr) : 배열포인터로 &arr 배열 전체의 주소를 뜻함
		// [i]가 붙으면 그 주소의 몇번째 인지 찾아가는거죠? 0인지 1인지 2인지~
	}

	// 2차원 배열과 배열포인터
	int twoarr[2][3] = {
		{1,2,3},
		{4,5,6},
	};
	int (*twoarrPtr)[3] = twoarr;
    // (*twoarrPtr)[3] : 크기가 3인 정수 배열을 가리키는 포인터 
	// 즉 3칸짜리 배열이 2줄이기 때문에 2차원이 되는것이다.
	// 즉 이 말은 twoarr은 크기가 3인 정수 배열이 2개 있다 라는 뜻
	// 왜 & 없을까 ? 배열의 이름은 첫번째 인덱스의 주소를 가리키는 포인터이다.
	// 2차원 배열의 경우에 배열의 이름만 작성하게 되면 첫번재 행의 주소로 해석됨
	// 즉 twoarr은 행 단위로 시작 주소를 가리키는 포인터 역할을 하게 되는 것
	// twoarr[0]은  {1,2,3} 의 시작 주소가 되는것이고
	// twoarr[1]은 {4,5,6}의 시작 주소이다
	// twoarr만 작성하면 twoarr[0]과 같으므로 첫번째 행의 시작 주소를 가리킨다.
	// 첫번째 행은 크기가 3인 배열이므로 twoarr의 타입은 저절로 배열포인터가 크기가
	// 3임을 안다. 이미 크기가 3인 배열을 가리키고 있으므로 &를 사용하지 않아도 작동함
	// 일차원 배열에서 &를 사용한 이유는 a[0]이라고 하면 1을 가리키는 것이기 때문에
	// 크기가 3인지 모른다. 그래서 전체 배열의 주소를 가리키는 &가 필요한 것이다.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("twoarr[%d][%d] : %d\n", i, j, twoarrPtr[i][j]);
			// 소괄호와 별이 안 붙는 이유
			// twoarrPtr[i]는 이미 배열의 i번째 행을 가리키므로, 추가적인 역참조가 필요 없다.
			//즉, twoarrPtr[i]는 크기가 3인 배열이고, twoarrPtr[i][j]는 j번째 요소에 바로 접근할 수 있음
			// 그럼 왜 1차원 배열에서는 (*arrptr) 역참조가 필요할까?
			// arrptr은 배열 전체를 가리키는 주소를 가진 배열포인터이기 때문에 배열을 먼저
			// 역참조 하고 i번째 요소에 다가가야 한다.
			// twoarrPtr은 2차원 배열의 한 행을 가리키는 포인터이다.
			// 즉 twoarrPtr[i]는 이미 i번째 행을 가리키는 것이기 때문에 바로 접근이 가능

			//정리하자면 1차원 배열 포인터는 배열 전체를 가리키기 때문에 역참조해서 배열에 접근해야함
			// 2차원 배열 포인터는 이미 행 단위로 접근하고 있으므로 추가 역참조가 필요 없다는 말이에요 
		}
	}

	return 0;
}
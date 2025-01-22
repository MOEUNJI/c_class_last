#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30; // 세 개의 정수 변수
    int* ptrArr[3]; // 포인터 배열 선언 (정수형 변수의 주소를 저장)

    // 포인터 배열에 각 변수의 주소 저장
    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    // 포인터 배열을 통해 각 변수의 값 출력
    for (int i = 0; i < 3; i++) {
        printf("ptrArr[%d]가 가리키는 값: %d\n", i, *ptrArr[i]);
    }

    return 0;
}
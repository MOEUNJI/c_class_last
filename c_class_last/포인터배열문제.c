#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30; // �� ���� ���� ����
    int* ptrArr[3]; // ������ �迭 ���� (������ ������ �ּҸ� ����)

    // ������ �迭�� �� ������ �ּ� ����
    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    // ������ �迭�� ���� �� ������ �� ���
    for (int i = 0; i < 3; i++) {
        printf("ptrArr[%d]�� ����Ű�� ��: %d\n", i, *ptrArr[i]);
    }

    return 0;
}
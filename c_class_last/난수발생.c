#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int rad;
	rad = rand();
	// rand : �� ���� visual studio �������� RAND_MAX ���� 0~ 32767 �̴�.
	// �� 0���� ����ƽ� ���̿��� ������ ���� �̾Ƴ��� ���� �ٷ� rand�Լ��̴�. 
	// �� ������ ���� rad �� �ְڴٴ� ���̴�.
	//srand((unsigned int)time(NULL));
	//rad = rand() % 100 +1;
	printf("%d", rad); // 41�� ���ð��̴�.
	return 0;
}

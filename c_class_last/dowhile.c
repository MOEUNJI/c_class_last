#include <stdio.h>
int main()
{
	int doWhile = 1;
	do {
		printf("do while�� %d �� �ǽ���! \n", doWhile);
		doWhile++;
	} while (doWhile <= 10);
	
	// ���� ������ ����ġ �ϴٸ�?
	int count = 1;
	do {
		printf("������ ����ġ�� dowhile�� %d �� �����", count);
	} while (count >= 10);

	int six = 1;
	while (six >= 60) {
		printf("������ ����ġ�� while�� %d �� �����", six);
		// ���� �� ��
	}
	return 0;

}

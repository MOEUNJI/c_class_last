#include <stdio.h>
int main(void)
{
	for (int i = 0; i <= 10; i++) { // i�� 10���� �þ�� �ݺ��Ѵ�.
		if(i == 6) { // i�� �����ϴٰ� 6�� �������ٸ�
			break; // ��� �극��ũ
		}
		printf("%d \n", i);
	}

	printf("\n");

	int i = 0;
	while (i <= 10) { // i�� 10���� �۴ٴ� ������ �����Ѵٸ�
		if (i == 6) { // ����i�� 6�� ���ٸ�
			break; // �극��ũ ����
		}
		printf("%d \n", i); // i�� �����
		i++; // i�� 0���� �þ����
	}
	return 0;
}
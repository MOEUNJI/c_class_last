#include <stdio.h>
int main(void)
{
	int six = 1;
	while (six <= 60) {
		if (six % 6 == 0) {
			printf("%d\n", six);
		}
		six++;
	}

	printf("\n");

	int num = 1;
	printf("���ڸ� �Է��ϼ���(0�� �Է��ϸ� ����) : ");
	scanf_s("%d", &num);
	while (num != 0) {
		// �Է°��� 0�� �ƴ϶�� �ڵ� ���� ( 0�� �Է����� �ʴ´ٸ� ������� ����)
		printf("�Է��Ѽ��ڴ� %d �Դϴ�. \n", num);
		printf("�ٽ� �Է����ּ��� (0�Է½� ����) : ");
		scanf_s("%d", &num); // �ٽ� �Է��Լ��� ����
	}
	printf("���α׷��� �����մϴ�.\n");

	return 0;
}
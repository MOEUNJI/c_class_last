#include <stdio.h>
int main(void)
{
	int firstFor, secondFor;
	for (firstFor = 1; firstFor <= 3; firstFor++) { //�ٱ� �ݺ��� (���� ���� ��)
		for (secondFor = 1;secondFor <= 2; secondFor++) {
			printf("%d�� %d�� \n", firstFor, secondFor);
		}
		printf("\n");
	}

	//������
	int gugudan_first, gugudan_second;
	for (gugudan_first = 2; gugudan_first <= 9; gugudan_first++) {
		printf("%d �� \n", gugudan_first);
		for (gugudan_second = 1; gugudan_second <= 9; gugudan_second++) {
			printf("%d X %d = %d \n", gugudan_first, gugudan_second, gugudan_first * gugudan_second);
		}
		printf("\n");
	}

	//�����
	int line, star;
	for (line = 5; line >= 1; line--) { 
		// ������ 5������ 1������ �پ���.
		//�ι�° �ݺ����� ������ 4�� ������ ���·� �ݺ����� �����Ѵ�.
		for (star = 1; star <= line; star++) { 
			// ó������ ��Ÿ�� 1�̰� ������ ��(5)��ŭ �þ��.
			// �ι�° �ݺ����� ��Ÿ�� ������ ���� 4��ŭ �þ��.
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
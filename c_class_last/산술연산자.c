#include <stdio.h>
int main(void)
{
	//int num1 = 1;
	//float num2 = 1.2;
	//printf("%d + %d = %d", num1, num2, num1 + num2);
	//// int�� float�� float���� �����ؾ� �ϱ⿡ �ڷ����� %.1f �� �ۼ��ؾ��Ѵ�.

	//int a = 1, b = 10;
	//printf("a > b : %d\n", a > b);


	/*int number1, number2, number3, number4, result;
	number1 = 3;
	number2 = 4;
	number3 = 5;
	number4 = 6;
	result = number1 + number2 * number3 + number4; 
	printf("%d + %d * %d + %d = %d \n", number1, number2, number3, number4, result);*/

	// ���� : 85 / ���� : 71 / ���� : 97 / ��ȸ : 83 / ���� : 72
	int total1 = 85 + 71 + 97 + 83 + 72;
	float avg1 = total1 / 5.0f;
	printf("¯���� ��� : %.2f\n",avg1);

	// ���� : 64 / ���� : 56 / ���� : 87.5 / ��ȸ : 76.8 / ���� : 96.9
	float total = 64 + 56 + 87.5f + 76.8f + 96.9f;
	// int�� �����ϸ� �Ǽ����� �������� �ǹǷ� float���� �ڵ� �� ��ȯ�� �Ǿ� 64.0000�� �ȴ�. 
	// ���̻� f�� ����ؼ� �� �ڷ����� ����ҰŶ�� ��Ȯ�ϰ� ������� ( ���޽��� )
	// ����Ÿ������ �ν��ؼ� ����� �Ϲ����� �� ��ȯ�� �߻��ϸ� �����Ϸ��� ���޽����� �����

	float avg = total / 5.0f;
	// �� ��Ȯ�ϰ� �ǵ��� ����̶�� ���� �����Ϸ��� ������ ��ο��� ������ �� �ֽ��ϴ�
	// 5.0f ��� �ۼ��ϴ� ���� �� ��Ȯ��
	// �ٸ� �����ڰ� �� �� 5�� ������ ó���Ǵ� ������, �Ǽ��� ��ȯ�Ǵ� ������ �򰥸� �� �ֽ��ϴ�.
	printf("ö���� ��� : %.2f", avg); // avg�� ���


	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// one(10) > two(20) ? false
	// two(20) >= three(30) ? false
	// three(30) > four(40) ? false
	// �� ������� false(0) ���� ���ð���
	printf("result : %d\n", result); //  false(0)

	result = one <= two && two >= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) >= three(30) ? false
	// three(30) <= four(40) ? true
	// �ǿ������� �Ѱ��� false�� ���ԵǾ� ������ felse(0)�� ��ȯ�Ѵ�. ( ��� true������)
	printf("result : %d\n", result); //  false(0)

	result = one <= two && two <= three && three <= four;
	// one(10) <= two(20) ? true
	// two(20) <= three(30) ? true
	// three(30) <= four(40) ? true
		// �� ������� false�� �������� ������ true(1)�� ��ȯ�Ѵ�
	printf("result : %d\n", result); //  true(1)

	result = !(one > two);
	// one(10) > two(20) one�� two���� ũ��? �� ���� ���� false�ε� 
	// !�� ����Ͽ� ���������� ����� ���� �ݴ� ���� ����Ұ��� �� true�� ����Ұ�

	return 0;
}

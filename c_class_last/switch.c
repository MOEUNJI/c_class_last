#include <stdio.h>
int main()
{
	//int day;
	//printf("������ �����ϼ��� 1~7 �� ��1:");
	//scanf_s("%d", &day);
	//switch (day) {
	//	case 1: printf("������ �Դϴ�. \n");
	//		break;
	//	case 2: printf("ȭ���� �Դϴ�. \n");
	//		break;
	//	case 3: printf("������ �Դϴ�. \n");
	//		break;
	//	case 4: printf("����� �Դϴ�. \n");
	//		break;
	//	case 5: printf("�ݿ��� �Դϴ�. \n");
	//		break;
	//	case 6: printf("����� �Դϴ�. \n");
	//		break;
	//	case 7: printf("�Ͽ��� �Դϴ�. \n");
	//		break;
	//	
	//	default: printf("��ȿ���� ���� �Է��Դϴ�.");
	//}

	//���� ����
	char operator;
	int num1, num2;
	printf("�����ڸ� �Է��ϼ���(+,-,*,/) : ");
	scanf_s("%c", &operator,1); //%c : char�� ���ڸ� �����Ŵ� ��� ��
	// 1�� �������ִ� ������ ���� ũ�⸦ �����ϴ� �� (�ʼ� )

	printf("�� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);

	switch (operator)
	{
	case '+' : printf("%d + %d = %d \n", num1, num2, num1 + num2);
		break;
	case '-'  : printf("%d - %d = %d \n", num1, num2, num1 - num2);
		break;
	case '*': printf("%d * %d = %d \n", num1, num2, num1 * num2);
		break;
	case '/': 
		if (num2 != 0) {
			printf("%d / %d = %d \n", num1, num2, num1 / num2);
		}
		else {
			printf("0���� ���� �� �����ϴ�. \n");
		}
		// �̷��� �Է��ϴ� ����
		// � ���� a�� b�� �����ٴ� �� �ݴ�� �����غ��� 
		// b�� ��� �������� a�� �Ǵ����� ���� ���̴�.
		// ������� 6/2 = 3�ε� 2�� ��� ���ؾ� 6�� �ǳ���? (3��)
		// �׷��� b�� 0�̶��? 0�� ��� ���ؾ� 6�� �ɱ��? 
		// 0�� �ƹ��� ���ص� 0�̱� ������ ���� 6�� �� �� ����. 
		// �׷��� ���������� � ���� 0���� ������ �� ���ǵ��� �ʱ� ������
		// 0�� �ƴҶ� ������ ������ �����ϰ� 0 �̶�� ���� �� ���ٴ� �޽��� ���
		break;
	default: printf("��ȿ���� ���� �������Դϴ�. ");
		break;
	}
	return 0;
}
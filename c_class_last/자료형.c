#include <stdio.h>
int main(void)
{
	int num1 = 1;
	printf("%d\n", sizeof(num1));
	// int �ڷ����� 4����Ʈ���� �� �� �ִ�
	printf("%d\n", sizeof(100)); //4
	printf("%d\n", sizeof(3.14)); // double�̱� ������ 8 
	printf("%d\n", sizeof(float)); // 4
	printf("%d\n", sizeof(short)); // 2

	//������
	char ch1 = 'A'; //������ ���� ����
	char ch1 = 'A'; //������ ���� ����
	printf("%c\n", ch1); //A ��µ� 
	char ch2 = 65;
	printf("%c\n", ch2); 

	printf("���� : %c, ����: %d \n", ch1, ch1);
	printf("���� : %c, ����: %d \n", ch2, ch2);
	// %c = ������ ���ڷ� ���
	// %d = ������ ���ڷ� ���
	// ���εǾ� ��µǴ°���~ 

	char ch3 = 'c'; // ĳ����
	int num3 = 'c'; // ������
	printf("���� : %c, ASCII : %d(char) \n", ch3, ch3);
	printf("���� : %c, ASCII : %d(int) \n", num3, num3);

	return 0;

}

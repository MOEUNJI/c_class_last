#include <stdio.h>
int main(void)
{
	int x = 10;
	double d = 3.1;

	int*p = &x; //& : �ּҸ� �������ڴ�
	// x�� �ּҸ� p�� �����ϰڴ�
	// int : ������ �����ϴ� �����̴�.
	// �ּҸ� �����ϴ� ������ ��� ������ *�� ����Ѵ�.
	// * �� ����ϰ� �Ǹ� �ּҸ� ������ �� �ְ� �ȴ�. 
	printf("%p \n", p); // ���� (�ּҰ�)
	printf("%d \n", *p); // ������(�ּ� �ȿ� �ִ� ������ ��)

	double*ptr = &d; // d�� �ּҸ� ptr�� �����ϰ� ��(8����Ʈ)
	// int���� �ּҴ� int��������,
	// double�� �ּҴ� double�� ������,
	// char�� char������ �����ؾ� ���� ���� ó���� �����ϴ�.
	
	printf("%p \n", ptr);
	printf("%.1f \n", *ptr);


	int dog= 4;
	int* dog_address;
	dog_address = &dog;
	printf("%d : %p \n", *dog_address, dog_address);

	return 0;
}
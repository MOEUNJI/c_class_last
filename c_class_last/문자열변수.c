#include <stdio.h>
int main(void)
{
	char string_text[] = "�ȳ��ϼ���!";
	printf("���ڿ� ����strinf_text�� ���̴� : %zd \n", sizeof(string_text));
	
	char english_text[] = "hello!";
	printf("���ڿ� ����english_text�� ���̴� : %zd \n", sizeof(english_text));
	
	char long_text[50] = "This is long";
	printf("���ڿ� ����long_text�� ���̴� : %zd \n", sizeof(long_text));

	printf("�迭long_text�� ����� ���ڿ��� ����: %d \n", strlen(long_text));
	printf("%s \n", long_text);

	char question[30] = "My name is ����";
	printf("%s \n", question);

	question[10] = '\0';
	printf("%s \n", question);

	char scanf_string[50]; 
	printf("scanf_string���ڿ��� �Է��ϼ��� : ");
	scanf_s("%s", scanf_string, (unsigned int)sizeof(scanf_string));
	printf("%s\n", scanf_string); 
	// scanf_s�Լ��� %s�� ����� �� ������ �����ڷ� �����ؼ� ���⸦
	// ������ ���ڿ��� �Է��� �� ����. ( get_s���)
	// scanf_s�� ���ڿ��� ���� �� &�����ڸ� ������� �ʴ´�! 
	// scanf �� �޸� scanf_s�� ���ڿ��� �޾ƿ� �� sizeof�� ������ �迭������ Ȯ���ؾ���
	//scanf_s �Լ��� ���� ��ȭ�� ���� ���� ���ڿ� %s�� ����� ��,
	// �߰����� �Ű������� ���� ũ�⸦ �䱸�մϴ�.
	// �� ���� ũ���� Ÿ���� **unsigned int**�� �䱸�˴ϴ�.

	char getsString[50];
	printf("getsString ���ڿ��� �Է��ϼ��� : ");
	gets_s(getsString, sizeof(getsString));
	printf(" %s\n", getsString);
	return 0;
}
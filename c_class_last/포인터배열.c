#include <stdio.h>
int main(void)
{
	//int* p1, * p2, * p3, *p4, * p5;
	//// ���� Ÿ���� ������ ������ �ʿ��ϴ� �ϸ�
	//// �����͸� �迭�� ������ ��������

	//int* p[5]; 
	//// int ���� ������ ���� p�� ����Ұǵ�~
	//// p��� �̸����� 5���� �����ϰڴ� ��� ��
	//int a = 3;
	//p[3] = &a; // 3��° ������ �������� a�� �ּҰ� �������
	//printf("%p\n", p[3]);
	//printf("%d\n", *p[3]);

	int b[3] = { 1,20,3 };
	int* b_pointer = b;
	printf("%d\n", *(b_pointer + 1));
	printf("%d\n", *(b + 1));

	int t = 5;
	int* tp = &t;
	//*tp = 10;
	tp[0] = 10;
	printf("%d \n", *tp);
	return 0;
}
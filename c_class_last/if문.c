#include <stdio.h>
int main()
{
	// �̷�
	//int ifNumber = 10;
	//if (ifNumber < 500) { // true
	//	printf("%d �� 500���� �۴�? ���Դϴ�.\n ", ifNumber);
	//}

	//if (ifNumber == 3) { // false
	//	printf("%d�� 3�� ����", ifNumber); // false�ϱ� ���X
	//}

	//// ���� �� ����
	//// ����ڿ��� ���� ���� �Է¹��� �� ���ǹ����� ������ �˻�
	//// 10000 �� �̻��� ��쿡�� ����� ����Ұ���
	//int walkCount;
	//printf("����� �Ϸ� �� �� �����ó���?");
	//scanf_s("%d", &walkCount);
	//if (walkCount >= 10000) {
	//	printf("�Ϸ翡 %d �� �ȴٴ� ����ؿ�! ���� �����Դϴ�. \n", walkCount);
	//}

	//// else��
	//char alpha = 'A';
	//if (alpha == 'B') {
	//	printf("alpha �� B�� ����.");
	//}
	//else {
	//	printf("alpha�� B�� �ٸ���. \n");
	//}

	//// ����� �����ϴ� ���ڴ�? ����
	//int likeNumber;
	//printf("����� �����ϴ� ���ڸ� �Է��ϼ���:");
	//scanf_s("%d", &likeNumber);
	//if (likeNumber >= 10) {
	//	printf("����� �����ϴ� ���ڴ� %d(��)�� 10 ���� Ů�ϴ�. ", likeNumber);
	//}
	//else {
	//	printf("����� �����ϴ� ���ڴ� %d(��)�� 10���� �۽��ϴ�. \n", likeNumber);
	//}

	////else if
	//int num_a;
	//printf("���� �Է� : ");
	//scanf_s("%d", &num_a);
	//if (num_a > 3) { // mum_a�� 3���� ũ�ٸ�
	//	printf("����� \n");
	//}
	//else if (num_a == 1) { // num_a�� 1�� ���ٸ�
	//	printf("������ \n");
	//}
	//else { // 3���� �۰� 1���� ũ�ٸ�
	//	printf("�ܽ��� \n");
	//}

	////���� ����
	//// �Է¹��� ������ 90 �̻��̶�� (A���� - �� ���߾��)
	//// ������ 80�̻��̸� (B����)
	//// 70 �̻��̸� C���� 
	//// 60 �̻��̸� D���� 
	//// �Է¹��� ������ ���� ���� �������� �ʴ´ٸ� ����� ���
	//// (�Է¹��� ����)�� *�����Դϴ� ���

	//int user_score;
	//printf("������ �Է����ּ��� : ");
	//scanf_s("%d", &user_score);
	//if (user_score >= 90) {
	//	printf("A���� - �� ���߾��");
	//}
	//else if (user_score >= 80) {
	//	printf("B����");
	//}
	//else if (user_score >= 70) {
	//	printf("C����");
	//}
	//else if (user_score >= 60) {
	//	printf("D����");
	//}
	//else{
	//	printf("�����");
	//}

	//// �������� ������
	//// 0�� �̻� 7�� ���� : 0~7�� ���� ������� 800�� �Դϴ�.
	//// 8�� �̻� 19�� ���� : 8~19�� �л� ������� 1,200�� �Դϴ�.
	//// 20�� �̻� 34�� ���� : 20~34�� û�� ������� 1,600�� �Դϴ�.
	//// 35�� �̻� 59�� ���� : 35~59�� �߳� ������� 2,000�� �Դϴ�.
	//// 60�� �̻� 150�� ���� : 60~150�� ���� ������� ���� �Դϴ�.
	//// ���� ���� ���� ���� ��� : ���� �߸��Ǿ���.. ����� ���̰� ��� (*)��,,?
	//int user_age;
	//printf("���̸� �Է����ּ��� :");
	//scanf_s("%d", &user_age);
	//if (user_age >= 0 && user_age <= 7) {
	//	printf(" 0~7�� ���� ������� 800�� �Դϴ�.");
	//}
	//else if (user_age >= 8 && user_age <= 19) {
	//	printf("8~19�� �л� ������� 1,200�� �Դϴ�.");
	//}
	//else if (user_age >= 20 && user_age <= 34) {
	//	printf("20~34�� û�� ������� 1,600�� �Դϴ�.");
	//}
	//else if (user_age >= 35 && user_age <= 59) {
	//	printf("35~59�� �߳� ������� 2,000�� �Դϴ�.");
	//}
	//else if (user_age >= 60 && user_age <= 150) {
	//	printf("60~150�� ���� ������� ���� �Դϴ�.");
	//}
	//else {
	//	printf("���� �߸��Ǿ���..����� ���̰� ��� %d��..?", user_age);
	//}

	//��ø if�� 
	int student_num = 250108, student_num_check;
	int student_password = 112233, student_password_check;
	printf("�й��� �Է����ּ��� : ");
	scanf_s("%d", &student_num_check);
	printf("��й�ȣ�� �Է����ּ��� : ");
	scanf_s("%d", &student_password_check);

	if (student_num == student_num_check) {
		if (student_password == student_password_check) {
			printf("%d�� �α��� �Ǿ����ϴ�. ", student_num);
			// �й��� ��� ��� ��ġ�� ���
		}
		else {
			printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�. ");
		}
	}
	else {
		printf("���̵� ��ġ���� �ʽ��ϴ�. ");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	// 이론
	//int ifNumber = 10;
	//if (ifNumber < 500) { // true
	//	printf("%d 이 500보다 작니? 참입니다.\n ", ifNumber);
	//}

	//if (ifNumber == 3) { // false
	//	printf("%d과 3은 같다", ifNumber); // false니까 출력X
	//}

	//// 걸음 수 문제
	//// 사용자에게 걸음 수를 입력받은 후 조건문으로 조건을 검사
	//// 10000 보 이상일 경우에만 결과를 출력할것임
	//int walkCount;
	//printf("당신은 하루 몇 보 걸으시나요?");
	//scanf_s("%d", &walkCount);
	//if (walkCount >= 10000) {
	//	printf("하루에 %d 보 걷다니 대단해요! 좋은 습관입니다. \n", walkCount);
	//}

	//// else문
	//char alpha = 'A';
	//if (alpha == 'B') {
	//	printf("alpha 는 B와 같다.");
	//}
	//else {
	//	printf("alpha는 B와 다르다. \n");
	//}

	//// 당신이 좋아하는 숫자는? 문제
	//int likeNumber;
	//printf("당신이 좋아하는 숫자를 입력하세요:");
	//scanf_s("%d", &likeNumber);
	//if (likeNumber >= 10) {
	//	printf("당신이 좋아하는 숫자는 %d(으)로 10 보다 큽니다. ", likeNumber);
	//}
	//else {
	//	printf("당신이 좋아하는 숫자는 %d(으)로 10보다 작습니다. \n", likeNumber);
	//}

	////else if
	//int num_a;
	//printf("숫자 입력 : ");
	//scanf_s("%d", &num_a);
	//if (num_a > 3) { // mum_a가 3보다 크다면
	//	printf("고양이 \n");
	//}
	//else if (num_a == 1) { // num_a가 1과 같다면
	//	printf("강아지 \n");
	//}
	//else { // 3보다 작고 1보다 크다면
	//	printf("햄스터 \n");
	//}

	////학점 문제
	//// 입력받은 학점이 90 이상이라면 (A학점 - 참 잘했어요)
	//// 학점이 80이상이면 (B학점)
	//// 70 이상이면 C학점 
	//// 60 이상이면 D학점 
	//// 입력받은 학점이 범위 내에 존재하지 않는다면 재시험 출력
	//// (입력받은 학점)은 *학점입니다 출력

	//int user_score;
	//printf("학점을 입력해주세요 : ");
	//scanf_s("%d", &user_score);
	//if (user_score >= 90) {
	//	printf("A학점 - 참 잘했어요");
	//}
	//else if (user_score >= 80) {
	//	printf("B학점");
	//}
	//else if (user_score >= 70) {
	//	printf("C학점");
	//}
	//else if (user_score >= 60) {
	//	printf("D학점");
	//}
	//else{
	//	printf("재시험");
	//}

	//// 복합조건 버스비
	//// 0세 이상 7세 이하 : 0~7세 유아 버스비는 800원 입니다.
	//// 8세 이상 19세 이하 : 8~19세 학생 버스비는 1,200원 입니다.
	//// 20세 이상 34세 이하 : 20~34세 청년 버스비는 1,600원 입니다.
	//// 35세 이상 59세 이하 : 35~59세 중년 버스비는 2,000원 입니다.
	//// 60세 이상 150세 이하 : 60~150세 노인 버스비는 무료 입니다.
	//// 범위 내에 값이 없을 경우 : 무언가 잘못되었다.. 사람의 나이가 어떻게 (*)살,,?
	//int user_age;
	//printf("나이를 입력해주세요 :");
	//scanf_s("%d", &user_age);
	//if (user_age >= 0 && user_age <= 7) {
	//	printf(" 0~7세 유아 버스비는 800원 입니다.");
	//}
	//else if (user_age >= 8 && user_age <= 19) {
	//	printf("8~19세 학생 버스비는 1,200원 입니다.");
	//}
	//else if (user_age >= 20 && user_age <= 34) {
	//	printf("20~34세 청년 버스비는 1,600원 입니다.");
	//}
	//else if (user_age >= 35 && user_age <= 59) {
	//	printf("35~59세 중년 버스비는 2,000원 입니다.");
	//}
	//else if (user_age >= 60 && user_age <= 150) {
	//	printf("60~150세 노인 버스비는 무료 입니다.");
	//}
	//else {
	//	printf("무언가 잘못되었다..사람의 나이가 어떻게 %d살..?", user_age);
	//}

	//중첩 if문 
	int student_num = 250108, student_num_check;
	int student_password = 112233, student_password_check;
	printf("학번을 입력해주세요 : ");
	scanf_s("%d", &student_num_check);
	printf("비밀번호를 입력해주세요 : ");
	scanf_s("%d", &student_password_check);

	if (student_num == student_num_check) {
		if (student_password == student_password_check) {
			printf("%d님 로그인 되었습니다. ", student_num);
			// 학번과 비번 모두 일치할 경우
		}
		else {
			printf("비밀번호가 일치하지 않습니다. ");
		}
	}
	else {
		printf("아이디가 일치하지 않습니다. ");
	}
	return 0;
}
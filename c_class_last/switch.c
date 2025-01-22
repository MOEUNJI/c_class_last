#include <stdio.h>
int main()
{
	//int day;
	//printf("요일을 선택하세요 1~7 중 택1:");
	//scanf_s("%d", &day);
	//switch (day) {
	//	case 1: printf("월요일 입니다. \n");
	//		break;
	//	case 2: printf("화요일 입니다. \n");
	//		break;
	//	case 3: printf("수요일 입니다. \n");
	//		break;
	//	case 4: printf("목요일 입니다. \n");
	//		break;
	//	case 5: printf("금요일 입니다. \n");
	//		break;
	//	case 6: printf("토요일 입니다. \n");
	//		break;
	//	case 7: printf("일요일 입니다. \n");
	//		break;
	//	
	//	default: printf("유효하지 않은 입력입니다.");
	//}

	//계산기 문제
	char operator;
	int num1, num2;
	printf("연산자를 입력하세요(+,-,*,/) : ");
	scanf_s("%c", &operator,1); //%c : char형 문자를 받을거다 라는 뜻
	// 1을 지정해주는 이유는 문자 크기를 지정하는 것 (필수 )

	printf("두 숫자를 입력하세요 : ");
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
			printf("0으로 나눌 수 없습니다. \n");
		}
		// 이렇게 입력하는 이유
		// 어떤 숫자 a를 b로 나눈다는 걸 반대로 생각해보면 
		// b가 몇번 곱해져야 a가 되는지를 묻는 것이다.
		// 예를들어 6/2 = 3인데 2를 몇번 더해야 6이 되나요? (3번)
		// 그런데 b가 0이라면? 0을 몇번 더해야 6이 될까요? 
		// 0은 아무리 곱해도 0이기 때문에 절대 6이 될 수 없다. 
		// 그래서 수학적으로 어떤 수를 0으로 나누는 건 정의되지 않기 때문에
		// 0이 아닐땐 나누기 연산을 실행하고 0 이라면 나눌 수 없다는 메시지 출력
		break;
	default: printf("유효하지 않은 연산자입니다. ");
		break;
	}
	return 0;
}
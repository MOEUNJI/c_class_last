#include <stdio.h>
int main()
{
	int totalPrice;
	int member;

	printf("구매금액 입력(숫자만) : ");
	scanf_s("%d", &totalPrice);

	printf("회원이신가요? (회원이면 1 아니면 0 입력) :");
	scanf_s("%d", &member);

	if (totalPrice >= 100000) {
		printf("100,000 이상 구매로 사은품이 증정됩니다.");
		if (member == 1) {
			printf("50,000 이상 구매 회원은 배송비도 무료입니다!!");
			// 100000만원 이상 구매, 회원일 경우
		}
		else {
			printf("비회원은 배송비 5,000원 부과됩니다.");
		}
	}
	else if (totalPrice >= 50000) {
		if (member == 1) {
			printf("회원 50,000 이상 구매 고객은 배송비 무료입니다");
		}
		else {
			printf("비회원은 배송비 5,000 원 부과됩니다.");
		}
	}
	else {
		printf("구매금액이 50,000원 미만입니다. 배송비 5,000원이 부과됩니다.");
	}

	return 0;
}
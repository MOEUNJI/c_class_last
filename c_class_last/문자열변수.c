#include <stdio.h>
int main(void)
{
	char string_text[] = "안녕하세요!";
	printf("문자열 변수strinf_text의 길이는 : %zd \n", sizeof(string_text));
	
	char english_text[] = "hello!";
	printf("문자열 변수english_text의 길이는 : %zd \n", sizeof(english_text));
	
	char long_text[50] = "This is long";
	printf("문자열 변수long_text의 길이는 : %zd \n", sizeof(long_text));

	printf("배열long_text에 저장된 문자열의 길이: %d \n", strlen(long_text));
	printf("%s \n", long_text);

	char question[30] = "My name is 은지";
	printf("%s \n", question);

	question[10] = '\0';
	printf("%s \n", question);

	char scanf_string[50]; 
	printf("scanf_string문자열을 입력하세요 : ");
	scanf_s("%s", scanf_string, (unsigned int)sizeof(scanf_string));
	printf("%s\n", scanf_string); 
	// scanf_s함수는 %s를 사용할 때 공백을 구분자로 간주해서 띄어쓰기를
	// 포함한 문자열을 입력할 수 없다. ( get_s사용)
	// scanf_s로 문자열을 받을 땐 &연산자를 사용하지 않는다! 
	// scanf 와 달리 scanf_s는 문자열을 받아올 때 sizeof로 변수의 배열공간을 확보해야함
	//scanf_s 함수는 보안 강화를 위해 포맷 문자열 %s를 사용할 때,
	// 추가적인 매개변수로 버퍼 크기를 요구합니다.
	// 이 버퍼 크기의 타입은 **unsigned int**로 요구됩니다.

	char getsString[50];
	printf("getsString 문자열을 입력하세요 : ");
	gets_s(getsString, sizeof(getsString));
	printf(" %s\n", getsString);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("10진수 입력 : ");
	scanf("%d", &a);

	printf("8진수 출력 : ");
	printf("%o", a);

	return 0;
}
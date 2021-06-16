#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	printf("숫자 입력 : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("짝수");
	}
	else {
		printf("홀수");
	}

	return 0;
}

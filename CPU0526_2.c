#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("시작 수 입력 : ");
	scanf("%d", &a);

	printf("마지막 수 입력 : ");
	scanf("%d", &b);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, (a * i));
	}
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", b, i, (b * i));
	}

	return 0;
}
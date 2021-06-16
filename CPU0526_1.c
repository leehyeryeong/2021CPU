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

	for (a; a<=b; a++) {
		if (a % 2 == 1) {
			printf("%d\t", a);
		}
	 }

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("���� �� �Է� : ");
	scanf("%d", &a);

	printf("������ �� �Է� : ");
	scanf("%d", &b);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, (a * i));
	}
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", b, i, (b * i));
	}

	return 0;
}
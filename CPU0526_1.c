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

	for (a; a<=b; a++) {
		if (a % 2 == 1) {
			printf("%d\t", a);
		}
	 }

	return 0;
}
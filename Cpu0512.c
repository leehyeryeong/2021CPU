#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	printf("���� �Է� : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("¦��");
	}
	else {
		printf("Ȧ��");
	}

	return 0;
}
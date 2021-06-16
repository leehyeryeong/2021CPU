#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	printf("¼ýÀÚ ÀÔ·Â : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("Â¦¼ö");
	}
	else {
		printf("È¦¼ö");
	}

	return 0;
}
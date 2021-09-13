#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int b;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", a == b ? 100 : -100);

	system("pause");
	return 0;
}
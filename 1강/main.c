#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a > b); //true 1 false 0
	printf("%d\n", a == b); //true 1 false 0
	printf("%d\n", a < b); //true 1 false 0
	printf("%d\n", a != b); //true 1 false 0
	printf("%d\n", a && b); //true 1 false 0
	printf("%d\n", a || b); //true 1 false 0



	system("pause");
	return 0;
}
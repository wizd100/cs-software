#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int main(void) {
	printf("%d\n", add(10, 20));
	printf("%d\n", add(10, 30));
	system("pause");
	return 0;
}
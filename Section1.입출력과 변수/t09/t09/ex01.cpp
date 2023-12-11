/*
	두 숫자를 입력받아 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d + %d = %d", a, b, a + b);
}
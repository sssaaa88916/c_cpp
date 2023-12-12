// 비교 연산자, 논리 연산자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	// bool : 진리값을 저장하는 저장용 변수 1바이트
	bool p = a > b;
	int q = a < b;
	int r = a == b;

	// !=, <=, >=

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}
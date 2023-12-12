// 중첩 if문
// 중괄호 코딩 스타일
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > c) printf("%d\n", a);
		else  // c > a
			printf("%d\n", c);
	}
	else  // b > a;
		if (b > c) printf("%d\n", b);
		else  // c < b
			printf("%d\n", c);
}
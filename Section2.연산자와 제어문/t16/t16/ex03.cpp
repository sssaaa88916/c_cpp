#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 0; i<=n; i++) {
		sum += i;
	}
	\
	printf("%d\n", sum);
}
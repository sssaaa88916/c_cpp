/*
	n = 4
	1
	1 3
	1 3 5
	1 3 5 7
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("n = %d\n", n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ", j * 2 - 1);
		}
		printf("\n");
	}
}
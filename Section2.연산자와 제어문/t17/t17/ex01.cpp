#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i;

	scanf("%d", &i);

	for (;; i++) {
		printf("%d", i);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("n�� ¦��\n");
	}
	else printf("n�� Ȧ��\n");

	if (n > 0) {
		printf("n�� ���\n");
	}
	else if (n == 0) printf("n�� 0\n");
	else printf("n�� ����\n");
}
// �� ������, �� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	// bool : �������� �����ϴ� ����� ���� 1����Ʈ
	bool p = a > b;
	int q = a < b;
	int r = a == b;

	// !=, <=, >=

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}
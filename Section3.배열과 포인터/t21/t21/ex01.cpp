// �Է¹��� ���ڵ��� �Ųٷ� ���
// �ִ�, �ּ�
// ¦���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int arr[1000];

	printf("�Է��� ������ ���� �Է� : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
}
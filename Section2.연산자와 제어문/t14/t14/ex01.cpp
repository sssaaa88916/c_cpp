#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;

	// ���İ�Ƽ �ڵ� ����
	makeChoice:

	printf("�� ���� : 1\n");
	printf("�ҷ����� : 2\n");
	printf("����: 3\n");
	printf("ũ����: 4\n");

	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("�� ����.\n");
		break;
	case 2:
		printf("�ҷ�����.\n");
		break;
	case 3:
		printf("����.\n");
		break;
	case 4:
		printf("ũ����.\n");
		break;
	default:
		printf("�߸� �Է��Ͽ����ϴ�.");
		goto makeChoice;
		break;
	}
}
// 1. �������� �Է�
// 90 ~ 100A
// 80 ~ 89B
// 70 ~ 79C
// 60 ~ 69D
// 50 ~ 59E
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	initScore:

	int score;
	printf("���������� �Է��Ͻÿ� : ");
	scanf("%d", &score);

	switch (score / 10)
	{
	case 10:
		printf("A");
		break;
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	case 5:
		printf("F");
		break;
	default:
		printf("�ٽ� �Է��Ͻÿ�\n");
		goto initScore;
		break;
	}
}

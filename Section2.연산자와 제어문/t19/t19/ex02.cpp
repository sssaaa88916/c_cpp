// �Է� ���� �ڿ����� ����� ����Ͻÿ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nauturalNum;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf("%d", &nauturalNum);

	for (int i = 1; i <= nauturalNum/2; i++) {
		if (nauturalNum % i == 0) {
			printf("%d, ", i);
		}
	}
	printf("%d\n", nauturalNum);
}
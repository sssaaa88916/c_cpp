/*
	ü�߰� Ű�� �Է¹޾Ƽ� ü���� ������ ���ϴ�	���α׷��� ����� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float height, weight;

	printf("Ű�� �Է��ϼ���(cm) : ");
	scanf("%f", &height);

	printf("ü���� �Է��ϼ���(kg) : ");
	scanf("%f", &weight);

	printf("����� ü���� ������ %.2f�Դϴ�", weight / pow(height /100, 2));
}
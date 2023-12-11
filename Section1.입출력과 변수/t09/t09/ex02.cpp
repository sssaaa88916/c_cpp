/*
	체중과 키를 입력받아서 체질량 지수를 구하는	프로그램을 만들어 보세요.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float height, weight;

	printf("키를 입력하세요(cm) : ");
	scanf("%f", &height);

	printf("체중을 입력하세요(kg) : ");
	scanf("%f", &weight);

	printf("당신의 체질량 지수는 %.2f입니다", weight / pow(height /100, 2));
}
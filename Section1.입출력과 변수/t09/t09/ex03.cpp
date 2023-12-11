/*
	알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어보세요. (Z제외)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char alphabet;

	printf("알파벳을 입력하세요 : ");
	scanf("%c", &alphabet);
	
	printf("다음 알파벳은 %c입니다", alphabet + 1);
}
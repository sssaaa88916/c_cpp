#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Hello";
	char str2[100];

	strcpy(str2, str1);

	printf("str2�� �� : %s\n", str2);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "Hello ";

	strcat(str, "World!");

	printf("%s\n", str);
}
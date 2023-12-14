// 문자열 : 문자들이 열거
#include <stdio.h>

int main() {
	char arr[] = "Hellon world!";
	// \0 포함 null문자 문자열의 끝을 나타냄
	// {... 'w', 'o', 'r', 'l', 'd', '\0'};

	printf("배열의 크기 : %d", sizeof(arr) / sizeof(char));
}
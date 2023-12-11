#include <stdio.h>

int main() {
	printf("%d + %d = %d\n", 2, 3, 5);

	printf("%f\n", 3.14);
	printf("%.2f\n", 3.141592);

	// %g : 실수 출력 (지수 형태로도 출력, 유효 숫자 형태로 표현)
	printf("%g\n", 3.141592);
	printf("%.3g\n", 8723984712.12821933);

	printf("%c %c %c\n", 'a', 'b', 'c');

	printf("%s\n", "안녕하세요");
}
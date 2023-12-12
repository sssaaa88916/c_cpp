// 입력 받은 자연수의 약수를 출력하시오
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int nauturalNum;
	printf("자연수를 입력하시오 : ");
	scanf("%d", &nauturalNum);

	for (int i = 1; i <= nauturalNum/2; i++) {
		if (nauturalNum % i == 0) {
			printf("%d, ", i);
		}
	}
	printf("%d\n", nauturalNum);
}
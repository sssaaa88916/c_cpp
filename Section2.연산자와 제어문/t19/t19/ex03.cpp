// 일의 자릿수가 3의 배수인 경우 *로 출력
// 1 2 * ... 10 11 12 * ~
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	for (int i = 1; i<50 ; i++) {
		if (i % 10 % 3 == 0 && i % 10 != 0) printf(" * ");
		else printf(" %d ", i);
		/*
		    int val = i % 10;
			if(val == 3 || val == 6 || val == 9)
		*/
	}
	printf("\n");
}
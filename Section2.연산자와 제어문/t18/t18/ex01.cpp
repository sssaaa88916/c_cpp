// break
// continue
// ÁßÃ¸ for¹®
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	for (int i = 0; ; i++) {
		int k;
		scanf("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d¹ø¤Š: %d\n", i, k);
	}
}

// break
// continue
// ��ø for��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	for (int i = 0; ; i++) {
		int k;
		scanf("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d����: %d\n", i, k);
	}
}

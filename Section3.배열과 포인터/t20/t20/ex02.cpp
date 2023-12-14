#include <stdio.h>

int main() {
	// array
	int arr[5] = { 3, 1, 4, 1, 5 };

	for (int i = 0; i < sizeof(arr)/sizeof(int) ; i++) {
		printf("%d\n", arr[i]);
	}
	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;

	// 스파게티 코드 유발
	makeChoice:

	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정: 3\n");
	printf("크레딧: 4\n");

	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("새 게임.\n");
		break;
	case 2:
		printf("불러오기.\n");
		break;
	case 3:
		printf("설정.\n");
		break;
	case 4:
		printf("크레딧.\n");
		break;
	default:
		printf("잘못 입력하였습니다.");
		goto makeChoice;
		break;
	}
}
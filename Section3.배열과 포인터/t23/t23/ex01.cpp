// ���ڿ� : ���ڵ��� ����
#include <stdio.h>

int main() {
	char arr[] = "Hellon world!";
	// \0 ���� null���� ���ڿ��� ���� ��Ÿ��
	// {... 'w', 'o', 'r', 'l', 'd', '\0'};

	printf("�迭�� ũ�� : %d", sizeof(arr) / sizeof(char));
}
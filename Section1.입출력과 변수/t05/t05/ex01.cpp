#include <stdio.h>

int main() {
	//float 32bit, double 64bit
	int a = 5;
	int b = 3;

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namugi = a % b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	printf("%d %% %d = %d\n", a, b, namugi);

	/*
		������
		char (1����Ʈ) - ���ڸ� ��� �� ���δ�
		short (2����Ʈ)
		long (4����Ʈ) -2147483648 ~ +2147483647
		long long (8����Ʈ)
		int (�ý��ۿ� ���� �ڵ�����, ��ü�� long)

		�Ǽ���
		float (4����Ʈ)
		double (8����Ʈ)

		signed  ��ȣ o
		unsigned ��ȣ x ex) long 0 ~ �� 42��

		void
		bool (1����Ʈ) char�� ���� �ǹ̰� ����
	*/
}
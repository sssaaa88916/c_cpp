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
		정수형
		char (1바이트) - 문자를 담는 데 쓰인다
		short (2바이트)
		long (4바이트) -2147483648 ~ +2147483647
		long long (8바이트)
		int (시스템에 따라 자동결정, 대체로 long)

		실수형
		float (4바이트)
		double (8바이트)

		signed  부호 o
		unsigned 부호 x ex) long 0 ~ 약 42억

		void
		bool (1바이트) char와 같아 의미가 없다
	*/
}
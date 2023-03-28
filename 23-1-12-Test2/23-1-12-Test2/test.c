#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	char a = 128;
	char b = -128;
	printf("%u\n", a);
	//4294967168
	printf("%u\n", b);
	//4294967168
	return 0;
}
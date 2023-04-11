#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstring>
#include<iostream>

int main()
{
	int arr[3][5];
	printf("%p\n",arr);
	printf("%p\n",arr + 1);

	printf("%p\n",&arr);
	printf("%p\n",&arr + 1);


	return 0;
}
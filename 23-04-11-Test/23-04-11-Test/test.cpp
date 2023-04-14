#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
const int N = 20000;

//char arr1[N];
//char arr2[N];


//void check(char arr1[], char arr2[])
//{
//	int len = 
//}


//字符串反转的结果	
//int check(char arr1[], char arr2[])
//{
//	scanf("%s", arr1);	
//	strncat(arr1, arr1, strlen(arr1));
//	//printf("%s",arr1);
//	scanf("%s", arr2);
//	if (strstr(arr1, arr2) != NULL)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("0\n");
//	}
//	return 0;
//}

//字符指针
//简易用法
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%p\n", &ch);
//	printf("%p\n", pc);
//	return 0;
//}


//指向字符串的字符指针

//int main()
//{
//	const char* p = "abcdef";
//	
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//
//	while (1)
//	{
//		check(arr1, arr2);
//	}
//
//	return 0;
//}

	
//

//int main()
//{
//	const char* p1 = "abcdef"; 
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//printf("%p\n", &p1);
//	//printf("%p\n", &p2);
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else {
//		printf("p1 != p2\n");
//	}
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr2);
//	if (arr1 == arr2) 
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	return 0;
//}

//指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//
//	int* arr[3] = { &a, &b, &c };//arr就是一个指针数组
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	return 0;
//}


//指针数组 每个元素为指针  指向一个数组
//parr3	
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1, arr2, arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d", parr[i][j]);
//			printf("%d", *(parr[i] + j));
//		}
//		puts("\n");
//	}
//}

//int main()
//{
//	int arr[3][5];
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}


//void print1(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
// 
//void print2(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void print3(int (*p)[8], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *((*p) + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[8] = { 1,2,3,4,5,6,7,8 };
//	int len = sizeof(arr) /sizeof(arr[0]);
//	//print1(arr,len);
//	//print2(arr,len);
//	print3(&arr,len);
//	return 0;
//}


//void print4(int arr[3][5], int c, int r)
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print5(int (*p)[5],int c,int r)
//{
//	int i = 0;
//	for (int i = 0; i < c; i++)
//	{
//		for (int j = 0; j < r; j++)
//		{
//
//			printf("%d", *(*(p + i) + j));
//		}
//		puts("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//int (*ptr)[3][5] = &arr;
//	//写一个函数，打印arr数组
//
//		//arr[i]
//		//*(arr+i)
//		// 
//		//arr[i][j]
//		//*(arr+i)[j]
//		//*(*(arr+i)+j)
//
//	
//
//
//	print5(arr, 3, 5);
//	return 0;
//}





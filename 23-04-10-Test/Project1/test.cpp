#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstring>
#include<iostream>

//void test(char** ppc)
//{
//
//}

//int main()
//{
//	int arr[3][5];
//	printf("%p\n",arr);
//	printf("%p\n",arr + 1);
//
//	printf("%p\n",&arr);
//	printf("%p\n",&arr + 1);
//
//
//	char* arr[4];
//	test(arr);
//
//	return 0;
//}

void test1(int(*p)[5])
{}
void test2(int(*p)[3][5])
{
	*p;
}
int main()
{
	//int arr[3][5];
	//test1(arr);//传递的第一行的地址
	//test2(&arr);//传递的是整个二维数组的地址

	//int* p2;
	//int arr[10];
	//int(*p2)[10] = &arr;
	////printf("%p",p2);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d", (*p2)[i]);
	//}


	//函数指针
	//(*(void(*)()) 0)();
	
	void(*signal(int, void(*) (int))) (int);
	
	return 0;
}

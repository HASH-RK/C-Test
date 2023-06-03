#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#define MAX 31
#define MIN 31
using namespace std;

//void ShellSort(int* a, int n)
//{
//	/*int gap = 3;
//	for (int j = 0; j < gap; j++)
//	{
//		for (int i = j; i < n - gap; i += gap)
//		{
//			int end = i;
//			int tmp = a[i + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}*/
//
//	// gap > 1 预排序
//	// gap == 1 直接插入排序
//	int gap = n;
//	while (gap > 1)
//	{
//		//gap /= 2;
//		gap = gap / 3 + 1;
//
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = a[i + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//		//printf("gap:%d->", gap);
//		//PrintArray(a, n);
//	}
//}
//
//
//void TestShellSort()
//{
//	int a[] = { 9,8,7,6,5,4,3,2,1,0,-1,-2,-3,-3,-4,-5,-5,-6,-7,-8,-9 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//
//	ShellSort(a, sizeof(a) / sizeof(int));
//
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//
//void PrintArray(int* a, int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}


//int main()
//{
//	TestShellSort();
//	return 0;
//}



//
// Created by HASHRK on 2023/5/31.
//



//int main()
//{
//	//int a, b;
//	//b = 0;
//	//for (int z = 1; z <= 31; ++z)
//	//{
//	//	a = rand() % 3;
//	//	if (a == 0)
//	//	{
//	//		b = b + 1;
//	//	}
//	//}
//	//cout << "31次试验，抓到阄的次数为：" << b << "次";
//	//system("pause");
//// 生成 [0, max]
//	//int x = rand() % (MAX + 1);
//
//	// 生成 [1, max + 1) ，即 [1, max]
//	//int x = 1 + rand() % (MAX);
//
//	// 生成 [min, max] 范围的随机数
//
//	int x = MIN + rand() % (MAX - MIN + 1);
//	cout << "1~31号，抓到阄的为：" << x;
//
//	return 0;
//}

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a = 1;
    int b = 31;
    int acontain_bnocontain = (rand() % (b - a)) + a;
    int acontain_bcontain = (rand() % (b - a + 1)) + a;
    int anocontain_bcontain = (rand() % (b - a)) + a + 1;

 //   cout << "[a,b)中随机数：" << acontain_bnocontain << endl;
    cout << "[a,b]中随机数：" << acontain_bcontain << endl;
  //  cout << "(a,b]中随机数：" << anocontain_bcontain << endl;
    return 0;
}
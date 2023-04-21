#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<cstring>
#include<stdlib.h>


//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int num, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//if (arr[j] > arr[j + 1])//比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//	/*if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 == *(int*)e2)
//		return 0;
//	else
//		return -1;*/
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//void test4()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int main()
//{
//	test4();
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	double score;
};

void Swap(char* buf1 , char* buf2 , int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}

}


void bubblesort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))
{
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap( (char*)base + j * width, (char*)base + (j + 1) * width ,width);
			}
		}
	}
}

//针对整形数组数组的比较
int cmp_arr(const void* e1,const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}

int cmp_arr_by_age(const void* e1, const void* e2)
{
	return ( ((struct Stu*)e1 )-> age) - (((struct Stu*)e2) ->age );
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2) ->name );
}

int cmp_stu_by_score(const void* e1, const void* e2)
{
	return (((struct Stu*)(e1))->score - ((struct Stu*)(e2))->score);
}


void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}

//void print_arr_stu(Stu arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}


//void test1()
//{
//	
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubblesort(arr, sz, sizeof(arr[0]), cmp_arr);
//	print_arr(arr,sz);
//
//
//}

void test2()
{

	struct Stu arr[3] = { {"zs",10,85.6},{"ls", 30, 88.0},{"ww", 10, 90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubblesort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//print_arr_stu(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_score);
	//printf("%f", ( (arr[1]).score - (arr[0].score)));

	
}

int main()
{
	//test1();
	test2();
	return 0;
}







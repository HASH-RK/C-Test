#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

void Swap(char* buf1, char* buf2, int width)
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


void bubblesort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

//针对整形数组数组的比较
int cmp_arr(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}

int cmp_arr_by_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age) - (((struct Stu*)e2)->age);
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
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

	struct Stu arr[3] = { {"zs",10,85.6},{"ls", 30, 73.0},{"ww", 10, 90.0} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubblesort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//print_arr_stu(arr, sz);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_score);
	//printf("%f", ( (arr[1]).score - (arr[0].score)));


}

int main()
{
	//test1();
	test2();
	return 0;
}







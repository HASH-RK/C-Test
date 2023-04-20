#define _CRT_SECURE_NO_WARNINGS 1
#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//int nums[3] = { 3,0,2 };
//int main()
//{
//    const int len = (sizeof(nums) / sizeof(nums[0]));
//    int buk[len + 1];//桶排序
//    for (int i = 0; i < len; i++)
//    {
//        //buk第几个数加加
//        const int tmp = nums[i];
//        buk[tmp]++;
//    }
//    for (int i = 0; i < len + 1; i++)
//    {
//        if (buk[i] == 0)
//        {
//            return i;
//        }
//    }
//    return 0;
//
//}
// 
// 
    //int missingNumber(int nums[]) 
    //{

    //}

    
//翻转
//int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
//
//int main()
//{
//    int len = nums.size();
//    vector<int> cnt(2 * len, 0);
//    for (int i = 0; i < nums.size(); i++)
//    {
//        cnt[i] = nums[i];
//    }
//    for (int i = nums.size(), j = 0; i < cnt.size(), j < nums.size(); i++, j++)
//    {
//        cnt[i] = nums[j];
//    }
//    for (int i = k; i < k + nums.size() - 1; i++)
//    {
//        printf("%d", nums[i]);
//    }
//    return 0;
//}

//void rotate(vector<int>& nums, int k)
//{
//
//}


//指针解引用

void test()
{
    printf("hehe\n");
}

void print_hehe(void(*p)())
{
    if (1)
    {
       (*p)();
        p();
    }
}
int main()
{
    print_hehe(test);
    return 0;
}

//函数指针
//void test()
//{
//	printf("hehe\n");
//}

//int main()
//{
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//	void(* pf)() = test;
//	(*pf)();//通过pf指针调用test函数
//	test();
//	pf();
//
//	return 0;
//}
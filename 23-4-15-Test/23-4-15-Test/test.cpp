#define _CRT_SECURE_NO_WARNINGS 1
#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int nums[3] = { 3,0,2 };
int main()
{
    const int len = (sizeof(nums) / sizeof(nums[0]));
    int buk[len + 1];//桶排序
    for (int i = 0; i < len; i++)
    {
        //buk第几个数加加
        const int tmp = nums[i];
        buk[tmp]++;
    }
    for (int i = 0; i < len + 1; i++)
    {
        if (buk[i] == 0)
        {
            return i;
        }
    }
    return 0;

}
    //int missingNumber(int nums[]) 
    //{

    //}
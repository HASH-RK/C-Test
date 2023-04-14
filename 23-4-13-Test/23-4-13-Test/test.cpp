#define _CRT_SECURE_NO_WARNINGS 1
#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 5000;

//int p;
//int nums[9] = {9,6,4,2,3,5,7,0,1};
//int main()
//{
//    
//    int buk[10];
//
//    for (int i = 0; i < 8; i++)
//    {
//        int tmp = nums[i];
//        buk[tmp]++;
//    }
//
//    for (int i = 0; i < 9; i++)
//    {
//        if (buk[i] == 0)
//        {
//            return i;
//        }
//    }
//    
//}

//while (scanf("%d", &nums[p]) != EOF)
//{
//    p++;
//}
//int len = sizeof(nums);
//int arr2[N];
//for (int i = 0; i < len; i++)
//{
//    arr2[nums[i]] = nums[i];
//}
//for (int i = 0; i < len; i++)
//{
//    if ((arr2[i + 1] - arr2[i]) != 1)
//    {
//        return (arr2[i] + 1);
//    }
//}



void revov(char arr1[], char arr2[], int k, int len)
{
	strcat(arr1, arr2);
	for (int j = k; j < k + len; j++)
	{

		printf("%c", arr1[j]);
	}
	printf("\n");
}

int main()
{
	char arr[N];
	int k;
	int i = 0;
	while (1)
	{
		
		scanf("%s", &arr);
		
		while (arr[i] != NULL)
		{
			i++;
		}
		cin >> k;
		revov(arr,arr,k,i);
	}
	return 0;
}
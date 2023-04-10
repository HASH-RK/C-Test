#define _CRT_SECURE_NO_WARNINGS 1
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
const int N = 100010;
int n, m;
int q[N];
int main()
{

	//scanf("%d%d", &n, &m);
	//for (int i = 0; i < n - 1; i++)
	//{
	//	scanf("%d", &q[i]);
	//}

	//int l, r = n - 1;
	//int x;
	//for (int i = 1; i < m; i++)
	//{
	//	scanf("%d", x);
	//	int mid = l + r >> 1;
	//	if (q[mid] >= x)
	//	{

	//	}
	//}

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &q[i]);
	}
	for (int i = 0; i < sizeof q; i++)
	{
		printf("%d", q[i]);
	}

	//int x;
	//int l = 0, r = n - 1;
	//scanf("%d", &x);
	//while (l <= r)
	//{
	//	int mid = l + r >> 1;
	//	if (q[mid] > x)
	//	{
	//		r = mid - 1;
	//	}
	//	else if (q[mid] < x)
	//	{
	//		l = mid + 1;
	//	}
	//	else
	//	{
	//		return mid;
	//	}
	//}
	//for (int i = 0; i < m; i++)
	//{

	//}


	return 0;
}
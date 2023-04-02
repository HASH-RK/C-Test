#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int M = 10100;
int n;
int st[M];

int main()
{
    // int p;
    // int anse;
    // int ansr;
    // cin >> n;
    // while (scanf("%d", &st[p]) != EOF)
    // {
    //     p++;
    // }
    // sort(st, st + p);
    
        cin>>n;

    //设定数组的索引指针p，从0开始
    int p=0;

    //EOF表示End Of File，就是文件末尾，如果没有读到文件末尾的话，就一直读取。
    //也可以写成while(scanf("%d",&st[p++])!=EOF)，就不需要循环体了
    while(scanf("%d",&st[p])!=EOF)
    {
        p++;
    }
    
    // int cnt = 0;
    // while (cnt < p)
    // {
    //     if (arr[cnt] = arr[cnt + 1] - 2)
    //     {
    //         anse= arr[cnt] + 1;
    //     }
    //     if (arr[cnt] = arr[cnt + 1])
    //     {
    //         ansr = arr[cnt];
    //     }
    //     cnt++;
    // }
    
    int u,v;
    for(int i=0;i<p-1;i++)
    {
        if(st[i]==st[i+1]) u=st[i];
        if(st[i]==st[i+1]-2) v=st[i];
    }

     cout<<v+1<<" "<<u;
    // cout << anse << " " << ansr;
    return 0;
}
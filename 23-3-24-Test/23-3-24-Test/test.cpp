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

    //�趨���������ָ��p����0��ʼ
    int p=0;

    //EOF��ʾEnd Of File�������ļ�ĩβ�����û�ж����ļ�ĩβ�Ļ�����һֱ��ȡ��
    //Ҳ����д��while(scanf("%d",&st[p++])!=EOF)���Ͳ���Ҫѭ������
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
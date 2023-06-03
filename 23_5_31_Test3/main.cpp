#include "Stack.h"
#include <iostream>

//
// Created by HASHRK on 2023/5/31.
//



int main()
{
    int a,b;
    b=0;
    for(int z=0;z<=999;++z)
    {
        a=rand()%3;
        if(a==0)
        {
            b=b+1;
        }
    }
    cout<<"1000次试验，抓到阄的次数为："<<b<<"次";
    system("pause");
    return 0;
}






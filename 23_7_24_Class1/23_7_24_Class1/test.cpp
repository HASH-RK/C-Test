#define _CRT_SECURE_NO_WARNINGS 1
#include"Func.h"

#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<assert.h>	
using namespace std;


inline int add(int x, int y)
{
	return x + y;	
}

void TestRef()
{
	int a = 10;
	int& ra = a;//<====定义引用类型
	printf("%p\n", &a);
	printf("%p\n", &ra);
}

//int main()
//{
//	int a = 1, b = 2;
//	int ret=add(a, b);
//	cout << ret << endl;
//	TestRef();
//
//	fx();
//}


class Date 
{
public:
	void dateInit(int year,int month,char day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	char _day;
};

class A {
public:
	void Print()
	{
		cout << "Print()" << endl;
	}

	int _a;
};

//int main()
//{
//	cout << sizeof(Date) << endl;
//
//
//	A* p = nullptr;
//
//	(*p).Print();
//	p->Print();
//}





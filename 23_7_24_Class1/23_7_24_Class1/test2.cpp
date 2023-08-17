#define _CRT_SECURE_NO_WARNINGS 1
#include"Func.h"
// //17:08继续
// //C++兼容c语言，结构用法可以继续使用
// //同时struct也升级成了类
//struct Stack
//{
//	// 成员函数
//	void Init()
//	{
//		a = nullptr;
//		top = capacity = 0;
//	}
//
//	void Push(int x)
//	{
//		// ...
//	}
//
//	// 成员变量
//	int* a;
//	int top;
//	int capacity;
//};
//
//void StackInit(struct Stack* ps)
//{
//	// ...
//}
//
//void StackPush(struct Stack* ps, int x)
//{
//
//}
//
//int main()
//{
//	struct Stack st1;
//	StackInit(&st1);
//	StackPush(&st1, 1);
//	StackPush(&st1, 2);
//
//	//error
//	//Stack st2;
//	//st2.Init();
//	//st2.Push(1);
//	//st2.Push(2);
//	//st2.Push(3);
//
//	return 0;
//}

class Person {
public:
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;

};

class Stack
{
public:
	
	void Init()
	{
		a = nullptr;
		top = capacity = 0;
	}

	void Push(int x)
	{
		if(top == capacity)
		{
			int newcapacity = capacity == 0 ? sizeof(DataType) : capacity * 2;
			a = (DataType*)realloc(a,sizeof(DataType) * 2);
			capacity = newcapacity;
		}

		a[top++] = x;
	}
	int Top()
	{
		return a[top - 1];
	}

private:
	typedef int DataType;
	DataType* a;
	int top;
	int capacity;
};
//
//
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//
//	//err
//	//cout << st.a[st.top-1] << endl;
//
//	cout << st.Top() << endl;
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;  // year_  mYear
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//
//	//cout << st.a[st.top-1] << endl;
//
//	cout << st.Top() << endl;
//
//	Date d;
//	d.Init(2022, 7, 19);
//
//	return 0;
//}
//

class A0 {

};

class A1 {
	char _name;   // 声明
	int _age;
	char _sex;
};

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day  << "---"<< endl;
	}
	//private:
	int _year;   // 声明
	int _month;
	int _day;
};




int main()
{
	//error
	//Date::_year;
	//Date._year;

	Date d1;
	d1.Init(2023, 8, 13);
	d1.Print();
	Date d2; 

	d2.Init(2024, 10, 24);

	cout << sizeof(Date) << endl;
	cout << sizeof(d1) << endl;
	
	cout << "sizeof(A0)=" << sizeof(A0) << endl;
	cout << "sizeof(A1)=" << sizeof(A1) << endl;
	return 0;
}
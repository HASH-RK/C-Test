#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<assert.h>	
#include<string.h>	

using namespace std;
class Person
{
public:

	string m_Name;

protected:
	string m_Car;
private:
	int my_Password;

public:
	void func()
	{
		m_Name = "zhangsan";
		m_Car = "拖拉机";
		my_Password = 123456;
		system("pause");

	}
};

/*练习案例1：设计立方体类**

设计立方体类(Cube)

求出立方体的面积和体积

分别用全局函数和成员函数判断两个立方体是否相等。*/

class Cube {
public:
	int m_H;
	int m_L;
	int m_W;

public :
	int Volum(Cube c)
	{
		return (m_H * m_L * m_W);
	}

	int Area(int m_H, int m_L, int m_W)
	{
		return 2*(m_H * m_L +  m_L * m_W + m_H * m_W);
	}

	bool SameCube(Cube c1,Cube c2)
	{
		
	}

};

//int main()
//{
//	Person p;
//	p.m_Name = "李四";
//	//p.m_Car = "奔驰";
//
//	Cube C1;
//	
//
//	system("pause");
//	return 0;
//}




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
		m_Car = "������";
		my_Password = 123456;
		system("pause");

	}
};

/*��ϰ����1�������������**

�����������(Cube)

������������������

�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�*/

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
//	p.m_Name = "����";
//	//p.m_Car = "����";
//
//	Cube C1;
//	
//
//	system("pause");
//	return 0;
//}




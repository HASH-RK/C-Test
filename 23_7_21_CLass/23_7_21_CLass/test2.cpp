#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<assert.h>	
using namespace std;
namespace bit
{
// �����ռ��п��Զ������/����/����

	int rand = 10;
int a = 0;
int b = 1;
int Add(int left, int right)
{
	return left + right;
}
struct Node
{
	struct Node* next;
	int val;
};


}

//������Ȩ
using bit::Add;


int main()
{
	// ���뱨��error C2065: ��a��: δ�����ı�ʶ��
	//printf("%d\n", a);
	printf("%p\n", rand);
	printf("%d\n", bit::rand);
	cout << rand << endl;
	cout << Add(1, 2) << endl;
	cout << Add(1, 2) << endl;
	cout << Add(1, 2) << endl;
	cout << Add(1, 2)<< endl;

	struct bit::Node node;

	return 0;
}
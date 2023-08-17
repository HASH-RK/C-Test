#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<assert.h>	
using namespace std;
namespace bit
{
// 命名空间中可以定义变量/函数/类型

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

//部分授权
using bit::Add;


int main()
{
	// 编译报错：error C2065: “a”: 未声明的标识符
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
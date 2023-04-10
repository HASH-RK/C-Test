#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


//第一种遍历方式
//int main()
//{
//	vector<int> vi;
//
//	vi.push_back(10);//push_back()尾插
//	vi.push_back(20);
//	vi.push_back(30);
//	vi.push_back(40);
//
//	vector<int>::iterator iBegin = vi.begin();
//	vector<int>::iterator iEnd = vi.end();
//
//
//	while (iBegin != iEnd)
//	{
//		printf("%d ", *(iBegin));
//		iBegin++;
//	}
//	return 0;
//}

//int main() {
//
//	vector<int> vi;
//	for (int i = 1; i <= 5; i++) {
//		vi.push_back(i);//push_back(i)在vi的末尾添加元素i，即依次添加1 2 3 4 5
//	}
//	//vi.begin()为取vi得首元素地址，而it指向这个地址
//	vector<int>::iterator it = vi.begin();
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *(it + i));//输出vi[i]
//	}
//	return 0;
//}

//int main()
//{
//		vector<int> vi;
//		for (int i = 10; i < 50; i += 10)
//		{
//			vi.push_back(i);
//		}
//
//		for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++)//起始迭代器-取出容器首元素的地址，而it指向这个地址
//		{
//			printf("%d ", *it);
//		}
//	return 0;
//}





//void myPrint(int val)
//{
//	printf("%d ", val);
//}
//
//int main()
//{
//	vector<int> v;
//	for (int i = 10; i < 50; i += 10)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), myPrint);
//	return 0;
//}



//vector常用函数实例解析
//1.pushback

//int main()
//{
//	vector <int> vi;
//
//	for (int i = 1; i <= 3; i++)
//	{
//		vi.push_back(i);
//	}
//
//	vi.pop_back();
//
//	for (int i = 0; i < vi.size(); i++)
//	{
//		printf("%d ", vi[i]);
//	}
//	return 0;
//}


//int main()
//
//{
//	vector<int> vi;
//	for (int i = 1; i <= 5; i++)
//	{
//		vi.push_back(i);
//	}
//
//	//vi.clear();
//	//vi.insert(vi.begin() + 2, -2);
//	//printf("%d", vi.size());
//
//
//	//erase
//	vi.erase(vi.begin() + 1 , vi.begin() + 4);
//	for (int i = 0; i < vi.size(); i++)
//	{
//		printf("%d ", vi[i]);
//	}
//	return 0;
//}



int main()
{
	vector<int> vi;
	for (int i = 5; i <= 9; i++)
	{
		vi.push_back(i);//插入5、6、7、8、9
	}

	vi.erase(vi.begin() + 1, vi.begin() + 4);//删除vi[1],vi[2],v[3]
	for (int i = 0; i < vi.size(); i++)
	{
		printf("%d ", vi[i]);//输出5 9
	}
	return 0;
}










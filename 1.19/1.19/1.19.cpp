// 1.19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int i = 0;
	if (cin >> a)
	{
		if(cin>>i)
			while (a<=i)
			{
				cout << a << " ";
				a++;
			}
}
	return 0;
}
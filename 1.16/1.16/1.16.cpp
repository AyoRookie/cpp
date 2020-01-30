// P5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	//int s = 0, b = 0;
	//cout << "请输入两个数字" << endl;
	//cin >> s >> b;
	//if (s > b)//进行s和b大小的判断
	//{
	//	cout << "需要调换顺序" << endl;
	//	int tmp = s;
	//	s = b;
	//	b = tmp;
	//}
	//else
	//{
	//	cout << "不需要调换顺序" << endl;
	//}
	//for (int val = s; val <= b; ++val)
	//{
	//	cout << val << endl;
	//}
	int sum = 0;
	int val = 0;
	while (cin >> val)
		sum += val;
	cout << "Sum is" << sum << endl;//在调试窗口需要从键盘输入文件结束符，同时按住ctrl 和z，再按Enter
	return 0;
	cout << "good" << endl;
}
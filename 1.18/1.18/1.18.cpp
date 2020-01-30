// 1.18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	//currentValue是我们正在统计的数；我们将读入的新值存入val
	int currentValue = 0, val = 0;
	//读取第一个数，并确保确实有数据可以处理，也就是判断是否输入数据
	if (cin >> currentValue)
	{
		int cnt = 1;    //保存我们正在处理的当前值的个数
		while (cin >> val)       //读取剩余的数
		{
			if (val == currentValue)      //如果值相同
				cnt++;    //将cnt+1
			else     //如果val！=currentValue
			{
				cout << currentValue << "occurs" << cnt << "times" << endl;//将前一个值的个数打印出来
				currentValue = val;    //保存新值
				cnt = 1;    //重置计数器
			}   //while循环在这里结束
		}
		//下面是打印文件中最后一个值的个数
		cout << currentValue << "occurs" << cnt << "times" << endl;
	}                   //最外层的if语句在这里结束
	return 0;
}
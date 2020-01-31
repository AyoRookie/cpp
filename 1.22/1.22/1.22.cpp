#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item quan;//quantity,也就是销售记录的条数
	//判断是否输入了值
	if (cin >> quan)
	{
		//记录销售记录的明细，也就是和
		Sales_item details;
		//不知道可不可以通过什么方法使用if来代替while
		while (cin >> details)
		{
			if (quan.isbn == details.isbn)//判断输入的数据ISBN是否相同
			{
				quan += details;//如果相同，那么就将销售记录添加到条数上
			}
			else
			{
				cout << quan << endl;//如果ISBN不同，就将前一条quan输出
				quan = details;//再将本条销售记录赋给quan
			}
		}
		cout << quan << endl;
		system("Pause");
	}
	else
	{
		cerr << "没有输入" << endl;//要想看到这句话，那么就按F6吧，或者是ctrl+z+enter。
		system("Pause");
		return -1;
	}
	return 0;
}
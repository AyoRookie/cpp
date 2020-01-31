#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item currentval, val;
	if (cin >> currentval)
	{
		int cnt = 1;
		while (cin >> val)
		{
			if (currentval.isbn == val.isbn)
			{
				++cnt;
			}
			else
			{
				cout << currentval <<"   "<< "occurs     " << cnt << "   times" << endl;
				system("Pause");
				currentval = val;
				int cnt = 1;
			}
		}
	}
	else
	{
		cerr << "ÇëÊäÈëÊý¾Ý" << endl;
		return -1;
		system("Pause");
	}
	return 0;
}
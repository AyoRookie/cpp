#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()

{
	Sales_item book;
	if(cin >> book)    //or:while(cin>>book)
	{
		cout << book << endl;
		system("Pause");
	}
		return 0;
}
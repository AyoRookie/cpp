#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item quan;//quantity,Ҳ�������ۼ�¼������
	//�ж��Ƿ�������ֵ
	if (cin >> quan)
	{
		//��¼���ۼ�¼����ϸ��Ҳ���Ǻ�
		Sales_item details;
		//��֪���ɲ�����ͨ��ʲô����ʹ��if������while
		while (cin >> details)
		{
			if (quan.isbn == details.isbn)//�ж����������ISBN�Ƿ���ͬ
			{
				quan += details;//�����ͬ����ô�ͽ����ۼ�¼��ӵ�������
			}
			else
			{
				cout << quan << endl;//���ISBN��ͬ���ͽ�ǰһ��quan���
				quan = details;//�ٽ��������ۼ�¼����quan
			}
		}
		cout << quan << endl;
		system("Pause");
	}
	else
	{
		cerr << "û������" << endl;//Ҫ�뿴����仰����ô�Ͱ�F6�ɣ�������ctrl+z+enter��
		system("Pause");
		return -1;
	}
	return 0;
}
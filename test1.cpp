// test1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CBase
{
protected:
	int a;
public:
	CBase()
	{
		int  a;
	}
	CBase(int c)
	{
		a = c;
	}
};




class CTl :CBase
{
public:
	CTl()
	{
		a = 0;
	}
	CTl (int c)
	{
		a = c*2;
	}
	void display()
	{
		cout << "a =" << a << endl;
	}
};
int main()
{
	CTl obj(100);
	obj.display();
	return 0;
}




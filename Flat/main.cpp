#include <iostream>
#include "Flat.h"
using namespace std;

int main()
{
	Flat a(80, "Savoda St.", 80000);
	Flat b(100, "Sadova St.", 160000);
	a.Print();
	b.Print();
	if (a == b)
	{
		cout << "The same size" << endl;
	}
	else
	{
		cout << "Not the same size" << endl;
	}
	if (a > b)
	{
		cout << "The price of the first is higher" << endl;
	}
	else {
		cout << "The price of the second is higher" << endl;
	}
	b = a;
	a.Print();
	b.Print();
}
#include <iostream>
#include "Array.h"
#include "Array.cpp"
using namespace std;

int main()
{
	cout << "Hello World" << endl;
	Array<int> h;
	h.setLength(5);
	cout << h.getLength() << endl;
	Array<int> b(h);
	cout << b.getLength() << endl;
	return 0;
}
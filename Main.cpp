#include <iostream>
#include "Array.h"
#include "Array.cpp"
#include "Exception.h"

using namespace std;

int main()
{
	Array<int> h;
	cout << "The contents of Array h are: ";
	for (int i = 0; i < h.getLength(); i++)
	{
		cout << h[i]<<",";
	}
	cout << endl;
	h.setStartIndex(-1);
	cout << "Array h start index is: " << h.getStartIndex() <<endl;

	cout << "The contents of Array h are: ";
	for (int i = -1; i < h.getLength()-1; i++)
	{
		cout << h[i] << ",";
	}
	cout << endl;

	cout <<"Array h has a length of: " << h.getLength() << endl;
	cout << "Creating Array b with Array h!" << endl;
	Array<int> b(h);
	cout <<"Array b has a length of: "<< b.getLength() << endl;
	cout<< "The second element of Array b is: " << b[2]<<endl;
	cout << "Placing 5 in Array b[0]!" << endl;
	b[0] = 5;
	cout << "Array b[0] is: " << b[0]<<endl;
	try {
		cout << "Attempting to access an element that is out of bounds!"<<endl << b[-3] << endl;
	}
	catch (const Exception& e) {
		cout << e << endl;
	}

	cout << "Creating Array n with an start index of 2 and a length of 4" << endl;
	Array<int> n(4, 2);
	cout << "Array n has a starting index of: " << n.getStartIndex() << " and a length of: " << n.getLength() << endl;
	cout << "Filling out Array n with Nick!" << endl;
	n[2] = 'n';
	n[3] = 'i';
	n[4] = 'c';
	n[5] = 'k';

	cout << "Will now output Array n: ";

	for (int i = n.getStartIndex(); i < n.getLength() +n.getStartIndex(); i++)
	{
		char x = n[i];
		cout << x;
	}
	cout << endl;

	return 0;
}
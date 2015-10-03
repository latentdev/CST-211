#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>
using namespace std;
class Exception
{
	private:
		char * m_msg;
	public:
		Exception();
		Exception(char*in_msg);
		Exception(const Exception& in_copy);
		~Exception();

		Exception& operator=(const Exception& in_rhs);

		char* getMessage();
		void setMessage(char* in_msg);
		friend ostream& operator<<(ostream & in_stream, const Exception&);
};
#endif


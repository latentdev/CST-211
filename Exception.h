#ifndef EXCEPTION_H
#define EXCEPTION_H
class Exception
{
	private:
		char * m_mesg;
	public:
		Exception();
		Exception(char*in_msg);
		Exception(const Exception& in_copy);
		~Exception();

		Exception& operator=(const Exception& in_rhs);

		char* getMessage();
		void setMessage(char* in_msg);
		ostream& operator<<(ostream & in_stream,)
};
#endif

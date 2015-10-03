#include "Exception.h"

Exception::Exception()
{
}

Exception::Exception(char * in_msg)
{
	size_t length = strlen(in_msg);
	m_msg = new char[length+1];

	for(int i = 0; i < length; i++) {
		m_msg[i] = in_msg[i];
	}
	m_msg[length] = '\0';
}

Exception::Exception(const Exception & in_copy)
{
	m_msg = new char[strlen(in_copy.m_msg)];

	for (int i = 0; i < strlen(in_copy.m_msg); i++) {
		m_msg[i] = in_copy.m_msg[i];
	}
}

Exception::~Exception()
{
	delete m_msg;
}

Exception & Exception::operator=(const Exception & in_rhs)
{
	m_msg = new char[strlen(in_rhs.m_msg)];
	for (int i = 0; i < strlen(in_rhs.m_msg); i++)
	{
		m_msg[i] = in_rhs.m_msg[i];
	}
	return *this;
}

char * Exception::getMessage()
{
	return m_msg;
}

void Exception::setMessage(char * in_msg)
{
	delete m_msg;
	m_msg = new char[strlen(in_msg)];

	for (int i = 0; i < strlen(in_msg); i++) {
		m_msg[i] = in_msg[i];
	}
}

ostream & operator<<(ostream & in_stream, const Exception& in_except)
{
	return in_stream << in_except.m_msg;
}

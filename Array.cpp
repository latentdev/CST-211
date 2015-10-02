#include "Array.h"

template<class a_type>
inline Array<a_type>::Array()
{

}

template<class a_type>
inline Array<a_type>::Array(int length, int start_index)
{
	m_length = new int;
	m_length = length;
	m_start_index = new int;
	m_start_index = start_index;
}

template<class a_type>
inline Array<a_type>::Array(const Array & obj)
{
	m_array = new a_type;
	*m_array = *obj.m_array;
	m_length = new int;
	m_length = obj.m_length;
	m_start_index = new int;
	m_start_index = obj.m_start_index;

}

template<class a_type>
inline Array<a_type>::~Array()
{
	delete m_array;
	delete m_length;
	delete m_start_index;
}

template<class a_type>
inline Array<a_type>& Array<a_type> ::operator=(Array & rhs)
{
	return
}

template<class a_type>
inline Array<a_type>& Array<a_type> ::operator[](int index)
{
	return
}

template<class a_type>
int Array<a_type>::getStartIndex()
{
	return m_start_index;
}

template<class a_type>
void Array<a_type>::setStartIndex(int start_index)
{
}

template<class a_type>
int Array<a_type>::getLength()
{
	return m_length;
}

template<class a_type>
void Array<a_type>::setLength(int length)
{
}







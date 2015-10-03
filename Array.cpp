#include "Array.h"

template<class a_type>
inline Array<a_type>::Array()
{

}

template<class a_type>
inline Array<a_type>::Array(int length, int start_index)
{
	m_length = length;
	m_start_index = start_index;
	m_array = new a_type[length];
}

template<class a_type>
inline Array<a_type>::Array(const Array & obj)
{
	m_start_index = obj.m_start_index;
	m_length = obj.m_length;
	m_array = new a_type[m_length];
	*m_array = *obj.m_array;

}

template<class a_type>
inline Array<a_type>::~Array()
{

}

template<class a_type>
Array<a_type>& Array<a_type> ::operator=(Array & rhs)
{
	
}

template<class a_type>
Array<a_type>& Array<a_type> ::operator[](int index)
{
	//return m_array[index];
}

template<class a_type>
int Array<a_type>::getStartIndex()
{
	return m_start_index;
}

template<class a_type>
void Array<a_type>::setStartIndex(int start_index)
{
	m_start_index = start_index;

}

template<class a_type>
int Array<a_type>::getLength()
{
	return m_length;
}

template<class a_type>
void Array<a_type>::setLength(int length)
{
	m_length = length;
}







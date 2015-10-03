#include "Array.h"

template<class a_type>
inline Array<a_type>::Array()
{
	m_length = 1;
	m_start_index = 0;
	m_array = new a_type[m_length];
	for (int i = m_start_index; i < m_length; i++)
	{
		m_array[i] = i;
	}
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
	m_start_index = obj.getStartIndex();
	m_length = obj.getLength();
	m_array = new a_type[m_length];
	for (int i = m_start_index; i < m_length; i++)
	{
		m_array[i] = obj.m_array[i];
	}

}

template<class a_type>
inline Array<a_type>::~Array()
{
	//delete m_array;

}

template<class a_type>
Array<a_type>& Array<a_type> ::operator=(Array & rhs)
{
	m_start_index = rhs.getStartIndex();
	m_length = rhs.getLength();
	m_array = new a_type[m_length];
	for (int i = m_start_index; i < m_length; i++)
	{
		m_array[i] = obj[i];
	}
	
}

template<class a_type>
a_type& Array<a_type> ::operator[](int index)
{
	if (index >= m_start_index && index < m_length + m_start_index) {
		return m_array[index - m_start_index];
	}
	else {
		return m_array[0];
	}
}

template<class a_type>
int Array<a_type>::getStartIndex()const
{
	return m_start_index;
}

template<class a_type>
void Array<a_type>::setStartIndex(int start_index)
{
	m_start_index = start_index;

}

template<class a_type>
int Array<a_type>::getLength()const
{
	return m_length;
}

template<class a_type>
void Array<a_type>::setLength(int length)
{
	m_length = length;
}







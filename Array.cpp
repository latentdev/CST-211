#include "Array.h"
#include "Exception.h"
#include <iostream>

template<class a_type>
inline Array<a_type>::Array()
{
	cout << "Invoking default constructor to create an Array object"<<endl;
	m_length = 4;
	m_start_index = 0;
	m_array = new a_type[m_length];
	for (int i = 0; i < m_length; i++)
	{
		m_array[i] = i;
	}
}

template<class a_type>
inline Array<a_type>::Array(int length, int start_index)
{
	cout << "Invoking parameterized constructor to create an Array object" << endl;
	m_length = length;
	m_start_index = start_index;
	m_array = new a_type[length];
}

template<class a_type>
inline Array<a_type>::Array(const Array & obj)
{
	cout << "Copy constructor activated!" << endl;
	m_start_index = obj.getStartIndex();
	m_length = obj.getLength();
	m_array = new a_type[m_length];
	for (int i = 0; i < m_length; i++)
	{
		m_array[i] = obj.m_array[i];
	}

}

template<class a_type>
inline Array<a_type>::~Array()
{
	cout << "destroying things..." << endl;
	//delete [] m_array;

}

template<class a_type>
Array<a_type>& Array<a_type> ::operator=(Array & rhs)
{
	m_start_index = rhs.getStartIndex();
	m_length = rhs.getLength();
	delete [] m_array;
	m_array = new a_type[m_length];
	for (int i = 0; i < m_length; i++)
	{
		m_array[i] = rhs.m_array[i];
	}
	
}

template<class a_type>
a_type& Array<a_type> ::operator[](int index)
{
	if (index < m_start_index) {
		throw Exception("Index smaller than lower bounds");
	}
	else if (index >= m_length + m_start_index) {
		throw Exception("Index larger than upper bounds");
	}
	else
	{
		return m_array[index - m_start_index];
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
	int shorter = 0
	a_type* m_array_temp = new a_type[length];
	if (length > m_length)
		shorter = m_length;
	else
		shorter = length;

	for (int i = 0; i < shorter; i++) {
		m_array_temp[i] = m_array[i];
	}
	delete[] m_array;
	m_array = m_array_temp;
}
/*template<class b_type>
ostream& operator<<(ostream & in_stream, const Array<b_type>& in_value)
{
	for (int i = 0; i < m_length; i++)
	{
		return in_stream << in_value.m_array[i];
	}
}*/







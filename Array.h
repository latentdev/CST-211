#ifndef Array_H
#define Array_H

template <class a_type> class Array
{
	private:
		a_type m_array;
		int m_length;
		int m_start_index;
	public:
		Array();
		Array(int length, int start_index);
		Array(const Array& obj);
		~Array();
		Array& operator=(Array& rhs);
		Array& operator[](int index);
		int getStartIndex();
		void setStartIndex(int start_index);
		int getLength();
		void setLength(int length);
	
};

#endif



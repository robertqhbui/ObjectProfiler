#pragma once
#include <boost/type_index.hpp>
#include "TimePrinter.h"

using namespace std;

template <class T> 

	class ObjectInfo
	{
	private:
		static int  m_counter;
		int         m_objectNumber;
		T			m_Data;

	public:
		ObjectInfo(T data): m_Data(data)
		{
			m_objectNumber = ++m_counter;
			std::cout << "Object: " << boost::typeindex::type_id<T>().pretty_name() << "# " << m_objectNumber << " created @ " << TimePrinter() << std::endl;

		}
		~ObjectInfo()
		{
			std::cout << "Object: " << boost::typeindex::type_id<T>().pretty_name() << "# " << m_objectNumber << " destroyed @ " << TimePrinter() << std::endl;
		}
		void show()
		{
			std::cout << "Object: with value " << m_Data << std::endl;
		}
};

template <class T>
	int ObjectInfo<T>::m_counter = 0;
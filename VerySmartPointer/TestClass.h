#pragma once
#include <string>
#include <iostream>

class TestClass
{
private:
	std::string mName;
public:
	TestClass() : mName("<Name not provided>") {};
	TestClass(std::string name) : mName(name) {};
	~TestClass()
	{
		std::cout << "TestClass class with name [" + mName + "] destroyed" << std::endl;
	};
	friend std::ostream& operator<<(std::ostream& outStream, const TestClass& object)
	{
			outStream << object.mName;
			return outStream;
	}
	friend std::ostream& operator<<(std::ostream& outStream, const TestClass *object)
	{
		outStream << object->mName;
		return outStream;
	}
};
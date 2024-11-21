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
	~TestClass() {};
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
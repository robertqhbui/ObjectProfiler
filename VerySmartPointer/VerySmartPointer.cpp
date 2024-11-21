// VerySmartPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "ObjectInfo.h"
#include <iostream>
#include "TestClass.h"

int main()
{
	ObjectInfo<int> objectInfoInt(123);
	ObjectInfo<std::string> objectInfoStr1("MY STRING-1");
	ObjectInfo<std::string> objectInfoStr2("MY STRING-2");

	ObjectInfo<TestClass> objectInfoTestClassObject(TestClass("Test Class Object"));

	ObjectInfo<TestClass *> objectInfoTestClassPointer(new TestClass("Test Class Pointer"));

	ObjectInfo<TestClass *> objectInfoTestClassPointerNoName(new TestClass());

	objectInfoInt.show();
	objectInfoStr1.show();
	objectInfoStr2.show();
	objectInfoTestClassObject.show();
	objectInfoTestClassPointer.show();
	objectInfoTestClassPointerNoName.show();
}
// Created by Bartosz Rachwal. 
// Copyright (c) 2015 Bartosz Rachwal. The National Institute of Advanced Industrial Science and Technology, Japan. All rights reserved.

#include <CppUnitTest.h>

#include "../../../operational/src/observer/clock_timer.h"
#include "../../../operational/src/iterator/employee.h"

namespace operationaltests
{
using namespace operational;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(IteratorTest)
{
	public:
	IteratorTest() { }

	~IteratorTest() { }

	TEST_METHOD(ShouldCreateEmptyList)
	{
		//GIVEN
		auto employees = new iterator::List<iterator::Employee*>();

		//WHEN
		auto employees_count = employees->Count();

		//THEN
		Assert::AreEqual(0l, employees_count);

		delete employees;
	}

	TEST_METHOD(ShouldAppendTwoElementsToList)
	{
		//GIVEN
		auto employees = new iterator::List<iterator::Employee*>();

		//WHEN
		employees->Append(new iterator::Employee("Test 1"));
		employees->Append(new iterator::Employee("Test 2"));

		//THEN
		auto employees_count = employees->Count();
		Assert::AreEqual(2l, employees_count);

		delete employees;
	}
};
}


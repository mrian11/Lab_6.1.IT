#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:

		TEST_METHOD(TestSum)
		{
			int a2[] = { 1, 2, 3, 4, 5, 6 };
			int n2 = 6;
			int result2 = Sum(a2, n2);
			int expected2 = 0; 
			Assert::AreEqual(result2, expected2);
		}
	};
}